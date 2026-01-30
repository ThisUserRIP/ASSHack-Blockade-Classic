#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct AnimationStream; };
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct AnimationStream; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Animations_AnimationStream.h"

namespace UnityEngine_AnimationModule::UnityEngine::Animations
{
	struct PropertySceneHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t valid;
		int32_t handleIndex;
		bool get_createdByNative();
		bool get_hasHandleIndex();
		void CheckIsValid(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		float GetFloat(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		int32_t GetInt(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		bool GetBool(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		bool HasValidTransform(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		float GetFloatInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		int32_t GetIntInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		bool GetBoolInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		static bool HasValidTransform_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		static float GetFloatInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		static int32_t GetIntInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		static bool GetBoolInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
	};
}

