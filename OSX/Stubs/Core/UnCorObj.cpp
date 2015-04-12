//
//  UnCorObj.cpp
//  Surreal
//
//  Created by C.W. Betts on 7/6/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Core.h"

IMPLEMENT_CLASS(UPackage)
UPackage::UPackage()
{
	
}

// UObject interface.
void UPackage::Destroy()
{
	
}

void UPackage::Serialize( FArchive& Ar )
{
	
}

// UPackage interface.
void* UPackage::GetDllExport( const TCHAR* ExportName, UBOOL Checked )
{
	return nullptr;
}

IMPLEMENT_CLASS(USubsystem)

IMPLEMENT_CLASS(UCommandlet)

INT UCommandlet::Main( const TCHAR* Parms )
{
	return -1;
}
UCommandlet::UCommandlet()
{
	
}

#if 0
IMPLEMENT_FUNCTION(UCommandlet, 1, execMain)
{
	
}
#endif

IMPLEMENT_CLASS(ULanguage)

IMPLEMENT_CLASS(UTextBuffer)

UTextBuffer::UTextBuffer( const TCHAR* Str )
{
	
}

void UTextBuffer::Serialize( FArchive& Ar )
{
	
}

void UTextBuffer::Serialize( const TCHAR* Data, EName Event )
{
	
}

IMPLEMENT_CLASS(USystem)

USystem::USystem()
{
	
}

void USystem::StaticConstructor()
{
	
}

UBOOL USystem::Exec( const TCHAR* Cmd, FOutputDevice& Ar )
{
	return 0;
}
