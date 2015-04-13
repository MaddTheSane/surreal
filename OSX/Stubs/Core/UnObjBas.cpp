//
//  UnObjBas.cpp
//  Surreal
//
//  Created by C.W. Betts on 7/6/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Core.h"

IMPLEMENT_CLASS(UObject)
UObject::UObject()
{
	
}

UObject::UObject( const UObject& Src )
{
	
}

UObject::UObject( ENativeConstructor, UClass* InClass, const TCHAR* InName, const TCHAR* InPackageName, DWORD InFlags )
{
	
}

UObject::UObject( EStaticConstructor, const TCHAR* InName, const TCHAR* InPackageName, DWORD InFlags )
{
	
}

UObject::UObject( EInPlaceConstructor, UClass* InClass, UObject* InOuter, FName InName, DWORD InFlags )
{
	
}

#if 0
UObject& UObject::operator=( const UObject& otherSide)
{
	return this;
}
#endif

void UObject::StaticConstructor()
{
	
}

UObject::~UObject()
{
	
}

DWORD UObject::QueryInterface( const FGuid& RefIID, void** InterfacePtr )
{
	return 0;
}

DWORD UObject::AddRef()
{
	return 2;
}

DWORD UObject::Release()
{
	return 1;
}

void UObject::ProcessEvent( UFunction* Function, void* Parms, void* Result )
{
	
}
void UObject::ProcessState( FLOAT DeltaSeconds )
{
	
}

UBOOL UObject::ProcessRemoteFunction( UFunction* Function, void* Parms, FFrame* Stack )
{
	return 0;
}

void UObject::Modify()
{
	
}

void UObject::PostLoad()
{
	
}

void UObject::Destroy()
{
	
}

void UObject::Serialize( FArchive& Ar )
{
	
}

EGotoState UObject::GotoState( FName State )
{
	return GOTOSTATE_NotFound;
}

INT UObject::GotoLabel( FName Label )
{
	return 0;
}

void UObject::InitExecution()
{
	
}

void UObject::ShutdownAfterError()
{
	
}

void UObject::PostEditChange()
{
	
}

void UObject::CallFunction( FFrame& TheStack, RESULT_DECL, UFunction* Function )
{
	
}

UBOOL UObject::ScriptConsoleExec( const TCHAR* Cmd, FOutputDevice& Ar, UObject* Executor )
{
	return 0;
}

void UObject::Register()
{
	
}

void UObject::LanguageChange()
{
	
}

UObject* UObject::StaticFindObject( UClass* Class, UObject* InOuter, const TCHAR* Name, UBOOL ExactClass )
{
	return NULL;
}

UObject* UObject::StaticFindObjectChecked( UClass* Class, UObject* InOuter, const TCHAR* Name, UBOOL ExactClass )
{
	return NULL;
}
UObject* UObject::StaticLoadObject( UClass* Class, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, DWORD LoadFlags, UPackageMap* Sandbox )
{
	return NULL;
}
UClass* UObject::StaticLoadClass( UClass* BaseClass, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, DWORD LoadFlags, UPackageMap* Sandbox )
{
	return NULL;
}

UObject* UObject::StaticAllocateObject( UClass* Class, UObject* InOuter, FName Name, DWORD SetFlags, UObject* Template, FOutputDevice* Error, UObject* Ptr )
{
	return NULL;
}

UObject* UObject::StaticConstructObject( UClass* Class, UObject* InOuter, FName Name, DWORD SetFlags, UObject* Template, FOutputDevice* Error )
{
	return NULL;
}

void UObject::StaticInit()
{
	
}

void UObject::StaticExit()
{
	
}

UBOOL UObject::StaticExec( const TCHAR* Cmd, FOutputDevice& Ar )
{
	return 0;
}

void UObject::StaticTick()
{
	
}

UObject* UObject::LoadPackage( UObject* InOuter, const TCHAR* Filename, DWORD LoadFlags )
{
	return NULL;
}

UBOOL UObject::SavePackage( UObject* InOuter, UObject* Base, DWORD TopLevelFlags, const TCHAR* Filename, FOutputDevice* Error, ULinkerLoad* Conform )
{
	return 0;
}

void UObject::CollectGarbage( DWORD KeepFlags )
{
	
}

void UObject::SerializeRootSet( FArchive& Ar, DWORD KeepFlags, DWORD RequiredFlags )
{
	
}

