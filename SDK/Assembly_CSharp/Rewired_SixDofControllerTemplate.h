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
namespace Rewired_Core::Rewired { struct IControllerTemplateHat; };
namespace Rewired_Core::Rewired { struct IControllerTemplateThrottle; };
namespace Rewired_Core::Rewired { struct IControllerTemplateStick6D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::Rewired
{
	struct SixDofControllerTemplate : Rewired_Core::Rewired::ControllerTemplate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Guid typeGuid;
			int32_t elementId_positionX;
			int32_t elementId_positionY;
			int32_t elementId_positionZ;
			int32_t elementId_rotationX;
			int32_t elementId_rotationY;
			int32_t elementId_rotationZ;
			int32_t elementId_throttle1Axis;
			int32_t elementId_throttle1MinDetent;
			int32_t elementId_throttle2Axis;
			int32_t elementId_throttle2MinDetent;
			int32_t elementId_extraAxis1;
			int32_t elementId_extraAxis2;
			int32_t elementId_extraAxis3;
			int32_t elementId_extraAxis4;
			int32_t elementId_button1;
			int32_t elementId_button2;
			int32_t elementId_button3;
			int32_t elementId_button4;
			int32_t elementId_button5;
			int32_t elementId_button6;
			int32_t elementId_button7;
			int32_t elementId_button8;
			int32_t elementId_button9;
			int32_t elementId_button10;
			int32_t elementId_button11;
			int32_t elementId_button12;
			int32_t elementId_button13;
			int32_t elementId_button14;
			int32_t elementId_button15;
			int32_t elementId_button16;
			int32_t elementId_button17;
			int32_t elementId_button18;
			int32_t elementId_button19;
			int32_t elementId_button20;
			int32_t elementId_button21;
			int32_t elementId_button22;
			int32_t elementId_button23;
			int32_t elementId_button24;
			int32_t elementId_button25;
			int32_t elementId_button26;
			int32_t elementId_button27;
			int32_t elementId_button28;
			int32_t elementId_button29;
			int32_t elementId_button30;
			int32_t elementId_button31;
			int32_t elementId_button32;
			int32_t elementId_hat1Up;
			int32_t elementId_hat1UpRight;
			int32_t elementId_hat1Right;
			int32_t elementId_hat1DownRight;
			int32_t elementId_hat1Down;
			int32_t elementId_hat1DownLeft;
			int32_t elementId_hat1Left;
			int32_t elementId_hat1UpLeft;
			int32_t elementId_hat2Up;
			int32_t elementId_hat2UpRight;
			int32_t elementId_hat2Right;
			int32_t elementId_hat2DownRight;
			int32_t elementId_hat2Down;
			int32_t elementId_hat2DownLeft;
			int32_t elementId_hat2Left;
			int32_t elementId_hat2UpLeft;
			int32_t elementId_hat1;
			int32_t elementId_hat2;
			int32_t elementId_throttle1;
			int32_t elementId_throttle2;
			int32_t elementId_stick;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_ISixDofControllerTemplate_get_extraAxis1();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_ISixDofControllerTemplate_get_extraAxis2();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_ISixDofControllerTemplate_get_extraAxis3();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_ISixDofControllerTemplate_get_extraAxis4();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button1();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button2();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button3();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button4();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button5();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button6();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button7();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button8();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button9();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button10();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button11();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button12();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button13();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button14();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button15();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button16();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button17();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button18();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button19();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button20();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button21();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button22();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button23();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button24();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button25();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button26();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button27();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button28();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button29();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button30();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button31();
		Rewired_Core::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button32();
		Rewired_Core::Rewired::IControllerTemplateHat* Rewired_ISixDofControllerTemplate_get_hat1();
		Rewired_Core::Rewired::IControllerTemplateHat* Rewired_ISixDofControllerTemplate_get_hat2();
		Rewired_Core::Rewired::IControllerTemplateThrottle* Rewired_ISixDofControllerTemplate_get_throttle1();
		Rewired_Core::Rewired::IControllerTemplateThrottle* Rewired_ISixDofControllerTemplate_get_throttle2();
		Rewired_Core::Rewired::IControllerTemplateStick6D* Rewired_ISixDofControllerTemplate_get_stick();
		void _ctor(mscorlib::System::Object* payload);
		static void _cctor();
	};
}

