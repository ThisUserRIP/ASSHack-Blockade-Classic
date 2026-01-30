#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Dev_Tools_DebugInformation.h"
namespace Rewired_Core::Rewired::Dev::Tools { struct DebugInformation; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Dev::Tools
{
	struct DebugInformation_ZlTgsQzUbThShPvCSRdkwZggqkC : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t aMzZTCTWBwuNLMTxgFAsTFZfgbk;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t get_indentLevel();
		static void set_indentLevel(int32_t value);
	};
}

