#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_OffsetModifier.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Amplifier_Body; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct Amplifier : Assembly_CSharp_firstpass::RootMotion::FinalIK::OffsetModifier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::Amplifier_Body*>* bodies;
		void OnModifyOffset();
		void _ctor();
	};
}

