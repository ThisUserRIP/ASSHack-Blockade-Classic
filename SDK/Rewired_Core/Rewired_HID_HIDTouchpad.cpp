#include "Rewired_HID_HIDTouchpad.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HID::HIDTouchpad::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.HID", "HIDTouchpad");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HID::HIDTouchpad::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::HID::HIDTouchpad::_ctor(uint8_t reportId, Rewired_Core::Rewired::HID::HIDTouchpad_TouchpadInfo* info, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo, mscorlib::System::Action_2<Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer, IL2CPP::Array<Rewired_Core::Rewired::HID::HIDTouchpad_TouchData>>* calcValueDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte", "Rewired.HID.HIDTouchpad/TouchpadInfo", "Rewired.HID.HIDControllerElement/HIDInfo", "System.Action`2<Rewired.Utils.Classes.Data.NativeBuffer,Rewired.HID.HIDTouchpad/TouchData[]>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&reportId;
	params[1] = (intptr_t)info;
	params[2] = (intptr_t)hidInfo;
	params[3] = (intptr_t)calcValueDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDTouchpad::UpdateValue(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* inputReport, double timestamp)
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
void Rewired_Core::Rewired::HID::HIDTouchpad::ProcessQueue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessQueue");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::HID::HIDTouchpad::IsTouching(int32_t touchId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsTouching", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&touchId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
