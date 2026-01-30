#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_UIDrawerBehaviorType.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct UIAction; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIDrawerBehavior : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehaviorType DrawerBehaviorType;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* OnFinished;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* OnStart;
		bool get_HasAnimatorEvents();
		bool get_HasEffect();
		bool get_HasGameEvents();
		bool get_HasSound();
		bool get_HasUnityEvents();
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehaviorType behaviorType);
		void Reset(Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehaviorType behaviorType);
	};
}

