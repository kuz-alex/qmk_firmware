OLED_ENABLE = yes
# ENCODER_ENABLE = yes
CONSOLE_ENABLE = no
EXTRAKEY_ENABLE = yes
LTO_ENABLE = yes
RGBLIGHT_ENABLE = yes
ENCODER_MAP_ENABLE = yes

# Enabling link-time optimization saves about 3 kilobytes.
# https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/
EXTRAFLAGS += -flto
