#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Array; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_RuntimeFieldHandle.h"
namespace mscorlib::System { struct RuntimeFieldHandle; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_RuntimeTypeHandle.h"
namespace mscorlib::System { struct RuntimeTypeHandle; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct RuntimeHelpers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void InitializeArray(mscorlib::System::Array* array, intptr_t fldHandle);
		static void InitializeArray(mscorlib::System::Array* array, mscorlib::System::RuntimeFieldHandle fldHandle);
		static int32_t get_OffsetToStringData();
		static int32_t GetHashCode(mscorlib::System::Object* o);
		static void RunClassConstructor(intptr_t type);
		static void RunClassConstructor(mscorlib::System::RuntimeTypeHandle type);
		static void PrepareConstrainedRegions();
		template <typename T> static bool IsReferenceOrContainsReferences()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsReferenceOrContainsReferences");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
	};
}

