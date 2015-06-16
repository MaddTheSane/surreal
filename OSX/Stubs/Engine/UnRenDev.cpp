//
//  UnRenDev.cpp
//  Surreal
//
//  Created by C.W. Betts on 4/12/15.
//  Copyright (c) 2015 C.W. Betts. All rights reserved.
//
//	This is a stub implementation of the Engine library of Surreal.
//

#include <stdlib.h>
#include "Engine.h"
#include "UnRender.h"
#include "UnRenDev.h"

IMPLEMENT_CLASS(URenderDevice);

void URenderDevice::StaticConstructor() {}

void URenderDevice::Draw3DLine( FSceneNode* Frame, FPlane Color, DWORD LineFlags, FVector OrigP, FVector OrigQ ) {}
void URenderDevice::Draw2DClippedLine( FSceneNode* Frame, FPlane Color, DWORD LineFlags, FVector P1, FVector P2 ) {}
UBOOL URenderDevice::Exec( const TCHAR* Cmd, FOutputDevice& Ar ) {
	return 0;
}

