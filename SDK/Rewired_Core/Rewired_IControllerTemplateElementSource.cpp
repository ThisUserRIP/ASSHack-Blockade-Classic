#include "Rewired_IControllerTemplateElementSource.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::IControllerTemplateElementSource::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "IControllerTemplateElementSource");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::IControllerTemplateElementSource::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::ControllerTemplateElementSourceType Rewired_Core::Rewired::IControllerTemplateElementSource::get_type()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_type");
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
