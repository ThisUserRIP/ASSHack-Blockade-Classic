#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_AnimationModule\UnityEngine_Animations_TransformSceneHandle.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct TransformSceneHandle; };
#include "..\UnityEngine_AnimationModule\UnityEngine_Animations_PropertySceneHandle.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct PropertySceneHandle; };
#include "..\UnityEngine_AnimationModule\UnityEngine_Animations_TransformStreamHandle.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct TransformStreamHandle; };
#include "..\UnityEngine_CoreModule\Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
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
	struct CCDIKJob
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle _target;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _IKPositionWeight;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _maxIterations;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _tolerance;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _XY;
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle _useRotationLimits;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle> bones;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle> boneWeights;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Single> boneSqrMags;
		float chainSqrMag;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastLocalDirection;
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
		void Setup(UnityEngine_AnimationModule::UnityEngine::Animator* animator, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones, UnityEngine_CoreModule::UnityEngine::Transform* target);
		void SetUpRotationLimits(UnityEngine_AnimationModule::UnityEngine::Animator* animator, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones);
		void DisposeRotationLimits();
		void ProcessRootMotion(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		void ProcessAnimation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		void Update(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s);
		void Read(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s);
		void Solve(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, bool XY, float weight, int32_t it, bool useRotationLimits);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLocalDirection(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s);
		float GetPositionOffset(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 localDirection);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetSingularityOffset(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition, bool useRotationLimits);
		bool SingularityDetected(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition);
		void Dispose();
	};
}

