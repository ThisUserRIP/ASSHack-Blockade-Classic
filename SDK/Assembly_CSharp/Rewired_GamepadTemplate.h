#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Rewired_Core\Rewired_ControllerTemplate.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButton; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };
namespace Rewired_Core::Rewired { struct IControllerTemplateThumbStick; };
namespace Rewired_Core::Rewired { struct IControllerTemplateDPad; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::Rewired
{
	struct GamepadTemplate : Rewired_Core::Rewired::ControllerTemplate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Guid typeGuid;
			int32_t elementId_leftStickX;
			int32_t elementId_leftStickY;
			int32_t elementId_rightStickX;
			int32_t elementId_rightStickY;
			int32_t elementId_actionBottomRow1;
			int32_t elementId_a;
			int32_t elementId_actionBottomRow2;
			int32_t elementId_b;
			int32_t elementId_actionBottomRow3;
			int32_t elementId_c;
			int32_t elementId_actionTopRow1;
			int32_t elementId_x;
			int32_t elementId_actionTopRow2;
			int32_t elementId_y;
			int32_t elementId_actionTopRow3;
			int32_t elementId_z;
			int32_t elementId_leftShoulder1;
			int32_t elementId_leftBumper;
			int32_t elementId_leftShoulder2;
			int32_t elementId_leftTrigger;
			int32_t elementId_rightShoulder1;
			int32_t elementId_rightBumper;
			int32_t elementId_rightShoulder2;
			int32_t elementId_rightTrigger;
			int32_t elementId_center1;
			int32_t elementId_back;
			int32_t elementId_center2;
			int32_t elementId_start;
			int32_t elementId_center3;
			int32_t elementId_guide;
			int32_t elementId_leftStickButton;
			int32_t elementId_rightStickButton;
			int32_t elementId_dPadUp;
			int32_t elementId_dPadRight;
			int32_t elementId_dPadDown;
			int32_t elementId_dPadLeft;
			int32_t elementId_leftStick;
			int32_t elementId_rightStick;
			int32_t elementId_dPad;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionBottomRow1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_a();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionBottomRow2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_b();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionBottomRow3();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_c();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionTopRow1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_x();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionTopRow2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_y();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionTopRow3();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_z();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_leftShoulder1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_leftBumper();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_IGamepadTemplate_get_leftShoulder2();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_IGamepadTemplate_get_leftTrigger();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_rightShoulder1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_rightBumper();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_IGamepadTemplate_get_rightShoulder2();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_IGamepadTemplate_get_rightTrigger();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_center1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_back();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_center2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_start();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_center3();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_guide();
		Rewired_Core::Rewired::IControllerTemplateThumbStick* Rewired_IGamepadTemplate_get_leftStick();
		Rewired_Core::Rewired::IControllerTemplateThumbStick* Rewired_IGamepadTemplate_get_rightStick();
		Rewired_Core::Rewired::IControllerTemplateDPad* Rewired_IGamepadTemplate_get_dPad();
		void _ctor(mscorlib::System::Object* payload);
		static void _cctor();
	};
}

