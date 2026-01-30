#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_TextCoreModule\UnityEngine_TextCore_Glyph.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\UnityEngine_TextCoreModule\UnityEngine_TextCore_GlyphMetrics.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct GlyphMetrics; };
#include "..\UnityEngine_TextCoreModule\UnityEngine_TextCore_GlyphRect.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct GlyphRect; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_SpriteGlyph : UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Sprite* sprite;
		void _ctor();
		void _ctor(uint32_t index, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect glyphRect, float scale, int32_t atlasIndex);
		void _ctor(uint32_t index, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect glyphRect, float scale, int32_t atlasIndex, UnityEngine_CoreModule::UnityEngine::Sprite* sprite);
	};
}

