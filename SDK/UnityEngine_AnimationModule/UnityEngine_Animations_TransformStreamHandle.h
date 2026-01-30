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
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace UnityEngine_AnimationModule::UnityEngine::Animations
{
	struct TransformStreamHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_AnimatorBindingsVersion;
		int32_t handleIndex;
		int32_t skeletonIndex;
		bool IsValid(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		bool IsValidInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		bool get_createdByNative();
		bool IsSameVersionAsStream(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		bool get_hasHandleIndex();
		bool get_hasSkeletonIndex();
		uint32_t get_animatorBindingsVersion();
		bool IsResolvedInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		void CheckIsValidAndResolve(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPosition(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		UnityEngine_CoreModule::UnityEngine::Quaternion GetRotation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		void SetRotation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		UnityEngine_CoreModule::UnityEngine::Quaternion GetLocalRotation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		void SetLocalRotation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void ResolveInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPositionInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		UnityEngine_CoreModule::UnityEngine::Quaternion GetRotationInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		void SetRotationInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		UnityEngine_CoreModule::UnityEngine::Quaternion GetLocalRotationInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		void SetLocalRotationInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		static void ResolveInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream);
		static void GetPositionInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		static void GetRotationInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		static void SetRotationInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion& rotation);
		static void GetLocalRotationInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		static void SetLocalRotationInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion& rotation);
	};
}

