#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_AudioModule::UnityEngine::Audio { struct AudioMixerGroup; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundGroupData; };
namespace Assembly_CSharp::Doozy::Engine::Utils { struct UILanguagePack; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };

namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	struct SoundDatabase : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* DatabaseName;
		UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* OutputAudioMixerGroup;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* SoundNames;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData>* Database;
		static Assembly_CSharp::Doozy::Engine::Utils::UILanguagePack* get_UILabels();
		bool get_HasSoundsWithMissingAudioClips();
		bool Add(Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* data, bool saveAssets);
		Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* Add(mscorlib::System::String* soundName, bool performUndo, bool saveAssets);
		bool Contains(mscorlib::System::String* soundName);
		bool Contains(Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* soundGroupData);
		Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* GetData(mscorlib::System::String* soundName);
		void Initialize(bool saveAssets);
		void RefreshDatabase(bool performUndo, bool saveAssets);
		bool Remove(Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* data, bool showDialog, bool saveAssets);
		void RemoveEntriesWithNoAudioClipsReferenced(bool performUndo, bool saveAssets);
		void RemoveDuplicateEntries(bool performUndo, bool saveAssets);
		void RemoveUnnamedEntries(bool performUndo, bool saveAssets);
		void SetDirty(bool saveAssets);
		void Sort(bool performUndo, bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void UpdateSoundNames(bool saveAssets);
		bool AddNoSound(bool saveAssets);
		void AddObjectToAsset(UnityEngine_CoreModule::UnityEngine::Object* objectToAdd);
		bool CheckAllDataForCorrectDatabaseName(bool saveAssets);
		void RemoveUnreferencedData(bool saveAssets);
		void _ctor();
	};
}

