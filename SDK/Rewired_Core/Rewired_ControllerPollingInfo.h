#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerType.h"
#include "Rewired_ControllerElementType.h"
#include "Rewired_Pole.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct Player; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };

namespace Rewired_Core::Rewired
{
	struct ControllerPollingInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool HbMhvqCSrhcXVZqJupXaRYNgZUG;
		int32_t LvBsMepMzQujePFYUrpFdNOUHkai;
		int32_t CvbQaJoobigmAGNWGnAzDUbEQcN;
		mscorlib::System::String* brrSgqiGgLFOLbapmPduQmmLGHaU;
		Rewired_Core::Rewired::ControllerType EBtabYCMVXBsRbYhFnfqdjKXqLQ;
		Rewired_Core::Rewired::ControllerElementType NbtEZDJvBiguNErVBFZTyKkBnFrm;
		int32_t ZgHDnsdzUDAuNAjKBtjGGRAwNXP;
		Rewired_Core::Rewired::Pole wMcyhzpOyFUIXSDWFQIeDgkLBbJ;
		mscorlib::System::String* DOufZQDAvOmuVFWEGiGPmMCDUldy;
		int32_t ZkhjdNsamAethrqQEpEHRosvTDL;
		UnityEngine_CoreModule::UnityEngine::KeyCode IIjsnFFOxXWIGdPNpLGcpDObcglh;
		bool get_success();
		void set_success(bool value);
		int32_t get_playerId();
		void set_playerId(int32_t value);
		int32_t get_controllerId();
		void set_controllerId(int32_t value);
		mscorlib::System::String* get_controllerName();
		void set_controllerName(mscorlib::System::String* value);
		Rewired_Core::Rewired::ControllerType get_controllerType();
		void set_controllerType(Rewired_Core::Rewired::ControllerType value);
		Rewired_Core::Rewired::ControllerElementType get_elementType();
		void set_elementType(Rewired_Core::Rewired::ControllerElementType value);
		int32_t get_elementIndex();
		void set_elementIndex(int32_t value);
		Rewired_Core::Rewired::Pole get_axisPole();
		void set_axisPole(Rewired_Core::Rewired::Pole value);
		mscorlib::System::String* get_elementIdentifierName();
		void set_elementIdentifierName(mscorlib::System::String* value);
		int32_t get_elementIdentifierId();
		void set_elementIdentifierId(int32_t value);
		UnityEngine_CoreModule::UnityEngine::KeyCode get_keyboardKey();
		void set_keyboardKey(UnityEngine_CoreModule::UnityEngine::KeyCode value);
		Rewired_Core::Rewired::Player* get_player();
		Rewired_Core::Rewired::Controller* get_controller();
		Rewired_Core::Rewired::ControllerElementIdentifier* get_elementIdentifier();
		void _ctor(bool success, int32_t playerId, int32_t controllerId, mscorlib::System::String* controllerName, Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIndex, Rewired_Core::Rewired::Pole axisPole, mscorlib::System::String* elementIdentifierName, int32_t elementIdentifierId, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey);
		void _ctor(Rewired_Core::Rewired::ControllerPollingInfo source);
		static Rewired_Core::Rewired::ControllerPollingInfo JkHgySUQRZiFOnpoFnmYOexoSBe();
	};
}

