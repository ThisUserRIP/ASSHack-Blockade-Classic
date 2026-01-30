#include "System_ComponentModel_Design_IExtenderListService.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::Design::IExtenderListService::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel.Design", "IExtenderListService");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::Design::IExtenderListService::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<System::ComponentModel::IExtenderProvider*>* System::System::ComponentModel::Design::IExtenderListService::GetExtenderProviders()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtenderProviders");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::ComponentModel::IExtenderProvider*>*)returnValue;
}
