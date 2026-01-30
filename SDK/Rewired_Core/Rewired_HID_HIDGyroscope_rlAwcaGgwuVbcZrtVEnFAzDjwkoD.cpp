#include "Rewired_HID_HIDGyroscope_rlAwcaGgwuVbcZrtVEnFAzDjwkoD.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HID::HIDGyroscope_rlAwcaGgwuVbcZrtVEnFAzDjwkoD::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::HID::HIDGyroscope::GetIl2CppClass(), "rlAwcaGgwuVbcZrtVEnFAzDjwkoD");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HID::HIDGyroscope_rlAwcaGgwuVbcZrtVEnFAzDjwkoD::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::HID::HIDGyroscope_rlAwcaGgwuVbcZrtVEnFAzDjwkoD::_ctor(Rewired_Core::Rewired::UpdateLoopType updateLoop, int32_t valueLength, int32_t eventCapacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.UpdateLoopType", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&updateLoop;
	params[1] = (intptr_t)&valueLength;
	params[2] = (intptr_t)&eventCapacity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDGyroscope_rlAwcaGgwuVbcZrtVEnFAzDjwkoD::rzxcwQaQDJsOGhoApWnDOXVkvyqu()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rzxcwQaQDJsOGhoApWnDOXVkvyqu");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDGyroscope_rlAwcaGgwuVbcZrtVEnFAzDjwkoD::aLkSqMivRlvWcYjKnLEUBUUAgaj(IL2CPP::Array<float>* A_1, float A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "aLkSqMivRlvWcYjKnLEUBUUAgaj");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDGyroscope_rlAwcaGgwuVbcZrtVEnFAzDjwkoD::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
