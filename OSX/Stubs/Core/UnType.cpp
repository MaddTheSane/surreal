//
//  UnType.cpp
//  Surreal
//
//  Created by C.W. Betts on 7/6/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Core.h"

IMPLEMENT_CLASS(UProperty)

UProperty::UProperty()
{
	
}

UProperty::UProperty( ECppProperty, INT InOffset, const TCHAR* InCategory, DWORD InFlags )
{
	
}

void UProperty::Serialize( FArchive& Ar )
{
	
}

void UProperty::Link( FArchive& Ar, UProperty* Prev )
{
	
}

void UProperty::ExportCpp( FOutputDevice& Out, UBOOL IsLocal, UBOOL IsParm ) const
{
	
}

UBOOL UProperty::NetSerializeItem( FArchive& Ar, UPackageMap* Map, void* Data ) const
{
	return 0;
}

UBOOL UProperty::ExportText( INT ArrayElement, TCHAR* ValueStr, BYTE* Data, BYTE* Delta, INT PortFlags ) const
{
	return 0;
}

void UProperty::CopySingleValue( void* Dest, void* Src ) const
{
	
}

void UProperty::CopyCompleteValue( void* Dest, void* Src ) const
{
	
}

void UProperty::DestroyValue( void* Dest ) const
{
	
}

UBOOL UProperty::Port() const
{
	return 0;
}

BYTE UProperty::GetID() const
{
	return 0;
}

IMPLEMENT_CLASS(UByteProperty)
void UByteProperty::Serialize( FArchive& Ar )
{
	
}

// UProperty interface.
void UByteProperty::Link( FArchive& Ar, UProperty* Prev )
{
	
}

UBOOL UByteProperty::Identical( const void* A, const void* B ) const
{
	return 0;
}

void UByteProperty::SerializeItem( FArchive& Ar, void* Value ) const
{
	
}

UBOOL UByteProperty::NetSerializeItem( FArchive& Ar, UPackageMap* Map, void* Data ) const
{
	return 0;
}

void UByteProperty::ExportCppItem( FOutputDevice& Out ) const
{
	
}

void UByteProperty::ExportTextItem( TCHAR* ValueStr, BYTE* PropertyValue, BYTE* DefaultValue, INT PortFlags ) const
{
	
}

const TCHAR* UByteProperty::ImportText( const TCHAR* Buffer, BYTE* Data, INT PortFlags ) const
{
	return nullptr;
}

void UByteProperty::CopySingleValue( void* Dest, void* Src ) const
{
	
}

void UByteProperty::CopyCompleteValue( void* Dest, void* Src ) const
{
	
}

IMPLEMENT_CLASS(UIntProperty)
void UIntProperty::Link( FArchive& Ar, UProperty* Prev )
{
	
}

UBOOL UIntProperty::Identical( const void* A, const void* B ) const
{
	return 0;
}

void UIntProperty::SerializeItem( FArchive& Ar, void* Value ) const
{
	
}

UBOOL UIntProperty::NetSerializeItem( FArchive& Ar, UPackageMap* Map, void* Data ) const
{
	return 0;
}

void UIntProperty::ExportCppItem( FOutputDevice& Out ) const
{
	
}

void UIntProperty::ExportTextItem( TCHAR* ValueStr, BYTE* PropertyValue, BYTE* DefaultValue, INT PortFlags ) const
{
	
}

const TCHAR* UIntProperty::ImportText( const TCHAR* Buffer, BYTE* Data, INT PortFlags ) const
{
	return nullptr;
}

void UIntProperty::CopySingleValue( void* Dest, void* Src ) const
{
	
}

void UIntProperty::CopyCompleteValue( void* Dest, void* Src ) const
{
	
}

IMPLEMENT_CLASS(UBoolProperty)
void UBoolProperty::Serialize(FArchive &Ar)
{
	
}

void UBoolProperty::Link( FArchive& Ar, UProperty* Prev )
{
	
}

UBOOL UBoolProperty::Identical( const void* A, const void* B ) const
{
	return 0;
}

void UBoolProperty::SerializeItem( FArchive& Ar, void* Value ) const
{
	
}

UBOOL UBoolProperty::NetSerializeItem( FArchive& Ar, UPackageMap* Map, void* Data ) const
{
	return 0;
}

void UBoolProperty::ExportCppItem( FOutputDevice& Out ) const
{
	
}

void UBoolProperty::ExportTextItem( TCHAR* ValueStr, BYTE* PropertyValue, BYTE* DefaultValue, INT PortFlags ) const
{
	
}

const TCHAR* UBoolProperty::ImportText( const TCHAR* Buffer, BYTE* Data, INT PortFlags ) const
{
	return nullptr;
}

