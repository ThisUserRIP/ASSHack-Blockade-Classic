#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_TMP_TextElement.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteGlyph; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_SpriteCharacter : Unity_TextMeshPro::TMPro::TMP_TextElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Name;
		int32_t m_HashCode;
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		int32_t get_hashCode();
		void _ctor();
		void _ctor(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_SpriteGlyph* glyph);
		void _ctor(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, Unity_TextMeshPro::TMPro::TMP_SpriteGlyph* glyph);
		void _ctor(uint32_t unicode, uint32_t glyphIndex);
	};
}

