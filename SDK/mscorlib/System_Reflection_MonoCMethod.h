#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_RuntimeConstructorInfo.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "System_Reflection_MethodImplAttributes.h"
namespace mscorlib::System::Reflection { struct ParameterInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Exception; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_RuntimeMethodHandle.h"
namespace mscorlib::System { struct RuntimeMethodHandle; };
#include "System_Reflection_MethodAttributes.h"
#include "System_Reflection_CallingConventions.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct MethodBody; };
namespace mscorlib::System::Reflection { struct CustomAttributeData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Reflection
{
	struct MonoCMethod : mscorlib::System::Reflection::RuntimeConstructorInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t mhandle;
		mscorlib::System::String* name;
		mscorlib::System::Type* reftype;
		mscorlib::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetParameters();
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetParametersInternal();
		int32_t GetParametersCount();
		mscorlib::System::Object* InternalInvoke(mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Object*>* parameters, mscorlib::System::Exception& exc);
		mscorlib::System::Object* Invoke(mscorlib::System::Object* obj, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* parameters, mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::Object* DoInvoke(mscorlib::System::Object* obj, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* parameters, mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::Object* InternalInvoke(mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Object*>* parameters);
		mscorlib::System::Object* Invoke(mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* parameters, mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::RuntimeMethodHandle get_MethodHandle();
		mscorlib::System::Reflection::MethodAttributes get_Attributes();
		mscorlib::System::Reflection::CallingConventions get_CallingConvention();
		bool get_ContainsGenericParameters();
		mscorlib::System::Type* get_ReflectedType();
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::String* get_Name();
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		mscorlib::System::Reflection::MethodBody* GetMethodBody();
		mscorlib::System::String* ToString();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributesData();
		static int32_t get_core_clr_security_level();
		bool get_IsSecurityCritical();
		void _ctor();
	};
}

