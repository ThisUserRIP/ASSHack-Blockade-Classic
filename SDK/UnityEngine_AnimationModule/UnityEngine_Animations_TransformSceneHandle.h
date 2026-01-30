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
#include "UnityEngine_Animations_AnimationStream.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct AnimationStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace UnityEngine_AnimationModule::UnityEngine::Animations
{
	struct TransformSceneHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t valid;
		int32_t transformSceneHandleDefinitionIndex;
		bool IsValid(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		bool get_createdByNative();
		bool get_hasTransformSceneHandleDefinitionIndex();
		void CheckIsValid(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPosition(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		bool HasValidTransform(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPositionInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		static bool HasValidTransform_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		static void GetPositionInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
	};
}

