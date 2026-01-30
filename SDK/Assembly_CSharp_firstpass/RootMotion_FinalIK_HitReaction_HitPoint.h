#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_HitReaction.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReaction; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBodyBiped; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct HitReaction_HitPoint : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		UnityEngine_PhysicsModule::UnityEngine::Collider* collider;
		float crossFadeTime;
		float _crossFader_k__BackingField;
		float _timer_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 _force_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 _point_k__BackingField;
		float length;
		float crossFadeSpeed;
		float lastTime;
		bool get_inProgress();
		float get_crossFader();
		void set_crossFader(float value);
		float get_timer();
		void set_timer(float value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_force();
		void set_force(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_point();
		void set_point(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void Hit(UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_CoreModule::UnityEngine::Vector3 point);
		void Apply(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
		float GetLength();
		void CrossFadeStart();
		void OnApply(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
		void _ctor();
	};
}

