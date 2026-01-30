#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_KerningTable.h"
namespace Unity_TextMeshPro::TMPro { struct KerningTable; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_TextMeshPro::TMPro { struct KerningPair; };

namespace Unity_TextMeshPro::TMPro
{
	struct KerningTable___c__DisplayClass3_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t first;
		uint32_t second;
		void _ctor();
		bool _AddKerningPair_b__0(Unity_TextMeshPro::TMPro::KerningPair* item);
	};
}

