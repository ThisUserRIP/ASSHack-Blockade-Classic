#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimationData; };
#include "Doozy_Engine_UI_Animation_AnimationType.h"
namespace Assembly_CSharp::Doozy::Engine::Utils { struct UILanguagePack; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };

namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	struct UIAnimationDatabase : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* AnimationNames;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData>* Database;
		mscorlib::System::String* DatabaseName;
		Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType DataType;
		static Assembly_CSharp::Doozy::Engine::Utils::UILanguagePack* get_UILabels();
		bool Add(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, mscorlib::System::String* animationName, bool saveAssets);
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData* AddDefaultData(bool saveAssets);
		bool Contains(mscorlib::System::String* animationName);
		bool Contains(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData* data);
		void CreatePreset(mscorlib::System::String* newPresetName, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, bool saveAssets);
		bool Delete(mscorlib::System::String* animationName, bool saveAssets);
		bool Delete(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData* data, bool saveAssets);
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData* Get(mscorlib::System::String* animationName);
		void RefreshDatabase(bool saveAssets);
		void RemoveNullEntries(bool saveAssets);
		void SetDirty(bool saveAssets);
		void Sort(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void UpdateAnimationNames(bool saveAssets);
		void AddObjectToAsset(UnityEngine_CoreModule::UnityEngine::Object* objectToAdd);
		void Rename(mscorlib::System::String* oldAnimationName, mscorlib::System::String* newAnimationName);
		void RenameAssetFileNamesToReflectAnimationNames();
		void _ctor();
	};
}

