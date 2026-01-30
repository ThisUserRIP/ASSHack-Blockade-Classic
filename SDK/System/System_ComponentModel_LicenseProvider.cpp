#include "System_ComponentModel_LicenseProvider.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::LicenseProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "LicenseProvider");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::LicenseProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::ComponentModel::License* System::System::ComponentModel::LicenseProvider::GetLicense(System::ComponentModel::LicenseContext* context, mscorlib::System::Type* type, mscorlib::System::Object* instance, bool allowExceptions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLicense", std::vector<std::string> { "System.ComponentModel.LicenseContext", "System.Type", "System.Object", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)context;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)instance;
	params[3] = (intptr_t)&allowExceptions;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::License*)returnValue;
}
void System::System::ComponentModel::LicenseProvider::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
