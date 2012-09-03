#=============================================================================
# Unreal OpenGL makefile for Linux.
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

SRC_DIRS	= $(OPENGL_SRC)
BUILD_DIR	= $(OPENGL_BUILD)

#-----------------------------------------------------------------------------
# Compiler/linker options.
#-----------------------------------------------------------------------------

CXX		= $(STD_CXX)
CXXFLAGS	= $(STD_CXXFLAGS)   -D_HAVE_STD_INTPTR -DNO_LIMITS -DHAVE_M_PI -fPIC -I$(ENGINE_INC) -I$(OPENGLDRV_INC)\
			-I$(CORE_INC) -DUTGLR_UT_BUILD=1 -DGPackage=GPackageVideo \
			$(SDL_CFLAGS)
LDFLAGS		= $(STD_LDFLAGS) -shared -Wl,-soname,$(OPENGLDRV_SONAME)
LIBS		= $(STD_LIBS) $(CORE) $(SDL_LIBS) -lpthread
#-----------------------------------------------------------------------------
# Files.
#-----------------------------------------------------------------------------

OBJS =				\
	OpenGL.o			\
	OpenGLDrv.o

OUT = $(OPENGLDRV)

#-----------------------------------------------------------------------------
# Rules.
#-----------------------------------------------------------------------------

# Use general rules.
include $(UNREAL_DIR)/makefile-general

#-----------------------------------------------------------------------------
# The End.
#-----------------------------------------------------------------------------
