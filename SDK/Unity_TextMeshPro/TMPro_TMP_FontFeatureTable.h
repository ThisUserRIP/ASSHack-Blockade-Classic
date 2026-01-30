#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_GlyphPairAdjustmentRecord; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_FontFeatureTable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord>* m_GlyphPairAdjustmentRecords;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord>* m_GlyphPairAdjustmentRecordLookupDictionary;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord>* get_glyphPairAdjustmentRecords();
		void set_glyphPairAdjustmentRecords(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord>* value);
		void _ctor();
		void SortGlyphPairAdjustmentRecords();
	};
}

