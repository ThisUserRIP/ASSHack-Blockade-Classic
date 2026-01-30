#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemesDatabase; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemesSettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::Themes::ThemesDatabase* database;
		bool AutoSave;
		struct StaticFields
		{
			mscorlib::System::String* FILE_NAME;
			Assembly_CSharp::Doozy::Engine::Themes::ThemesSettings* s_instance;
			bool DEFAULT_AUTO_SAVE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_ResourcesPath();
		static Assembly_CSharp::Doozy::Engine::Themes::ThemesSettings* get_Instance();
		static Assembly_CSharp::Doozy::Engine::Themes::ThemesDatabase* get_Database();
		static void UpdateDatabase();
		void Reset();
		void Reset(bool saveAssets);
		void SetDirty(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void _ctor();
	};
}

