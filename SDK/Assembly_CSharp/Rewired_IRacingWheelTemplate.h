#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButton; };
namespace Rewired_Core::Rewired { struct IControllerTemplateDPad; };

namespace Assembly_CSharp::Rewired
{
	struct IRacingWheelTemplate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_wheel();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_accelerator();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_brake();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_clutch();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shiftDown();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shiftUp();
		Rewired_Core::Rewired::IControllerTemplateButton* get_wheelButton1();
		Rewired_Core::Rewired::IControllerTemplateButton* get_wheelButton2();
		Rewired_Core::Rewired::IControllerTemplateButton* get_wheelButton3();
		Rewired_Core::Rewired::IControllerTemplateButton* get_wheelButton4();
		Rewired_Core::Rewired::IControllerTemplateButton* get_wheelButton5();
		Rewired_Core::Rewired::IControllerTemplateButton* get_wheelButton6();
		Rewired_Core::Rewired::IControllerTemplateButton* get_wheelButton7();
		Rewired_Core::Rewired::IControllerTemplateButton* get_wheelButton8();
		Rewired_Core::Rewired::IControllerTemplateButton* get_wheelButton9();
		Rewired_Core::Rewired::IControllerTemplateButton* get_wheelButton10();
		Rewired_Core::Rewired::IControllerTemplateButton* get_consoleButton1();
		Rewired_Core::Rewired::IControllerTemplateButton* get_consoleButton2();
		Rewired_Core::Rewired::IControllerTemplateButton* get_consoleButton3();
		Rewired_Core::Rewired::IControllerTemplateButton* get_consoleButton4();
		Rewired_Core::Rewired::IControllerTemplateButton* get_consoleButton5();
		Rewired_Core::Rewired::IControllerTemplateButton* get_consoleButton6();
		Rewired_Core::Rewired::IControllerTemplateButton* get_consoleButton7();
		Rewired_Core::Rewired::IControllerTemplateButton* get_consoleButton8();
		Rewired_Core::Rewired::IControllerTemplateButton* get_consoleButton9();
		Rewired_Core::Rewired::IControllerTemplateButton* get_consoleButton10();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shifter1();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shifter2();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shifter3();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shifter4();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shifter5();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shifter6();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shifter7();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shifter8();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shifter9();
		Rewired_Core::Rewired::IControllerTemplateButton* get_shifter10();
		Rewired_Core::Rewired::IControllerTemplateButton* get_reverseGear();
		Rewired_Core::Rewired::IControllerTemplateButton* get_select();
		Rewired_Core::Rewired::IControllerTemplateButton* get_start();
		Rewired_Core::Rewired::IControllerTemplateButton* get_systemButton();
		Rewired_Core::Rewired::IControllerTemplateButton* get_horn();
		Rewired_Core::Rewired::IControllerTemplateDPad* get_dPad();
	};
}

