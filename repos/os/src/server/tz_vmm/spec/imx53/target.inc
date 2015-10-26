TARGET    = tz_vmm
REQUIRES += trustzone imx53
LIBS      = base libc
SRC_CC    = main.cc
INC_DIR  += $(PRG_DIR) \
            $(PRG_DIR)/../../include \
            $(PRG_DIR)/../imx53

vpath main.cc $(PRG_DIR)/../imx53

INC_DIR	+= $(call select_from_ports,libc)/include
