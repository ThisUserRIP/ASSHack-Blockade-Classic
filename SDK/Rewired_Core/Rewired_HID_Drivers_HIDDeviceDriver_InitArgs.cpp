#include "Rewired_HID_Drivers_HIDDeviceDriver_InitArgs.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver::GetIl2CppClass(), "InitArgs");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::_ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting, Rewired_Core::Rewired::HID::DeviceConnectionType connectionType, int32_t minAxisValue, int32_t maxAxisValue, int32_t hatZeroValue, int32_t hatSpan, int32_t inputReportLength, int32_t outputReportLength, mscorlib::System::Func_2<Rewired_Core::Rewired::HID::OutputReport, mscorlib::System::Boolean>* synchronousWriteOutputReportDelegate, mscorlib::System::Action_1<Rewired_Core::Rewired::HID::OutputReport>* asynchronousWriteOutputReportDelegate, Rewired_Core::Rewired::HID::Drivers::HIDDeviceDriver_GetHidFeatureData* getFeatureReportDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Config.UpdateLoopSetting", "Rewired.HID.DeviceConnectionType", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Func`2<Rewired.HID.OutputReport,System.Boolean>", "System.Action`1<Rewired.HID.OutputReport>", "Rewired.HID.Drivers.HIDDeviceDriver/GetHidFeatureData" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&updateLoopSetting;
	params[1] = (intptr_t)&connectionType;
	params[2] = (intptr_t)&minAxisValue;
	params[3] = (intptr_t)&maxAxisValue;
	params[4] = (intptr_t)&hatZeroValue;
	params[5] = (intptr_t)&hatSpan;
	params[6] = (intptr_t)&inputReportLength;
	params[7] = (intptr_t)&outputReportLength;
	params[8] = (intptr_t)synchronousWriteOutputReportDelegate;
	params[9] = (intptr_t)asynchronousWriteOutputReportDelegate;
	params[10] = (intptr_t)getFeatureReportDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
