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
namespace Rewired_Core::Rewired { struct IControllerTemplateYoke; };
namespace Rewired_Core::Rewired { struct IControllerTemplateThrottle; };
namespace Rewired_Core::Rewired { struct IControllerTemplateHat; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::Rewired
{
	struct FlightYokeTemplate : Rewired_Core::Rewired::ControllerTemplate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Guid typeGuid;
			int32_t elementId_rotateYoke;
			int32_t elementId_yokeZ;
			int32_t elementId_leftPaddle;
			int32_t elementId_rightPaddle;
			int32_t elementId_lever1Axis;
			int32_t elementId_lever1MinDetent;
			int32_t elementId_lever2Axis;
			int32_t elementId_lever2MinDetent;
			int32_t elementId_lever3Axis;
			int32_t elementId_lever3MinDetent;
			int32_t elementId_lever4Axis;
			int32_t elementId_lever4MinDetent;
			int32_t elementId_lever5Axis;
			int32_t elementId_lever5MinDetent;
			int32_t elementId_leftGripButton1;
			int32_t elementId_leftGripButton2;
			int32_t elementId_leftGripButton3;
			int32_t elementId_leftGripButton4;
			int32_t elementId_leftGripButton5;
			int32_t elementId_leftGripButton6;
			int32_t elementId_rightGripButton1;
			int32_t elementId_rightGripButton2;
			int32_t elementId_rightGripButton3;
			int32_t elementId_rightGripButton4;
			int32_t elementId_rightGripButton5;
			int32_t elementId_rightGripButton6;
			int32_t elementId_centerButton1;
			int32_t elementId_centerButton2;
			int32_t elementId_centerButton3;
			int32_t elementId_centerButton4;
			int32_t elementId_centerButton5;
			int32_t elementId_centerButton6;
			int32_t elementId_centerButton7;
			int32_t elementId_centerButton8;
			int32_t elementId_wheel1Up;
			int32_t elementId_wheel1Down;
			int32_t elementId_wheel1Press;
			int32_t elementId_wheel2Up;
			int32_t elementId_wheel2Down;
			int32_t elementId_wheel2Press;
			int32_t elementId_leftGripHatUp;
			int32_t elementId_leftGripHatUpRight;
			int32_t elementId_leftGripHatRight;
			int32_t elementId_leftGripHatDownRight;
			int32_t elementId_leftGripHatDown;
			int32_t elementId_leftGripHatDownLeft;
			int32_t elementId_leftGripHatLeft;
			int32_t elementId_leftGripHatUpLeft;
			int32_t elementId_rightGripHatUp;
			int32_t elementId_rightGripHatUpRight;
			int32_t elementId_rightGripHatRight;
			int32_t elementId_rightGripHatDownRight;
			int32_t elementId_rightGripHatDown;
			int32_t elementId_rightGripHatDownLeft;
			int32_t elementId_rightGripHatLeft;
			int32_t elementId_rightGripHatUpLeft;
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
			int32_t elementId_mode1;
			int32_t elementId_mode2;
			int32_t elementId_mode3;
			int32_t elementId_yoke;
			int32_t elementId_lever1;
			int32_t elementId_lever2;
			int32_t elementId_lever3;
			int32_t elementId_lever4;
			int32_t elementId_lever5;
			int32_t elementId_leftGripHat;
			int32_t elementId_rightGripHat;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftPaddle();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightPaddle();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton3();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton4();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton5();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton6();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton3();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton4();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton5();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton6();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton3();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton4();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton5();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton6();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton7();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton8();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel1Up();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel1Down();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel1Press();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel2Up();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel2Down();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel2Press();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton3();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton4();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton5();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton6();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton7();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton8();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton9();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton10();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_mode1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_mode2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_mode3();
		Rewired_Core::Rewired::IControllerTemplateYoke* Rewired_IFlightYokeTemplate_get_yoke();
		Rewired_Core::Rewired::IControllerTemplateThrottle* Rewired_IFlightYokeTemplate_get_lever1();
		Rewired_Core::Rewired::IControllerTemplateThrottle* Rewired_IFlightYokeTemplate_get_lever2();
		Rewired_Core::Rewired::IControllerTemplateThrottle* Rewired_IFlightYokeTemplate_get_lever3();
		Rewired_Core::Rewired::IControllerTemplateThrottle* Rewired_IFlightYokeTemplate_get_lever4();
		Rewired_Core::Rewired::IControllerTemplateThrottle* Rewired_IFlightYokeTemplate_get_lever5();
		Rewired_Core::Rewired::IControllerTemplateHat* Rewired_IFlightYokeTemplate_get_leftGripHat();
		Rewired_Core::Rewired::IControllerTemplateHat* Rewired_IFlightYokeTemplate_get_rightGripHat();
		void _ctor(mscorlib::System::Object* payload);
		static void _cctor();
	};
}

