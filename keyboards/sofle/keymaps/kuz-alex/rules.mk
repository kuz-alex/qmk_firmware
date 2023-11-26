# OLED_ENABLE = yes
# ENCODER_ENABLE = no
# CONSOLE_ENABLE = no
# EXTRAKEY_ENABLE = yes
# VIA_ENABLE = yes
# LTO_ENABLE = yes
# RGBLIGHT_ENABLE = yes
# RGB_MATRIX_ENABLE = yes
# RGB_MATRIX_DRIVER = ws2812
# ENCODER_MAP_ENABLE = yes


OLED_ENABLE = yes
# ENCODER_ENABLE = yes
CONSOLE_ENABLE = no
EXTRAKEY_ENABLE = yes
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = ws2812

# Enabling link-time optimization saves about 3 kilobytes.
# https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/
EXTRAFLAGS += -flto
