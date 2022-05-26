#!/usr/bin/env bash

###############################################################################
#    名称：  Install_third_paty_lib.sh
#    作者：  Morven_X
#    版本：  1.0
#    编制：  2022/05/04 23:29
#    更新：  -
#    功能：  精简合并/apollo/docker/build/installers目录下installer_base.sh和install_gflags_glog.sh，
#                   提升apollo用第三方库安装效率。
#    简介：乌班图新建Apollo的QT项目，需要第三方库支持，该脚本用于安装如下库
#               （1）eigen3
#    Email: morven_xie@163.com

#原始文件信息
# Copyright 2018 The Apollo Authors. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
###############################################################################



# Fail on first error.
set -e

cd "$(dirname "${BASH_SOURCE[0]}")"
#. ./installer_base.sh

mkdir -p /home/morven/apollo/opt
[ -f /home/morven/apollo/opt/build.log ] && echo "/home/morven/apollo/opt/build.log" || touch /home/morven/apollo/opt/build.log
date>>//home/morven/apollo/opt/build.log
export DOWNLOAD_LOG="/home/morven/apollo/opt/build.log"


ARCH=$(uname -m)
THREAD_NUM=$(nproc)

function _local_http_cached() {
    if /usr/bin/curl -sfI "${LOCAL_HTTP_ADDR}/$1"; then
        return
    fi
    false
}

function package_schema {
    local __link=$1
    local schema="http"

    if [[ "${__link##*.}" == "git" ]] ; then
        schema="git"
        echo $schema
        return
    fi

    IFS='.' # dot(.) is set as delimiter

    local __pkgname=$2
    read -ra __arr <<< "$__pkgname" # Array of tokens separated by IFS
    if [[ ${#__arr[@]} -gt 3 ]] && [[ "${__arr[-3]}" == "git" ]] \
        && [[ ${#__arr[-2]} -eq 7 ]] ; then
        schema="git"
    fi
    IFS=' ' # reset to default value after usage

    echo "$schema"
}

function download_if_not_cached {
    local pkg_name="$1"
    local expected_cs="$2"
    local url="$3"

    echo -e "${pkg_name}\t${expected_cs}\t${url}" >> "${DOWNLOAD_LOG}"

    if _local_http_cached "${pkg_name}" ; then
        local local_addr="${LOCAL_HTTP_ADDR}/${pkg_name}"
        info "Local http cache hit ${pkg_name}..."
        wget "${local_addr}" -O "${pkg_name}"
        if _checksum_check_pass "${pkg_name}" "${expected_cs}"; then
            ok "Successfully downloaded ${pkg_name} from ${LOCAL_HTTP_ADDR}," \
               "will use it."
            return
        else
            warning "Found ${pkg_name} in local http cache, but checksum mismatch."
            rm -f "${pkg_name}"
        fi
    fi # end http cache check

    local my_schema
    my_schema=$(package_schema "$url" "$pkg_name")

    if [[ "$my_schema" == "http" ]]; then
      #  info "Start to download $pkg_name from ${url} ..."
        wget "$url" -O "$pkg_name"
        # ok "Successfully downloaded $pkg_name"
    elif [[ "$my_schema" == "git" ]]; then
        info "Clone into git repo $url..."
        git clone  "${url}" --branch master --recurse-submodules --single-branch
        ok "Successfully cloned git repo: $url"
    else
        error "Unknown schema for package \"$pkg_name\", url=\"$url\""
    fi
}

###############################################################################
# Install eigen3.

VERSION="3.3.7"
PKG_NAME="eigen-git-mirror-${VERSION}.tar.gz"
CHECKSUM="a8d87c8df67b0404e97bcef37faf3b140ba467bc060e2b883192165b319cea8d"
DOWNLOAD_LINK="https://github.com/eigenteam/eigen-git-mirror/archive/${VERSION}.tar.gz"
# https://github.com/eigenteam/eigen-git-mirror/archive/3.3.7.tar.gz

download_if_not_cached "${PKG_NAME}" "${CHECKSUM}" "${DOWNLOAD_LINK}"

tar xzf ${PKG_NAME}

pushd eigen-git-mirror-${VERSION}
    mkdir build && cd build
    cmake .. \
        -DBUILD_SHARED_LIBS=ON \
        -DCMAKE_BUILD_TYPE=Release

    # if [ "$ARCH" == "aarch64" ]; then
    #    ./configure --build=armv8-none-linux --enable-shared
    # fi

    make -j${THREAD_NUM}
    make install
popd

ldconfig
 cp -r /usr/local/include/eigen3/Eigen /usr/local/include 
# clean up.
rm -fr ${PKG_NAME} eigen-git-mirror-${VERSION}

