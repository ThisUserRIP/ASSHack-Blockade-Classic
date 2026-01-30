#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_TMP_FontFeatureTable.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_FontFeatureTable; };
namespace Unity_TextMeshPro::TMPro { struct TMP_GlyphPairAdjustmentRecord; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_FontFeatureTable___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::TMP_FontFeatureTable___c* __9;
			mscorlib::System::Func_2<Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord, mscorlib::System::UInt32>* __9__6_0;
			mscorlib::System::Func_2<Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord, mscorlib::System::UInt32>* __9__6_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		uint32_t _SortGlyphPairAdjustmentRecords_b__6_0(Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord* s);
		uint32_t _SortGlyphPairAdjustmentRecords_b__6_1(Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord* s);
	};
}

