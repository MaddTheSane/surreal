//
//  UnURL.cpp
//  Surreal
//
//  Created by C.W. Betts on 4/13/15.
//  Copyright (c) 2015 C.W. Betts. All rights reserved.
//
//	This is a stub implementation of the Engine library of Surreal.
//

#include <stdio.h>
#include <stdlib.h>
#include "Engine.h"


FString FURL::DefaultProtocol;
FString FURL::DefaultProtocolDescription;
FString FURL::DefaultName;
FString FURL::DefaultMap;
FString FURL::DefaultLocalMap;
FString FURL::DefaultHost;
FString FURL::DefaultPortal;
FString FURL::DefaultMapExt;
FString FURL::DefaultSaveExt;
INT FURL::DefaultPort = 0;

// Constructors.
FURL::FURL( const TCHAR* Filename ) {}
FURL::FURL( FURL* Base, const TCHAR* TextURL, ETravelType Type ) {}

void FURL::StaticInit() {}
void FURL::StaticExit() {}

// Functions.
UBOOL FURL::IsInternal() const {return 0;};
UBOOL FURL::IsLocalInternal() const {return 0;}
UBOOL FURL::HasOption( const TCHAR* Test ) const {return 0;}
const TCHAR* FURL::GetOption( const TCHAR* Match, const TCHAR* Default ) const {return "";}
void FURL::LoadURLConfig( const TCHAR* Section, const TCHAR* Filename ) {}
void FURL::SaveURLConfig( const TCHAR* Section, const TCHAR* Item, const TCHAR* Filename ) const {}
void FURL::AddOption( const TCHAR* Str ) {}
FString FURL::String( UBOOL FullyQualified ) const {return "";}

UBOOL FURL::operator==( const FURL& Other ) const {return false;}
