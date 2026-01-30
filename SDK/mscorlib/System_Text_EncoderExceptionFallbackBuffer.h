#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_EncoderFallbackBuffer.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Text
{
	struct EncoderExceptionFallbackBuffer : mscorlib::System::Text::EncoderFallbackBuffer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		bool Fallback(wchar_t charUnknown, int32_t index);
		bool Fallback(wchar_t charUnknownHigh, wchar_t charUnknownLow, int32_t index);
		wchar_t GetNextChar();
		bool MovePrevious();
		int32_t get_Remaining();
	};
}

