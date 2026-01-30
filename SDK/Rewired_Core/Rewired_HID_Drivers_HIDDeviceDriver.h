#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired::HID { struct HIDAxis; };
namespace Rewired_Core::Rewired::HID { struct HIDButton; };
namespace Rewired_Core::Rewired::HID { struct HIDHat; };
namespace Rewired_Core::Rewired::HID { struct HIDAccelerometer; };
namespace Rewired_Core::Rewired::HID { struct HIDGyroscope; };
namespace Rewired_Core::Rewired::HID { struct HIDTouchpad; };
namespace Rewired_Core::Rewired::HID { struct HIDVibrationMotor; };
namespace Rewired_Core::Rewired::HID { struct HIDLight; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_UpdateLoopType.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "Rewired_HID_Drivers_HIDDeviceDriver_DriverType.h"
namespace Rewired_Core::Rewired::HID::Drivers { struct HIDDeviceDriver_InitArgs; };

namespace Rewired_Core::Rewired::HID::Drivers
{
	struct HIDDeviceDriver : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDAxis*>* axes;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDButton*>* buttons;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDHat*>* hats;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDAccelerometer*>* accelerometers;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDGyroscope*>* gyroscopes;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDTouchpad*>* touchpads;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDVibrationMotor*>* vibrationMotors;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDLight*>* lights;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		int32_t get_AxisCount();
		int32_t get_ButtonCount();
		int32_t get_HatCount();
		int32_t get_AccelerometerCount();
		int32_t get_GyroscopeCount();
		int32_t get_TouchpadCount();
		int32_t get_LightCount();
		int32_t get_VibrationMotorCount();
		void _ctor();
		void Update(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		bool ParseInputReport(intptr_t inputReportPtr, int32_t inputReportLength, double timestamp);
		Rewired_Core::Rewired::Controller_Extension* CreateControllerExtension();
		static Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver* GetDriver(Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver_DriverType driverId, Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs* hidDriverInitArgs);
		static Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver_DriverType FindDriverId(int32_t vendorId, int32_t productId);
		bool get_disposed();
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
	};
}

