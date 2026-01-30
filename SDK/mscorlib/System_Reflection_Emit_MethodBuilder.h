#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_MethodInfo.h"
#include "System_Reflection_MethodAttributes.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };
#include "System_RuntimeMethodHandle.h"
namespace mscorlib::System { struct RuntimeMethodHandle; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Reflection_MethodImplAttributes.h"
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };

namespace mscorlib::System::Reflection::Emit
{
	struct MethodBuilder : mscorlib::System::Reflection::MethodInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::MethodAttributes get_Attributes();
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::String* get_Name();
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetParameters();
		mscorlib::System::RuntimeMethodHandle get_MethodHandle();
		mscorlib::System::Type* get_ReflectedType();
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		mscorlib::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
		mscorlib::System::Object* Invoke(mscorlib::System::Object* obj, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* parameters, mscorlib::System::Globalization::CultureInfo* culture);
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
	};
}

