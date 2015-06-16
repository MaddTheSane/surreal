//
//  Core.c
//  Surreal
//
//  Created by C.W. Betts on 7/6/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//
//	This is a stub implementation of the Core library of Surreal.
//

#include <stdio.h>
#include <stdlib.h>
#include <sys/param.h>
#include "Core.h"

FMemStack				GMem;
FOutputDevice*			GLog;
FOutputDevice*			GNull;
FOutputDevice*		    GThrow;
FOutputDeviceError*		GError;
FFeedbackContext*		GWarn;
FConfigCache*			GConfig;
FTransactionBase*		GUndo;
FOutputDevice*			GLogHook;
FExec*					GExec;
FMalloc*				GMalloc;
FFileManager*			GFileManager;
USystem*				GSys;
UProperty*				GProperty;
BYTE*					GPropAddr;
USubsystem*				GWindowManager;
TCHAR				    GErrorHist[4096];
TCHAR                   GTrue[64], GFalse[64], GYes[64], GNo[64], GNone[64];
TCHAR					GCdPath[PATH_MAX];
FLOAT					GSecondsPerCycle;
FTime					GTempTime;
void					(*GTempFunc)(void*);
SQWORD					GTicks;
INT                     GScriptCycles;
DWORD					GPageSize;
DWORD					GProcessorCount;
DWORD					GPhysicalMemory;
DWORD                   GUglyHackFlags;
UBOOL					GIsScriptable;
UBOOL					GIsEditor;
UBOOL					GIsClient;
UBOOL					GIsServer;
UBOOL					GIsCriticalError;
UBOOL					GIsStarted;
UBOOL					GIsRunning;
UBOOL					GIsSlowTask;
UBOOL					GIsGuarded;
UBOOL					GIsRequestingExit;
UBOOL					GIsStrict;
UBOOL                   GScriptEntryTag;
UBOOL                   GLazyLoad;
UBOOL					GUnicode;
UBOOL					GUnicodeOS;
class FGlobalMath		GMath;
URenderDevice*			GRenderDevice;
class FArchive*         GDummySave;
DWORD					GCurrentViewport;

TCHAR GPackage[] = "Core";

void FOutputDevice::Log( const TCHAR* S )
{
	fprintf(stderr, "%s\n", S);
}

void FOutputDevice::Log( enum EName Type, const TCHAR* S )
{
	
}

void FOutputDevice::Log( const FString& S )
{
	const TCHAR *a = *S;
	Log(a);
}

void FOutputDevice::Log( enum EName Type, const FString& S )
{
	
}

void FOutputDevice::Logf( const TCHAR* Fmt, ... )
{
	va_list list;
	va_start(list, Fmt);
	vfprintf(stderr, Fmt, list);
	va_end(list);
	fprintf(stderr, "\n");
}

void FOutputDevice::Logf( enum EName Type, const TCHAR* Fmt, ... )
{
	
}

