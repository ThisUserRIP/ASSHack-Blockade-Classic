#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Rewired_Core\Rewired_PlatformInputManager.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct PlatformInputManager; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename TKey, typename TValue> struct IndexedDictionary_2; };
namespace Rewired_Windows { struct hFvssZJrUACgnZDbiMoUecsFNur_OnoQEWTGDHnWmkJrEUZPdmpWfwP; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\Rewired_Core\Rewired_Platforms_WindowsStandalonePrimaryInputSource.h"
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
namespace Rewired_Core::Rewired { struct HardwareJoystickMap_InputManager; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data { struct ConfigVars; };
namespace Rewired_Windows { struct wfFMIBEXPsmfSpFJLksoChxQUpf; };
namespace Rewired_Core::Rewired::Interfaces { struct IInputSource; };
#include "..\Rewired_Core\Rewired_InputSource.h"
#include "..\Rewired_Core\Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedMouseSource; };
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedKeyboardSource; };
namespace Rewired_Core::Rewired { struct BridgedController; };
namespace Rewired_Core::Rewired { struct ControllerDisconnectedEventArgs; };
namespace mscorlib::System { struct EventArgs; };
namespace Rewired_Core::Rewired { struct UpdateControllerInfoEventArgs; };

namespace Rewired_Windows
{
	struct hFvssZJrUACgnZDbiMoUecsFNur : Rewired_Core::Rewired::PlatformInputManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool WeSyEOsdisgjeJJkEBGSGKemQhb;
		mscorlib::System::Object* YIcbFUHGPjmjVaCWRUeCQWUByp;
		Rewired_Core::Rewired::Utils::Classes::Data::IndexedDictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::PlatformInputManager>* eRiOkvIdgyHEYTdYdGzlXLLVruk;
		Rewired_Windows::hFvssZJrUACgnZDbiMoUecsFNur_OnoQEWTGDHnWmkJrEUZPdmpWfwP* IBHELwaVRoXAyGOQsHstfGWDOnCs;
		mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* UjPuImNFwAMiVEaqPxsoSVJBogP;
		Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource PMXBjQHkvWCQHHNhcPDfLItHgWIz;
		bool hRKdnxPjLkCvlPzgtQwaqKHFDFd;
		Rewired_Core::Rewired::PlatformInputManager* UyhfUZcmXokKjqHEblgWauscyXWp;
		mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* zrJjEUauLDtdAAFobgNTcCEzaCAP;
		mscorlib::System::Func_1<mscorlib::System::Int32>* oHyqlfWpUdXEHVEEqIDlcVvkCpg;
		void _ctor(Rewired_Core::Rewired::Data::ConfigVars* configVars, mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* getHardwareJoystickMap_InputManager, mscorlib::System::Func_1<mscorlib::System::Int32>* getNewJoystickId);
		bool Rewired_Interfaces_INativePlatformHelper_get_isApplicationFocused();
		bool hfsvQieoEXtdwVlvpdfuiOYQXW(Rewired_Core::Rewired::Data::ConfigVars* A_1, Rewired_Windows::wfFMIBEXPsmfSpFJLksoChxQUpf* A_2);
		bool FHQjBExVUVkwwzNkjIEtIwbudAk(Rewired_Core::Rewired::Data::ConfigVars* A_1, Rewired_Windows::wfFMIBEXPsmfSpFJLksoChxQUpf* A_2);
		bool ALUWiCAaKuEvPwJihAgmNiYDwiI(Rewired_Core::Rewired::Data::ConfigVars* A_1, Rewired_Windows::wfFMIBEXPsmfSpFJLksoChxQUpf* A_2);
		bool XHPXakEyzApZjTHSUhkPkxiBcOH(Rewired_Core::Rewired::Data::ConfigVars* A_1, bool A_2);
		int32_t get_deviceCount();
		Rewired_Core::Rewired::PlatformInputManager* get_primaryInputManager();
		Rewired_Core::Rewired::Interfaces::IInputSource* get_inputSource();
		Rewired_Core::Rewired::InputSource get_inputSourceType();
		void Initialize();
		void Update(Rewired_Core::Rewired::UpdateLoopType currentUpdateLoop);
		void OnDestroy();
		mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* GetInputDataUpdateDelegate();
		void UpdateControllerData(int32_t controllerId, Rewired_Core::Rewired::ControllerDataUpdater* data);
		void SystemDeviceConnected();
		void SystemDeviceDisconnected();
		void SetUnityJoystickId(int32_t joystickId, int32_t unityJoystickId);
		Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource* GetUnifiedMouseSource();
		Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* GetUnifiedKeyboardSource();
		void PizkVVcufjbSQYyhmjiAVgPAIDt(Rewired_Core::Rewired::BridgedController* A_1);
		void eOgHQyrNYnETkygokmrHvPenfpuh(Rewired_Core::Rewired::ControllerDisconnectedEventArgs* A_1);
		void XcgEcgTfLBnUUbFOQsMaskoaITBB(mscorlib::System::EventArgs* A_1);
		void VxPbFWTDPWZdaDBmaBNAtILMQWY(mscorlib::System::EventArgs* A_1);
		void cDteeClkBcyAZaPaFGRpeKjIJcFX(Rewired_Core::Rewired::UpdateControllerInfoEventArgs* A_1);
	};
}

