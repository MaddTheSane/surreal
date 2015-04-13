//
//  UnGame.cpp
//  Surreal
//
//  Created by C.W. Betts on 4/13/15.
//  Copyright (c) 2015 C.W. Betts. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Engine.h"

IMPLEMENT_CLASS(UGameEngine);

UGameEngine::UGameEngine() {}
void UGameEngine::StaticConstructor() {}

void UGameEngine::Serialize( FArchive& Ar ) {}
void UGameEngine::Destroy() {}

// UEngine interface.
void UGameEngine::Init() {}
void UGameEngine::Exit() {}
void UGameEngine::Tick( FLOAT DeltaSeconds ) {}
void UGameEngine::Draw( UViewport* Viewport, UBOOL Blit, BYTE* HitData, INT* HitSize ) {}
UBOOL UGameEngine::Exec( const TCHAR* Cmd, FOutputDevice& Ar ) {return 0;}
void UGameEngine::MouseDelta( UViewport*, DWORD, FLOAT, FLOAT ) {}
void UGameEngine::MousePosition( class UViewport*, DWORD, FLOAT, FLOAT ) {}
void UGameEngine::Click( UViewport*, DWORD, FLOAT, FLOAT ) {}
void UGameEngine::SetClientTravel( UPlayer* Viewport, const TCHAR* NextURL, UBOOL bItems, ETravelType TravelType ) {}
FLOAT UGameEngine::GetMaxTickRate() {return 0;}
INT UGameEngine::ChallengeResponse( INT Challenge ) {return 0;}
void UGameEngine::SetProgress( const TCHAR* Str1, const TCHAR* Str2, FLOAT Seconds ) {}

// UGameEngine interface.
UBOOL UGameEngine::Browse( FURL URL, const TMap<FString,FString>* TravelInfo, FString& Error ) {return 0;}
ULevel* UGameEngine::LoadMap( const FURL& URL, UPendingLevel* Pending, const TMap<FString,FString>* TravelInfo, FString& Error ) {return NULL;}
void UGameEngine::SaveGame( INT Position ) {}
void UGameEngine::CancelPending() {}
void UGameEngine::PaintProgress() {}
void UGameEngine::UpdateConnectingMessage() {}
void UGameEngine::BuildServerMasterMap( UNetDriver* NetDriver, ULevel* InLevel ) {}
void UGameEngine::NotifyLevelChange() {}
void UGameEngine::FixUpLevel() {}


