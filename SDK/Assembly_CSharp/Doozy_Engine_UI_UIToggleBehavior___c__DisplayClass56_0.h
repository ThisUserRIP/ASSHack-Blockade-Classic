#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_UIToggleBehavior.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIToggleBehavior; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIToggle; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct UIAction; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIToggleBehavior___c__DisplayClass56_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::UIToggle* toggle;
		bool sendGameEvents;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* uiAction;
		bool executeUnityEvent;
		void _ctor();
		void _Invoke_b__0();
	};
}

