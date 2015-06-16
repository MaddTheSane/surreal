//
//  UnName.cpp
//  Surreal
//
//  Created by C.W. Betts on 7/6/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//
//	This is a stub implementation of the Core library of Surreal.
//

#include <stdio.h>
#include <stdlib.h>
#include "Core.h"

TArray<FNameEntry*>	FName::Names;			 // Table of all names.
TArray<INT>          FName::Available;       // Indices of available names.
FNameEntry*			FName::NameHash[4096];  // Hashed names.
UBOOL				FName::Initialized = 0;	 // Subsystem initialized.
FName::FName( const TCHAR* Name, EFindName FindType )
{
	
}

void FName::StaticInit()
{
	
}

void FName::StaticExit()
{
	
}

void FName::DeleteEntry( int i )
{
	
}

void FName::DisplayHash( class FOutputDevice& Ar )
{
	
}

void FName::Hardcode( FNameEntry* AutoName )
{
	
}
