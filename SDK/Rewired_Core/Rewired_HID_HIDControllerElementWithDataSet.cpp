#include "Rewired_HID_HIDControllerElementWithDataSet.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.HID", "HIDControllerElementWithDataSet");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet::_ctor(Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS* dataSet, uint8_t reportId, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.HID.HIDControllerElementWithDataSet/oadntmUwjssKsnxsjHkTnTrubUS", "System.Byte", "Rewired.HID.HIDControllerElement/HIDInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dataSet;
	params[1] = (intptr_t)&reportId;
	params[2] = (intptr_t)hidInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet::Update(Rewired_Core::Rewired::UpdateLoopType updateLoop)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update", std::vector<std::string> { "Rewired.UpdateLoopType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateLoop;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
