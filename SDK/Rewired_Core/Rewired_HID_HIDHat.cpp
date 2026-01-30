#include "Rewired_HID_HIDHat.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HID::HIDHat::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.HID", "HIDHat");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HID::HIDHat::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::HID::HIDHat::_ctor(uint8_t reportId, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo, Rewired_Core::Rewired::HID::HIDHat_Type type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte", "Rewired.HID.HIDControllerElement/HIDInfo", "Rewired.HID.HIDHat/Type" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&reportId;
	params[1] = (intptr_t)hidInfo;
	params[2] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDHat::_ctor(uint8_t reportId, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo, mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Int32>* calcValueDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte", "Rewired.HID.HIDControllerElement/HIDInfo", "System.Func`2<System.Int32,System.Int32>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&reportId;
	params[1] = (intptr_t)hidInfo;
	params[2] = (intptr_t)calcValueDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDHat::UpdateValue(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* inputReport, double timestamp)
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
