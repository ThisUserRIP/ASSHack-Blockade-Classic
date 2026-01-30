#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "RootMotion_FinalIK_Grounding_Quality.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Grounding_Leg; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Grounding_Pelvis; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct Grounding : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::LayerMask layers;
		float maxStep;
		float heightOffset;
		float footSpeed;
		float footRadius;
		float footCenterOffset;
		float prediction;
		float footRotationWeight;
		float footRotationSpeed;
		float maxFootRotationAngle;
		bool rotateSolver;
		float pelvisSpeed;
		float pelvisDamper;
		float lowerPelvisWeight;
		float liftPelvisWeight;
		float rootSphereCastRadius;
		bool overstepFallsDown;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Quality quality;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Leg*>* _legs_k__BackingField;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Pelvis* _pelvis_k__BackingField;
		bool _isGrounded_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* _root_k__BackingField;
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit _rootHit_k__BackingField;
		bool initiated;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Leg*>* get_legs();
		void set_legs(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Leg*>* value);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Pelvis* get_pelvis();
		void set_pelvis(Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Pelvis* value);
		bool get_isGrounded();
		void set_isGrounded(bool value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_root();
		void set_root(UnityEngine_CoreModule::UnityEngine::Transform* value);
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit get_rootHit();
		void set_rootHit(UnityEngine_PhysicsModule::UnityEngine::RaycastHit value);
		bool get_rootGrounded();
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit GetRootHit(float maxDistanceMlp);
		bool IsValid(mscorlib::System::String& errorMessage);
		void Initiate(UnityEngine_CoreModule::UnityEngine::Transform* root, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* feet);
		void Update();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLegsPlaneNormal();
		void Reset();
		void LogWarning(mscorlib::System::String* message);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_up();
		float GetVerticalOffset(UnityEngine_CoreModule::UnityEngine::Vector3 p1, UnityEngine_CoreModule::UnityEngine::Vector3 p2);
		UnityEngine_CoreModule::UnityEngine::Vector3 Flatten(UnityEngine_CoreModule::UnityEngine::Vector3 v);
		bool get_useRootRotation();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetFootCenterOffset();
		void _ctor();
	};
}

