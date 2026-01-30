#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Windows { struct PdkVYCNBgINCqYNcfatIcCirAWyb; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "Rewired_Windows_RawInput_DeviceType.h"
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::HID::Drivers { struct HIDDeviceDriver; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\Rewired_Core\Rewired_UpdateLoopType.h"
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace Rewired_Windows
{
	struct NGFkqVlYFkrEoOQIgJtLPnbmmEP : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Windows::PdkVYCNBgINCqYNcfatIcCirAWyb* nYBifXGxJqbYRJdnCjLIEXchecb;
		int32_t SlcCdDUWHFTLUzwOZTgnCiEOLUa;
		int32_t RqNZtUNxuGGIxVYJhCFACpAZuSe;
		mscorlib::System::Guid jjzahmEVyfzUjaUImcznONNhRKf;
		mscorlib::System::Guid qITuYuPQNYcxSTGzjcSNEMyHIWp;
		Rewired_Windows::Rewired::Windows::RawInput::DeviceType UhcALcKASPNmfGSRfovLQMQRMBR;
		mscorlib::System::String* pqhpPbBGOqkSBOgTujkGJMTAnMJ;
		Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver* svIAZVGXWQAWkZzgjZOMxTUzEegE;
		Rewired_Core::Rewired::Controller_Extension* WGLFJmHsZLPsMgSUbVeMlrIhvgL;
		mscorlib::System::String* CyRdUfAcHAOwAActZpsTSlBAzSMU;
		mscorlib::System::String* LczaaTVlAzGstaHKpUSlltnxWVD;
		bool sqxTMVsjwcGidWXixDUpNyDfefp;
		bool pPRdqbxcsrBZXBODoRpVgnxEeSVY;
		Rewired_Windows::PdkVYCNBgINCqYNcfatIcCirAWyb* get_HidDevice();
		mscorlib::System::String* get_ProductName();
		int32_t get_VendorId();
		int32_t get_ProductId();
		mscorlib::System::Guid get_ProductGuid();
		mscorlib::System::Guid get_InstanceGuid();
		Rewired_Windows::Rewired::Windows::RawInput::DeviceType get_DeviceType();
		bool get_IsBluetoothDevice();
		mscorlib::System::String* get_BluetoothDeviceName();
		mscorlib::System::String* get_HWDefinitionMatchTag();
		Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver* get_Driver();
		Rewired_Core::Rewired::Controller_Extension* get_ControllerExtension();
		bool get_IsValid();
		void _ctor(Rewired_Windows::PdkVYCNBgINCqYNcfatIcCirAWyb* hidDevice);
		void Update(Rewired_Core::Rewired::UpdateLoopType A_1);
		void UpdateFinished();
		void Dispose();
		void Finalize();
		void Dispose(bool A_1);
		static Rewired_Windows::Rewired::Windows::RawInput::DeviceType eBpztWADAUquMzWOOjKfYdkBeiE(uint16_t A_0, uint16_t A_1);
		void Acquire();
		void Unacquire();
	};
}

