//
//  UnEngine.cpp
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

IMPLEMENT_CLASS(UEngine);

UEngine::UEngine() {}

void UEngine::StaticConstructor() {}

// UObject interface.
void UEngine::Serialize( FArchive& Ar ) {}
void UEngine::Destroy() {}

void UEngine::Init() {}
void UEngine::Exit() {}
UBOOL UEngine::Exec( const TCHAR* Cmd, FOutputDevice& Out ) {return 0;}
void UEngine::Flush( UBOOL AllowPrecache ) {}
UBOOL UEngine::Key( UViewport* Viewport, EInputKey Key ) {return 0;}
UBOOL UEngine::InputEvent( UViewport* Viewport, EInputKey iKey, EInputAction State, FLOAT Delta ) {return 0;}
INT UEngine::ChallengeResponse( INT Challenge ) {return 0;}
FLOAT UEngine::GetMaxTickRate() {return 0;}
void UEngine::SetProgress( const TCHAR* Str1, const TCHAR* Str2, FLOAT Seconds ) {}
void UEngine::InitAudio() {}

