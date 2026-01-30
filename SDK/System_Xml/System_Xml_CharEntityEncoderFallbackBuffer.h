#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Text_EncoderFallbackBuffer.h"
namespace System_Xml::System::Xml { struct CharEntityEncoderFallback; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };

namespace System_Xml::System::Xml
{
	struct CharEntityEncoderFallbackBuffer : mscorlib::System::Text::EncoderFallbackBuffer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::CharEntityEncoderFallback* parent;
		mscorlib::System::String* charEntity;
		int32_t charEntityIndex;
		void _ctor(System_Xml::System::Xml::CharEntityEncoderFallback* parent);
		bool Fallback(wchar_t charUnknown, int32_t index);
		bool Fallback(wchar_t charUnknownHigh, wchar_t charUnknownLow, int32_t index);
		wchar_t GetNextChar();
		bool MovePrevious();
		int32_t get_Remaining();
		void Reset();
		int32_t SurrogateCharToUtf32(wchar_t highSurrogate, wchar_t lowSurrogate);
	};
}

