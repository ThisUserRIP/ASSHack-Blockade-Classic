#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_HID_Drivers_HIDDeviceDriver.h"
namespace Rewired_Core::Rewired::HID::Drivers { struct HIDDeviceDriver; };
#include "Rewired_Config_UpdateLoopSetting.h"
#include "Rewired_HID_DeviceConnectionType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_HID_OutputReport.h"
namespace Rewired_Core::Rewired::HID { struct OutputReport; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Rewired_Core::Rewired::HID::Drivers { struct HIDDeviceDriver_GetHidFeatureData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::HID::Drivers
{
	struct HIDDeviceDriver_InitArgs : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting;
		Rewired_Core::Rewired::HID::DeviceConnectionType connectionType;
		int32_t minAxisValue;
		int32_t maxAxisValue;
		int32_t hatZeroValue;
		int32_t hatSpan;
		int32_t inputReportLength;
		int32_t outputReportLength;
		mscorlib::System::Func_2<Rewired_Core::Rewired::HID::OutputReport, mscorlib::System::Boolean>* synchronousWriteOutputReportDelegate;
		mscorlib::System::Action_1<Rewired_Core::Rewired::HID::OutputReport>* asynchronousWriteOutputReportDelegate;
		Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver_GetHidFeatureData* getFeatureReportDelegate;
		void _ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting, Rewired_Core::Rewired::HID::DeviceConnectionType connectionType, int32_t minAxisValue, int32_t maxAxisValue, int32_t hatZeroValue, int32_t hatSpan, int32_t inputReportLength, int32_t outputReportLength, mscorlib::System::Func_2<Rewired_Core::Rewired::HID::OutputReport, mscorlib::System::Boolean>* synchronousWriteOutputReportDelegate, mscorlib::System::Action_1<Rewired_Core::Rewired::HID::OutputReport>* asynchronousWriteOutputReportDelegate, Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver_GetHidFeatureData* getFeatureReportDelegate);
	};
}

