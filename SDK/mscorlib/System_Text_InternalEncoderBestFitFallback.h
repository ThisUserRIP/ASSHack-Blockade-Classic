#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_EncoderFallback.h"
namespace mscorlib::System::Text { struct Encoding; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
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
	struct InternalEncoderBestFitFallback : mscorlib::System::Text::EncoderFallback
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Text::Encoding* encoding;
		IL2CPP::Array<wchar_t>* arrayBestFit;
		void _ctor(mscorlib::System::Text::Encoding* encoding);
		mscorlib::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
		int32_t get_MaxCharCount();
		bool Equals(mscorlib::System::Object* value);
		int32_t GetHashCode();
	};
}

