#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerType.h"
#include "Rewired_ControllerElementType.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "Rewired_ModifierKeyFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct Player; };
namespace Rewired_Core::Rewired { struct InputAction; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired
{
	struct ElementAssignmentConflictInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool vMPgRHPSdAfRplDuFDXSUoiphlKb;
		bool qPhdvLIqdfHWlmWEjJrcYFrOQeF;
		int32_t LvBsMepMzQujePFYUrpFdNOUHkai;
		Rewired_Core::Rewired::ControllerType EBtabYCMVXBsRbYhFnfqdjKXqLQ;
		int32_t CvbQaJoobigmAGNWGnAzDUbEQcN;
		int32_t qcQnIYnxpNDnyLlOrJsPEszDcnG;
		int32_t LZJHmbTKwMNusmMGPjrbWMeUSva;
		Rewired_Core::Rewired::ControllerElementType NbtEZDJvBiguNErVBFZTyKkBnFrm;
		int32_t ZkhjdNsamAethrqQEpEHRosvTDL;
		UnityEngine_CoreModule::UnityEngine::KeyCode YCoficCfhJpaPpshJVBrJOnhMxMW;
		Rewired_Core::Rewired::ModifierKeyFlags deaGiZFJXRrbPFRSkqGfRgMEBKAj;
		int32_t ROFCtmcpCRLeRZJWhnIzrDqdUrm;
		bool get_isConflict();
		void set_isConflict(bool value);
		bool get_isUserAssignable();
		void set_isUserAssignable(bool value);
		int32_t get_playerId();
		void set_playerId(int32_t value);
		Rewired_Core::Rewired::ControllerType get_controllerType();
		void set_controllerType(Rewired_Core::Rewired::ControllerType value);
		int32_t get_controllerId();
		void set_controllerId(int32_t value);
		int32_t get_controllerMapId();
		void set_controllerMapId(int32_t value);
		int32_t get_elementMapId();
		void set_elementMapId(int32_t value);
		Rewired_Core::Rewired::ControllerElementType get_elementType();
		void set_elementType(Rewired_Core::Rewired::ControllerElementType value);
		int32_t get_elementIdentifierId();
		void set_elementIdentifierId(int32_t value);
		UnityEngine_CoreModule::UnityEngine::KeyCode get_keyCode();
		void set_keyCode(UnityEngine_CoreModule::UnityEngine::KeyCode value);
		Rewired_Core::Rewired::ModifierKeyFlags get_modifierKeyFlags();
		void set_modifierKeyFlags(Rewired_Core::Rewired::ModifierKeyFlags value);
		int32_t get_actionId();
		void set_actionId(int32_t value);
		Rewired_Core::Rewired::Player* get_player();
		Rewired_Core::Rewired::InputAction* get_action();
		Rewired_Core::Rewired::Controller* get_controller();
		Rewired_Core::Rewired::ControllerMap* get_controllerMap();
		Rewired_Core::Rewired::ControllerElementIdentifier* get_elementIdentifier();
		Rewired_Core::Rewired::ActionElementMap* get_elementMap();
		mscorlib::System::String* get_elementDisplayName();
		void _ctor(bool isConflict, bool isUserAssignable, int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags);
		void _ctor(Rewired_Core::Rewired::ElementAssignmentConflictInfo source);
	};
}

