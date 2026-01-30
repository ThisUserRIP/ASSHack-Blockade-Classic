#include "System_ComponentModel_Design_DesigntimeLicenseContextSerializer.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::Design::DesigntimeLicenseContextSerializer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel.Design", "DesigntimeLicenseContextSerializer");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::Design::DesigntimeLicenseContextSerializer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::Design::DesigntimeLicenseContextSerializer::Deserialize(mscorlib::System::IO::Stream* o, mscorlib::System::String* cryptoKey, System::ComponentModel::Design::RuntimeLicenseContext* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Deserialize", std::vector<std::string> { "System.IO.Stream", "System.String", "System.ComponentModel.Design.RuntimeLicenseContext" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)o;
	params[1] = (intptr_t)cryptoKey;
	params[2] = (intptr_t)context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
