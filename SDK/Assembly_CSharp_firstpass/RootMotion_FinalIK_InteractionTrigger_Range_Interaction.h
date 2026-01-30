#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_InteractionTrigger_Range.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTrigger_Range; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject; };
#include "RootMotion_FinalIK_FullBodyBipedEffector.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionTrigger_Range_Interaction : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* interactionObject;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector>* effectors;
		void _ctor();
	};
}

