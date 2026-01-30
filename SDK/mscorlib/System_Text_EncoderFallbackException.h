#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ArgumentException.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Text
{
	struct EncoderFallbackException : mscorlib::System::ArgumentException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t charUnknown;
		wchar_t charUnknownHigh;
		wchar_t charUnknownLow;
		int32_t index;
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor(mscorlib::System::String* message, wchar_t charUnknown, int32_t index);
		void _ctor(mscorlib::System::String* message, wchar_t charUnknownHigh, wchar_t charUnknownLow, int32_t index);
	};
}

