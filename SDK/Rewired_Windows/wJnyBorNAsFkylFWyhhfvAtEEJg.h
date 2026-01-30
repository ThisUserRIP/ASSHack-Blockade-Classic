#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Rewired_Core\Rewired_PlatformInputManager.h"
namespace Rewired_Windows { struct wJnyBorNAsFkylFWyhhfvAtEEJg_kWxgKeDkGnyNEbtEGhPUIMNINsqw; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Windows { struct wJnyBorNAsFkylFWyhhfvAtEEJg_tWgsDRefuRKqWXadRAqsNjmxmgI; };
namespace Rewired_Windows { struct wJnyBorNAsFkylFWyhhfvAtEEJg_pVBetGkXgMGmVIbAknZrNWTDcslj; };
namespace Rewired_Windows { template <typename T> struct XpKciYbafObMtRdJmdltDaTtnsiE; };
#include "..\Rewired_Core\Rewired_Config_UpdateLoopSetting.h"
#include "..\Rewired_Core\Rewired_UpdateLoopType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
namespace Rewired_Core::Rewired { struct HardwareJoystickMap_InputManager; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlatformInputManager; };
namespace Rewired_Core::Rewired::Interfaces { struct IInputSource; };
#include "..\Rewired_Core\Rewired_InputSource.h"
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedMouseSource; };
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedKeyboardSource; };

namespace Rewired_Windows
{
	struct wJnyBorNAsFkylFWyhhfvAtEEJg : Rewired_Core::Rewired::PlatformInputManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Rewired_Windows::wJnyBorNAsFkylFWyhhfvAtEEJg_kWxgKeDkGnyNEbtEGhPUIMNINsqw*>* nMexzAcfgERHjwRNnYwzfgtxFWT;
		bool SgMoXoJSNlFwvatfcxgKSczPyOI;
		Rewired_Windows::wJnyBorNAsFkylFWyhhfvAtEEJg_tWgsDRefuRKqWXadRAqsNjmxmgI* kcFrHTWOJGIOPTYtBprNJXXMRVM;
		Rewired_Windows::wJnyBorNAsFkylFWyhhfvAtEEJg_pVBetGkXgMGmVIbAknZrNWTDcslj* iLKucJawiqHVXHIzXuaKUzpRrey;
		Rewired_Windows::XpKciYbafObMtRdJmdltDaTtnsiE<mscorlib::System::Boolean>* kyMrEOFtwgUEIHhCBsBLLkTWiTF;
		IL2CPP::Array<bool>* oLulmNXYjcTMKuFooZxPfhyRCUi;
		IL2CPP::Array<bool>* XFYvBFQvfFfBVSLVCbCEgknwjaru;
		bool wEHEmUCgAzQzDcpilROnIDIKlSa;
		bool WBVWsDRooZBNkBXczMhrRPBQySFS;
		Rewired_Core::Rewired::Config::UpdateLoopSetting IvoDFmFXRZINVokpaZDYPbZzjQS;
		Rewired_Core::Rewired::UpdateLoopType ninLTojwDckMfuscEKaMPVFAitp;
		Rewired_Core::Rewired::UpdateLoopType LTUxYxRwHwGtIhLJEaiMzwmdRU;
		mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* UjPuImNFwAMiVEaqPxsoSVJBogP;
		bool ZEVXaXtICMCkuWakePBSyFQmrzJ;
		mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* zrJjEUauLDtdAAFobgNTcCEzaCAP;
		mscorlib::System::Func_1<mscorlib::System::Int32>* oHyqlfWpUdXEHVEEqIDlcVvkCpg;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Guid>* cyCYyheeWwdUnDBasTXErFIQuAH;
			IL2CPP::Array<mscorlib::System::String*>* UtavihIKRMDhJgVOPHegHztQkay;
			IL2CPP::Array<mscorlib::System::String*>* CxuWGGHExZiCRiVBbVGDlAFmVhM;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(bool isWin10AUHack, Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoop, mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* getHardwareJoystickMap_InputManager, mscorlib::System::Func_1<mscorlib::System::Int32>* getNewJoystickId);
		int32_t get_deviceCount();
		Rewired_Core::Rewired::PlatformInputManager* get_primaryInputManager();
		Rewired_Core::Rewired::Interfaces::IInputSource* get_inputSource();
		Rewired_Core::Rewired::InputSource get_inputSourceType();
		void Initialize();
		void Update(Rewired_Core::Rewired::UpdateLoopType currentUpdateLoop);
		void OnDestroy();
		mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* GetInputDataUpdateDelegate();
		void UpdateControllerData(int32_t assignedControllerId, Rewired_Core::Rewired::ControllerDataUpdater* data);
		void SystemDeviceConnected();
		void SystemDeviceDisconnected();
		void SetUnityJoystickId(int32_t joystickId, int32_t unityJoystickId);
		Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource* GetUnifiedMouseSource();
		Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* GetUnifiedKeyboardSource();
		bool QwpacVgVAemQaPTOpMCktOAwMgda();
		void eKevGlKjgWLPUJqmDdtTCZRRyIJ(bool A_1);
		void gyIXJAeLLXSlVtCnFngRTHWuDCoJ();
		void jFpADSaLrhHrMnOljUBErLMPNVBO();
		void tZpaQMncVqJxVqjPcrvXzFoJKLF();
		void JFTkgrnIQaRcxBfbvaNCmTwadlx();
		void QrdynsQVhpIYDbchuHSKMVBXdzG();
		bool ecEyubCmWvCCMAfTBRIbHztExRwL();
		IL2CPP::Array<bool>* gTTJAJDROzNAOtjnFCDHuCljaHD();
		void AHKLMziObReSYGElIHYOcnPGNtis(IL2CPP::Array<bool>* A_1);
		bool xZVRIAfUskcfEBGvatVzTjiLsrL(Rewired_Windows::wJnyBorNAsFkylFWyhhfvAtEEJg_kWxgKeDkGnyNEbtEGhPUIMNINsqw* A_1, bool A_2);
		static void _cctor();
		static bool ZjbSSifOdcFnoHCLLkDuVMDzcirW(mscorlib::System::String* A_0, mscorlib::System::String* A_1, mscorlib::System::String* A_2, mscorlib::System::Guid A_3);
	};
}

