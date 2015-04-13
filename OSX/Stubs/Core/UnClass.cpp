//
//  UnClass.c
//  Surreal
//
//  Created by C.W. Betts on 7/6/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Core.h"

IMPLEMENT_CLASS(UClass)
UClass::UClass()
{
	
}

UClass::UClass( UClass* InSuperClass )
{
	
}

UClass::UClass( ENativeConstructor, DWORD InSize, DWORD InClassFlags, UClass* InBaseClass, UClass* InWithinClass, FGuid InGuid, const TCHAR* InNameStr, const TCHAR* InPackageName, const TCHAR* InClassConfigName, DWORD InFlags, void(*InClassConstructor)(void*), void(UObject::*InClassStaticConstructor)() )
{
	
}

UClass::UClass( EStaticConstructor, DWORD InSize, DWORD InClassFlags, FGuid InGuid, const TCHAR* InNameStr, const TCHAR* InPackageName, const TCHAR* InClassConfigName, DWORD InFlags, void(*InClassConstructor)(void*), void(UObject::*InClassStaticConstructor)() )
{
	
}

void UClass::Serialize( FArchive& Ar )
{
	
}

void UClass::PostLoad()
{
	
}

void UClass::Destroy()
{
	
}

void UClass::Register()
{
	
}

void UClass::Bind()
{
	
}

void UClass::Link( FArchive& Ar, UBOOL Props )
{
	
}

IMPLEMENT_CLASS(UConst)
UConst::UConst( UConst* InSuperConst, const TCHAR* InValue )
{
	
}

void UConst::Serialize( FArchive& Ar )
{
	
}

IMPLEMENT_CLASS(UEnum)
UEnum::UEnum( UEnum* InSuperEnum )
{
	
}

void UEnum::Serialize( FArchive& Ar )
{
	
}

IMPLEMENT_CLASS(UState)
UState::UState( ENativeConstructor, INT InSize, const TCHAR* InName, const TCHAR* InPackageName, DWORD InFlags, UState* InSuperState )
{
	
}

UState::UState( EStaticConstructor, INT InSize, const TCHAR* InName, const TCHAR* InPackageName, DWORD InFlags )
{
	
}

UState::UState( UState* InSuperState )
{
	
}

void UState::Serialize( FArchive& Ar )
{
	
}

void UState::Destroy()
{
	
}

void UState::Link( FArchive& Ar, UBOOL Props )
{
	
}

IMPLEMENT_CLASS(UFunction)
UFunction::UFunction( UFunction* InSuperFunction )
{
	
}

void UFunction::Serialize( FArchive& Ar )
{
	
}

void UFunction::PostLoad()
{
	
}

// UField interface.
void UFunction::Bind()
{
	
}

// UStruct interface.
void UFunction::Link( FArchive& Ar, UBOOL Props )
{
	
}

UProperty* UFunction::GetReturnProperty()
{
	return NULL;
}

IMPLEMENT_CLASS(UStruct)
UStruct::UStruct( ENativeConstructor, INT InSize, const TCHAR* InName, const TCHAR* InPackageName, DWORD InFlags, UStruct* InSuperStruct )
{
	
}

UStruct::UStruct( EStaticConstructor, INT InSize, const TCHAR* InName, const TCHAR* InPackageName, DWORD InFlags )
{
	
}

UStruct::UStruct( UStruct* InSuperStruct )
{
	
}

// UObject interface.
void UStruct::Serialize( FArchive& Ar )
{
	
}

void UStruct::PostLoad()
{
	
}

void UStruct::Destroy()
{
	
}

void UStruct::Register()
{
	
}

void UStruct::AddCppProperty( UProperty* Property )
{
	
}

void UStruct::Link( FArchive& Ar, UBOOL Props )
{
	
}

void UStruct::SerializeBin( FArchive& Ar, BYTE* Data )
{
	
}

void UStruct::SerializeTaggedProperties( FArchive& Ar, BYTE* Data, UClass* DefaultsClass )
{
	
}

void UStruct::CleanupDestroyed( BYTE* Data )
{
	
}

EExprToken UStruct::SerializeExpr( INT& iCode, FArchive& Ar )
{
	return EX_LocalVariable;
}

IMPLEMENT_CLASS(UField);
UField::UField( ENativeConstructor, UClass* InClass, const TCHAR* InName, const TCHAR* InPackageName, DWORD InFlags, UField* InSuperField )
{
	
}

UField::UField( EStaticConstructor, const TCHAR* InName, const TCHAR* InPackageName, DWORD InFlags )
{
	
}

UField::UField( UField* InSuperField )
{
	
}

// UObject interface.
void UField::Serialize( FArchive& Ar )
{
	
}

void UField::PostLoad()
{
	
}

void UField::Register()
{
	
}

void UField::AddCppProperty( UProperty* Property )
{
	
}

UBOOL UField::MergeBools()
{
	return 0;
}

void UField::Bind()
{
	
}

UClass* UField::GetOwnerClass()
{
	return NULL;
}

INT UField::GetPropertiesSize()
{
	return 0;
}

FLabelEntry::FLabelEntry( FName InName, INT iInCode )
{
	
}

FDependency::FDependency()
{
	
}

FDependency::FDependency( UClass* InClass, UBOOL InDeep )
{
	
}

UBOOL FDependency::IsUpToDate()
{
	return 1;
}

