#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp_firstpass::RootMotion { struct BipedLimbOrientations_LimbOrientation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct BipedLimbOrientations : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* leftArm;
		Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* rightArm;
		Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* leftLeg;
		Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* rightLeg;
		void _ctor(Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* leftArm, Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* rightArm, Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* leftLeg, Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* rightLeg);
		static Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations* get_UMA();
		static Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations* get_MaxBiped();
	};
}

