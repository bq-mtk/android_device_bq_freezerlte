#
# Copyright 2020 The LineageOS Project.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

DEVICE_PATH := device/bq/freezerlte

$(call inherit-product, $(SRC_TARGET_DIR)/product/languages_full.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)

# Inherit from the common Open Source product configuration
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit GPS config for our device
$(call inherit-product, device/common/gps/gps_us_supl.mk)

# Overlays
DEVICE_PACKAGE_OVERLAYS += \
    $(DEVICE_PATH)/overlay

# Screen Density
PRODUCT_AAPT_CONFIG := normal
PRODUCT_AAPT_PREF_CONFIG := xhdpi

# Bootanimation
TARGET_BOOTANIMATION_HALF_RES := true
TARGET_SCREEN_HEIGHT := 1200
TARGET_SCREEN_WIDTH := 1920

# Audio
PRODUCT_PACKAGES += \
    audio.r_submix.default \
    audio.a2dp.default \
    audio.usb.default \
    audio_policy.stub \
    libaudiopolicymanagerdefault \
    libaudio-resampler \
    libaudiosetting \
    libtinyalsa \
    libtinycompress \
    libtinymix \
    libtinyxml

PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/audio/audio_effects.conf:system/etc/audio_effects.conf \
    $(DEVICE_PATH)/audio/AudioParamOptions.xml:system/etc/audio_param/AudioParamOptions.xml \
    $(DEVICE_PATH)/audio/audio_device.xml:system/etc/audio_device.xml \
    $(DEVICE_PATH)/audio/audio_em.xml:system/etc/audio_em.xml \
    $(DEVICE_PATH)/audio/audio_policy.conf:system/etc/audio_policy.conf \
    $(DEVICE_PATH)/audio/vendor_audio_effects.conf:system/vendor/etc/audio_effects.conf

# Camera
PRODUCT_PACKAGES += \
    Snap

# FM Radio
PRODUCT_PACKAGES += \
    FMRadio

# GPS
PRODUCT_PACKAGES += \
    gps.mt6753 \
    libcurl \
    agps_profiles_conf2.xml \
    slp_conf

# Graphics
PRODUCT_PACKAGES += \
    libGLES_android \
    libion

# Keylayout
PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/keylayout/mtk-kpd.kl:system/usr/keylayout/mtk-kpd.kl \
    $(DEVICE_PATH)/keylayout/mtk-tpd.kl:system/usr/idc/mtk-tpd.kl

# Keyhandler
PRODUCT_PACKAGES += \
    com.cyanogenmod.keyhandler

PRODUCT_SYSTEM_SERVER_JARS += \
    com.cyanogenmod.keyhandler

# Never dexopt the keyhandler
$(call add-product-dex-preopt-module-config,com.cyanogenmod.keyhandler,disable)

# Lights
PRODUCT_PACKAGES += \
    lights.mt6753

# Media
PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/media/media_codecs.xml:system/etc/media_codecs.xml \
    $(DEVICE_PATH)/media/media_codecs_google_audio.xml:system/etc/media_codecs_google_audio.xml \
    $(DEVICE_PATH)/media/media_codecs_google_video_le.xml:system/etc/media_codecs_google_video_le.xml \
    $(DEVICE_PATH)/media/media_codecs_mediatek_audio.xml:system/etc/media_codecs_mediatek_audio.xml \
    $(DEVICE_PATH)/media/media_codecs_mediatek_video.xml:system/etc/media_codecs_mediatek_video.xml \
    $(DEVICE_PATH)/media/media_codecs_performance.xml:system/etc/media_codecs_performance.xml \
    $(DEVICE_PATH)/configs/mtk_omx_core.cfg:system/etc/mtk_omx_core.cfg

# Memtrack
PRODUCT_PACKAGES += \
    memtrack.mt6753

# MRDump
PRODUCT_PACKAGES += \
    libmrdump \
    mrdump_tool

# Misc
PRODUCT_PACKAGES += \
    librs_jni \
    com.android.future.usb.accessory

