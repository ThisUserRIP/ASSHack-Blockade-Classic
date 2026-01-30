#include "TRPKZqgoeeqwqIpWIsatQOCvNSY.h"

IL2CPP::Il2CppClass* Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "", "TRPKZqgoeeqwqIpWIsatQOCvNSY");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY::_ctor(Rewired_Core::Rewired::ControllerTemplateElementType elementType, bool splitAxis, Rewired_Core::Rewired::IControllerElementTarget* target, Rewired_Core::Rewired::IControllerElementTarget* positiveTarget, Rewired_Core::Rewired::IControllerElementTarget* negativeTarget)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ControllerTemplateElementType", "System.Boolean", "Rewired.IControllerElementTarget", "Rewired.IControllerElementTarget", "Rewired.IControllerElementTarget" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&elementType;
	params[1] = (intptr_t)&splitAxis;
	params[2] = (intptr_t)target;
	params[3] = (intptr_t)positiveTarget;
	params[4] = (intptr_t)negativeTarget;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerTemplateElementSourceType Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY::Rewired_IControllerTemplateElementSource_get_type()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateElementSource.get_type");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerTemplateElementSourceType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerTemplateElementSourceType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerTemplateElementSourceType>(*(Rewired_Core::Rewired::ControllerTemplateElementSourceType*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY::Rewired_IControllerTemplateAxisSource_get_splitAxis()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateAxisSource.get_splitAxis");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::IControllerElementTarget* Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY::Rewired_IControllerTemplateAxisSource_get_fullTarget()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateAxisSource.get_fullTarget");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerElementTarget*)returnValue;
}
Rewired_Core::Rewired::IControllerElementTarget* Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY::Rewired_IControllerTemplateAxisSource_get_positiveTarget()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateAxisSource.get_positiveTarget");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerElementTarget*)returnValue;
}
Rewired_Core::Rewired::IControllerElementTarget* Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY::Rewired_IControllerTemplateAxisSource_get_negativeTarget()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateAxisSource.get_negativeTarget");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerElementTarget*)returnValue;
}
Rewired_Core::Rewired::IControllerElementTarget* Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY::Rewired_IControllerTemplateButtonSource_get_target()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateButtonSource.get_target");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerElementTarget*)returnValue;
}
Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY* Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY::twJJKosqyrSZiCjABgFSjvrNDCq(Rewired_Core::Rewired::ControllerTemplateElementType A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "twJJKosqyrSZiCjABgFSjvrNDCq");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY*)returnValue;
}
