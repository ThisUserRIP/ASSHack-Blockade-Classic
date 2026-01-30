#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Reflection
{
	struct CustomAttributeTypedArgument
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* argumentType;
		mscorlib::System::Object* value;
		void _ctor(mscorlib::System::Type* argumentType, mscorlib::System::Object* value);
		mscorlib::System::Object* get_Value();
		mscorlib::System::String* ToString();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

