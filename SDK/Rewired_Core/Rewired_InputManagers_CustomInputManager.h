#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlatformInputManager.h"
namespace Rewired_Core::Rewired::InputManagers { struct CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::InputManagers { struct CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace Rewired_Core::Rewired { struct PlatformInputManager; };
namespace Rewired_Core::Rewired::Platforms::Custom { struct CustomInputSource; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
namespace Rewired_Core::Rewired { struct HardwareJoystickMap_InputManager; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_Config_UpdateLoopSetting.h"
namespace Rewired_Core::Rewired::Interfaces { struct IInputSource; };
#include "Rewired_InputSource.h"
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedMouseSource; };
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedKeyboardSource; };
namespace Rewired_Core::Rewired::Platforms::Custom { struct CustomInputSource_Joystick; };
#include "Rewired_InputManagers_CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb_FLfAmKtZlKTKoxgCKBfevWSvbdB.h"

namespace Rewired_Core::Rewired::InputManagers
{
	struct CustomInputManager : Rewired_Core::Rewired::PlatformInputManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* vkDGyJpgkWfjlrQqHquOdtBvuGd;
		int32_t InbLCztlHLqmHiDIKdESdrLArYBB;
		Rewired_Core::Rewired::InputManagers::CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb* uvbbHBmepyvDNgtueRJkiRvLAoZ;
		Rewired_Core::Rewired::UpdateLoopType YSpXIAzqdhUsfgdvBdrBAVOrODEg;
		mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* vEVkhQJgnHEOHKKxKCChWKWkoRkB;
		Rewired_Core::Rewired::PlatformInputManager* bUlNstmFtlEUdJLRaWPVmzrXmur;
		Rewired_Core::Rewired::Platforms::Custom::CustomInputSource* mRtQkYomPvxBPAmUysEhxMGejxs;
		bool mUnRPqkbYLiXfZXLgamANbfLgdG;
		mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* IGDBEoepWInkMCrSugRKQRBCdbj;
		mscorlib::System::Func_1<mscorlib::System::Int32>* HfgunRCgekLTNHEFnqieopqHEWDF;
		void _ctor(Rewired_Core::Rewired::Platforms::Custom::CustomInputSource* customInputSource, Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting, mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* getHardwareJoystickMap_InputManager, mscorlib::System::Func_1<mscorlib::System::Int32>* getNewJoystickId);
		int32_t get_deviceCount();
		Rewired_Core::Rewired::PlatformInputManager* get_primaryInputManager();
		Rewired_Core::Rewired::Interfaces::IInputSource* get_inputSource();
		Rewired_Core::Rewired::InputSource get_inputSourceType();
		void Initialize();
		void Update(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		void OnDestroy();
		mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* GetInputDataUpdateDelegate();
		void UpdateControllerData(int32_t inputManagerId, Rewired_Core::Rewired::ControllerDataUpdater* data);
		void SystemDeviceConnected();
		void SystemDeviceDisconnected();
		void SetUnityJoystickId(int32_t joystickId, int32_t unityJoystickIndex);
		Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource* GetUnifiedMouseSource();
		Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* GetUnifiedKeyboardSource();
		void lIfoNLCEPztFZglcSkdxIYkJUDB(IL2CPP::Array<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* A_1);
		void MIUmzKBdECQnfqJwNLsrMFKpWoE();
		void dysUiFYbCVGwEFWMiWtlmclRZNpn(int32_t A_1, int32_t A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_4);
		void UqXwIexMqSDzUysPAtGJZmUmCsd(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_1, int32_t A_2, int32_t A_3);
		bool AkwArCRmyKIRoEKDfPaeApOfikh(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_1, int32_t A_2);
		int32_t IwUmqTOEEeNplEiyalkgbhvgcQn(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_1);
		bool SvvAUwbOktUbpBssikiaEOJptnEP(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_1, int32_t A_2);
		void tzuPAnvtsNCcddPdzZhPXSyBIUX(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_2, int32_t A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_4, Rewired_Core::Rewired::InputManagers::CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb_FLfAmKtZlKTKoxgCKBfevWSvbdB A_5);
		void hxsItdTyGgwYpZyfUMGFjxGAjVI(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_2, Rewired_Core::Rewired::InputManagers::CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb_FLfAmKtZlKTKoxgCKBfevWSvbdB A_3);
		void xBChekdAiCHyRFKGrcxHRnLmGfQr();
		bool CekoPvcUIoRJMHfjlbwKeGyrGDO(IL2CPP::Array<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* A_1);
		void igvDkGbkYfuiyudkGvwJlfiDeMC(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_2, bool A_3);
		void IKTjAwbautGaviNDnDUYqTymwNQg(Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_1, bool A_2);
		void reyjPHJcScCVuZfhiCypiERAmMlz(Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_1, bool A_2);
	};
}

