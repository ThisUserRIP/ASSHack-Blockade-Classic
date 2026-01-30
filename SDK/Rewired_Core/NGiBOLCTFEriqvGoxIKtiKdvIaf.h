#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlatformInputManager.h"
namespace Rewired_Core { struct NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core { struct NGiBOLCTFEriqvGoxIKtiKdvIaf_wIsxjFSYqniYfPjAJRtUBCIFWml; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct TimerAbs; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace Rewired_Core::Rewired { struct PlatformInputManager; };
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedKeyboardSource; };
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedMouseSource; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_Config_UpdateLoopSetting.h"
namespace Rewired_Core::Rewired::Interfaces { struct IInputSource; };
#include "Rewired_InputSource.h"
#include "NGiBOLCTFEriqvGoxIKtiKdvIaf_wIsxjFSYqniYfPjAJRtUBCIFWml_obMnbkgFdCcKezcwfZHPWlyTqSI.h"

namespace Rewired_Core
{
	struct NGiBOLCTFEriqvGoxIKtiKdvIaf : Rewired_Core::Rewired::PlatformInputManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* vkDGyJpgkWfjlrQqHquOdtBvuGd;
		int32_t InbLCztlHLqmHiDIKdESdrLArYBB;
		Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_wIsxjFSYqniYfPjAJRtUBCIFWml* uvbbHBmepyvDNgtueRJkiRvLAoZ;
		bool mUnRPqkbYLiXfZXLgamANbfLgdG;
		bool qdIrVUPayeBUZGviPVHtBbOXuNj;
		Rewired_Core::Rewired::UpdateLoopType YSpXIAzqdhUsfgdvBdrBAVOrODEg;
		Rewired_Core::Rewired::UpdateLoopType qYHfsgvkUAfClQWEUyBlELlRfqvF;
		Rewired_Core::Rewired::Utils::Classes::Utility::TimerAbs* QDdFInbAtpwvKcUeGHKKDztqYNMj;
		mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* vEVkhQJgnHEOHKKxKCChWKWkoRkB;
		Rewired_Core::Rewired::PlatformInputManager* bUlNstmFtlEUdJLRaWPVmzrXmur;
		Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* xVcgsGKkFdZEjXBWWfTsWfAQYjC;
		Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource* XRiZdPtWfbSWUjDDeUrXbSKREuC;
		bool DUaIvNFOkHbghxBGCHKCmafGmhL;
		IL2CPP::Array<mscorlib::System::String*>* zNWNiqjCyGeBmFtzSIDQvQMiYNJr;
		void _ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting);
		int32_t get_deviceCount();
		Rewired_Core::Rewired::PlatformInputManager* get_primaryInputManager();
		Rewired_Core::Rewired::Interfaces::IInputSource* get_inputSource();
		Rewired_Core::Rewired::InputSource get_inputSourceType();
		void Initialize();
		void Update(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		void OnDestroy();
		mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* GetInputDataUpdateDelegate();
		void UpdateControllerData(int32_t assignedControllerId, Rewired_Core::Rewired::ControllerDataUpdater* data);
		void SystemDeviceConnected();
		void SystemDeviceDisconnected();
		void neUqDzfRvmptzvJsvFuVxKBNVHd();
		void SetUnityJoystickId(int32_t joystickId, int32_t unityJoystickId);
		Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource* GetUnifiedMouseSource();
		Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* GetUnifiedKeyboardSource();
		void lIfoNLCEPztFZglcSkdxIYkJUDB();
		void lIfoNLCEPztFZglcSkdxIYkJUDB(IL2CPP::Array<mscorlib::System::String*>* A_1);
		void MIUmzKBdECQnfqJwNLsrMFKpWoE(Rewired_Core::Rewired::UpdateLoopType A_1);
		void dysUiFYbCVGwEFWMiWtlmclRZNpn(int32_t A_1, int32_t A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* A_4);
		void UqXwIexMqSDzUysPAtGJZmUmCsd(mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* A_1, int32_t A_2, int32_t A_3);
		bool AkwArCRmyKIRoEKDfPaeApOfikh(mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* A_1, int32_t A_2);
		int32_t IwUmqTOEEeNplEiyalkgbhvgcQn(mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* A_1);
		bool SvvAUwbOktUbpBssikiaEOJptnEP(mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* A_1, int32_t A_2);
		void tzuPAnvtsNCcddPdzZhPXSyBIUX(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* A_2, int32_t A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* A_4, Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_wIsxjFSYqniYfPjAJRtUBCIFWml_obMnbkgFdCcKezcwfZHPWlyTqSI A_5);
		void hxsItdTyGgwYpZyfUMGFjxGAjVI(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* A_2, Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_wIsxjFSYqniYfPjAJRtUBCIFWml_obMnbkgFdCcKezcwfZHPWlyTqSI A_3);
		void xBChekdAiCHyRFKGrcxHRnLmGfQr();
		bool CekoPvcUIoRJMHfjlbwKeGyrGDO(IL2CPP::Array<mscorlib::System::String*>* A_1);
		void igvDkGbkYfuiyudkGvwJlfiDeMC(mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS>* A_2, bool A_3);
		void IKTjAwbautGaviNDnDUYqTymwNQg(Rewired_Core::NGiBOLCTFEriqvGoxIKtiKdvIaf_cJDifOymZeFIgwxGpSIbiflMCbS* A_1, bool A_2);
		void tfhfRtJAoheIsTnLcxfrOzPBDUA();
	};
}

