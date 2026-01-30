#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_MemberInfo.h"
#include "System_RuntimeMethodHandle.h"
namespace mscorlib::System { struct RuntimeMethodHandle; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };
#include "System_Reflection_MethodImplAttributes.h"
#include "System_Reflection_MethodAttributes.h"
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Reflection_CallingConventions.h"
namespace mscorlib::System::Reflection { struct MethodBody; };
namespace mscorlib::System { struct String; };
#include "System_RuntimeTypeHandle.h"
namespace mscorlib::System { struct RuntimeTypeHandle; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace mscorlib::System::Reflection
{
	struct MethodBase : mscorlib::System::Reflection::MemberInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Reflection::MethodBase* GetMethodFromHandle(mscorlib::System::RuntimeMethodHandle handle);
		void _ctor();
		static bool op_Equality(mscorlib::System::Reflection::MethodBase* left, mscorlib::System::Reflection::MethodBase* right);
		static bool op_Inequality(mscorlib::System::Reflection::MethodBase* left, mscorlib::System::Reflection::MethodBase* right);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetParametersNoCopy();
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetParameters();
		mscorlib::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
		mscorlib::System::RuntimeMethodHandle get_MethodHandle();
		mscorlib::System::Reflection::MethodAttributes get_Attributes();
		mscorlib::System::Object* Invoke(mscorlib::System::Object* obj, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* parameters, mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::Reflection::CallingConventions get_CallingConvention();
		IL2CPP::Array<mscorlib::System::Type*>* GetGenericArguments();
		bool get_IsGenericMethodDefinition();
		bool get_ContainsGenericParameters();
		bool get_IsGenericMethod();
		bool get_IsSecurityCritical();
		mscorlib::System::Object* Invoke(mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Object*>* parameters);
		bool get_IsPublic();
		bool get_IsStatic();
		bool get_IsVirtual();
		bool get_IsAbstract();
		bool get_IsConstructor();
		mscorlib::System::Reflection::MethodBody* GetMethodBody();
		static mscorlib::System::String* ConstructParameters(IL2CPP::Array<mscorlib::System::Type*>* parameterTypes, mscorlib::System::Reflection::CallingConventions callingConvention, bool serialization);
		mscorlib::System::String* FormatNameAndSig(bool serialization);
		IL2CPP::Array<mscorlib::System::Type*>* GetParameterTypes();
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetParametersInternal();
		int32_t GetParametersCount();
		static mscorlib::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(mscorlib::System::RuntimeMethodHandle handle);
		static mscorlib::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(mscorlib::System::RuntimeMethodHandle handle, mscorlib::System::RuntimeTypeHandle reflectedType);
		static mscorlib::System::Reflection::MethodBody* GetMethodBodyInternal(intptr_t handle);
		static mscorlib::System::Reflection::MethodBody* GetMethodBody(intptr_t handle);
		static mscorlib::System::Reflection::MethodBase* GetMethodFromHandleInternalType(intptr_t method_handle, intptr_t type_handle);
		static mscorlib::System::Reflection::MethodBase* GetMethodFromHandleInternalType_native(intptr_t method_handle, intptr_t type_handle, bool genericCheck);
	};
	bool operator==(mscorlib::System::Reflection::MethodBase& left, mscorlib::System::Reflection::MethodBase& right);
	bool operator!=(mscorlib::System::Reflection::MethodBase& left, mscorlib::System::Reflection::MethodBase& right);
}

