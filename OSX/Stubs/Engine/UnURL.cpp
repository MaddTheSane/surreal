//
//  UnURL.cpp
//  Surreal
//
//  Created by C.W. Betts on 4/13/15.
//  Copyright (c) 2015 C.W. Betts. All rights reserved.
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

