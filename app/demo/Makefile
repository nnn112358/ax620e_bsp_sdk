SUBDIRS = FRTDemo

################################################################################
#	prepare param
################################################################################
LOCAL_PATH        := $(shell pwd)
HOME_PATH         := $(abspath $(LOCAL_PATH)/../..)

include $(HOME_PATH)/build/color.mk
include $(HOME_PATH)/build/config.mak

ifeq ($(AX_BOOT_OPTIMIZATION_SUPPORT),TRUE)
	SUBDIRS += QSDemo
endif

PRJ_OUT_HOME		:= $(HOME_PATH)/build/out/$(PROJECT)
OBJ_OUT_PATH		:= $(PRJ_OUT_HOME)/objs

################################################################################
#	set task
################################################################################
SUBDIRS_CLEAN   = $(addsuffix .clean, $(SUBDIRS))
SUBDIRS_INSTALL = $(addsuffix .install, $(SUBDIRS))

.PHONY: $(SUBDIRS) $(SUBDIRS_INSTALL) $(SUBDIRS_CLEAN)

all: $(SUBDIRS)
	@$(ECHO) -e $(GREEN)"\nBuild All $(CURDIR) success!!\n"  $(DONE)

install: $(SUBDIRS_INSTALL)
	@$(ECHO) -e $(GREEN)"\nInstall $(CURDIR) success!!\n"  $(DONE)

clean:	$(SUBDIRS_CLEAN)
	@$(ECHO) -e $(GREEN)"\nClean $(CURDIR) directory!!\n"  $(DONE)

$(SUBDIRS):
	@$(ECHO)
	@$(ECHO) -e $(CYAN)"In subdir $@ ..." $(DONE)
	@$(MAKE) -C $(basename $@ )

$(SUBDIRS_INSTALL):
	@$(ECHO)
	@$(ECHO) -e $(CYAN)"In subdir $(basename $@ )..." $(DONE)
	@$(MAKE) -C $(basename $@ ) install

$(SUBDIRS_CLEAN):
	@$(ECHO) -e $(CYAN)"In subdir $(basename $@ )..." $(DONE)
	@$(MAKE) -C $(basename $@ ) clean
