#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeTarget; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemesDatabase; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeData; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeVariantData; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemeManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Themes::ThemeManager* s_instance;
			bool _ApplicationIsQuitting_k__BackingField;
			bool s_initialized;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Guid, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::ThemeTarget>>* ThemeTargets;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static Assembly_CSharp::Doozy::Engine::Themes::ThemeManager* get_Instance();
		static bool get_ApplicationIsQuitting();
		static void set_ApplicationIsQuitting(bool value);
		static bool get_AutoSave();
		static Assembly_CSharp::Doozy::Engine::Themes::ThemesDatabase* get_Database();
		void Awake();
		void OnApplicationQuit();
		Assembly_CSharp::Doozy::Engine::Themes::ThemeData* GetTheme(mscorlib::System::Guid themeId);
		Assembly_CSharp::Doozy::Engine::Themes::ThemeData* GetTheme(mscorlib::System::String* themeName);
		Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* GetVariant(mscorlib::System::Guid variantId);
		Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* GetVariant(mscorlib::System::Guid themeId, mscorlib::System::Guid variantId);
		Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* GetVariant(mscorlib::System::Guid themeId, mscorlib::System::String* variantName);
		Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* GetVariant(mscorlib::System::String* themeName, mscorlib::System::Guid variantId);
		Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* GetVariant(mscorlib::System::String* themeName, mscorlib::System::String* variantName);
		static void ActivateVariant(mscorlib::System::Guid themeId, mscorlib::System::Guid variantId);
		static void ActivateVariant(mscorlib::System::Guid themeId, mscorlib::System::String* variantName);
		static void ActivateVariant(mscorlib::System::String* themeName, mscorlib::System::Guid variantId);
		static void ActivateVariant(mscorlib::System::String* themeName, mscorlib::System::String* variantName);
		static void ActivateVariant(mscorlib::System::Guid variantId);
		static void Init();
		static void LoadActiveVariant(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* theme);
		static void RegisterTarget(Assembly_CSharp::Doozy::Engine::Themes::ThemeTarget* target);
		static void SaveActiveVariant(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* theme);
		static void UnregisterTarget(Assembly_CSharp::Doozy::Engine::Themes::ThemeTarget* target);
		static void UpdateTargets();
		static void UpdateTargets(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* themeData);
		static void UpdateTargets(mscorlib::System::Guid themeId);
		static Assembly_CSharp::Doozy::Engine::Themes::ThemeManager* AddToScene(bool selectGameObjectAfterCreation);
		static void _cctor();
	};
}

