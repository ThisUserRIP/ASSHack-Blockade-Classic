#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "NGFkqVlYFkrEoOQIgJtLPnbmmEP.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "ygqoEDXHsRwsxBouiGomDoOuGVCn.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace Rewired_Core::Rewired { struct ButtonLoopSet; };
namespace Rewired_Windows { struct mEgWoMoOsnnDfAFLXuAWRxCMrVs; };
namespace Rewired_Windows { struct MtZNbwXrbZMgRsMKYgUlynsZXfP; };
namespace Rewired_Core::Rewired::HID { struct HIDAccelerometer; };
namespace Rewired_Core::Rewired::HID { struct HIDGyroscope; };
namespace Rewired_Core::Rewired::HID { struct HIDTouchpad; };
namespace Rewired_Core::Rewired::HID { struct HidOutputReportHandler; };
namespace Rewired_Windows { struct qhJIoAqJLeeaubrTxeWZAQQINIwm; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\Rewired_Core\Rewired_InputSource.h"
namespace Rewired_Windows { struct fVLMUiXAcftmsHRlVVfksDNTQyg; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Windows { struct PdkVYCNBgINCqYNcfatIcCirAWyb; };
namespace Rewired_Core::Rewired::HID::Drivers { struct HIDDeviceDriver; };
#include "..\Rewired_Core\Rewired_UpdateLoopType.h"
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace Rewired_Core::Rewired::HID { struct HIDAxis; };
namespace Rewired_Core::Rewired::HID { struct HIDHat; };

namespace Rewired_Windows
{
	struct rDBagWYRmMxpJdIfZCOwcBuQygu : Rewired_Windows::NGFkqVlYFkrEoOQIgJtLPnbmmEP
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t hTmCxjDpXofREdcaUIuNrYBKjgeW;
		Rewired_Windows::ygqoEDXHsRwsxBouiGomDoOuGVCn eLWEDCETtGsNDkJFXsSTABRxrRv;
		intptr_t PZJKtKLWefjZWXBtNOntRZAQAZj;
		Rewired_Core::Rewired::ButtonLoopSet* VhVEIMkwfZxAaUJgFhPukwsdnKbs;
		IL2CPP::Array<Rewired_Windows::mEgWoMoOsnnDfAFLXuAWRxCMrVs*>* XjkaaXCyEhcFloFhedfrSXoHuYPA;
		IL2CPP::Array<Rewired_Windows::MtZNbwXrbZMgRsMKYgUlynsZXfP*>* KZRoIDhAtWSrQEDKZRoSOxAvCRf;
		IL2CPP::Array<int32_t>* cOgSWFJCvtCFwdtdIqmknTdktpB;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDAccelerometer*>* uvCNtFIBryIezCOBaSccQyizBao;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDGyroscope*>* yrjwSYlPWUcJihdUeQzczqsZSWx;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDTouchpad*>* PpuwmdscQDjfxDgwNaqUNGIGyRD;
		int32_t hxoscIklQeUVkWtbIJsoBySUkHJ;
		int32_t FuVBQmpfLZLghhHYStlhjUOoqq;
		int32_t QOcnWofqvIhyCQxNZydXQiNZxBy;
		int32_t cHYaPVEvkjCFdQlsFWqTgpUcqkfS;
		int32_t lWpKiIGHnMMziQqsoBgCwzqpBLz;
		int32_t jMcFSFUaQhQXyVjqhsRUdWJqrui;
		Rewired_Core::Rewired::HID::HidOutputReportHandler* WXgMDzFYKEdPJpLPsVtfYkdtkqH;
		Rewired_Windows::qhJIoAqJLeeaubrTxeWZAQQINIwm* pcpXVksUBPZGOPFgPFIsLixEnUo;
		bool pPRdqbxcsrBZXBODoRpVgnxEeSVY;
		int32_t get_JoystickId();
		Rewired_Windows::ygqoEDXHsRwsxBouiGomDoOuGVCn get_JoystickSourceType();
		intptr_t get_JoystickSourceHandle();
		IL2CPP::Array<bool>* get_Buttons();
		IL2CPP::Array<int32_t>* get_HatValues();
		int32_t get_ButtonCount();
		int32_t get_AxisCount();
		int32_t get_HatCount();
		bool get_HasElements();
		bool get_SupportsVibration();
		int32_t get_VibrationMotorCount();
		Rewired_Core::Rewired::InputSource get_InputSource();
		Rewired_Windows::fVLMUiXAcftmsHRlVVfksDNTQyg* get_AxesState();
		void _ctor(int32_t joystickId, Rewired_Windows::ygqoEDXHsRwsxBouiGomDoOuGVCn joystickSourceType, intptr_t joystickSourceHandle, Rewired_Windows::PdkVYCNBgINCqYNcfatIcCirAWyb* hidDevice, Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver* driver, Rewired_Core::Rewired::HID::HidOutputReportHandler* hidOutputReportHandler);
		void Update(Rewired_Core::Rewired::UpdateLoopType A_1);
		void UpdateFinished();
		void UpdateValue(intptr_t A_1, int32_t A_2, int32_t A_3, int32_t A_4, double A_5);
		void Acquire();
		void Unacquire();
		void SetJoystickId(int32_t A_1);
		void JtAoECMqhvFxOmZAMqPMhmvfdKRe();
		void lcHdpmaoMWQeVwykOBgiEzGrGHqb();
		void AjEEoeOznkLFNjTFuReAzsughkD();
		void AAnjvnXSiSTsudIkgLuZoykyCPz();
		Rewired_Windows::mEgWoMoOsnnDfAFLXuAWRxCMrVs* bynJQpTuWKAoNCAcGHjTsftZGfq(Rewired_Core::Rewired::HID::HIDAxis* A_1);
		Rewired_Windows::MtZNbwXrbZMgRsMKYgUlynsZXfP* LcdRzkiDVacqYGYykkzKGJeUKNZy(Rewired_Core::Rewired::HID::HIDHat* A_1);
		void Dispose(bool A_1);
	};
}

