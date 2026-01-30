#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Message.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIToggle; };
#include "Doozy_Engine_UI_UIToggleState.h"
#include "Doozy_Engine_UI_UIToggleBehaviorType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIToggleMessage : Assembly_CSharp::Doozy::Engine::Message
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::UIToggle* Toggle;
		Assembly_CSharp::Doozy::Engine::UI::UIToggleState ToggleState;
		Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType Type;
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIToggleState toggleState, Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType type);
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIToggle* toggle, Assembly_CSharp::Doozy::Engine::UI::UIToggleState toggleState, Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType type);
	};
}

