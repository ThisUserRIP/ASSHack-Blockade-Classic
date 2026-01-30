#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_TextCore_LowLevel_GlyphAdjustmentRecord.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel { struct GlyphAdjustmentRecord; };
#include "UnityEngine_TextCore_LowLevel_FontFeatureLookupFlags.h"

namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel
{
	struct GlyphPairAdjustmentRecord
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord;
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord;
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags m_FeatureLookupFlags;
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_firstAdjustmentRecord();
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_secondAdjustmentRecord();
	};
}

