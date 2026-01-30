#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "Unity_Collections_NativeSlice_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeSlice_1; };
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe
{
	struct NativeSliceUnsafeUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		template <typename T> static UnityEngine_CoreModule::Unity::Collections::NativeSlice_1<T> ConvertExistingDataToNativeSlice(void* dataPointer, int32_t stride, int32_t length)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertExistingDataToNativeSlice", std::vector<std::string> { "System.Void*", "System.Int32", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)dataPointer;
			params[1] = (intptr_t)&stride;
			params[2] = (intptr_t)&length;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				UnityEngine_CoreModule::Unity::Collections::NativeSlice_1<T> ret;
				std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Collections::NativeSlice_1<T>));
				return ret;
			}
			return static_cast<UnityEngine_CoreModule::Unity::Collections::NativeSlice_1<T>>(*(UnityEngine_CoreModule::Unity::Collections::NativeSlice_1<T>*)il2cpp_object_unbox(returnValue));
		}
	};
}

