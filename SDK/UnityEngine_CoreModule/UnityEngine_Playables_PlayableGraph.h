#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Playables_PlayableHandle.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableHandle; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct PlayableGraph
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Handle;
		uint32_t m_Version;
		template <typename U, typename V> bool Connect(U* source, int32_t sourceOutputPort, V* destination, int32_t destinationInputPort)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { GetGenericTypeName<U>(), "System.Int32", GetGenericTypeName<V>(), "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = U::GetIl2CppType();
			typeArguments->vector[1] = V::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)source;
			params[1] = (intptr_t)&sourceOutputPort;
			params[2] = (intptr_t)destination;
			params[3] = (intptr_t)&destinationInputPort;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		static UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph Create(mscorlib::System::String* name);
		void Destroy();
		void Play();
		bool ConnectInternal(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle source, int32_t sourceOutputPort, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle destination, int32_t destinationInputPort);
		static void Create_Injected(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& ret);
		static void Destroy_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& _unity_self);
		static void Play_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& _unity_self);
		static bool ConnectInternal_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& _unity_self, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& source, int32_t sourceOutputPort, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& destination, int32_t destinationInputPort);
	};
}

