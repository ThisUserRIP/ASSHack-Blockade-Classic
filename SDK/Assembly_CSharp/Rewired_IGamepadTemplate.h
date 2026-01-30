#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButton; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };
namespace Rewired_Core::Rewired { struct IControllerTemplateThumbStick; };
namespace Rewired_Core::Rewired { struct IControllerTemplateDPad; };

namespace Assembly_CSharp::Rewired
{
	struct IGamepadTemplate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::IControllerTemplateButton* get_actionBottomRow1();
		Rewired_Core::Rewired::IControllerTemplateButton* get_a();
		Rewired_Core::Rewired::IControllerTemplateButton* get_actionBottomRow2();
		Rewired_Core::Rewired::IControllerTemplateButton* get_b();
		Rewired_Core::Rewired::IControllerTemplateButton* get_actionBottomRow3();
		Rewired_Core::Rewired::IControllerTemplateButton* get_c();
		Rewired_Core::Rewired::IControllerTemplateButton* get_actionTopRow1();
		Rewired_Core::Rewired::IControllerTemplateButton* get_x();
		Rewired_Core::Rewired::IControllerTemplateButton* get_actionTopRow2();
		Rewired_Core::Rewired::IControllerTemplateButton* get_y();
		Rewired_Core::Rewired::IControllerTemplateButton* get_actionTopRow3();
		Rewired_Core::Rewired::IControllerTemplateButton* get_z();
		Rewired_Core::Rewired::IControllerTemplateButton* get_leftShoulder1();
		Rewired_Core::Rewired::IControllerTemplateButton* get_leftBumper();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_leftShoulder2();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_leftTrigger();
		Rewired_Core::Rewired::IControllerTemplateButton* get_rightShoulder1();
		Rewired_Core::Rewired::IControllerTemplateButton* get_rightBumper();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_rightShoulder2();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_rightTrigger();
		Rewired_Core::Rewired::IControllerTemplateButton* get_center1();
		Rewired_Core::Rewired::IControllerTemplateButton* get_back();
		Rewired_Core::Rewired::IControllerTemplateButton* get_center2();
		Rewired_Core::Rewired::IControllerTemplateButton* get_start();
		Rewired_Core::Rewired::IControllerTemplateButton* get_center3();
		Rewired_Core::Rewired::IControllerTemplateButton* get_guide();
		Rewired_Core::Rewired::IControllerTemplateThumbStick* get_leftStick();
		Rewired_Core::Rewired::IControllerTemplateThumbStick* get_rightStick();
		Rewired_Core::Rewired::IControllerTemplateDPad* get_dPad();
	};
}

