#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Text { struct EncoderNLS; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Text
{
	struct EncoderFallbackBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t* charStart;
		wchar_t* charEnd;
		mscorlib::System::Text::EncoderNLS* encoder;
		bool setEncoder;
		bool bUsedEncoder;
		bool bFallingBack;
		int32_t iRecursionCount;
		bool Fallback(wchar_t charUnknown, int32_t index);
		bool Fallback(wchar_t charUnknownHigh, wchar_t charUnknownLow, int32_t index);
		wchar_t GetNextChar();
		bool MovePrevious();
		int32_t get_Remaining();
		void Reset();
		void InternalReset();
		void InternalInitialize(wchar_t* charStart, wchar_t* charEnd, mscorlib::System::Text::EncoderNLS* encoder, bool setEncoder);
		wchar_t InternalGetNextChar();
		bool InternalFallback(wchar_t ch, wchar_t& chars);
		void ThrowLastCharRecursive(int32_t charRecursive);
		void _ctor();
	};
}

