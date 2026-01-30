#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Rewired_Core\Rewired_ControllerTemplate.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButton; };
namespace Rewired_Core::Rewired { struct IControllerTemplateDPad; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::Rewired
{
	struct RacingWheelTemplate : Rewired_Core::Rewired::ControllerTemplate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Guid typeGuid;
			int32_t elementId_wheel;
			int32_t elementId_accelerator;
			int32_t elementId_brake;
			int32_t elementId_clutch;
			int32_t elementId_shiftDown;
			int32_t elementId_shiftUp;
			int32_t elementId_wheelButton1;
			int32_t elementId_wheelButton2;
			int32_t elementId_wheelButton3;
			int32_t elementId_wheelButton4;
			int32_t elementId_wheelButton5;
			int32_t elementId_wheelButton6;
			int32_t elementId_wheelButton7;
			int32_t elementId_wheelButton8;
			int32_t elementId_wheelButton9;
			int32_t elementId_wheelButton10;
			int32_t elementId_consoleButton1;
			int32_t elementId_consoleButton2;
			int32_t elementId_consoleButton3;
			int32_t elementId_consoleButton4;
			int32_t elementId_consoleButton5;
			int32_t elementId_consoleButton6;
			int32_t elementId_consoleButton7;
			int32_t elementId_consoleButton8;
			int32_t elementId_consoleButton9;
			int32_t elementId_consoleButton10;
			int32_t elementId_shifter1;
			int32_t elementId_shifter2;
			int32_t elementId_shifter3;
			int32_t elementId_shifter4;
			int32_t elementId_shifter5;
			int32_t elementId_shifter6;
			int32_t elementId_shifter7;
			int32_t elementId_shifter8;
			int32_t elementId_shifter9;
			int32_t elementId_shifter10;
			int32_t elementId_reverseGear;
			int32_t elementId_select;
			int32_t elementId_start;
			int32_t elementId_systemButton;
			int32_t elementId_horn;
			int32_t elementId_dPadUp;
			int32_t elementId_dPadRight;
			int32_t elementId_dPadDown;
			int32_t elementId_dPadLeft;
			int32_t elementId_dPad;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_IRacingWheelTemplate_get_wheel();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_IRacingWheelTemplate_get_accelerator();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_IRacingWheelTemplate_get_brake();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_IRacingWheelTemplate_get_clutch();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shiftDown();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shiftUp();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton3();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton4();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton5();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton6();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton7();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton8();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton9();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton10();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton3();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton4();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton5();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton6();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton7();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton8();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton9();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton10();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter3();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter4();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter5();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter6();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter7();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter8();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter9();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter10();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_reverseGear();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_select();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_start();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_systemButton();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_horn();
		Rewired_Core::Rewired::IControllerTemplateDPad* Rewired_IRacingWheelTemplate_get_dPad();
		void _ctor(mscorlib::System::Object* payload);
		static void _cctor();
	};
}

