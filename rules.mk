AUDIO_ENABLE       =  no        #  Audio     output                                  
BACKLIGHT_ENABLE   =  no        #  Enable    keyboard   backlight     functionality  
BOOTLOADER         =  rp2040                                                         
BOOTMAGIC_ENABLE   =  no        #  Enable    Bootmagic  Lite                         
CAPS_WORD_ENABLE   =  yes                                                            
COMBO_ENABLE       =  yes                                                            
COMMAND_ENABLE     =  no        #  Commands  for        debug         and            configuration
CONSOLE_ENABLE     =  no        #  Console   for        debug                        
EXTRAKEY_ENABLE    =  yes       #  Audio     control    and           System         control
LEADER_ENABLE      =  yes                                                            
LTO_ENABLE         =  yes       #  Link      Time       Optimization  enabled        
MOUSEKEY_ENABLE    =  yes       #  Mouse     keys                                    
NKRO_ENABLE        =  yes       #  N-Key     Rollover                                
OLED_ENABLE        =  yes       #  OLED      display                                 
RGBLIGHT_ENABLE    =  no        #  Enable    WS2812     RGB           underlight.    
SPLIT_KEYBOARD     =  yes                                                            
STENO_ENABLE       =  yes                                                            
STENO_PROTOCOL     =  geminipr                                                       
SWAP_HANDS_ENABLE  =  no        #  Enable    one-hand   typing                       
TAP_DANCE_ENABLE  =  yes        #  Enable    one-hand   typing                       


# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/rgb_state_reader.c \
        ./lib/layer_state_reader.c \
        ./lib/logo_reader.c \
        ./lib/keylogger.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \
