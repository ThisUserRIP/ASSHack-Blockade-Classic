#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Text
{
	struct DecoderFallbackBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t* byteStart;
		wchar_t* charEnd;
		bool Fallback(IL2CPP::Array<uint8_t>* bytesUnknown, int32_t index);
		wchar_t GetNextChar();
		int32_t get_Remaining();
		void Reset();
		void InternalReset();
		void InternalInitialize(uint8_t* byteStart, wchar_t* charEnd);
		bool InternalFallback(IL2CPP::Array<uint8_t>* bytes, uint8_t* pBytes, wchar_t& chars);
		int32_t InternalFallback(IL2CPP::Array<uint8_t>* bytes, uint8_t* pBytes);
		void ThrowLastBytesRecursive(IL2CPP::Array<uint8_t>* bytesUnknown);
		void _ctor();
	};
}

