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
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Playables_PlayableHandle.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableHandle; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct PlayableOutputHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Handle;
		uint32_t m_Version;
		static UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle get_Null();
		template <typename T> bool IsPlayableOutputOfType()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPlayableOutputOfType");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		int32_t GetHashCode();
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle lhs, UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle rhs);
		bool Equals(mscorlib::System::Object* p);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle other);
		static bool CompareVersion(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle lhs, UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle rhs);
		bool IsValid();
		mscorlib::System::Type* GetPlayableOutputType();
		void SetSourcePlayable(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle target, int32_t port);
		int32_t GetSourceOutputPort();
		static void _cctor();
		static bool IsValid_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& _unity_self);
		static mscorlib::System::Type* GetPlayableOutputType_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& _unity_self);
		static void SetSourcePlayable_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& _unity_self, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& target, int32_t port);
		static int32_t GetSourceOutputPort_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& _unity_self);
	};
	bool operator==(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& lhs, UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& rhs);
}

