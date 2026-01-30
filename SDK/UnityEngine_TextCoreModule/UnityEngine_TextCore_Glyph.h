#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "UnityEngine_TextCore_GlyphMetrics.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct GlyphMetrics; };
#include "UnityEngine_TextCore_GlyphRect.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct GlyphRect; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_TextCore_LowLevel_GlyphMarshallingStruct.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel { struct GlyphMarshallingStruct; };

namespace UnityEngine_TextCoreModule::UnityEngine::TextCore
{
	struct Glyph : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_Index;
		UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics m_Metrics;
		UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect m_GlyphRect;
		float m_Scale;
		int32_t m_AtlasIndex;
		uint32_t get_index();
		void set_index(uint32_t value);
		UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics get_metrics();
		void set_metrics(UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics value);
		UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect get_glyphRect();
		void set_glyphRect(UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect value);
		float get_scale();
		void set_scale(float value);
		int32_t get_atlasIndex();
		void set_atlasIndex(int32_t value);
		void _ctor();
		void _ctor(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct);
		void _ctor(uint32_t index, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect glyphRect, float scale, int32_t atlasIndex);
	};
}

