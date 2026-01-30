#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_TMP_GlyphAdjustmentRecord.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_GlyphAdjustmentRecord; };
#include "TMPro_FontFeatureLookupFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_TextCoreModule\UnityEngine_TextCore_LowLevel_GlyphPairAdjustmentRecord.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel { struct GlyphPairAdjustmentRecord; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_GlyphPairAdjustmentRecord : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord;
		Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord;
		Unity_TextMeshPro::TMPro::FontFeatureLookupFlags m_FeatureLookupFlags;
		Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord();
		void set_firstAdjustmentRecord(Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord value);
		Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord();
		void set_secondAdjustmentRecord(Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord value);
		Unity_TextMeshPro::TMPro::FontFeatureLookupFlags get_featureLookupFlags();
		void set_featureLookupFlags(Unity_TextMeshPro::TMPro::FontFeatureLookupFlags value);
		void _ctor(Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord);
		void _ctor(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord);
	};
}

