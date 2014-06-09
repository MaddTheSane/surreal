/*=============================================================================
	SDLGLDrv.h: Unreal OpenGL support for SDL.
	Copyright 1997-1999 Epic Games, Inc. All Rights Reserved.

	Revision history:
		* Created by Daniel Vogel (based on XMesaGLDrv).

=============================================================================*/

/*-----------------------------------------------------------------------------
	Includes.
-----------------------------------------------------------------------------*/

// OS includes
#include <dlfcn.h>

// Unreal includes.
#include "Engine.h"
#include "UnRender.h"

// GL includes.
#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

// SDL includes.
#include <SDL/SDL.h>

/*-----------------------------------------------------------------------------
	The End.
-----------------------------------------------------------------------------*/
