#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_CustomAttributeTypedArgument.h"
namespace mscorlib::System::Reflection { struct CustomAttributeTypedArgument; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Reflection
{
	struct CustomAttributeNamedArgument
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::CustomAttributeTypedArgument typedArgument;
		mscorlib::System::Reflection::MemberInfo* memberInfo;
		void _ctor(mscorlib::System::Reflection::MemberInfo* memberInfo, mscorlib::System::Object* value);
		mscorlib::System::Reflection::MemberInfo* get_MemberInfo();
		mscorlib::System::Reflection::CustomAttributeTypedArgument get_TypedValue();
		mscorlib::System::String* ToString();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

