#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_InteractionObject.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject; };
#include "RootMotion_FinalIK_InteractionObject_WeightCurve_Type.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject_WeightCurve; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionObject_Multiplier : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_WeightCurve_Type curve;
		float multiplier;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_WeightCurve_Type result;
		float GetValue(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_WeightCurve* weightCurve, float timer);
		void _ctor();
	};
}

