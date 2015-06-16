//
//  UnMath.cpp
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

FGlobalMath::FGlobalMath()
{
	
}

FVector FVector::SafeNormal() const {return *this;}
