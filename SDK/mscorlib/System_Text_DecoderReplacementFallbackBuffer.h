#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_DecoderFallbackBuffer.h"
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct DecoderReplacementFallback; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };

namespace mscorlib::System::Text
{
	struct DecoderReplacementFallbackBuffer : mscorlib::System::Text::DecoderFallbackBuffer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* strDefault;
		int32_t fallbackCount;
		int32_t fallbackIndex;
		void _ctor(mscorlib::System::Text::DecoderReplacementFallback* fallback);
		bool Fallback(IL2CPP::Array<uint8_t>* bytesUnknown, int32_t index);
		wchar_t GetNextChar();
		int32_t get_Remaining();
		void Reset();
		int32_t InternalFallback(IL2CPP::Array<uint8_t>* bytes, uint8_t* pBytes);
	};
}

