#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Globalization_Unicode_MSCompatUnicodeTable.h"
namespace mscorlib::Mono::Globalization::Unicode { struct MSCompatUnicodeTable; };
namespace mscorlib::Mono::Globalization::Unicode { struct Level2Map; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::Mono::Globalization::Unicode
{
	struct MSCompatUnicodeTable___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::Mono::Globalization::Unicode::MSCompatUnicodeTable___c* __9;
			mscorlib::System::Comparison_1<mscorlib::Mono::Globalization::Unicode::Level2Map>* __9__17_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		int32_t _BuildTailoringTables_b__17_0(mscorlib::Mono::Globalization::Unicode::Level2Map* a, mscorlib::Mono::Globalization::Unicode::Level2Map* b);
	};
}

