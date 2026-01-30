#include "System_ComponentModel_Design_DesigntimeLicenseContext.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::Design::DesigntimeLicenseContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel.Design", "DesigntimeLicenseContext");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::Design::DesigntimeLicenseContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::ComponentModel::LicenseUsageMode System::System::ComponentModel::Design::DesigntimeLicenseContext::get_UsageMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UsageMode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::ComponentModel::LicenseUsageMode ret;
		std::memset(&ret, 0, sizeof(System::ComponentModel::LicenseUsageMode));
		return ret;
	}
	return static_cast<System::ComponentModel::LicenseUsageMode>(*(System::ComponentModel::LicenseUsageMode*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* System::System::ComponentModel::Design::DesigntimeLicenseContext::GetSavedLicenseKey(mscorlib::System::Type* type, mscorlib::System::Reflection::Assembly* resourceAssembly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSavedLicenseKey", std::vector<std::string> { "System.Type", "System.Reflection.Assembly" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)resourceAssembly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System::System::ComponentModel::Design::DesigntimeLicenseContext::SetSavedLicenseKey(mscorlib::System::Type* type, mscorlib::System::String* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSavedLicenseKey", std::vector<std::string> { "System.Type", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::Design::DesigntimeLicenseContext::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
