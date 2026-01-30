#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_DecoderFallbackBuffer.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Text { struct InternalDecoderBestFitFallback; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Text
{
	struct InternalDecoderBestFitFallbackBuffer : mscorlib::System::Text::DecoderFallbackBuffer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t cBestFit;
		int32_t iCount;
		int32_t iSize;
		mscorlib::System::Text::InternalDecoderBestFitFallback* oFallback;
		struct StaticFields
		{
			mscorlib::System::Object* s_InternalSyncObject;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Object* get_InternalSyncObject();
		void _ctor(mscorlib::System::Text::InternalDecoderBestFitFallback* fallback);
		bool Fallback(IL2CPP::Array<uint8_t>* bytesUnknown, int32_t index);
		wchar_t GetNextChar();
		int32_t get_Remaining();
		void Reset();
		int32_t InternalFallback(IL2CPP::Array<uint8_t>* bytes, uint8_t* pBytes);
		wchar_t TryBestFit(IL2CPP::Array<uint8_t>* bytesCheck);
	};
}

