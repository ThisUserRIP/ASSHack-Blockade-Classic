#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_OffsetModifierVRIK.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReactionVRIK_PositionOffset; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReactionVRIK_RotationOffset; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct HitReactionVRIK : Assembly_CSharp_firstpass::RootMotion::FinalIK::OffsetModifierVRIK
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::AnimationCurve*>* offsetCurves;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReactionVRIK_PositionOffset*>* positionOffsets;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReactionVRIK_RotationOffset*>* rotationOffsets;
		void OnModifyOffset();
		void Hit(UnityEngine_PhysicsModule::UnityEngine::Collider* collider, UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_CoreModule::UnityEngine::Vector3 point);
		void _ctor();
	};
}

