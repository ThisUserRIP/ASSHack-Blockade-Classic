#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_FullBodyBipedEffector.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Poser; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKEffector; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTarget; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionSystem; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionEffector : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector _effectorType_k__BackingField;
		bool _isPaused_k__BackingField;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* _interactionObject_k__BackingField;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Poser* poser;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* effector;
		float timer;
		float length;
		float weight;
		float fadeInSpeed;
		float defaultPositionWeight;
		float defaultRotationWeight;
		float defaultPull;
		float defaultReach;
		float defaultPush;
		float defaultPushParent;
		float resetTimer;
		bool positionWeightUsed;
		bool rotationWeightUsed;
		bool pullUsed;
		bool reachUsed;
		bool pushUsed;
		bool pushParentUsed;
		bool pickedUp;
		bool defaults;
		bool pickUpOnPostFBBIK;
		UnityEngine_CoreModule::UnityEngine::Vector3 pickUpPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 pausePositionRelative;
		UnityEngine_CoreModule::UnityEngine::Quaternion pickUpRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion pauseRotationRelative;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTarget* interactionTarget;
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Boolean>* triggered;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem* interactionSystem;
		bool started;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector get_effectorType();
		void set_effectorType(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector value);
		bool get_isPaused();
		void set_isPaused(bool value);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* get_interactionObject();
		void set_interactionObject(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* value);
		bool get_inInteraction();
		void _ctor(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType);
		void Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem* interactionSystem);
		void StoreDefaults();
		bool ResetToDefaults(float speed);
		bool Pause();
		bool Resume();
		bool Start(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* interactionObject, mscorlib::System::String* tag, float fadeInTime, bool interrupt);
		void Update(UnityEngine_CoreModule::UnityEngine::Transform* root, float speed);
		float get_progress();
		void TriggerUntriggeredEvents(bool checkTime, bool& pickUp, bool& pause);
		void PickUp(UnityEngine_CoreModule::UnityEngine::Transform* root);
		bool Stop();
		void OnPostFBBIK();
	};
}

