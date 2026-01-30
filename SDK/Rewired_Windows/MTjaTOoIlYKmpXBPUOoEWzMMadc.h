#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Windows { struct PdkVYCNBgINCqYNcfatIcCirAWyb; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "Rewired_Windows_RawInput_DeviceType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::HID::Drivers { struct HIDDeviceDriver; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\Rewired_Core\Rewired_UpdateLoopType.h"

namespace Rewired_Windows
{
	struct MTjaTOoIlYKmpXBPUOoEWzMMadc
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
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
		void Update(Rewired_Core::Rewired::UpdateLoopType A_1);
		void UpdateFinished();
		void Acquire();
		void Unacquire();
	};
}

