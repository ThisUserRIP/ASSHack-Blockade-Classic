#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_TMP_Asset.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "TMPro_AtlasPopulationMode.h"
#include "..\UnityEngine_TextCoreModule\UnityEngine_TextCore_FaceInfo.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct FaceInfo; };
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct Glyph; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Character; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_TextCoreModule\UnityEngine_TextCore_GlyphRect.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct GlyphRect; };
namespace Unity_TextMeshPro::TMPro { struct FaceInfo_Legacy; };
#include "..\UnityEngine_TextCoreModule\UnityEngine_TextCore_LowLevel_GlyphRenderMode.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Glyph; };
namespace Unity_TextMeshPro::TMPro { struct KerningTable; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontFeatureTable; };
#include "TMPro_FontAssetCreationSettings.h"
namespace Unity_TextMeshPro::TMPro { struct FontAssetCreationSettings; };
#include "TMPro_TMP_FontWeightPair.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_FontWeightPair; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\UnityEngine_CoreModule\Unity_Profiling_ProfilerMarker.h"
namespace UnityEngine_CoreModule::Unity::Profiling { struct ProfilerMarker; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_FontAsset : Unity_TextMeshPro::TMPro::TMP_Asset
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Version;
		mscorlib::System::String* m_SourceFontFileGUID;
		UnityEngine_TextRenderingModule::UnityEngine::Font* m_SourceFontFile;
		Unity_TextMeshPro::TMPro::AtlasPopulationMode m_AtlasPopulationMode;
		UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo m_FaceInfo;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>* m_GlyphTable;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>* m_GlyphLookupDictionary;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Character>* m_CharacterTable;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_Character>* m_CharacterLookupDictionary;
		UnityEngine_CoreModule::UnityEngine::Texture2D* m_AtlasTexture;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* m_AtlasTextures;
		int32_t m_AtlasTextureIndex;
		bool m_IsMultiAtlasTexturesEnabled;
		bool m_ClearDynamicDataOnBuild;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects;
		Unity_TextMeshPro::TMPro::FaceInfo_Legacy* m_fontInfo;
		UnityEngine_CoreModule::UnityEngine::Texture2D* atlas;
		int32_t m_AtlasWidth;
		int32_t m_AtlasHeight;
		int32_t m_AtlasPadding;
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode m_AtlasRenderMode;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Glyph>* m_glyphInfoList;
		Unity_TextMeshPro::TMPro::KerningTable* m_KerningTable;
		Unity_TextMeshPro::TMPro::TMP_FontFeatureTable* m_FontFeatureTable;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* fallbackFontAssets;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* m_FallbackFontAssetTable;
		Unity_TextMeshPro::TMPro::FontAssetCreationSettings m_CreationSettings;
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_FontWeightPair>* m_FontWeightTable;
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_FontWeightPair>* fontWeights;
		float normalStyle;
		float normalSpacingOffset;
		float boldStyle;
		float boldSpacing;
		uint8_t italicStyle;
		uint8_t tabSize;
		bool IsFontAssetLookupTablesDirty;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* FallbackSearchQueryLookup;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>* m_GlyphsToRender;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>* m_GlyphsRendered;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* m_GlyphIndexList;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* m_GlyphIndexListNewlyAdded;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* m_GlyphsToAdd;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::UInt32>* m_GlyphsToAddLookup;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Character>* m_CharactersToAdd;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::UInt32>* m_CharactersToAddLookup;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* s_MissingCharacterList;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::UInt32>* m_MissingUnicodesFromFontFile;
		struct StaticFields
		{
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_ReadFontAssetDefinitionMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_AddSynthesizedCharactersMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_TryAddCharacterMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_TryAddCharactersMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_UpdateGlyphAdjustmentRecordsMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_ClearFontAssetDataMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_UpdateFontAssetDataMarker;
			mscorlib::System::String* s_DefaultMaterialSuffix;
			System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* k_SearchedFontAssetLookup;
			mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* k_FontAssets_FontFeaturesUpdateQueue;
			System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* k_FontAssets_FontFeaturesUpdateQueueLookup;
			mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* k_FontAssets_AtlasTexturesUpdateQueue;
			System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* k_FontAssets_AtlasTexturesUpdateQueueLookup;
			IL2CPP::Array<uint32_t>* k_GlyphIndexArray;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_version();
		void set_version(mscorlib::System::String* value);
		UnityEngine_TextRenderingModule::UnityEngine::Font* get_sourceFontFile();
		void set_sourceFontFile(UnityEngine_TextRenderingModule::UnityEngine::Font* value);
		Unity_TextMeshPro::TMPro::AtlasPopulationMode get_atlasPopulationMode();
		void set_atlasPopulationMode(Unity_TextMeshPro::TMPro::AtlasPopulationMode value);
		UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo get_faceInfo();
		void set_faceInfo(UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo value);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>* get_glyphTable();
		void set_glyphTable(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>* value);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>* get_glyphLookupTable();
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Character>* get_characterTable();
		void set_characterTable(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Character>* value);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_Character>* get_characterLookupTable();
		UnityEngine_CoreModule::UnityEngine::Texture2D* get_atlasTexture();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* get_atlasTextures();
		void set_atlasTextures(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* value);
		int32_t get_atlasTextureCount();
		bool get_isMultiAtlasTexturesEnabled();
		void set_isMultiAtlasTexturesEnabled(bool value);
		bool get_clearDynamicDataOnBuild();
		void set_clearDynamicDataOnBuild(bool value);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* get_usedGlyphRects();
		void set_usedGlyphRects(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* value);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* get_freeGlyphRects();
		void set_freeGlyphRects(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* value);
		Unity_TextMeshPro::TMPro::FaceInfo_Legacy* get_fontInfo();
		int32_t get_atlasWidth();
		void set_atlasWidth(int32_t value);
		int32_t get_atlasHeight();
		void set_atlasHeight(int32_t value);
		int32_t get_atlasPadding();
		void set_atlasPadding(int32_t value);
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode();
		void set_atlasRenderMode(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
		Unity_TextMeshPro::TMPro::TMP_FontFeatureTable* get_fontFeatureTable();
		void set_fontFeatureTable(Unity_TextMeshPro::TMPro::TMP_FontFeatureTable* value);
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* get_fallbackFontAssetTable();
		void set_fallbackFontAssetTable(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* value);
		Unity_TextMeshPro::TMPro::FontAssetCreationSettings get_creationSettings();
		void set_creationSettings(Unity_TextMeshPro::TMPro::FontAssetCreationSettings value);
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_FontWeightPair>* get_fontWeightTable();
		void set_fontWeightTable(IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_FontWeightPair>* value);
		static Unity_TextMeshPro::TMPro::TMP_FontAsset* CreateFontAsset(UnityEngine_TextRenderingModule::UnityEngine::Font* font);
		static Unity_TextMeshPro::TMPro::TMP_FontAsset* CreateFontAsset(UnityEngine_TextRenderingModule::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight, Unity_TextMeshPro::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);
		void Awake();
		void ReadFontAssetDefinition();
		void InitializeDictionaryLookupTables();
		void InitializeGlyphLookupDictionary();
		void InitializeCharacterLookupDictionary();
		void InitializeGlyphPaidAdjustmentRecordsLookupDictionary();
		void AddSynthesizedCharactersAndFaceMetrics();
		void AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately);
		void AddCharacterToLookupCache(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character* character);
		void SortCharacterTable();
		void SortGlyphTable();
		void SortFontFeatureTable();
		void SortAllTables();
		bool HasCharacter(int32_t character);
		bool HasCharacter(wchar_t character, bool searchFallbacks, bool tryAddCharacter);
		bool HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter);
		bool HasCharacters(mscorlib::System::String* text, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Char>& missingCharacters);
		bool HasCharacters(mscorlib::System::String* text, IL2CPP::Array<uint32_t>& missingCharacters, bool searchFallbacks, bool tryAddCharacter);
		bool HasCharacters(mscorlib::System::String* text);
		static mscorlib::System::String* GetCharacters(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset);
		static IL2CPP::Array<int32_t>* GetCharactersArray(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset);
		uint32_t GetGlyphIndex(uint32_t unicode);
		static void RegisterFontAssetForFontFeatureUpdate(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset);
		static void UpdateFontFeaturesForFontAssetsInQueue();
		static void RegisterFontAssetForAtlasTextureUpdate(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset);
		static void UpdateAtlasTexturesForFontAssetsInQueue();
		bool TryAddCharacters(IL2CPP::Array<uint32_t>* unicodes, bool includeFontFeatures);
		bool TryAddCharacters(IL2CPP::Array<uint32_t>* unicodes, IL2CPP::Array<uint32_t>& missingUnicodes, bool includeFontFeatures);
		bool TryAddCharacters(mscorlib::System::String* characters, bool includeFontFeatures);
		bool TryAddCharacters(mscorlib::System::String* characters, mscorlib::System::String& missingCharacters, bool includeFontFeatures);
		bool TryAddCharacterInternal(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character);
		bool TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character);
		void TryAddGlyphsToAtlasTextures();
		bool TryAddGlyphsToNewAtlasTexture();
		void SetupNewAtlasTexture();
		void UpdateAtlasTexture();
		void UpdateGlyphAdjustmentRecords();
		void UpdateGlyphAdjustmentRecords(IL2CPP::Array<uint32_t>* glyphIndexes);
		void UpdateGlyphAdjustmentRecords(mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* glyphIndexes);
		void UpdateGlyphAdjustmentRecords(mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* newGlyphIndexes, mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* allGlyphIndexes);
		template <typename T> void CopyListDataToArray(mscorlib::System::Collections::Generic::List_1<T>* srcList, IL2CPP::Array<T>& dstArray)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyListDataToArray", std::vector<std::string> { "System.Collections.Generic.List`1<T>", GetGenericTypeName<T>() + (std::string)"[]&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)srcList;
			params[1] = (intptr_t)&dstArray;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void ClearFontAssetData(bool setAtlasSizeToZero);
		void ClearFontAssetDataInternal();
		void UpdateFontAssetData();
		void ClearFontAssetTables();
		void ClearAtlasTextures(bool setAtlasSizeToZero);
		void UpgradeFontAsset();
		void UpgradeGlyphAdjustmentTableToFontFeatureTable();
		void _ctor();
		static void _cctor();
	};
}

