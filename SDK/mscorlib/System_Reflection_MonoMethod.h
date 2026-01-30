#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_RuntimeMethodInfo.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct MethodBase; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
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
#include "System_Reflection_PInvokeAttributes.h"
namespace mscorlib::System::Reflection { struct MethodBody; };
namespace mscorlib::System::Reflection { struct CustomAttributeData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace mscorlib::System::Reflection
{
	struct MonoMethod : mscorlib::System::Reflection::RuntimeMethodInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t mhandle;
		mscorlib::System::String* name;
		mscorlib::System::Type* reftype;
		void _ctor();
		static mscorlib::System::String* get_name(mscorlib::System::Reflection::MethodBase* method);
		static mscorlib::System::Reflection::MonoMethod* get_base_method(mscorlib::System::Reflection::MonoMethod* method, bool definition);
		mscorlib::System::Reflection::MethodInfo* GetBaseMethod();
		mscorlib::System::Type* get_ReturnType();
		mscorlib::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetParameters();
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetParametersInternal();
		int32_t GetParametersCount();
		mscorlib::System::Object* InternalInvoke(mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Object*>* parameters, mscorlib::System::Exception& exc);
		mscorlib::System::Object* Invoke(mscorlib::System::Object* obj, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* parameters, mscorlib::System::Globalization::CultureInfo* culture);
		static void ConvertValues(mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* args, IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* pinfo, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Reflection::BindingFlags invokeAttr);
		mscorlib::System::RuntimeMethodHandle get_MethodHandle();
		mscorlib::System::Reflection::MethodAttributes get_Attributes();
		mscorlib::System::Reflection::CallingConventions get_CallingConvention();
		mscorlib::System::Type* get_ReflectedType();
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::String* get_Name();
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		void GetPInvoke(mscorlib::System::Reflection::PInvokeAttributes& flags, mscorlib::System::String& entryPoint, mscorlib::System::String& dllName);
		IL2CPP::Array<mscorlib::System::Object*>* GetPseudoCustomAttributes();
		mscorlib::System::Reflection::MethodInfo* MakeGenericMethod(IL2CPP::Array<mscorlib::System::Type*>* methodInstantiation);
		mscorlib::System::Reflection::MethodInfo* MakeGenericMethod_impl(IL2CPP::Array<mscorlib::System::Type*>* types);
		IL2CPP::Array<mscorlib::System::Type*>* GetGenericArguments();
		mscorlib::System::Reflection::MethodInfo* GetGenericMethodDefinition_impl();
		mscorlib::System::Reflection::MethodInfo* GetGenericMethodDefinition();
		bool get_IsGenericMethodDefinition();
		bool get_IsGenericMethod();
		bool get_ContainsGenericParameters();
		mscorlib::System::Reflection::MethodBody* GetMethodBody();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributesData();
		static int32_t get_core_clr_security_level();
		bool get_IsSecurityCritical();
	};
}

