#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "Unity_Jobs_JobHandle.h"
namespace UnityEngine_CoreModule::Unity::Jobs { struct JobHandle; };

namespace UnityEngine_CoreModule::Unity::Jobs
{
	struct IJobExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		template <typename T> static UnityEngine_CoreModule::Unity::Jobs::JobHandle Schedule(T* jobData, UnityEngine_CoreModule::Unity::Jobs::JobHandle dependsOn)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Schedule", std::vector<std::string> { GetGenericTypeName<T>(), "Unity.Jobs.JobHandle" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)jobData;
			params[1] = (intptr_t)&dependsOn;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				UnityEngine_CoreModule::Unity::Jobs::JobHandle ret;
				std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Jobs::JobHandle));
				return ret;
			}
			return static_cast<UnityEngine_CoreModule::Unity::Jobs::JobHandle>(*(UnityEngine_CoreModule::Unity::Jobs::JobHandle*)il2cpp_object_unbox(returnValue));
		}
	};
}

