#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopup; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIPopupQueueData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::UIPopup* Popup;
		mscorlib::System::String* PopupName;
		bool InstantAction;
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup, bool instantAction);
		void _ctor(mscorlib::System::String* popupName, Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup, bool instantAction);
		Assembly_CSharp::Doozy::Engine::UI::UIPopup* Show();
	};
}

