#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "TMPro_GlyphValueRecord_Legacy.h"
namespace Unity_TextMeshPro::TMPro { struct GlyphValueRecord_Legacy; };
#include "..\UnityEngine_TextCoreModule\UnityEngine_TextCore_LowLevel_GlyphValueRecord.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel { struct GlyphValueRecord; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_GlyphValueRecord
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_XPlacement;
		float m_YPlacement;
		float m_XAdvance;
		float m_YAdvance;
		float get_xPlacement();
		void set_xPlacement(float value);
		float get_yPlacement();
		void set_yPlacement(float value);
		float get_xAdvance();
		void set_xAdvance(float value);
		float get_yAdvance();
		void set_yAdvance(float value);
		void _ctor(float xPlacement, float yPlacement, float xAdvance, float yAdvance);
		void _ctor(Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy valueRecord);
		void _ctor(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord);
		static Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord op_Addition(Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord a, Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord b);
	};
	Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord operator+(Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord a, Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord b);
}

