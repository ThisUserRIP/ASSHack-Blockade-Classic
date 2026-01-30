#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "Rewired_ControllerElementType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_AxisRange.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "Rewired_ModifierKeyFlags.h"
#include "Rewired_Pole.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Player; };
namespace Rewired_Core::Rewired { struct InputAction; };
namespace Rewired_Core::Rewired { struct Controller; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ElementAssignment.h"
namespace Rewired_Core::Rewired { struct ElementAssignment; };

namespace Rewired_Core::Rewired
{
	struct ElementAssignmentInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ControllerMap* kcZEkeCkwsbDlVpCQYkhfRfbrAbY;
		Rewired_Core::Rewired::ControllerElementType NbtEZDJvBiguNErVBFZTyKkBnFrm;
		int32_t dnKJymewRqpyFXTtHfuKlQMjWgq;
		int32_t ZkhjdNsamAethrqQEpEHRosvTDL;
		Rewired_Core::Rewired::AxisRange xRhTQhdaqIDbZIOJrcVaApoIXNhf;
		UnityEngine_CoreModule::UnityEngine::KeyCode YCoficCfhJpaPpshJVBrJOnhMxMW;
		Rewired_Core::Rewired::ModifierKeyFlags deaGiZFJXRrbPFRSkqGfRgMEBKAj;
		int32_t ROFCtmcpCRLeRZJWhnIzrDqdUrm;
		Rewired_Core::Rewired::Pole oXtVlsEtNcstXLjDidTkmRTxuXr;
		bool WtmJgOiMjAdGXTMrnEifPTwJGtqC;
		Rewired_Core::Rewired::Player* get_player();
		Rewired_Core::Rewired::InputAction* get_action();
		Rewired_Core::Rewired::Controller* get_controller();
		Rewired_Core::Rewired::ControllerType get_controllerType();
		int32_t get_controllerId();
		Rewired_Core::Rewired::ControllerMap* get_controllerMap();
		Rewired_Core::Rewired::ControllerElementIdentifier* get_elementIdentifier();
		Rewired_Core::Rewired::ActionElementMap* get_elementMap();
		Rewired_Core::Rewired::ControllerElementType get_elementType();
		Rewired_Core::Rewired::Pole get_axisContribution();
		Rewired_Core::Rewired::AxisRange get_axisRange();
		bool get_invert();
		UnityEngine_CoreModule::UnityEngine::KeyCode get_keyCode();
		Rewired_Core::Rewired::ModifierKeyFlags get_modifierKeyFlags();
		mscorlib::System::String* get_elementDisplayName();
		void _ctor(Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ElementAssignment assignment);
	};
}

