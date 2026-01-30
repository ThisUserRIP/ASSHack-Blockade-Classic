#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "TMPro_TMP_GlyphValueRecord.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_GlyphValueRecord; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_TextCoreModule\UnityEngine_TextCore_LowLevel_GlyphAdjustmentRecord.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel { struct GlyphAdjustmentRecord; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_GlyphAdjustmentRecord
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_GlyphIndex;
		Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord m_GlyphValueRecord;
		uint32_t get_glyphIndex();
		void set_glyphIndex(uint32_t value);
		Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord get_glyphValueRecord();
		void set_glyphValueRecord(Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord value);
		void _ctor(uint32_t glyphIndex, Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord glyphValueRecord);
		void _ctor(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord adjustmentRecord);
	};
}

