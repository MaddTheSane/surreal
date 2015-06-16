//
//  UnFile.cpp
//  Surreal
//
//  Created by C.W. Betts on 7/6/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//
//	This is a stub implementation of the Core library of Surreal.
//

#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include "Core.h"
#include <ctype.h>

DWORD GCRCTable[] = {1, 0, 0};

void __Context::StaticInit()
{
	
}

jmp_buf __Context::Env;

void appInit( const TCHAR* InPackage, const TCHAR* InCmdLine, FMalloc* InMalloc, FOutputDevice* InLog, FOutputDeviceError* InError, FFeedbackContext* InWarn, FFileManager* InFileManager, FConfigCache*(*ConfigFactory)(), UBOOL RequireConfig )
{
	
}

void appPreExit()
{
	
}

void appExit()
{
	
}

/*-----------------------------------------------------------------------------
 Logging and critical errors.
 -----------------------------------------------------------------------------*/

void appRequestExit( UBOOL Force ) {}

void appFailAssert( const ANSICHAR* Expr, const ANSICHAR* File, INT Line )
{
	
}

void appUnwindf( const TCHAR* Fmt, ... )
{
	
}

const TCHAR* appGetSystemErrorMessage( INT Error )
{
	return "";
}

const void appDebugMessagef( const TCHAR* Fmt, ... )
{
	
}

const void appMsgf( const TCHAR* Fmt, ... )
{
	
}

const void appGetLastError()
{
	
}

/*-----------------------------------------------------------------------------
 Misc.
 -----------------------------------------------------------------------------*/

void* appGetDllHandle( const TCHAR* DllName )
{
	return NULL;
}

void appFreeDllHandle( void* DllHandle )
{
	
}

void* appGetDllExport( void* DllHandle, const TCHAR* ExportName )
{
	return NULL;
}

void appLaunchURL( const TCHAR* URL, const TCHAR* Parms, FString* Error )
{
	
}

void* appCreateProc( const TCHAR* URL, const TCHAR* Parms , UBOOL bRealTime )
{
	return NULL;
}

UBOOL appGetProcReturnCode( void* ProcHandle, INT* ReturnCode )
{
	return 0;
}

void appEnableFastMath( UBOOL Enable )
{
	
}

class FGuid appCreateGuid()
{
	return FGuid();
}

void appCreateTempFilename( const TCHAR* Path, TCHAR* Result256 )
{
	
}

void appCleanFileCache()
{
	
}

UBOOL appFindPackageFile( const TCHAR* In, const FGuid* Guid, TCHAR* Out )
{
	return 0;
}

void appClipboardCopy( const TCHAR* Str )
{
	
}

FString appClipboardPaste()
{
	return "";
}

const ANSICHAR* appToAnsi( const TCHAR* Str )
{
	return NULL;
}

const UNICHAR* appToUnicode( const TCHAR* Str )
{
	return NULL;
}

const TCHAR* appFromAnsi( const ANSICHAR* Str )
{
	return NULL;
}

const TCHAR* appFromUnicode( const UNICHAR* Str )
{
	return NULL;
}

UBOOL appIsPureAnsi( const TCHAR* Str )
{
	return 0;
}

TCHAR* appStrcpy( TCHAR* Dest, const TCHAR* Src )
{
	return strcpy(Dest, Src);
}

INT appStrcpy( const TCHAR* String )
{
	return 0;
}

INT appStrlen( const TCHAR* String )
{
	return (INT)strlen(String);
}

TCHAR* appStrstr( const TCHAR* String, const TCHAR* Find )
{
	return strstr(String, Find);
}

TCHAR* appStrchr( const TCHAR* String, INT c )
{
	return strchr(String, c);
}

TCHAR* appStrcat( TCHAR* Dest, const TCHAR* Src )
{
	return strcat(Dest, Src);
}

INT appStrcmp( const TCHAR* String1, const TCHAR* String2 )
{
	return strcmp(String1, String2);
}

INT appStricmp( const TCHAR* String1, const TCHAR* String2 )
{
	return strcasecmp(String1, String2);
}

INT appStrncmp( const TCHAR* String1, const TCHAR* String2, INT Count )
{
	return strncmp(String1, String2, Count);
}

TCHAR* appStaticString1024()
{
	return NULL;
}
ANSICHAR* appAnsiStaticString1024()
{
	return NULL;
}

const TCHAR* appSpc( int Num )
{
	return "";
}

TCHAR* appStrncpy( TCHAR* Dest, const TCHAR* Src, int Max)
{
	return strncpy(Dest, Src, Max);
}

TCHAR* appStrncat( TCHAR* Dest, const TCHAR* Src, int Max)
{
	return strncat(Dest, Src, Max);
}

/// This function is not present on OS X.
char *strupr(char *s) {
	unsigned c;
	unsigned char *p = (unsigned char *)s;
	while ((c = *p))
		*p++ = toupper(c);
	return s;
}

TCHAR* appStrupr( TCHAR* String )
{
	return strupr(String);
}

const TCHAR* appStrfind(const TCHAR* Str, const TCHAR* Find)
{
	return "";
}

DWORD appStrCrc( const TCHAR* Data )
{
	return 0;
}

DWORD appStrCrcCaps( const TCHAR* Data )
{
	return 0;
}

INT appAtoi( const TCHAR* Str )
{
	return atoi(Str);
}

