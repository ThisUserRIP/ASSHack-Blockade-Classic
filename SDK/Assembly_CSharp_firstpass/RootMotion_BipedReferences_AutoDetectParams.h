#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_BipedReferences.h"
namespace Assembly_CSharp_firstpass::RootMotion { struct BipedReferences; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct BipedReferences_AutoDetectParams
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool legsParentInSpine;
		bool includeEyes;
		void _ctor(bool legsParentInSpine, bool includeEyes);
		static Assembly_CSharp_firstpass::RootMotion::BipedReferences_AutoDetectParams get_Default();
	};
}

