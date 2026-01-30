#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ElementAssignmentType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_AxisRange.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "Rewired_ModifierKeyFlags.h"
#include "Rewired_Pole.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerType.h"
#include "Rewired_ControllerElementType.h"
#include "Rewired_ElementAssignmentConflictCheck.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictCheck; };

namespace Rewired_Core::Rewired
{
	struct ElementAssignment
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ElementAssignmentType type;
		int32_t elementMapId;
		int32_t elementIdentifierId;
		Rewired_Core::Rewired::AxisRange axisRange;
		UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey;
		Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags;
		int32_t actionId;
		Rewired_Core::Rewired::Pole axisContribution;
		bool invert;
		void _ctor(Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId);
		void _ctor(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId);
		void _ctor(Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert);
		void _ctor(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert);
		void _ctor(int32_t elementIdentifierId, int32_t actionId, bool invert);
		void _ctor(int32_t elementIdentifierId, int32_t actionId, bool invert, int32_t elementMapId);
		void _ctor(int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution);
		void _ctor(int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId);
		void _ctor(int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution);
		void _ctor(int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId);
		void _ctor(UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution);
		void _ctor(UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId);
		static Rewired_Core::Rewired::ElementAssignment CompleteAssignment(Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId);
		static Rewired_Core::Rewired::ElementAssignment CompleteAssignment(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId);
		static Rewired_Core::Rewired::ElementAssignment CompleteAssignment(Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert);
		static Rewired_Core::Rewired::ElementAssignment CompleteAssignment(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert);
		static Rewired_Core::Rewired::ElementAssignment FullAxisAssignment(int32_t elementIdentifierId, int32_t actionId, bool invert);
		static Rewired_Core::Rewired::ElementAssignment FullAxisAssignment(int32_t elementIdentifierId, int32_t actionId, bool invert, int32_t elementMapId);
		static Rewired_Core::Rewired::ElementAssignment SplitAxisAssignment(int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution);
		static Rewired_Core::Rewired::ElementAssignment SplitAxisAssignment(int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId);
		static Rewired_Core::Rewired::ElementAssignment ButtonAssignment(int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution);
		static Rewired_Core::Rewired::ElementAssignment ButtonAssignment(int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId);
		static Rewired_Core::Rewired::ElementAssignment KeyboardKeyAssignment(UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution);
		static Rewired_Core::Rewired::ElementAssignment KeyboardKeyAssignment(UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId);
		Rewired_Core::Rewired::ElementAssignmentConflictCheck ToElementAssignmentConflictCheck();
	};
}

