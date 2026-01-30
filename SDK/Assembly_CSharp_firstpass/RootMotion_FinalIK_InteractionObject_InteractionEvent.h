#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_InteractionObject.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject_AnimatorEvent; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject_Message; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityEvent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionObject_InteractionEvent : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float time;
		bool pause;
		bool pickUp;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_AnimatorEvent*>* animations;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_Message*>* messages;
		UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* unityEvent;
		void Activate(UnityEngine_CoreModule::UnityEngine::Transform* t);
		void _ctor();
	};
}

