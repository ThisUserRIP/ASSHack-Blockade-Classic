#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "TMPro_GlyphValueRecord_Legacy.h"
namespace Unity_TextMeshPro::TMPro { struct GlyphValueRecord_Legacy; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct KerningPair : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_FirstGlyph;
		Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy m_FirstGlyphAdjustments;
		uint32_t m_SecondGlyph;
		Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy m_SecondGlyphAdjustments;
		float xOffset;
		bool m_IgnoreSpacingAdjustments;
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::KerningPair* empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		uint32_t get_firstGlyph();
		void set_firstGlyph(uint32_t value);
		Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy get_firstGlyphAdjustments();
		uint32_t get_secondGlyph();
		void set_secondGlyph(uint32_t value);
		Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy get_secondGlyphAdjustments();
		bool get_ignoreSpacingAdjustments();
		void _ctor();
		void _ctor(uint32_t left, uint32_t right, float offset);
		void _ctor(uint32_t firstGlyph, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, uint32_t secondGlyph, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments);
		void ConvertLegacyKerningData();
		static void _cctor();
	};
}

