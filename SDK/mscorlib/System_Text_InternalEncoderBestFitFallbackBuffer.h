#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_EncoderFallbackBuffer.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Text { struct InternalEncoderBestFitFallback; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Text
{
	struct InternalEncoderBestFitFallbackBuffer : mscorlib::System::Text::EncoderFallbackBuffer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t cBestFit;
		mscorlib::System::Text::InternalEncoderBestFitFallback* oFallback;
		int32_t iCount;
		int32_t iSize;
		struct StaticFields
		{
			mscorlib::System::Object* s_InternalSyncObject;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Object* get_InternalSyncObject();
		void _ctor(mscorlib::System::Text::InternalEncoderBestFitFallback* fallback);
		bool Fallback(wchar_t charUnknown, int32_t index);
		bool Fallback(wchar_t charUnknownHigh, wchar_t charUnknownLow, int32_t index);
		wchar_t GetNextChar();
		bool MovePrevious();
		int32_t get_Remaining();
		void Reset();
		wchar_t TryBestFit(wchar_t cUnknown);
	};
}

