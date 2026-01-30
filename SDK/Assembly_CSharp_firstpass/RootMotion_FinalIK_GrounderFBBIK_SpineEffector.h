#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_GrounderFBBIK.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct GrounderFBBIK; };
#include "RootMotion_FinalIK_FullBodyBipedEffector.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct GrounderFBBIK_SpineEffector : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType;
		float horizontalWeight;
		float verticalWeight;
		void _ctor();
		void _ctor(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType, float horizontalWeight, float verticalWeight);
	};
}

