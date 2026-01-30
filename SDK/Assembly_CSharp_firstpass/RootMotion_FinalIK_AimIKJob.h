#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_AnimationModule\UnityEngine_Animations_TransformSceneHandle.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct TransformSceneHandle; };
#include "..\UnityEngine_AnimationModule\UnityEngine_Animations_TransformStreamHandle.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct TransformStreamHandle; };
#include "..\UnityEngine_AnimationModule\UnityEngine_Animations_PropertySceneHandle.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct PropertySceneHandle; };
#include "..\UnityEngine_CoreModule\Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_AnimationModule\UnityEngine_Animations_AnimationStream.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct AnimationStream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct AimIKJob
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle _target;
		UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle _poleTarget;
		UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle _transform;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _IKPositionWeight;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _poleWeight;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _axisX;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _axisY;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _axisZ;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _poleAxisX;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _poleAxisY;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _poleAxisZ;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _clampWeight;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _clampSmoothing;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _maxIterations;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _tolerance;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _XY;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _useRotationLimits;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle> bones;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle> boneWeights;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastLocalDirection;
		float step;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Quaternion> limitDefaultLocalRotationArray;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Vector3> limitAxisArray;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> hingeFlags;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle> hingeMinArray;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle> hingeMaxArray;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle> hingeUseLimitsArray;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Quaternion> hingeLastRotations;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Single> hingeLastAngles;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> angleFlags;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Vector3> angleSecondaryAxisArray;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle> angleLimitArray;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle> angleTwistLimitArray;
		void Setup(UnityEngine_AnimationModule::UnityEngine::Animator* animator, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones, UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Transform* poleTarget, UnityEngine_CoreModule::UnityEngine::Transform* aimTransform);
		void SetUpRotationLimits(UnityEngine_AnimationModule::UnityEngine::Animator* animator, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones);
		void DisposeRotationLimits();
		void ProcessRootMotion(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		void ProcessAnimation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		void Update(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s);
		void RotateToTarget(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, UnityEngine_CoreModule::UnityEngine::Vector3 polePosition, int32_t i, float weight, float poleWeight, bool XY, bool useRotationLimits, UnityEngine_CoreModule::UnityEngine::Vector3 axis, UnityEngine_CoreModule::UnityEngine::Vector3 poleAxis);
		float GetAngle(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 axis, UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetClampedIKPosition(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, float clampWeight, int32_t clampSmoothing, UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition, UnityEngine_CoreModule::UnityEngine::Vector3 transformPosition, UnityEngine_CoreModule::UnityEngine::Vector3 transformAxis);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLocalDirection(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 transformAxis);
		float GetPositionOffset(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 localDirection);
		void Dispose();
	};
}

