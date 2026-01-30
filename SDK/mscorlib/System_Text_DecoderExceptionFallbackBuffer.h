#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_DecoderFallbackBuffer.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Text
{
	struct DecoderExceptionFallbackBuffer : mscorlib::System::Text::DecoderFallbackBuffer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Fallback(IL2CPP::Array<uint8_t>* bytesUnknown, int32_t index);
		wchar_t GetNextChar();
		int32_t get_Remaining();
		void Throw(IL2CPP::Array<uint8_t>* bytesUnknown, int32_t index);
		void _ctor();
	};
}

