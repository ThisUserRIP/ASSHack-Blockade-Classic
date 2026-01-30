#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired { struct BridgedController; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Rewired_Core::Rewired { struct ControllerDisconnectedEventArgs; };
namespace Rewired_Core::Rewired { struct UpdateControllerInfoEventArgs; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Interfaces { struct IInputSource; };
#include "Rewired_InputSource.h"
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedMouseSource; };
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedKeyboardSource; };

namespace Rewired_Core::Rewired
{
	struct PlatformInputManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action_1<Rewired_Core::Rewired::BridgedController>* _DeviceConnectedEvent;
		mscorlib::System::Action_1<Rewired_Core::Rewired::ControllerDisconnectedEventArgs>* _DeviceDisconnectedEvent;
		mscorlib::System::Action_1<Rewired_Core::Rewired::UpdateControllerInfoEventArgs>* _UpdateControllerInfoEvent;
		mscorlib::System::Action* _SystemDeviceConnectedEvent;
		mscorlib::System::Action* _SystemDeviceDisconnectedEvent;
		void add_DeviceConnectedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::BridgedController>* value);
		void remove_DeviceConnectedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::BridgedController>* value);
		void add_DeviceDisconnectedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::ControllerDisconnectedEventArgs>* value);
		void remove_DeviceDisconnectedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::ControllerDisconnectedEventArgs>* value);
		void add_UpdateControllerInfoEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::UpdateControllerInfoEventArgs>* value);
		void remove_UpdateControllerInfoEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::UpdateControllerInfoEventArgs>* value);
		void add_SystemDeviceConnectedEvent(mscorlib::System::Action* value);
		void remove_SystemDeviceConnectedEvent(mscorlib::System::Action* value);
		void add_SystemDeviceDisconnectedEvent(mscorlib::System::Action* value);
		void remove_SystemDeviceDisconnectedEvent(mscorlib::System::Action* value);
		int32_t get_deviceCount();
		Rewired_Core::Rewired::PlatformInputManager* get_primaryInputManager();
		Rewired_Core::Rewired::Interfaces::IInputSource* get_inputSource();
		Rewired_Core::Rewired::InputSource get_inputSourceType();
		void Initialize();
		void Update(Rewired_Core::Rewired::UpdateLoopType currentUpdateLoop);
		void OnDestroy();
		void SystemDeviceConnected();
		void SystemDeviceDisconnected();
		void UpdateControllerData(int32_t controllerId, Rewired_Core::Rewired::ControllerDataUpdater* data);
		mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* GetInputDataUpdateDelegate();
		void SetUnityJoystickId(int32_t joystickId, int32_t unityJoystickId);
		Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource* GetUnifiedMouseSource();
		Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* GetUnifiedKeyboardSource();
		void _ctor();
	};
}

