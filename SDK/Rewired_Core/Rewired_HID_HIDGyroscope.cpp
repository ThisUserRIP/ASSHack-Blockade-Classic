#include "Rewired_HID_HIDGyroscope.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HID::HIDGyroscope::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.HID", "HIDGyroscope");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HID::HIDGyroscope::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<float>* Rewired_Core::Rewired::HID::HIDGyroscope::get_rawValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rawValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<float>*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1<Rewired_Core::Rewired::HID::HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf>* Rewired_Core::Rewired::HID::HIDGyroscope::get_events()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_events");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1<Rewired_Core::Rewired::HID::HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf>*)returnValue;
}
void Rewired_Core::Rewired::HID::HIDGyroscope::_ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting, uint8_t reportId, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo, int32_t valueLength, int32_t startingEventCapacity, mscorlib::System::Action_2<IL2CPP::Array<mscorlib::System::Byte>, IL2CPP::Array<mscorlib::System::Single>>* calcValueDelegate, mscorlib::System::Func_1<mscorlib::System::Single>* getSensorDeltaTimeDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Config.UpdateLoopSetting", "System.Byte", "Rewired.HID.HIDControllerElement/HIDInfo", "System.Int32", "System.Int32", "System.Action`2<System.Byte[],System.Single[]>", "System.Func`1<System.Single>" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&updateLoopSetting;
	params[1] = (intptr_t)&reportId;
	params[2] = (intptr_t)hidInfo;
	params[3] = (intptr_t)&valueLength;
	params[4] = (intptr_t)&startingEventCapacity;
	params[5] = (intptr_t)calcValueDelegate;
	params[6] = (intptr_t)getSensorDeltaTimeDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDGyroscope::UpdateValue(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* inputReport, double timestamp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateValue", std::vector<std::string> { "Rewired.Utils.Classes.Data.NativeBuffer", "System.Double" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)inputReport;
	params[1] = (intptr_t)&timestamp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
