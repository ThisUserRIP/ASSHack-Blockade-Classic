#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_Language.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Utils
{
	struct LanguagePack : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* CURRENT_LANGUAGE_PREFS_KEY;
			Assembly_CSharp::Doozy::Engine::Language DEFAULT_LANGUAGE;
			Assembly_CSharp::Doozy::Engine::Language s_currentLanguage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::Doozy::Engine::Language get_CurrentLanguage();
		static void set_CurrentLanguage(Assembly_CSharp::Doozy::Engine::Language value);
		static void SaveLanguagePreference(Assembly_CSharp::Doozy::Engine::Language language);
		static void SaveLanguagePreference(mscorlib::System::String* prefsKey, Assembly_CSharp::Doozy::Engine::Language language);
		void _ctor();
		static void _cctor();
	};
}

