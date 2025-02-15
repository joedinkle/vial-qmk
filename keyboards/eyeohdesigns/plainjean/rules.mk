# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

VIA_ENABLE = yes
VIAL_ENABLE = yes
# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
AUDIO_ENABLE = no           # Audio output
VIAL_INSECURE = no
