#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Playables_PlayableHandle.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableHandle; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Playables_PlayableGraph.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableGraph; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace UnityEngine_AnimationModule::UnityEngine::Animations
{
	struct AnimationScriptPlayable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle m_Handle;
		template <typename T> static UnityEngine_AnimationModule::UnityEngine::Animations::AnimationScriptPlayable Create(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, T* jobData, int32_t inputCount)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "UnityEngine.Playables.PlayableGraph", GetGenericTypeName<T>(), "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&graph;
			params[1] = (intptr_t)jobData;
			params[2] = (intptr_t)&inputCount;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				UnityEngine_AnimationModule::UnityEngine::Animations::AnimationScriptPlayable ret;
				std::memset(&ret, 0, sizeof(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationScriptPlayable));
				return ret;
			}
			return static_cast<UnityEngine_AnimationModule::UnityEngine::Animations::AnimationScriptPlayable>(*(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationScriptPlayable*)il2cpp_object_unbox(returnValue));
		}
		template <typename T> static UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateHandle", std::vector<std::string> { "UnityEngine.Playables.PlayableGraph", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&graph;
			params[1] = (intptr_t)&inputCount;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle ret;
				std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle));
				return ret;
			}
			return static_cast<UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle>(*(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle*)il2cpp_object_unbox(returnValue));
		}
		void _ctor(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle handle);
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle GetHandle();
		template <typename T> void CheckJobTypeValidity()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckJobTypeValidity");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void SetJobData(T* jobData)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetJobData", std::vector<std::string> { GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)jobData;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		bool Equals(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationScriptPlayable other);
		static bool CreateHandleInternal(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& handle, intptr_t jobReflectionData);
		static void _cctor();
		static bool CreateHandleInternal_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& graph, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& handle, intptr_t jobReflectionData);
	};
}

