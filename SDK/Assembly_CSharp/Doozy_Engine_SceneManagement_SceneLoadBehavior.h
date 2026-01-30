#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct UIAction; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::SceneManagement
{
	struct SceneLoadBehavior : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* OnLoadScene;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* OnSceneLoaded;
		bool get_HasAnimatorEvents();
		bool get_HasEffect();
		bool get_HasGameEvents();
		bool get_HasSound();
		bool get_HasUnityEvents();
		void _ctor();
		void Reset();
	};
}

