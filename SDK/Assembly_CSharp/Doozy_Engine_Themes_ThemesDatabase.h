#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeData; };
namespace Assembly_CSharp::Doozy::Engine::Utils { struct UILanguagePack; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeVariantData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemesDatabase : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* ThemesNames;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::ThemeData>* Themes;
		struct StaticFields
		{
			mscorlib::System::String* GENERAL_THEME_NAME;
			mscorlib::System::String* THEME_ASSET_PREFIX;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::Doozy::Engine::Utils::UILanguagePack* get_UILabels();
		bool AddTheme(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* themeData, bool saveAssets);
		bool Contains(mscorlib::System::Guid themeGuid);
		bool Contains(mscorlib::System::String* themeName);
		bool CreateTheme(mscorlib::System::String* themeName, bool showDialog, bool saveAssets);
		bool DeleteThemeData(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* themeData);
		Assembly_CSharp::Doozy::Engine::Themes::ThemeData* GetThemeData(mscorlib::System::Guid themeGuid);
		Assembly_CSharp::Doozy::Engine::Themes::ThemeData* GetThemeData(mscorlib::System::String* themeName);
		int32_t GetThemeIndex(mscorlib::System::Guid id);
		Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* GetVariant(mscorlib::System::Guid variantId);
		void Initialize();
		bool ContainsTheme(mscorlib::System::String* themeName);
		void InitializeThemes();
		void RefreshDatabase(bool performUndo, bool saveAssets);
		void RemoveDuplicates(bool performUndo, bool saveAssets);
		bool RemoveNullDatabases(bool saveAssets);
		bool RenameThemeData(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* themeData, mscorlib::System::String* newThemeName);
		bool ResetDatabase();
		void SearchForUnregisteredThemes(bool saveAssets);
		void SetDirty(bool saveAssets);
		void Sort(bool performUndo, bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void UpdateThemesNames(bool saveAssets);
		static IL2CPP::Array<mscorlib::System::String*>* GetThemesNames(Assembly_CSharp::Doozy::Engine::Themes::ThemesDatabase* database);
		static IL2CPP::Array<mscorlib::System::String*>* GetVariantNames(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* themeData);
		static mscorlib::System::String* GetThemeDataFilename(mscorlib::System::String* themeName);
		void _ctor();
	};
}

