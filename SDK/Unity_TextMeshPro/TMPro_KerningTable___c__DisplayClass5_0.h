#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_KerningTable.h"
namespace Unity_TextMeshPro::TMPro { struct KerningTable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_TextMeshPro::TMPro { struct KerningPair; };

namespace Unity_TextMeshPro::TMPro
{
	struct KerningTable___c__DisplayClass5_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t left;
		int32_t right;
		void _ctor();
		bool _RemoveKerningPair_b__0(Unity_TextMeshPro::TMPro::KerningPair* item);
	};
}

