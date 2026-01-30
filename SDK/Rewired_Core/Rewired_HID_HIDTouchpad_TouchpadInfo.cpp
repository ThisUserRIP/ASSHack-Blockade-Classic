#include "Rewired_HID_HIDTouchpad_TouchpadInfo.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HID::HIDTouchpad_TouchpadInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::HID::HIDTouchpad::GetIl2CppClass(), "TouchpadInfo");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HID::HIDTouchpad_TouchpadInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::HID::HIDTouchpad_TouchpadInfo::_ctor(int32_t maxTouches, int32_t minX, int32_t maxX, int32_t minY, int32_t maxY, bool invertY, bool reverseY)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&maxTouches;
	params[1] = (intptr_t)&minX;
	params[2] = (intptr_t)&maxX;
	params[3] = (intptr_t)&minY;
	params[4] = (intptr_t)&maxY;
	params[5] = (intptr_t)&invertY;
	params[6] = (intptr_t)&reverseY;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDTouchpad_TouchpadInfo::CalculateTouch(Rewired_Core::Rewired::HID::HIDTouchpad_TouchData& data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateTouch", std::vector<std::string> { "Rewired.HID.HIDTouchpad/TouchData&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
