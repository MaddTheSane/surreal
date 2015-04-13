//
//  UnCamera.cpp
//  Surreal
//
//  Created by C.W. Betts on 7/6/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//

#include <stdlib.h>
#include "Engine.h"

IMPLEMENT_CLASS(UClient);

UClient::UClient()
{
	
}
void UClient::StaticConstructor() { }

void UClient::Init( UEngine* InEngine ) { }
UBOOL UClient::Exec( const TCHAR* Cmd, FOutputDevice& Ar ) {return 0;}

// UObject interface.
void UClient::Serialize( FArchive& Ar )
{
	
}

void UClient::Destroy()
{
	
}

void UClient::PostEditChange()
{
	
}

void UClient::Flush( UBOOL AllowPrecache )
{
	
}

IMPLEMENT_CLASS(UViewport)
UViewport::UViewport()
{
	
}

// UObject interface.
void UViewport::Destroy()
{
	
}

void UViewport::Serialize( FArchive& Ar )
{
	
}

// FArchive interface.
void UViewport::Serialize( const TCHAR* Data, EName MsgType )
{
	
}

// UPlayer interface.
void UViewport::ReadInput( FLOAT DeltaSeconds )
{
	
}

// UViewport interface.
UBOOL UViewport::SetDrag( UBOOL NewDrag )
{
	return 0;
}

UBOOL UViewport::Exec( const TCHAR* Cmd, FOutputDevice& Ar )
{
	return 0;
}

void UViewport::ExecuteHits( const FHitCause& Cause, BYTE* HitData, INT HitSize )
{
	
}

void UViewport::PushHit( const struct HHitProxy& Hit, INT Size )
{
	
}

void UViewport::PopHit( UBOOL bForce )
{
	
}

UBOOL UViewport::IsWire()
{
	return 0;
}

UBOOL UViewport::Lock( FPlane FlashScale, FPlane FlashFog, FPlane ScreenClear, DWORD RenderLockFlags, BYTE* HitData, INT* HitSize )
{
	return 0;
}

void UViewport::Unlock( UBOOL Blit )
{
	
}

void* UViewport::GetServer()
{
	return nullptr;
}

void UViewport::ExecMacro( const TCHAR* Filename, FOutputDevice& Ar )
{

}

IMPLEMENT_CLASS(UCanvas)
void UCanvas::Init( UViewport* InViewport )
{
	
}

void UCanvas::Update( FSceneNode* Frame )
{
	
}
void UCanvas::DrawTile( UTexture* Texture, FLOAT X, FLOAT Y, FLOAT XL, FLOAT YL, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL, class FSpanBuffer* SpanBuffer, FLOAT Z, FPlane Color, FPlane Fog, DWORD PolyFlags )
{
	
}

void UCanvas::DrawIcon( UTexture* Texture, FLOAT ScreenX, FLOAT ScreenY, FLOAT XSize, FLOAT YSize, class FSpanBuffer* SpanBuffer, FLOAT Z, FPlane Color, FPlane Fog, DWORD PolyFlags )
{
	
}

void UCanvas::DrawPattern( UTexture* Texture, FLOAT X, FLOAT Y, FLOAT XL, FLOAT YL, FLOAT Scale, FLOAT OrgX, FLOAT OrgY, class FSpanBuffer* SpanBuffer, FLOAT Z, FPlane Color, FPlane Fog, DWORD PolyFlags )
{
	
}

void UCanvas::WrappedStrLenf( UFont* Font, INT& XL, INT& YL, const TCHAR* Fmt, ... )
{
	
}

void UCanvas::WrappedPrintf( UFont* Font, UBOOL Center, const TCHAR* Fmt, ... )
{
	
}

void UCanvas::SetClip( INT X, INT Y, INT XL, INT YL )
{
	
}

