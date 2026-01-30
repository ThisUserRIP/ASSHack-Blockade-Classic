#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ElementAssignmentType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerType.h"
#include "Rewired_AxisRange.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "Rewired_ModifierKeyFlags.h"
#include "Rewired_Pole.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerElementType.h"
#include "Rewired_ElementAssignment.h"
namespace Rewired_Core::Rewired { struct ElementAssignment; };

namespace Rewired_Core::Rewired
{
	struct ElementAssignmentConflictCheck
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ElementAssignmentType BvnovZchhhlZtwqfBvdyZKboiode;
		int32_t LvBsMepMzQujePFYUrpFdNOUHkai;
		Rewired_Core::Rewired::ControllerType EBtabYCMVXBsRbYhFnfqdjKXqLQ;
		int32_t CvbQaJoobigmAGNWGnAzDUbEQcN;
		int32_t qcQnIYnxpNDnyLlOrJsPEszDcnG;
		int32_t lbZAJcYBgmIlEYNOHEAhgbarWWi;
		int32_t LZJHmbTKwMNusmMGPjrbWMeUSva;
		int32_t ZkhjdNsamAethrqQEpEHRosvTDL;
		Rewired_Core::Rewired::AxisRange xRhTQhdaqIDbZIOJrcVaApoIXNhf;
		UnityEngine_CoreModule::UnityEngine::KeyCode IIjsnFFOxXWIGdPNpLGcpDObcglh;
		Rewired_Core::Rewired::ModifierKeyFlags deaGiZFJXRrbPFRSkqGfRgMEBKAj;
		int32_t ROFCtmcpCRLeRZJWhnIzrDqdUrm;
		Rewired_Core::Rewired::Pole oXtVlsEtNcstXLjDidTkmRTxuXr;
		bool WtmJgOiMjAdGXTMrnEifPTwJGtqC;
		Rewired_Core::Rewired::ElementAssignmentType get_elementAssignmentType();
		void set_elementAssignmentType(Rewired_Core::Rewired::ElementAssignmentType value);
		int32_t get_playerId();
		void set_playerId(int32_t value);
		Rewired_Core::Rewired::ControllerType get_controllerType();
		void set_controllerType(Rewired_Core::Rewired::ControllerType value);
		int32_t get_controllerId();
		void set_controllerId(int32_t value);
		int32_t get_controllerMapId();
		void set_controllerMapId(int32_t value);
		int32_t get_controllerMapCategoryId();
		void set_controllerMapCategoryId(int32_t value);
		int32_t get_elementMapId();
		void set_elementMapId(int32_t value);
		int32_t get_elementIdentifierId();
		void set_elementIdentifierId(int32_t value);
		Rewired_Core::Rewired::AxisRange get_axisRange();
		void set_axisRange(Rewired_Core::Rewired::AxisRange value);
		UnityEngine_CoreModule::UnityEngine::KeyCode get_keyboardKey();
		void set_keyboardKey(UnityEngine_CoreModule::UnityEngine::KeyCode value);
		Rewired_Core::Rewired::ModifierKeyFlags get_modifierKeyFlags();
		void set_modifierKeyFlags(Rewired_Core::Rewired::ModifierKeyFlags value);
		int32_t get_actionId();
		void set_actionId(int32_t value);
		Rewired_Core::Rewired::Pole get_axisContribution();
		void set_axisContribution(Rewired_Core::Rewired::Pole value);
		bool get_invert();
		void set_invert(bool value);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, int32_t actionId, bool invert);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, int32_t actionId, bool invert, int32_t elementMapId);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution);
		void _ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId);
		void _ctor(Rewired_Core::Rewired::ElementAssignmentConflictCheck source);
		Rewired_Core::Rewired::ElementAssignment ToElementAssignment();
		Rewired_Core::Rewired::ElementAssignment ToFullAxisAssignment();
		Rewired_Core::Rewired::ElementAssignment ToSplitAxisAssignment();
		Rewired_Core::Rewired::ElementAssignment ToButtonAssignment();
		Rewired_Core::Rewired::ElementAssignment ToKeyboardKeyAssignment();
		void MWrDjpdiPfRQYRMWwVXpiSgkYfIE();
	};
}

