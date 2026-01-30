#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_TextElementType.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Asset; };
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct Glyph; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_TextElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TextElementType m_ElementType;
		uint32_t m_Unicode;
		Unity_TextMeshPro::TMPro::TMP_Asset* m_TextAsset;
		UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph* m_Glyph;
		uint32_t m_GlyphIndex;
		float m_Scale;
		Unity_TextMeshPro::TMPro::TextElementType get_elementType();
		uint32_t get_unicode();
		void set_unicode(uint32_t value);
		Unity_TextMeshPro::TMPro::TMP_Asset* get_textAsset();
		void set_textAsset(Unity_TextMeshPro::TMPro::TMP_Asset* value);
		UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph* get_glyph();
		void set_glyph(UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph* value);
		uint32_t get_glyphIndex();
		void set_glyphIndex(uint32_t value);
		float get_scale();
		void set_scale(float value);
		void _ctor();
	};
}

