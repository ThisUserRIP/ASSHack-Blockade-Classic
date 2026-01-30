#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_TMP_Asset.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_TextCoreModule\UnityEngine_TextCore_FaceInfo.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct FaceInfo; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteCharacter; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteGlyph; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Sprite; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_SpriteAsset : Unity_TextMeshPro::TMPro::TMP_Asset
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Int32>* m_NameLookup;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, mscorlib::System::Int32>* m_GlyphIndexLookup;
		mscorlib::System::String* m_Version;
		UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo m_FaceInfo;
		UnityEngine_CoreModule::UnityEngine::Texture* spriteSheet;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>* m_SpriteCharacterTable;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>* m_SpriteCharacterLookup;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteGlyph>* m_SpriteGlyphTable;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_SpriteGlyph>* m_SpriteGlyphLookup;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Sprite>* spriteInfoList;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteAsset>* fallbackSpriteAssets;
		bool m_IsSpriteAssetLookupTablesDirty;
		struct StaticFields
		{
			System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* k_searchedSpriteAssets;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_version();
		void set_version(mscorlib::System::String* value);
		UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo get_faceInfo();
		void set_faceInfo(UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo value);
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>* get_spriteCharacterTable();
		void set_spriteCharacterTable(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>* value);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>* get_spriteCharacterLookupTable();
		void set_spriteCharacterLookupTable(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>* value);
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteGlyph>* get_spriteGlyphTable();
		void set_spriteGlyphTable(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteGlyph>* value);
		void Awake();
		UnityEngine_CoreModule::UnityEngine::Material* GetDefaultSpriteMaterial();
		void UpdateLookupTables();
		int32_t GetSpriteIndexFromHashcode(int32_t hashCode);
		int32_t GetSpriteIndexFromUnicode(uint32_t unicode);
		int32_t GetSpriteIndexFromName(mscorlib::System::String* name);
		static Unity_TextMeshPro::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicode(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks, int32_t& spriteIndex);
		static Unity_TextMeshPro::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteAsset>* spriteAssets, uint32_t unicode, bool includeFallbacks, int32_t& spriteIndex);
		static Unity_TextMeshPro::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks, int32_t& spriteIndex);
		static Unity_TextMeshPro::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCode(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, int32_t hashCode, bool includeFallbacks, int32_t& spriteIndex);
		static Unity_TextMeshPro::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteAsset>* spriteAssets, int32_t hashCode, bool searchFallbacks, int32_t& spriteIndex);
		static Unity_TextMeshPro::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, int32_t hashCode, bool searchFallbacks, int32_t& spriteIndex);
		void SortGlyphTable();
		void SortCharacterTable();
		void SortGlyphAndCharacterTables();
		void UpgradeSpriteAsset();
		void _ctor();
	};
}

