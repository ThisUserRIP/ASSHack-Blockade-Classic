#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_TMP_TextElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct Glyph; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Character : Unity_TextMeshPro::TMPro::TMP_TextElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(uint32_t unicode, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph* glyph);
		void _ctor(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph* glyph);
		void _ctor(uint32_t unicode, uint32_t glyphIndex);
	};
}

