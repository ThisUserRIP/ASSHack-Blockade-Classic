#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_EncoderFallbackBuffer.h"
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct EncoderReplacementFallback; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };

namespace mscorlib::System::Text
{
	struct EncoderReplacementFallbackBuffer : mscorlib::System::Text::EncoderFallbackBuffer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* strDefault;
		int32_t fallbackCount;
		int32_t fallbackIndex;
		void _ctor(mscorlib::System::Text::EncoderReplacementFallback* fallback);
		bool Fallback(wchar_t charUnknown, int32_t index);
		bool Fallback(wchar_t charUnknownHigh, wchar_t charUnknownLow, int32_t index);
		wchar_t GetNextChar();
		bool MovePrevious();
		int32_t get_Remaining();
		void Reset();
	};
}

