#=============================================================================
# Unreal ALAudio makefile for Linux.
#
# Revision history:
# 	* Created by James Carnegie
#=============================================================================

# Unreal directory. (Required by makefile-header.)
UNREAL_DIR	= ../..

# Include global definitions.
include $(UNREAL_DIR)/makefile-header

#-----------------------------------------------------------------------------
# Directories.
#-----------------------------------------------------------------------------

SRC_DIRS	= $(ALAUDIO_SRC)
BUILD_DIR	= $(ALAUDIO_BUILD)

#-----------------------------------------------------------------------------
# Compiler/linker options.
#-----------------------------------------------------------------------------

CXX		= $(STD_CXX)
CXXFLAGS	= $(STD_CXXFLAGS) -Werror -fPIC -I$(ALAUDIO_INC) -I$(ENGINE_INC) \
			-I$(CORE_INC) -DGPackage=GPackageAudio
LDFLAGS		= $(STD_LDFLAGS) -shared -Wl,-soname,$(ALAUDIO_SONAME)
LIBS		= $(STD_LIBS) $(CORE) -lpthread
#-----------------------------------------------------------------------------
# Files.
#-----------------------------------------------------------------------------

OBJS =				\
	ALAudio.o			\
	ALAudioSubsystem.o	\
	ALAudioMusic.o

OUT = $(ALAUDIO)

#-----------------------------------------------------------------------------
# Rules.
#-----------------------------------------------------------------------------

# Use general rules.
include $(UNREAL_DIR)/makefile-general

#-----------------------------------------------------------------------------
# The End.
#-----------------------------------------------------------------------------