FLOAT appAtof( const TCHAR* Str )
{
	return atof(Str);
}

INT appStrtoi( const TCHAR* Start, TCHAR** End, INT Base )
{
	return 0;
}

INT appStrnicmp( const TCHAR* A, const TCHAR* B, INT Count )
{
	return strncasecmp(A, B, Count);
}

INT appSprintf( TCHAR* Dest, const TCHAR* Fmt, ... )
{
	int retVal;
	va_list list;
	va_start(list, Fmt);
	retVal = vsprintf(Dest, Fmt, list);
	va_end(list);
	return retVal;
}

void appTrimSpaces( ANSICHAR* String)
{
	
}

void appMemcpy( void* Dest, const void* Src, INT Count )
{
	memcpy(Dest, Src, Count);
}


const TCHAR* appCmdLine()
{
	return NULL;
}

const TCHAR* appBaseDir()
{
	return NULL;
}

const TCHAR* appPackage()
{
	return NULL;
}

const TCHAR* appComputerName()
{
	return NULL;
}

const TCHAR* appUserName()
{
	return NULL;
}

CORE_API const TCHAR* Localize( const TCHAR* Section, const TCHAR* Key, const TCHAR* Package, const TCHAR* LangExt, UBOOL Optional )
{
	return NULL;
}

const TCHAR* LocalizeError( const TCHAR* Key, const TCHAR* Package, const TCHAR* LangExt )
{
	return NULL;
}

const TCHAR* LocalizeProgress( const TCHAR* Key, const TCHAR* Package, const TCHAR* LangExt )
{
	return NULL;
}

const TCHAR* LocalizeQuery( const TCHAR* Key, const TCHAR* Package, const TCHAR* LangExt )
{
	return NULL;
}

const TCHAR* LocalizeGeneral( const TCHAR* Key, const TCHAR* Package, const TCHAR* LangExt )
{
	return NULL;
}

using namespace std;

DOUBLE appSqrt( DOUBLE Value )
{
	return sqrt(Value);
}

DOUBLE appExp( DOUBLE Value )
{
	return exp(Value);
}
DOUBLE appLoge( DOUBLE Value )
{
	return log(Value);
}
DOUBLE appFmod( DOUBLE A, DOUBLE B )
{
	return fmod(A, B);
}
DOUBLE appSin( DOUBLE Value )
{
	return sin(Value);
}
DOUBLE appCos( DOUBLE Value )
{
	return cos(Value);
}
DOUBLE appAcos( DOUBLE Value )
{
	return acos(Value);
}
DOUBLE appTan( DOUBLE Value )
{
	return tan(Value);
}
DOUBLE appAtan( DOUBLE Value )
{
	return atan(Value);
}
DOUBLE appAtan2( DOUBLE Y, DOUBLE X )
{
	return atan2(Y, X);
}
DOUBLE appPow( DOUBLE A, DOUBLE B )
{
	return pow(A, B);
}
UBOOL appIsNan( DOUBLE Value )
{
	return isnan(Value);
}

FTime appSecondsSlow() {return FTime();}
void appSleep( FLOAT Seconds ) {}

DWORD appCycles() {return 0;}
UBOOL ParseCommand( const TCHAR** Stream, const TCHAR* Match ) {return 0;}

const TCHAR* appTimestamp() {return NULL;}
UBOOL appLoadFileToArray( TArray<BYTE>& Result, const TCHAR* Filename, FFileManager* FileManager ) {return 0;}
UBOOL appLoadFileToString( FString& Result, const TCHAR* Filename, FFileManager* FileManager ) {return 0;}
UBOOL appSaveArrayToFile( const TArray<BYTE>& Array, const TCHAR* Filename, FFileManager* FileManager ) {return 0;}
UBOOL appSaveStringToFile( const FString& String, const TCHAR* Filename, FFileManager* FileManager ) {return 0;}

UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, class FName& Name ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, DWORD& Value ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, class FGuid& Guid ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, TCHAR* Value, INT MaxLen ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, BYTE& Value ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, SBYTE& Value ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, _WORD& Value ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, SWORD& Value ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, FLOAT& Value ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, INT& Value ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, FString& Value ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, QWORD& Value ) {return 0;}
UBOOL Parse( const TCHAR* Stream, const TCHAR* Match, SQWORD& Value ) {return 0;}

UBOOL ParseUBOOL( const TCHAR* Stream, const TCHAR* Match, UBOOL& OnOff ) {return 0;}
UBOOL ParseObject( const TCHAR* Stream, const TCHAR* Match, class UClass* Type, class UObject*& DestRes, class UObject* InParent ) {return 0;}
UBOOL ParseLine( const TCHAR** Stream, TCHAR* Result, INT MaxLen, UBOOL Exact ) {return 0;}
UBOOL ParseLine( const TCHAR** Stream, FString& Resultd, UBOOL Exact ) {return 0;}
UBOOL ParseToken( const TCHAR*& Str, TCHAR* Result, INT MaxLen, UBOOL UseEscape ) {return 0;}
UBOOL ParseToken( const TCHAR*& Str, FString& Arg, UBOOL UseEscape ) {return 0;}
FString ParseToken( const TCHAR*& Str, UBOOL UseEscape ) {return "";}
void ParseNext( const TCHAR** Stream ) {}
UBOOL ParseParam( const TCHAR* Stream, const TCHAR* Param ) {return 0;}

