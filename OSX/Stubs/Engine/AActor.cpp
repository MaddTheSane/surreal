//
//  File.c
//  Surreal
//
//  Created by C.W. Betts on 7/6/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//

#include <stdlib.h>
#include "Engine.h"

void AActor::Destroy()
{
	
}

INT* AActor::GetOptimizedRepList( BYTE* InDefault, FPropertyRetirement* Retire, INT* Ptr, UPackageMap* Map, INT NumReps )
{
	return NULL;
}

FLOAT AActor::UpdateFrequency(AActor *Viewer, FVector &ViewDir, FVector &ViewPos)
{
	return 0;
}
void AActor::ProcessEvent( UFunction* Function, void* Parms, void* Result )
{
	
}

void AActor::ProcessState( FLOAT DeltaSeconds )
{
	
}

UBOOL AActor::ProcessRemoteFunction( UFunction* Function, void* Parms, FFrame* Stack )
{
	return 0;
}

void AActor::ProcessDemoRecFunction( UFunction* Function, void* Parms, FFrame* Stack )
{
	
}

void AActor::Serialize( FArchive& Ar )
{
	
}

void AActor::InitExecution()
{
	
}

void AActor::PostEditChange()
{
	
}

void AActor::PostLoad()
{
	
}

FLOAT AActor::GetNetPriority( AActor* Sent, FLOAT Time, FLOAT Lag )
{
	return 0;
}

UBOOL AActor::Tick( FLOAT DeltaTime, enum ELevelTick TickType )
{
	return 0;
}

void AActor::PreNetReceive()
{
	
}

void AActor::PostNetReceive()
{
	
}

void AActor::performPhysics(FLOAT DeltaSeconds)
{
	
}

UTexture* AActor::GetSkin( INT Index )
{
	return NULL;
}

FMeshAnimSeq* AActor::GetAnim( FName SequenceName )
{
	return NULL;
}
