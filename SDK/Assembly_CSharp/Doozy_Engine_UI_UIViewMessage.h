#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Message.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIView; };
#include "Doozy_Engine_UI_UIViewBehaviorType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIViewMessage : Assembly_CSharp::Doozy::Engine::Message
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::UIView* View;
		Assembly_CSharp::Doozy::Engine::UI::UIViewBehaviorType Type;
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIView* view);
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIView* view, Assembly_CSharp::Doozy::Engine::UI::UIViewBehaviorType type);
	};
}

