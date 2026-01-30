#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "UnityEngine_TextCore_LowLevel_GlyphValueRecord.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel { struct GlyphValueRecord; };

namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel
{
	struct GlyphAdjustmentRecord
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_GlyphIndex;
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord;
		uint32_t get_glyphIndex();
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphValueRecord get_glyphValueRecord();
	};
}

