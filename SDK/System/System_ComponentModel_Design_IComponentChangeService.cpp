#include "System_ComponentModel_Design_IComponentChangeService.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::Design::IComponentChangeService::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel.Design", "IComponentChangeService");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::Design::IComponentChangeService::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::Design::IComponentChangeService::OnComponentChanged(mscorlib::System::Object* component, System::ComponentModel::MemberDescriptor* member, mscorlib::System::Object* oldValue, mscorlib::System::Object* newValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnComponentChanged", std::vector<std::string> { "System.Object", "System.ComponentModel.MemberDescriptor", "System.Object", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)member;
	params[2] = (intptr_t)oldValue;
	params[3] = (intptr_t)newValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::Design::IComponentChangeService::OnComponentChanging(mscorlib::System::Object* component, System::ComponentModel::MemberDescriptor* member)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnComponentChanging", std::vector<std::string> { "System.Object", "System.ComponentModel.MemberDescriptor" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)member;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
