#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Character; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
#include "TMPro_FontStyles.h"
#include "TMPro_FontWeight.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteCharacter; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_FontAssetUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities* s_Instance;
			System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* k_SearchedAssets;
			bool k_IsFontEngineInitialized;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities* get_instance();
		static Unity_TextMeshPro::TMPro::TMP_Character* GetCharacterFromFontAsset(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, Unity_TextMeshPro::TMPro::FontStyles fontStyle, Unity_TextMeshPro::TMPro::FontWeight fontWeight, bool& isAlternativeTypeface);
		static Unity_TextMeshPro::TMPro::TMP_Character* GetCharacterFromFontAsset_Internal(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, Unity_TextMeshPro::TMPro::FontStyles fontStyle, Unity_TextMeshPro::TMPro::FontWeight fontWeight, bool& isAlternativeTypeface);
		static Unity_TextMeshPro::TMPro::TMP_Character* GetCharacterFromFontAssets(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_FontAsset* sourceFontAsset, mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* fontAssets, bool includeFallbacks, Unity_TextMeshPro::TMPro::FontStyles fontStyle, Unity_TextMeshPro::TMPro::FontWeight fontWeight, bool& isAlternativeTypeface);
		static Unity_TextMeshPro::TMPro::TMP_SpriteCharacter* GetSpriteCharacterFromSpriteAsset(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, bool includeFallbacks);
		static Unity_TextMeshPro::TMPro::TMP_SpriteCharacter* GetSpriteCharacterFromSpriteAsset_Internal(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, bool includeFallbacks);
		void _ctor();
	};
}

