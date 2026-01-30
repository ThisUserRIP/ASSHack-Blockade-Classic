#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_TermInfoNumbers.h"
#include "System_TermInfoStrings.h"

namespace mscorlib::System
{
	struct TermInfoReader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t boolSize;
		int32_t numSize;
		int32_t strOffsets;
		IL2CPP::Array<uint8_t>* buffer;
		int32_t booleansOffset;
		int32_t intOffset;
		void _ctor(mscorlib::System::String* term, mscorlib::System::String* filename);
		void _ctor(mscorlib::System::String* term, IL2CPP::Array<uint8_t>* buffer);
		void DetermineVersion(int16_t magic);
		void ReadHeader(IL2CPP::Array<uint8_t>* buffer, int32_t& position);
		void ReadNames(IL2CPP::Array<uint8_t>* buffer, int32_t& position);
		int32_t Get(mscorlib::System::TermInfoNumbers number);
		mscorlib::System::String* Get(mscorlib::System::TermInfoStrings tstr);
		IL2CPP::Array<uint8_t>* GetStringBytes(mscorlib::System::TermInfoStrings tstr);
		int16_t GetInt16(IL2CPP::Array<uint8_t>* buffer, int32_t offset);
		int32_t GetInt32(IL2CPP::Array<uint8_t>* buffer, int32_t offset);
		int32_t GetInteger(IL2CPP::Array<uint8_t>* buffer, int32_t offset);
		mscorlib::System::String* GetString(IL2CPP::Array<uint8_t>* buffer, int32_t offset);
		IL2CPP::Array<uint8_t>* GetStringBytes(IL2CPP::Array<uint8_t>* buffer, int32_t offset);
	};
}

