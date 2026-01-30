#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundDatabase; };
namespace Assembly_CSharp::Doozy::Engine::Utils { struct UILanguagePack; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundGroupData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	struct SoundyDatabase : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* DatabaseNames;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Soundy::SoundDatabase>* SoundDatabases;
		static Assembly_CSharp::Doozy::Engine::Utils::UILanguagePack* get_UILabels();
		bool AddSoundDatabase(Assembly_CSharp::Doozy::Engine::Soundy::SoundDatabase* database, bool saveAssets);
		bool Contains(mscorlib::System::String* databaseName);
		bool Contains(mscorlib::System::String* databaseName, mscorlib::System::String* soundName);
		bool CreateSoundDatabase(mscorlib::System::String* databaseName, bool showDialog, bool saveAssets);
		bool DeleteDatabase(Assembly_CSharp::Doozy::Engine::Soundy::SoundDatabase* database);
		Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* GetAudioData(mscorlib::System::String* databaseName, mscorlib::System::String* soundName);
		Assembly_CSharp::Doozy::Engine::Soundy::SoundDatabase* GetSoundDatabase(mscorlib::System::String* databaseName);
		void Initialize();
		void InitializeSoundDatabases();
		void RefreshDatabase(bool performUndo, bool saveAssets);
		void RemoveNullDatabases(bool saveAssets);
		bool RenameSoundDatabase(Assembly_CSharp::Doozy::Engine::Soundy::SoundDatabase* soundDatabase, mscorlib::System::String* newDatabaseName);
		void SearchForUnregisteredDatabases(bool saveAssets);
		void SetDirty(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void UpdateDatabaseNames(bool saveAssets);
		void _ctor();
	};
}

