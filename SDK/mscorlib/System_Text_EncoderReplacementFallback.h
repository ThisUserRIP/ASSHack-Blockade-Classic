#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_EncoderFallback.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct EncoderFallbackBuffer; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Text
{
	struct EncoderReplacementFallback : mscorlib::System::Text::EncoderFallback
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* strDefault;
		void _ctor();
		void _ctor(mscorlib::System::String* replacement);
		mscorlib::System::String* get_DefaultString();
		mscorlib::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
		int32_t get_MaxCharCount();
		bool Equals(mscorlib::System::Object* value);
		int32_t GetHashCode();
	};
}

