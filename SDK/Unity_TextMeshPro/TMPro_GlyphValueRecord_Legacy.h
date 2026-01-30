#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_TextCoreModule\UnityEngine_TextCore_LowLevel_GlyphValueRecord.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel { struct GlyphValueRecord; };

namespace Unity_TextMeshPro::TMPro
{
	struct GlyphValueRecord_Legacy
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float xPlacement;
		float yPlacement;
		float xAdvance;
		float yAdvance;
		void _ctor(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord);
		static Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy op_Addition(Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy a, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy b);
	};
	Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy operator+(Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy a, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy b);
}

