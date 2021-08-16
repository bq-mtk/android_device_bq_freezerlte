#!/bin/sh
cd ../../../..
cd bionic
git checkout -- . && git clean -df
cd ..
cd frameworks/av
git checkout -- . && git clean -df
cd ../..
cd frameworks/base
git checkout -- . && git clean -df
cd ../..
cd frameworks/native
git checkout -- . && git clean -df
cd ../..
cd frameworks/opt/telephony
git checkout -- . && git clean -df
cd ../../..
cd packages/apps/Snap
git checkout -- . && git clean -df
cd ../../..
cd packages/apps/FMRadio
git checkout -- . && git clean -df
cd ../../..
cd system/core
git checkout -- . && git clean -df
cd ../..
cd system/netd
git checkout -- . && git clean -df
cd ../..
cd vendor/cmsdk
git checkout -- . && git clean -df
cd ../..
