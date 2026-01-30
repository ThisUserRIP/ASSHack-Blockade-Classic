#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_MethodAttributes.h"
#include "System_Reflection_MethodImplAttributes.h"
#include "System_Reflection_CallingConventions.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };
namespace mscorlib::System::Reflection { struct MemberInfo; };

namespace mscorlib::System::Reflection
{
	struct MonoMethodInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* parent;
		mscorlib::System::Type* ret;
		mscorlib::System::Reflection::MethodAttributes attrs;
		mscorlib::System::Reflection::MethodImplAttributes iattrs;
		mscorlib::System::Reflection::CallingConventions callconv;
		static void get_method_info(intptr_t handle, mscorlib::System::Reflection::MonoMethodInfo& info);
		static int32_t get_method_attributes(intptr_t handle);
		static mscorlib::System::Reflection::MonoMethodInfo GetMethodInfo(intptr_t handle);
		static mscorlib::System::Type* GetDeclaringType(intptr_t handle);
		static mscorlib::System::Type* GetReturnType(intptr_t handle);
		static mscorlib::System::Reflection::MethodAttributes GetAttributes(intptr_t handle);
		static mscorlib::System::Reflection::CallingConventions GetCallingConvention(intptr_t handle);
		static mscorlib::System::Reflection::MethodImplAttributes GetMethodImplementationFlags(intptr_t handle);
		static IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* get_parameter_info(intptr_t handle, mscorlib::System::Reflection::MemberInfo* member);
		static IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetParametersInfo(intptr_t handle, mscorlib::System::Reflection::MemberInfo* member);
	};
}