UBOOL UObject::IsReferenced( UObject*& Res, DWORD KeepFlags, UBOOL IgnoreReference )
{
	return 0;
}

UBOOL UObject::AttemptDelete( UObject*& Res, DWORD KeepFlags, UBOOL IgnoreReference )
{
	return 0;
}

void UObject::BeginLoad()
{
	
}

void UObject::EndLoad()
{
	
}

void UObject::InitProperties( BYTE* Data, INT DataCount, UClass* DefaultsClass, BYTE* Defaults, INT DefaultsCount )
{
	
}

void UObject::ExitProperties( BYTE* Data, UClass* Class )
{
	
}

void UObject::ResetLoaders( UObject* InOuter, UBOOL DynamicOnly, UBOOL ForceLazyLoad )
{
	
}

UPackage* UObject::CreatePackage( UObject* InOuter, const TCHAR* PkgName )
{
	return NULL;
}

ULinkerLoad* UObject::GetPackageLinker( UObject* InOuter, const TCHAR* Filename, DWORD LoadFlags, UPackageMap* Sandbox, FGuid* CompatibleGuid )
{
	return NULL;
}
void UObject::StaticShutdownAfterError()
{
	
}

UObject* UObject::GetIndexedObject( INT Index )
{
	return NULL;
}

void UObject::GlobalSetProperty( const TCHAR* Value, UClass* Class, UProperty* Property, INT Offset, UBOOL Immediate )
{
	
}

void UObject::ExportProperties( FOutputDevice& Out, UClass* ObjectClass, BYTE* Object, INT Indent, UClass* DiffClass, BYTE* Diff )
{
	
}

void UObject::ResetConfig( UClass* Class )
{
	
}

void UObject::GetRegistryObjects( TArray<FRegistryObjectInfo>& Results, UClass* Class, UClass* MetaClass, UBOOL ForceRefresh )
{
	
}

void UObject::GetPreferences( TArray<FPreferencesInfo>& Results, const TCHAR* Category, UBOOL ForceRefresh )
{
	
}

UBOOL UObject::GetInitialized()
{
	return 0;
}

UPackage* UObject::GetTransientPackage()
{
	return NULL;
}

void UObject::VerifyLinker( ULinkerLoad* Linker )
{
	
}

void UObject::ProcessRegistrants()
{
	
}

void UObject::BindPackage( UPackage* Pkg )
{
	
}

const TCHAR* UObject::GetLanguage()
{
	return NULL;
}

void UObject::SetLanguage( const TCHAR* LanguageExt )
{
	
}

void UObject::AddToRoot()
{
	
}

void UObject::RemoveFromRoot()
{
	
}

const TCHAR* UObject::GetFullName( TCHAR* Str ) const
{
	return Str;
}

const TCHAR* UObject::GetPathName( UObject* StopOuter, TCHAR* Str ) const
{
	return NULL;
}

UBOOL UObject::IsValid()
{
	return 0;
}

void UObject::ConditionalRegister()
{
	
}

UBOOL UObject::ConditionalDestroy()
{
	return 0;
}

void UObject::ConditionalPostLoad()
{
	
}

void UObject::ConditionalShutdownAfterError()
{
	
}

UBOOL UObject::IsProbing( FName ProbeName )
{
	return 0;
}

void UObject::Rename( const TCHAR* NewName )
{
	
}

UField* UObject::FindObjectField( FName InName, UBOOL Global )
{
	return NULL;
}

UFunction* UObject::FindFunction( FName InName, UBOOL Global )
{
	return NULL;
}

UFunction* UObject::FindFunctionChecked( FName InName, UBOOL Global )
{
	return NULL;
}

UState* UObject::FindState( FName InName )
{
	return NULL;
}

void UObject::SaveConfig( DWORD Flags, const TCHAR* Filename )
{
	
}

void UObject::LoadConfig( UBOOL Propagate, UClass* Class, const TCHAR* Filename )
{
	
}

void UObject::LoadLocalized( UBOOL Propagate, UClass* Class )
{
	
}

void UObject::InitClassDefaultObject( UClass* InClass )
{
	
}

void UObject::ProcessInternal( FFrame& TheStack, void*const Result )
{
	
}

void UObject::ParseParms( const TCHAR* Parms )
{
	
}


