#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_RuntimeParameterInfo.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Reflection
{
	struct MonoParameterInfo : mscorlib::System::Reflection::RuntimeParameterInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Reflection::ParameterInfo* pinfo, mscorlib::System::Reflection::MemberInfo* member);
		mscorlib::System::Object* get_DefaultValue();
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
	};
}

