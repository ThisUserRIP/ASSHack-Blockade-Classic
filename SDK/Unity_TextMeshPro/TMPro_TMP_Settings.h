#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Unity_TextMeshPro::TMPro { struct TMP_StyleSheet; };
namespace UnityEngine_CoreModule::UnityEngine { struct TextAsset; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Settings_LineBreakingTable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Settings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_enableWordWrapping;
		bool m_enableKerning;
		bool m_enableExtraPadding;
		bool m_enableTintAllSprites;
		bool m_enableParseEscapeCharacters;
		bool m_EnableRaycastTarget;
		bool m_GetFontFeaturesAtRuntime;
		int32_t m_missingGlyphCharacter;
		bool m_warningsDisabled;
		Unity_TextMeshPro::TMPro::TMP_FontAsset* m_defaultFontAsset;
		mscorlib::System::String* m_defaultFontAssetPath;
		float m_defaultFontSize;
		float m_defaultAutoSizeMinRatio;
		float m_defaultAutoSizeMaxRatio;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_defaultTextMeshProTextContainerSize;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_defaultTextMeshProUITextContainerSize;
		bool m_autoSizeTextContainer;
		bool m_IsTextObjectScaleStatic;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* m_fallbackFontAssets;
		bool m_matchMaterialPreset;
		Unity_TextMeshPro::TMPro::TMP_SpriteAsset* m_defaultSpriteAsset;
		mscorlib::System::String* m_defaultSpriteAssetPath;
		bool m_enableEmojiSupport;
		uint32_t m_MissingCharacterSpriteUnicode;
		mscorlib::System::String* m_defaultColorGradientPresetsPath;
		Unity_TextMeshPro::TMPro::TMP_StyleSheet* m_defaultStyleSheet;
		mscorlib::System::String* m_StyleSheetsResourcePath;
		UnityEngine_CoreModule::UnityEngine::TextAsset* m_leadingCharacters;
		UnityEngine_CoreModule::UnityEngine::TextAsset* m_followingCharacters;
		Unity_TextMeshPro::TMPro::TMP_Settings_LineBreakingTable* m_linebreakingRules;
		bool m_UseModernHangulLineBreakingRules;
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::TMP_Settings* s_Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_version();
		static bool get_enableWordWrapping();
		static bool get_enableKerning();
		static bool get_enableExtraPadding();
		static bool get_enableTintAllSprites();
		static bool get_enableParseEscapeCharacters();
		static bool get_enableRaycastTarget();
		static bool get_getFontFeaturesAtRuntime();
		static int32_t get_missingGlyphCharacter();
		static void set_missingGlyphCharacter(int32_t value);
		static bool get_warningsDisabled();
		static Unity_TextMeshPro::TMPro::TMP_FontAsset* get_defaultFontAsset();
		static mscorlib::System::String* get_defaultFontAssetPath();
		static float get_defaultFontSize();
		static float get_defaultTextAutoSizingMinRatio();
		static float get_defaultTextAutoSizingMaxRatio();
		static UnityEngine_CoreModule::UnityEngine::Vector2 get_defaultTextMeshProTextContainerSize();
		static UnityEngine_CoreModule::UnityEngine::Vector2 get_defaultTextMeshProUITextContainerSize();
		static bool get_autoSizeTextContainer();
		static bool get_isTextObjectScaleStatic();
		static void set_isTextObjectScaleStatic(bool value);
		static mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* get_fallbackFontAssets();
		static bool get_matchMaterialPreset();
		static Unity_TextMeshPro::TMPro::TMP_SpriteAsset* get_defaultSpriteAsset();
		static mscorlib::System::String* get_defaultSpriteAssetPath();
		static bool get_enableEmojiSupport();
		static void set_enableEmojiSupport(bool value);
		static uint32_t get_missingCharacterSpriteUnicode();
		static void set_missingCharacterSpriteUnicode(uint32_t value);
		static mscorlib::System::String* get_defaultColorGradientPresetsPath();
		static Unity_TextMeshPro::TMPro::TMP_StyleSheet* get_defaultStyleSheet();
		static mscorlib::System::String* get_styleSheetsResourcePath();
		static UnityEngine_CoreModule::UnityEngine::TextAsset* get_leadingCharacters();
		static UnityEngine_CoreModule::UnityEngine::TextAsset* get_followingCharacters();
		static Unity_TextMeshPro::TMPro::TMP_Settings_LineBreakingTable* get_linebreakingRules();
		static bool get_useModernHangulLineBreakingRules();
		static void set_useModernHangulLineBreakingRules(bool value);
		static Unity_TextMeshPro::TMPro::TMP_Settings* get_instance();
		static Unity_TextMeshPro::TMPro::TMP_Settings* LoadDefaultSettings();
		static Unity_TextMeshPro::TMPro::TMP_Settings* GetSettings();
		static Unity_TextMeshPro::TMPro::TMP_FontAsset* GetFontAsset();
		static Unity_TextMeshPro::TMPro::TMP_SpriteAsset* GetSpriteAsset();
		static Unity_TextMeshPro::TMPro::TMP_StyleSheet* GetStyleSheet();
		static void LoadLinebreakingRules();
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Char>* GetCharacters(UnityEngine_CoreModule::UnityEngine::TextAsset* file);
		void _ctor();
	};
}

