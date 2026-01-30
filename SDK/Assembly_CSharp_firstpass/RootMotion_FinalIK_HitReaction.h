#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_OffsetModifier.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReaction_HitPointEffector; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReaction_HitPointBone; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct HitReaction : Assembly_CSharp_firstpass::RootMotion::FinalIK::OffsetModifier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReaction_HitPointEffector*>* effectorHitPoints;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReaction_HitPointBone*>* boneHitPoints;
		bool get_inProgress();
		void OnModifyOffset();
		void Hit(UnityEngine_PhysicsModule::UnityEngine::Collider* collider, UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_CoreModule::UnityEngine::Vector3 point);
		void _ctor();
	};
}

