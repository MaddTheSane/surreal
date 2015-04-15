//
//  FCodec.cpp
//  Surreal
//
//  Created by C.W. Betts on 4/13/15.
//  Copyright (c) 2015 C.W. Betts. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Core.h"

FBitWriter::FBitWriter( INT InMaxBits ){}
void FBitWriter::SerializeBits( void* Src, INT LengthBits ) {}
void FBitWriter::SerializeInt( void* Src, DWORD Max ) {}
void FBitWriter::WriteInt( DWORD Result, DWORD Max ) {}
void FBitWriter::WriteBit( BYTE In ) {}
void FBitWriter::Serialize( void* Src, INT LengthBytes ) {}
BYTE* FBitWriter::GetData() {return NULL;}
INT FBitWriter::GetNumBytes() {return 0;}
INT FBitWriter::GetNumBits() {return 0;}
void FBitWriter::SetOverflowed() {}

void FBitWriterMark::Pop( FBitWriter& Writer ) {}

FBitReader::FBitReader( BYTE* Src, INT CountBits ) {}
void FBitReader::SetData( FBitReader& Src, INT CountBits ) {}
void FBitReader::SerializeBits( void* Dest, INT LengthBits ) {}
void FBitReader::SerializeInt( void* Src, DWORD Max ) {}
DWORD FBitReader::ReadInt( DWORD Max ) {return 0;}
BYTE FBitReader::ReadBit() {return 0;}
void FBitReader::Serialize( void* Dest, INT LengthBytes ) {}
BYTE* FBitReader::GetData() {return NULL;}
UBOOL FBitReader::AtEnd() {return true;}
void FBitReader::SetOverflowed() {}
INT FBitReader::GetNumBytes() {return 0;}
INT FBitReader::GetNumBits() {return 0;}
INT FBitReader::GetPosBits() {return 0;}
