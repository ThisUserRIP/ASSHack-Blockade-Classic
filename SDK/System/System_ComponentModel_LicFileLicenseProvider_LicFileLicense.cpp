#include "System_ComponentModel_LicFileLicenseProvider_LicFileLicense.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::ComponentModel::LicFileLicenseProvider::GetIl2CppClass(), "LicFileLicense");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::_ctor(System::ComponentModel::LicFileLicenseProvider* owner, mscorlib::System::String* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.ComponentModel.LicFileLicenseProvider", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)owner;
	params[1] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::get_LicenseKey()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LicenseKey");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
