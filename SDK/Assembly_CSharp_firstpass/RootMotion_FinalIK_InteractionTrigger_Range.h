#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_InteractionTrigger.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTrigger; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTrigger_CharacterPosition; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTrigger_CameraPosition; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTrigger_Range_Interaction; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionTrigger_Range : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		bool show;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger_CharacterPosition* characterPosition;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger_CameraPosition* cameraPosition;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger_Range_Interaction*>* interactions;
		bool IsInRange(UnityEngine_CoreModule::UnityEngine::Transform* character, UnityEngine_CoreModule::UnityEngine::Transform* raycastFrom, UnityEngine_PhysicsModule::UnityEngine::RaycastHit raycastHit, UnityEngine_CoreModule::UnityEngine::Transform* trigger, float& maxError);
		void _ctor();
	};
}

