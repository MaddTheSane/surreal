//
//  UnMem.cpp
//  Surreal
//
//  Created by C.W. Betts on 7/6/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Core.h"

void FMemStack::Init( INT DefaultChunkSize )
{
	
}

void FMemStack::Exit()
{
	
}

void FMemStack::Tick()
{
	
}

INT FMemStack::GetByteCount()
{
	return 0;
}

BYTE* FMemStack::AllocateNewChunk( INT MinSize ) {return nullptr;}
void FMemStack::FreeChunks( FTaggedMemory* NewTopChunk ) {}
