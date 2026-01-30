#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_KerningTable.h"
namespace Unity_TextMeshPro::TMPro { struct KerningTable; };
namespace Unity_TextMeshPro::TMPro { struct KerningPair; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct KerningTable___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::KerningTable___c* __9;
			mscorlib::System::Func_2<Unity_TextMeshPro::TMPro::KerningPair, mscorlib::System::UInt32>* __9__7_0;
			mscorlib::System::Func_2<Unity_TextMeshPro::TMPro::KerningPair, mscorlib::System::UInt32>* __9__7_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		uint32_t _SortKerningPairs_b__7_0(Unity_TextMeshPro::TMPro::KerningPair* s);
		uint32_t _SortKerningPairs_b__7_1(Unity_TextMeshPro::TMPro::KerningPair* s);
	};
}

