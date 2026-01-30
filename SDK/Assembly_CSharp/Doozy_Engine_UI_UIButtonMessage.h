#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Message.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButton; };
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_UI_UIButtonBehaviorType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIButtonMessage : Assembly_CSharp::Doozy::Engine::Message
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::UIButton* Button;
		mscorlib::System::String* ButtonName;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType Type;
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIButton* button);
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIButton* button, Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType type);
		void _ctor(mscorlib::System::String* buttonName);
		void _ctor(mscorlib::System::String* buttonName, Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType type);
	};
}

