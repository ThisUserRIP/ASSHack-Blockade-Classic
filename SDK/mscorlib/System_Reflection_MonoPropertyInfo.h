#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "System_Reflection_PropertyAttributes.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct MonoProperty; };
#include "System_Reflection_PInfo.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Reflection
{
	struct MonoPropertyInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* parent;
		mscorlib::System::Type* declaring_type;
		mscorlib::System::String* name;
		mscorlib::System::Reflection::MethodInfo* get_method;
		mscorlib::System::Reflection::MethodInfo* set_method;
		mscorlib::System::Reflection::PropertyAttributes attrs;
		static void get_property_info(mscorlib::System::Reflection::MonoProperty* prop, mscorlib::System::Reflection::MonoPropertyInfo& info, mscorlib::System::Reflection::PInfo req_info);
		static IL2CPP::Array<mscorlib::System::Type*>* GetTypeModifiers(mscorlib::System::Reflection::MonoProperty* prop, bool optional);
		static mscorlib::System::Object* get_default_value(mscorlib::System::Reflection::MonoProperty* prop);
	};
}

