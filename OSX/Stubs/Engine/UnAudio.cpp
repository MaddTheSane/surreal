//
//  UnAudio.cpp
//  Surreal
//
//  Created by C.W. Betts on 4/12/15.
//  Copyright (c) 2015 C.W. Betts. All rights reserved.
//
//	This is a stub implementation of the Engine library of Surreal.
//

#include <stdlib.h>
#include "Engine.h"


void FSoundData::Load() {}
FLOAT FSoundData::GetPeriod() {
	return 0.0;
}

IMPLEMENT_CLASS(UAudioSubsystem);



IMPLEMENT_CLASS(USound);
UAudioSubsystem *USound::Audio;

void USound::PS2Convert() {}

// UObject interface.
void USound::Serialize( FArchive& Ar ) {}
void USound::Destroy() {}
void USound::PostLoad() {}


IMPLEMENT_CLASS(UMusic);

UAudioSubsystem* UMusic::Audio;

void UMusic::Serialize( FArchive& Ar ) {}
void UMusic::Destroy() {}
void UMusic::PostLoad() {}
