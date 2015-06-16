//
//  UnTemplate.cpp
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

void FArray::Remove( INT Index, INT Count, INT ElementSize )
{
	
}

void FArray::Realloc( INT ElementSize )
{
	
}

FString FString::Printf( const TCHAR* Fmt, ... )
{
	va_list list;
	char tmpString[4096] = {0};
	va_start(list, Fmt);
	vsnprintf(tmpString, sizeof(tmpString) - 1, Fmt, list);
	va_end(list);
	return tmpString;
}
