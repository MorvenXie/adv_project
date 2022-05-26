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


###############################################################################
# Install osqp.

git clone --recursive  --branch v0.6.0 https://github.com/osqp/osqp
pushd osqp
  mkdir build
  cd build
    cmake -G "Unix Makefiles" ..  -DCMAKE_INSTALL_PREFIX:PATH=/usr/local ../
    cmake --build .
    cmake --build . --target install
popd

ldconfig
# clean up.
rm -fr osqp

