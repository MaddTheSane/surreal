//
//  UnGnuG.cpp
//  Surreal
//
//  Created by C.W. Betts on 4/13/15.
//  Copyright (c) 2015 C.W. Betts. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Core.h"

ANSICHAR GModule[32] = "";


HINSTANCE      hInstance = 0;
UBOOL GIsMMX = 1;
UBOOL GIsPentiumPro = 1;
UBOOL GIsKatmai = 1;
UBOOL GIsK6 = false;
UBOOL GIs3DNow = false;
UBOOL GTimestamp = false;

