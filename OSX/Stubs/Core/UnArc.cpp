//
//  UnArc.cpp
//  Surreal
//
//  Created by C.W. Betts on 4/12/15.
//  Copyright (c) 2015 C.W. Betts. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Core.h"


FArchive& operator<<( FArchive& Ar, FCompactIndex& I ) {
	return Ar;
}
