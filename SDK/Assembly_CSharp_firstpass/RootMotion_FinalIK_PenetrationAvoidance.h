#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_OffsetModifier.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct PenetrationAvoidance_Avoider; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct PenetrationAvoidance : Assembly_CSharp_firstpass::RootMotion::FinalIK::OffsetModifier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::PenetrationAvoidance_Avoider*>* avoiders;
		void OnModifyOffset();
		void _ctor();
	};
}

