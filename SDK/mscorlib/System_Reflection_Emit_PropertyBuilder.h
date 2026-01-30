#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_PropertyInfo.h"
#include "System_Reflection_PropertyAttributes.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System { struct Object; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Reflection::Emit
{
	struct PropertyBuilder : mscorlib::System::Reflection::PropertyInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::PropertyAttributes get_Attributes();
		bool get_CanRead();
		bool get_CanWrite();
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::String* get_Name();
		mscorlib::System::Type* get_PropertyType();
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetIndexParameters();
		mscorlib::System::Type* get_ReflectedType();
		IL2CPP::Array<mscorlib::System::Reflection::MethodInfo*>* GetAccessors(bool nonPublic);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		mscorlib::System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);
		mscorlib::System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);
		mscorlib::System::Object* GetValue(mscorlib::System::Object* obj, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* index, mscorlib::System::Globalization::CultureInfo* culture);
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		void SetValue(mscorlib::System::Object* obj, mscorlib::System::Object* value, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* index, mscorlib::System::Globalization::CultureInfo* culture);
	};
}

