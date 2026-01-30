#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Color32
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t rgba;
		uint8_t r;
		uint8_t g;
		uint8_t b;
		uint8_t a;
		void _ctor(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
		static UnityEngine_CoreModule::UnityEngine::Color32 op_Implicit(UnityEngine_CoreModule::UnityEngine::Color c);
		static UnityEngine_CoreModule::UnityEngine::Color op_Implicit(UnityEngine_CoreModule::UnityEngine::Color32 c);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
	};
}

