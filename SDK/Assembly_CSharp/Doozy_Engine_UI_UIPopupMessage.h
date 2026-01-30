#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Message.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopup; };
#include "Doozy_Engine_UI_Animation_AnimationType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIPopupMessage : Assembly_CSharp::Doozy::Engine::Message
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::UIPopup* Popup;
		Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType AnimationType;
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup);
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup, Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType);
	};
}