void UBoolProperty::CopySingleValue( void* Dest, void* Src ) const
{
	
}

IMPLEMENT_CLASS(UFloatProperty)
void UFloatProperty::Link( FArchive& Ar, UProperty* Prev )
{
	
}

UBOOL UFloatProperty::Identical( const void* A, const void* B ) const
{
	return 0;
}

void UFloatProperty::SerializeItem( FArchive& Ar, void* Value ) const
{
	
}

UBOOL UFloatProperty::NetSerializeItem( FArchive& Ar, UPackageMap* Map, void* Data ) const
{
	return 0;
}

void UFloatProperty::ExportCppItem( FOutputDevice& Out ) const
{
	
}

void UFloatProperty::ExportTextItem( TCHAR* ValueStr, BYTE* PropertyValue, BYTE* DefaultValue, INT PortFlags ) const
{
	
}

const TCHAR* UFloatProperty::ImportText( const TCHAR* Buffer, BYTE* Data, INT PortFlags ) const
{
	return nullptr;
}

void UFloatProperty::CopySingleValue( void* Dest, void* Src ) const
{
	
}

void UFloatProperty::CopyCompleteValue( void* Dest, void* Src ) const
{
	
}

IMPLEMENT_CLASS(UObjectProperty)
void UObjectProperty::Serialize( FArchive& Ar )
{
	
}

// UProperty interface.
void UObjectProperty::Link( FArchive& Ar, UProperty* Prev )
{
	
}

UBOOL UObjectProperty::Identical( const void* A, const void* B ) const
{
	return 0;
}

void UObjectProperty::SerializeItem( FArchive& Ar, void* Value ) const
{
	
}

UBOOL UObjectProperty::NetSerializeItem( FArchive& Ar, UPackageMap* Map, void* Data ) const
{
	return 0;
}

void UObjectProperty::ExportCppItem( FOutputDevice& Out ) const
{
	
}

void UObjectProperty::ExportTextItem( TCHAR* ValueStr, BYTE* PropertyValue, BYTE* DefaultValue, INT PortFlags ) const
{
	
}

const TCHAR* UObjectProperty::ImportText( const TCHAR* Buffer, BYTE* Data, INT PortFlags ) const
{
	return nullptr;
}

void UObjectProperty::CopySingleValue( void* Dest, void* Src ) const
{
	
}

void UObjectProperty::CopyCompleteValue( void* Dest, void* Src ) const
{
	
}

IMPLEMENT_CLASS(UClassProperty)
void UClassProperty::Serialize(FArchive &Ar)
{
	
}

const TCHAR* UClassProperty::ImportText( const TCHAR* Buffer, BYTE* Data, INT PortFlags ) const
{
	return nullptr;
}

IMPLEMENT_CLASS(UNameProperty)
void UNameProperty::Link( FArchive& Ar, UProperty* Prev )
{
	
}

UBOOL UNameProperty::Identical( const void* A, const void* B ) const
{
	return 0;
}

void UNameProperty::SerializeItem( FArchive& Ar, void* Value ) const
{
	
}

void UNameProperty::ExportCppItem( FOutputDevice& Out ) const
{
	
}

void UNameProperty::ExportTextItem( TCHAR* ValueStr, BYTE* PropertyValue, BYTE* DefaultValue, INT PortFlags ) const
{
	
}

const TCHAR* UNameProperty::ImportText( const TCHAR* Buffer, BYTE* Data, INT PortFlags ) const
{
	return nullptr;
}

void UNameProperty::CopySingleValue( void* Dest, void* Src ) const
{
	
}

void UNameProperty::CopyCompleteValue( void* Dest, void* Src ) const
{
	
}

IMPLEMENT_CLASS(UStrProperty)
void UStrProperty::Serialize( FArchive& Ar )
{
	
}

// UProperty interface.
void UStrProperty::Link( FArchive& Ar, UProperty* Prev )
{
	
}

UBOOL UStrProperty::Identical( const void* A, const void* B ) const
{
	return 0;
}

void UStrProperty::SerializeItem( FArchive& Ar, void* Value ) const
{
	
}

void UStrProperty::ExportCppItem( FOutputDevice& Out ) const
{
	
}

void UStrProperty::ExportTextItem( TCHAR* ValueStr, BYTE* PropertyValue, BYTE* DefaultValue, INT PortFlags ) const
{
	
}

const TCHAR* UStrProperty::ImportText( const TCHAR* Buffer, BYTE* Data, INT PortFlags ) const
{
	return nullptr;
}

void UStrProperty::CopySingleValue( void* Dest, void* Src ) const
{
	
}

void UStrProperty::DestroyValue( void* Dest ) const
{
	
}

