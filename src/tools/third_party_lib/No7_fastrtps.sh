#!/usr/bin/env bash

###############################################################################
#    名称：  Install_third_paty_lib.sh
#    作者：  Morven_X
#    版本：  1.0
#    编制：  2022/05/04 23:29
#    更新：  -待更新
#    功能：  参考https://gitee.com/ApolloAuto/apollo，/apollo/docker/build/installers目录下
#                   installer_base.sh和install_gflags_glog.sh， 提升apollo用第三方库安装效率。
#    简介：乌班图新建Apollo的QT项目，需要第三方库支持，该脚本用于安装如下库
#               （1）fastrtps
#    备注：安装foonathan_memory和libssl,如果出现以下情况，github链接问题，多试几次
#    fatal: unable to access 'https://github.com/foonathan/memory.git/': 
#    gnutls_handshake() failed: Error in the pull function.

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
# Install fastrtps

sudo git clone --branch v2.4.0 https://github.com/eProsima/Fast-RTPS.git
cd Fast-RTPS/thirdparty/
         git clone https://github.com/foonathan/memory.git
         cd memory
           git submodule update --init --recursive 
           mkdir build && cd build
             cmake -DCMAKE_CXX_FLAGS=-fPIC ..
             make
             make install
             cd ../../../

mkdir -p Fast-RTPS
mkdir Fast-RTPS/build && cd Fast-RTPS/build
   apt install libssl-dev
   cmake -DTHIRDPARTY=ON -DSECURITY=ON ..
   make
   make check 
   sudo make install
   sudo ldconfig
    cd ../../
ldconfig

# clean up.
rm -fr Fast-RTPS