MOUSEKEY_ENABLE     = no       # Mouse keys
EXTRAKEY_ENABLE     = no       # Audio control and System control
AUTO_SHIFT_ENABLE   = yes      # Auto Shift
RGBLIGHT_ENABLE     = no       # Enable WS2812 RGB underlight.
COMBO_ENABLE        = yes      # Combo keys
WPM_ENABLE          = no
LEADER_ENABLE       = no
TAP_DANCE_ENABLE    = no
KEY_OVERRIDE_ENABLE = no
OLED_ENABLE         = yes
OLED_DRIVER         = SSD1306
LTO_ENABLE          = yes

# Saves a bunch of memory
EXTRAFLAGS += -flto
CONSOLE_ENABLE = no
VERBOSE = no
DEBUG_MATRIX_SCAN_RATE  = no
DEBUG_MATRIX = no
MAGIC_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no

VPATH += keyboards/gboards

SRC += caps_word.c
SRC += num_word.c
SRC += repeat.c
