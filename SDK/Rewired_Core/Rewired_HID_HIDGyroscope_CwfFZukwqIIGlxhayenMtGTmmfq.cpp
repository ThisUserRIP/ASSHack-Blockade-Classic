#include "Rewired_HID_HIDGyroscope_CwfFZukwqIIGlxhayenMtGTmmfq.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HID::HIDGyroscope_CwfFZukwqIIGlxhayenMtGTmmfq::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::HID::HIDGyroscope::GetIl2CppClass(), "CwfFZukwqIIGlxhayenMtGTmmfq");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HID::HIDGyroscope_CwfFZukwqIIGlxhayenMtGTmmfq::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<float>* Rewired_Core::Rewired::HID::HIDGyroscope_CwfFZukwqIIGlxhayenMtGTmmfq::get_rawValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rawValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<float>*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1<Rewired_Core::Rewired::HID::HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf>* Rewired_Core::Rewired::HID::HIDGyroscope_CwfFZukwqIIGlxhayenMtGTmmfq::get_events()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_events");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1<Rewired_Core::Rewired::HID::HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf>*)returnValue;
}
void Rewired_Core::Rewired::HID::HIDGyroscope_CwfFZukwqIIGlxhayenMtGTmmfq::_ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting, int32_t valueLength, int32_t eventCapacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Config.UpdateLoopSetting", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&updateLoopSetting;
	params[1] = (intptr_t)&valueLength;
	params[2] = (intptr_t)&eventCapacity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDGyroscope_CwfFZukwqIIGlxhayenMtGTmmfq::Update(Rewired_Core::Rewired::UpdateLoopType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDGyroscope_CwfFZukwqIIGlxhayenMtGTmmfq::zSSqrCrbXuiMXeUNZWHWoKLiDxY(IL2CPP::Array<float>* A_1, float A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zSSqrCrbXuiMXeUNZWHWoKLiDxY");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO* Rewired_Core::Rewired::HID::HIDGyroscope_CwfFZukwqIIGlxhayenMtGTmmfq::SUQYmgWuFoHvDCkoKPRehiXjPhi(Rewired_Core::Rewired::UpdateLoopType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SUQYmgWuFoHvDCkoKPRehiXjPhi");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO*)returnValue;
}
