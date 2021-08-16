#!/bin/bash
cd ../../../..
cd bionic
git apply -v ../device/bq/freezerlte/patches/bionic.patch
cd ..
cd frameworks/av
git apply -v ../../device/bq/freezerlte/patches/frameworks_av.patch
cd ../..
cd frameworks/base
git apply -v ../../device/bq/freezerlte/patches/frameworks_base.patch
cd ../..
cd frameworks/native
git apply -v ../../device/bq/freezerlte/patches/frameworks_native.patch
cd ../..
cd frameworks/opt/telephony
git apply -v ../../../device/bq/freezerlte/patches/frameworks_opt_telephony.patch
cd ../../..
cd packages/apps/Settings
git apply -v ../../../device/bq/freezerlte/patches/settings.patch
cd ../../..
cd packages/apps/Snap
git apply -v ../../../device/bq/freezerlte/patches/snap.patch
cd ../../..
cd packages/apps/FMRadio
git apply -v ../../../device/bq/freezerlte/patches/fmradio.patch
cd ../../..
cd system/core
git apply -v ../../device/bq/freezerlte/patches/system_core.patch
cd ../..
cd system/netd
git apply -v ../../device/bq/freezerlte/patches/system_netd.patch
cd ../..
cd vendor/cmsdk
git apply -v ../../device/bq/freezerlte/patches/vendor_cmsdk.patch
cd ../..
