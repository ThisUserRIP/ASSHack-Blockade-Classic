#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeVariantData; };
#include "Doozy_Engine_Themes_LabelId.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct LabelId; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::Utils { struct UILanguagePack; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemeData : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_themeName;
		IL2CPP::Array<uint8_t>* SerializedGuid;
		mscorlib::System::Guid m_id;
		Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* m_activeVariant;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* ColorLabels;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* SpriteLabels;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* TextureLabels;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* FontLabels;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* FontAssetLabels;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* VariantsNames;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData>* Variants;
		struct StaticFields
		{
			mscorlib::System::String* UNNAMED_THEME_NAME;
			mscorlib::System::String* UNNAMED_VARIANT_NAME;
			mscorlib::System::String* UNNAMED_PROPERTY;
			mscorlib::System::String* DEFAULT_VARIANT_NAME;
			mscorlib::System::String* COLOR_DEFAULT_COLOR_LABEL_1;
			mscorlib::System::String* COLOR_DEFAULT_COLOR_LABEL_2;
			mscorlib::System::String* COLOR_DEFAULT_COLOR_LABEL_3;
			mscorlib::System::String* COLOR_DEFAULT_COLOR_LABEL_4;
			mscorlib::System::String* COLOR_DEFAULT_COLOR_LABEL_5;
			mscorlib::System::String* COLOR_DEFAULT_COLOR_LABEL_6;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::Doozy::Engine::Utils::UILanguagePack* get_UILabels();
		Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* get_ActiveVariant();
		mscorlib::System::Guid get_Id();
		mscorlib::System::String* get_ThemeName();
		void set_ThemeName(mscorlib::System::String* value);
		bool get_IsGeneralTheme();
		void _ctor();
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void ActivateVariant(Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* variant);
		void ActivateVariant(mscorlib::System::Guid variantId);
		void ActivateVariant(mscorlib::System::String* variantName);
		void AddColorProperty(bool performUndo, bool saveAssets);
		void AddSpriteProperty(bool performUndo, bool saveAssets);
		void AddTextureProperty(bool performUndo, bool saveAssets);
		void AddFontProperty(bool performUndo, bool saveAssets);
		void AddFontAssetProperty(bool performUndo, bool saveAssets);
		void AddVariant(bool performUndo, bool saveAssets);
		bool ContainsColorProperty(mscorlib::System::Guid propertyId);
		bool ContainsSpriteProperty(mscorlib::System::Guid propertyId);
		bool ContainsTextureProperty(mscorlib::System::Guid propertyId);
		bool ContainsFontProperty(mscorlib::System::Guid propertyId);
		bool ContainsFontAssetProperty(mscorlib::System::Guid propertyId);
		bool ContainsVariant(mscorlib::System::Guid variantGuid);
		bool ContainsVariant(mscorlib::System::String* variantName);
		Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* GetVariant(mscorlib::System::Guid variantId);
		Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* GetVariant(mscorlib::System::String* variantName);
		int32_t GetColorPropertyIndex(mscorlib::System::Guid id);
		int32_t GetSpritePropertyIndex(mscorlib::System::Guid id);
		int32_t GetTexturePropertyIndex(mscorlib::System::Guid id);
		int32_t GetFontPropertyIndex(mscorlib::System::Guid id);
		int32_t GetFontAssetPropertyIndex(mscorlib::System::Guid id);
		int32_t GetVariantIndex(mscorlib::System::Guid id);
		void Init(bool showProgress, bool saveAssets);
		void RemoveColorProperty(mscorlib::System::Guid deleteGuid, bool performUndo, bool saveAssets);
		void RemoveSpriteProperty(mscorlib::System::Guid deleteGuid, bool performUndo, bool saveAssets);
		void RemoveTextureProperty(mscorlib::System::Guid deleteGuid, bool performUndo, bool saveAssets);
		void RemoveFontProperty(mscorlib::System::Guid deleteGuid, bool performUndo, bool saveAssets);
		void RemoveFontAssetProperty(mscorlib::System::Guid deleteGuid, bool performUndo, bool saveAssets);
		void RefreshThemeVariants(bool showProgress, bool performUndo, bool saveAssets);
		bool RemoveVariant(Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* data, bool performUndo, bool showDialog, bool saveAssets);
		void SetDirty(bool saveAssets);
		void Sort(bool performUndo, bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void UpdateVariantsNames(bool saveAssets);
		void AddDefaultColorLabels();
		bool AddDefaultVariant(bool saveAssets);
		static int32_t GetPropertyIndex(mscorlib::System::Guid id, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* propertyList);
		static void RemoveProperty(mscorlib::System::Guid deleteGuid, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* propertyList);
	};
}

