#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlatformInputManager.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Interfaces { struct IInputSource; };
namespace Rewired_Core { struct ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core { struct ojFpvBhoxryJuwmqpKRbLfasiwD_PNdCBZAvBZDJgfBTeToPWPeRfQih; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace Rewired_Core::Rewired { struct PlatformInputManager; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
namespace Rewired_Core::Rewired { struct HardwareJoystickMap_InputManager; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data { struct ConfigVars; };
#include "Rewired_InputSource.h"
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedMouseSource; };
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedKeyboardSource; };
namespace Rewired_Core { struct ITQWtBptMisufOMQISEmmBICBXFf; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace Rewired_Core { struct qrIgtFyfVqiafzdViaksiFSzgeuQ; };
#include "ojFpvBhoxryJuwmqpKRbLfasiwD_PNdCBZAvBZDJgfBTeToPWPeRfQih_UPXvQOlnWjPDjCwoVOSzJXmRgcv.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };

namespace Rewired_Core
{
	struct ojFpvBhoxryJuwmqpKRbLfasiwD : Rewired_Core::Rewired::PlatformInputManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Interfaces::IInputSource* ahBoCpeJUjrTsKZPByksFIqcSqa;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* vkDGyJpgkWfjlrQqHquOdtBvuGd;
		int32_t InbLCztlHLqmHiDIKdESdrLArYBB;
		Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_PNdCBZAvBZDJgfBTeToPWPeRfQih* uvbbHBmepyvDNgtueRJkiRvLAoZ;
		bool mUnRPqkbYLiXfZXLgamANbfLgdG;
		mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* vEVkhQJgnHEOHKKxKCChWKWkoRkB;
		Rewired_Core::Rewired::PlatformInputManager* bUlNstmFtlEUdJLRaWPVmzrXmur;
		bool GVnfVmYJRbHtlDIGqeRkgPgCiDqT;
		bool eylICCwMLcFeCoQwSjqUFcZEIMb;
		bool HHAnsWvqqDPPFjSUfiNaHMkolHW;
		mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* IGDBEoepWInkMCrSugRKQRBCdbj;
		mscorlib::System::Func_1<mscorlib::System::Int32>* HfgunRCgekLTNHEFnqieopqHEWDF;
		struct StaticFields
		{
			bool BohGOqOmcxgPJCRkHcxikBRnVKv;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::Data::ConfigVars* configVars, mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* getHardwareJoystickMap_InputManager, mscorlib::System::Func_1<mscorlib::System::Int32>* getNewJoystickId, bool handleJoysticks, bool handleUnifiedMouse, bool handleUnifiedKeyboard);
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
		void SetUnityJoystickId(int32_t joystickId, int32_t unityJoystickId);
		Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource* GetUnifiedMouseSource();
		Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* GetUnifiedKeyboardSource();
		void lIfoNLCEPztFZglcSkdxIYkJUDB();
		void lIfoNLCEPztFZglcSkdxIYkJUDB(mscorlib::System::Collections::Generic::IList_1<Rewired_Core::ITQWtBptMisufOMQISEmmBICBXFf>* A_1);
		void MIUmzKBdECQnfqJwNLsrMFKpWoE();
		bool ttVfgFmXONCPidLNMcEWSOBEqWq(Rewired_Core::qrIgtFyfVqiafzdViaksiFSzgeuQ* A_1);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::ITQWtBptMisufOMQISEmmBICBXFf>* afxtQWTDkECuEGKPSwDkFfWSfAl();
		void dysUiFYbCVGwEFWMiWtlmclRZNpn(int32_t A_1, int32_t A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* A_4);
		void UqXwIexMqSDzUysPAtGJZmUmCsd(mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* A_1, int32_t A_2, int32_t A_3);
		bool AkwArCRmyKIRoEKDfPaeApOfikh(mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* A_1, int32_t A_2);
		int32_t IwUmqTOEEeNplEiyalkgbhvgcQn(mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* A_1);
		bool SvvAUwbOktUbpBssikiaEOJptnEP(mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* A_1, int32_t A_2);
		void tzuPAnvtsNCcddPdzZhPXSyBIUX(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* A_2, int32_t A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* A_4, Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_PNdCBZAvBZDJgfBTeToPWPeRfQih_UPXvQOlnWjPDjCwoVOSzJXmRgcv A_5);
		void hxsItdTyGgwYpZyfUMGFjxGAjVI(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* A_2, Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_PNdCBZAvBZDJgfBTeToPWPeRfQih_UPXvQOlnWjPDjCwoVOSzJXmRgcv A_3);
		void xBChekdAiCHyRFKGrcxHRnLmGfQr();
		bool CekoPvcUIoRJMHfjlbwKeGyrGDO(mscorlib::System::Collections::Generic::IList_1<Rewired_Core::ITQWtBptMisufOMQISEmmBICBXFf>* A_1);
		bool PsLJRsWEBWdceiFqapVITibUGZrK(mscorlib::System::Guid A_1);
		bool gyVkdNMFhkcjAnUFHIjwkLHsaXM(mscorlib::System::Collections::Generic::IList_1<Rewired_Core::ITQWtBptMisufOMQISEmmBICBXFf>* A_1, mscorlib::System::Guid A_2);
		void igvDkGbkYfuiyudkGvwJlfiDeMC(mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl>* A_2, bool A_3);
		void IKTjAwbautGaviNDnDUYqTymwNQg(Rewired_Core::ojFpvBhoxryJuwmqpKRbLfasiwD_hmVXNBZWGCsNZyBKOarNhSEXPdl* A_1, bool A_2);
		void gcEsqWQEoWvwajklnRnyjrKrzvF();
	};
}

