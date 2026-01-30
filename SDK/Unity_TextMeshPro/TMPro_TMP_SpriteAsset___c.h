#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_TMP_SpriteAsset.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteGlyph; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteCharacter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_SpriteAsset___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::TMP_SpriteAsset___c* __9;
			mscorlib::System::Func_2<Unity_TextMeshPro::TMPro::TMP_SpriteGlyph, mscorlib::System::UInt32>* __9__40_0;
			mscorlib::System::Func_2<Unity_TextMeshPro::TMPro::TMP_SpriteCharacter, mscorlib::System::UInt32>* __9__41_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		uint32_t _SortGlyphTable_b__40_0(Unity_TextMeshPro::TMPro::TMP_SpriteGlyph* item);
		uint32_t _SortCharacterTable_b__41_0(Unity_TextMeshPro::TMPro::TMP_SpriteCharacter* c);
	};
}

