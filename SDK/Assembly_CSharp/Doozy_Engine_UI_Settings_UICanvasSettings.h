#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct NamesDatabase; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UICanvas; };

namespace Assembly_CSharp::Doozy::Engine::UI::Settings
{
	struct UICanvasSettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabase* database;
		bool DontDestroyCanvasOnLoad;
		mscorlib::System::String* RenamePrefix;
		mscorlib::System::String* RenameSuffix;
		struct StaticFields
		{
			mscorlib::System::String* FILE_NAME;
			Assembly_CSharp::Doozy::Engine::UI::Settings::UICanvasSettings* s_instance;
			bool DONT_DESTROY_CANVAS_ON_LOAD_DEFAULT_VALUE;
			mscorlib::System::String* RENAME_PREFIX_DEFAULT_VALUE;
			mscorlib::System::String* RENAME_SUFFIX_DEFAULT_VALUE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_ResourcesPath();
		static Assembly_CSharp::Doozy::Engine::UI::Settings::UICanvasSettings* get_Instance();
		static Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabase* get_Database();
		static void UpdateDatabase();
		void Reset();
		void Reset(bool saveAssets);
		void ResetComponent(Assembly_CSharp::Doozy::Engine::UI::UICanvas* canvas);
		void SetDirty(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void _ctor();
	};
}

