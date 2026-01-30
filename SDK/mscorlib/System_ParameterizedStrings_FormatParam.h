#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ParameterizedStrings.h"
namespace mscorlib::System { struct ParameterizedStrings; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System
{
	struct ParameterizedStrings_FormatParam
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _int32_;
		mscorlib::System::String* _string;
		void _ctor(int32_t value);
		void _ctor(int32_t intValue, mscorlib::System::String* stringValue);
		static mscorlib::System::ParameterizedStrings_FormatParam op_Implicit(int32_t value);
		int32_t get_Int32();
		mscorlib::System::String* get_String();
		mscorlib::System::Object* get_Object();
	};
}

