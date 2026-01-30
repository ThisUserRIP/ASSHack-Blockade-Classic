#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimationsDatabase; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimationDatabase; };
#include "Doozy_Engine_UI_Animation_AnimationType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimationData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimation; };

namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	struct UIAnimations : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationsDatabase* Show;
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationsDatabase* Hide;
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationsDatabase* Loop;
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationsDatabase* Punch;
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationsDatabase* State;
		struct StaticFields
		{
			mscorlib::System::String* FILE_NAME;
			mscorlib::System::String* DEFAULT_DATABASE_NAME;
			mscorlib::System::String* DEFAULT_PRESET_NAME;
			Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations* s_instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations* get_Instance();
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationDatabase* CreateDatabase(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType databaseType, mscorlib::System::String* newPresetCategory, bool saveAssets);
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationsDatabase* Get(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType databaseType);
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData* Get(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType databaseType, mscorlib::System::String* databaseName, mscorlib::System::String* animationName);
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationDatabase* Get(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType databaseType, mscorlib::System::String* databaseName);
		void Initialize();
		void SearchForUnregisteredDatabases(bool saveAssets);
		void SetDirty(bool saveAssets);
		static Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* LoadPreset(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType, mscorlib::System::String* presetCategory, mscorlib::System::String* presetName);
		void _ctor();
	};
}

