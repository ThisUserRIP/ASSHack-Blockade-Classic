#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Message.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawer; };
#include "Doozy_Engine_UI_UIDrawerBehaviorType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIDrawerMessage : Assembly_CSharp::Doozy::Engine::Message
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::UIDrawer* Drawer;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehaviorType Type;
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIDrawer* drawer, Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehaviorType type);
	};
}