# Permissions
PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/permissions/android.hardware.camera.xml:system/etc/permissions/android.hardware.camera.xml \
    $(DEVICE_PATH)/permissions/android.hardware.microphone.xml:system/etc/permissions/android.hardware.microphone.xml \
    frameworks/native/data/etc/android.hardware.audio.low_latency.xml:system/etc/permissions/android.hardware.audio.low_latency.xml \
    frameworks/native/data/etc/android.hardware.bluetooth.xml:system/etc/permissions/android.hardware.bluetooth.xml \
    frameworks/native/data/etc/android.hardware.bluetooth_le.xml:system/etc/permissions/android.hardware.bluetooth_le.xml \
    frameworks/native/data/etc/android.hardware.camera.autofocus.xml:system/etc/permissions/android.hardware.camera.autofocus.xml \
    frameworks/native/data/etc/android.hardware.camera.flash-autofocus.xml:system/etc/permissions/android.hardware.camera.flash-autofocus.xml \
    frameworks/native/data/etc/android.hardware.camera.front.xml:system/etc/permissions/android.hardware.camera.front.xml \
    frameworks/native/data/etc/android.hardware.faketouch.xml:system/etc/permissions/android.hardware.faketouch.xml \
    frameworks/native/data/etc/android.hardware.location.gps.xml:system/etc/permissions/android.hardware.location.gps.xml \
    frameworks/native/data/etc/android.hardware.opengles.aep.xml:system/etc/permissions/android.hardware.opengles.aep.xml \
    frameworks/native/data/etc/android.hardware.sensor.accelerometer.xml:system/etc/permissions/android.hardware.sensor.accelerometer.xml \
    frameworks/native/data/etc/android.hardware.sensor.compass.xml:system/etc/permissions/android.hardware.sensor.compass.xml \
    frameworks/native/data/etc/android.hardware.sensor.gyroscope.xml:system/etc/permissions/android.hardware.sensor.gyroscope.xml \
    frameworks/native/data/etc/android.hardware.sensor.light.xml:system/etc/permissions/android.hardware.sensor.light.xml \
    frameworks/native/data/etc/android.hardware.sensor.proximity.xml:system/etc/permissions/android.hardware.sensor.proximity.xml \
    frameworks/native/data/etc/android.hardware.sensor.stepcounter.xml:system/etc/permissions/android.hardware.sensor.stepcounter.xml \
    frameworks/native/data/etc/android.hardware.sensor.stepdetector.xml:system/etc/permissions/android.hardware.sensor.stepdetector.xml \
    frameworks/native/data/etc/android.hardware.telephony.gsm.xml:system/etc/permissions/android.hardware.telephony.gsm.xml \
    frameworks/native/data/etc/android.hardware.touchscreen.multitouch.distinct.xml:system/etc/permissions/android.hardware.touchscreen.multitouch.distinct.xml \
    frameworks/native/data/etc/android.hardware.touchscreen.multitouch.jazzhand.xml:system/etc/permissions/android.hardware.touchscreen.multitouch.jazzhand.xml \
    frameworks/native/data/etc/android.hardware.touchscreen.multitouch.xml:system/etc/permissions/android.hardware.touchscreen.multitouch.xml \
    frameworks/native/data/etc/android.hardware.touchscreen.xml:system/etc/permissions/android.hardware.touchscreen.xml \
    frameworks/native/data/etc/android.hardware.usb.accessory.xml:system/etc/permissions/android.hardware.usb.accessory.xml \
    frameworks/native/data/etc/android.hardware.usb.host.xml:system/etc/permissions/android.hardware.usb.host.xml \
    frameworks/native/data/etc/android.hardware.vr.high_performance.xml:system/etc/permissions/android.hardware.vr.high_performance.xml \
    frameworks/native/data/etc/android.hardware.vulkan.level-1.xml:system/etc/permissions/android.hardware.vulkan.level.xml \
    frameworks/native/data/etc/android.hardware.vulkan.version-1_0_3.xml:system/etc/permissions/android.hardware.vulkan.version.xml \
    frameworks/native/data/etc/android.hardware.wifi.direct.xml:system/etc/permissions/android.hardware.wifi.direct.xml \
    frameworks/native/data/etc/android.hardware.wifi.xml:system/etc/permissions/android.hardware.wifi.xml \
    frameworks/native/data/etc/android.software.midi.xml:system/etc/permissions/android.software.midi.xml \
    frameworks/native/data/etc/android.software.sip.voip.xml:system/etc/permissions/android.software.sip.voip.xml \
    frameworks/native/data/etc/android.software.webview.xml:system/etc/permissions/android.software.webview.xml \
    frameworks/native/data/etc/handheld_core_hardware.xml:system/etc/permissions/handheld_core_hardware.xml

# Power
PRODUCT_PACKAGES += \
    power.mt6753

# Property Overrides
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += \
    ro.allow.mock.location=1 \
    persist.service.acm.enable=0 \
    ro.mount.fs=EXT4 \
    camera.disable_zsl_mode=1 \
    persist.sys.display.clearMotion=0 \
    media.stagefright.legacyencoder=true \
    media.stagefright.less-secure=true

# Rootdir
PRODUCT_PACKAGES += \
    enableswap.sh \
    fstab.mt6735 \
    init.modem.rc \
    init.mt6735.rc \
    init.mt6735.usb.rc \
    init.project.rc \
    init.recovery.mt6735.rc \
    ueventd.mt6735.rc

# Telephony
PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/telephony/apns-conf.xml:system/etc/apns-conf.xml \
    $(DEVICE_PATH)/telephony/ecc_list.xml:system/etc/ecc_list.xml \
    $(DEVICE_PATH)/telephony/spn-conf.xml:system/etc/spn-conf.xml

# WiFi
PRODUCT_PACKAGES += \
    lib_driver_cmd_mt66xx \
    libwpa_client \
    hostapd \
    hostapd_cli \
    wpa_supplicant

PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/wifi/p2p_supplicant_overlay.conf:system/vendor/etc/wifi/p2p_supplicant_overlay.conf \
    $(DEVICE_PATH)/wifi/wpa_supplicant.conf:system/vendor/etc/wifi/wpa_supplicant.conf \
    $(DEVICE_PATH)/wifi/wpa_supplicant_overlay.conf:system/vendor/etc/wifi/wpa_supplicant_overlay.conf

PRODUCT_COPY_FILES += \
    $(DEVICE_PATH)/hostapd/hostapd_default.conf:system/etc/hostapd/hostapd_default.conf \
    $(DEVICE_PATH)/hostapd/hostapd.accept:system/etc/hostapd/hostapd.accept \
    $(DEVICE_PATH)/hostapd/hostapd.deny:system/etc/hostapd/hostapd.deny

# Dalvik Tweak
PRODUCT_TAGS += dalvik.gc.type-precise

# Dalvik heap configurations
$(call inherit-product-if-exists, frameworks/native/build/phone-xxxhdpi-3072-dalvik-heap.mk)

# Call hwui memory config
$(call inherit-product-if-exists, frameworks/native/build/phone-xxxhdpi-3072-hwui-memory.mk)

# Vendor
$(call inherit-product-if-exists, vendor/bq/freezerlte/freezerlte-vendor.mk)
