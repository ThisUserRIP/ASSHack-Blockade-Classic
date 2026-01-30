#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButton; };

namespace Rewired_Core::Rewired
{
	struct IControllerTemplateHat
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_value();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_valuePrev();
		Rewired_Core::Rewired::IControllerTemplateButton* get_up();
		Rewired_Core::Rewired::IControllerTemplateButton* get_upRight();
		Rewired_Core::Rewired::IControllerTemplateButton* get_right();
		Rewired_Core::Rewired::IControllerTemplateButton* get_downRight();
		Rewired_Core::Rewired::IControllerTemplateButton* get_down();
		Rewired_Core::Rewired::IControllerTemplateButton* get_downLeft();
		Rewired_Core::Rewired::IControllerTemplateButton* get_left();
		Rewired_Core::Rewired::IControllerTemplateButton* get_upLeft();
	};
}

