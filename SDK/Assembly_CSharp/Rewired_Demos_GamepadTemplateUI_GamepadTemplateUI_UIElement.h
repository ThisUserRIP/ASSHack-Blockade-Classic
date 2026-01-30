#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Demos_GamepadTemplateUI_GamepadTemplateUI.h"
namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI { struct GamepadTemplateUI; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI { struct ControllerUIElement; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI
{
	struct GamepadTemplateUI_UIElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* element;
		void _ctor(int32_t id, Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* element);
	};
}

