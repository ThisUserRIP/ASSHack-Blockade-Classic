#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_MemberInfo.h"
#include "System_Reflection_PropertyAttributes.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Reflection_MemberTypes.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };
namespace mscorlib::System { struct Object; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System { struct NotImplementedException; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "Mono_RuntimePropertyHandle.h"
namespace mscorlib::Mono { struct RuntimePropertyHandle; };
#include "System_RuntimeTypeHandle.h"
namespace mscorlib::System { struct RuntimeTypeHandle; };

namespace mscorlib::System::Reflection
{
	struct PropertyInfo : mscorlib::System::Reflection::MemberInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::PropertyAttributes get_Attributes();
		bool get_CanRead();
		bool get_CanWrite();
		mscorlib::System::Reflection::MemberTypes get_MemberType();
		mscorlib::System::Type* get_PropertyType();
		void _ctor();
		IL2CPP::Array<mscorlib::System::Reflection::MethodInfo*>* GetAccessors(bool nonPublic);
		mscorlib::System::Reflection::MethodInfo* GetGetMethod();
		mscorlib::System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetIndexParameters();
		mscorlib::System::Reflection::MethodInfo* GetSetMethod();
		mscorlib::System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);
		mscorlib::System::Object* GetValue(mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Object*>* index);
		mscorlib::System::Object* GetValue(mscorlib::System::Object* obj);
		mscorlib::System::Object* GetValue(mscorlib::System::Object* obj, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* index, mscorlib::System::Globalization::CultureInfo* culture);
		void SetValue(mscorlib::System::Object* obj, mscorlib::System::Object* value, IL2CPP::Array<mscorlib::System::Object*>* index);
		void SetValue(mscorlib::System::Object* obj, mscorlib::System::Object* value, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* index, mscorlib::System::Globalization::CultureInfo* culture);
		IL2CPP::Array<mscorlib::System::Type*>* GetOptionalCustomModifiers();
		IL2CPP::Array<mscorlib::System::Type*>* GetRequiredCustomModifiers();
		static mscorlib::System::NotImplementedException* CreateNIE();
		mscorlib::System::Object* GetConstantValue();
		mscorlib::System::Object* GetRawConstantValue();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static bool op_Equality(mscorlib::System::Reflection::PropertyInfo* left, mscorlib::System::Reflection::PropertyInfo* right);
		static bool op_Inequality(mscorlib::System::Reflection::PropertyInfo* left, mscorlib::System::Reflection::PropertyInfo* right);
		static mscorlib::System::Reflection::PropertyInfo* internal_from_handle_type(intptr_t event_handle, intptr_t type_handle);
		static mscorlib::System::Reflection::PropertyInfo* GetPropertyFromHandle(mscorlib::Mono::RuntimePropertyHandle handle, mscorlib::System::RuntimeTypeHandle reflectedType);
	};
	bool operator==(mscorlib::System::Reflection::PropertyInfo& left, mscorlib::System::Reflection::PropertyInfo& right);
	bool operator!=(mscorlib::System::Reflection::PropertyInfo& left, mscorlib::System::Reflection::PropertyInfo& right);
}

