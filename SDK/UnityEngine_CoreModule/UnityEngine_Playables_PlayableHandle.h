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
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct Object; };
#include "UnityEngine_Playables_PlayableGraph.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableGraph; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct PlayableHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Handle;
		uint32_t m_Version;
		template <typename T> bool IsPlayableOfType()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPlayableOfType");
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
		static UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle get_Null();
		bool SetInputWeight(int32_t inputIndex, float weight);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle x, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle y);
		bool Equals(mscorlib::System::Object* p);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle other);
		int32_t GetHashCode();
		static bool CompareVersion(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle lhs, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle rhs);
		bool CheckInputBounds(int32_t inputIndex);
		bool CheckInputBounds(int32_t inputIndex, bool acceptAny);
		bool IsValid();
		mscorlib::System::Type* GetPlayableType();
		mscorlib::System::Type* GetJobType();
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph GetGraph();
		int32_t GetInputCount();
		void SetInputCount(int32_t value);
		intptr_t GetJobData();
		void SetInputWeightFromIndex(int32_t index, float weight);
		static void _cctor();
		static bool IsValid_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& _unity_self);
		static mscorlib::System::Type* GetPlayableType_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& _unity_self);
		static mscorlib::System::Type* GetJobType_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& _unity_self);
		static void GetGraph_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& _unity_self, UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& ret);
		static int32_t GetInputCount_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& _unity_self);
		static void SetInputCount_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& _unity_self, int32_t value);
		static intptr_t GetJobData_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& _unity_self);
		static void SetInputWeightFromIndex_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& _unity_self, int32_t index, float weight);
	};
	bool operator==(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& x, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& y);
}

