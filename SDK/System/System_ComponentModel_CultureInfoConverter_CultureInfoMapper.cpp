#include "System_ComponentModel_CultureInfoConverter_CultureInfoMapper.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::CultureInfoConverter_CultureInfoMapper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::ComponentModel::CultureInfoConverter::GetIl2CppClass(), "CultureInfoMapper");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::CultureInfoConverter_CultureInfoMapper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* System::System::ComponentModel::CultureInfoConverter_CultureInfoMapper::GetCultureInfoName(mscorlib::System::String* cultureInfoDisplayName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCultureInfoName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cultureInfoDisplayName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System::System::ComponentModel::CultureInfoConverter_CultureInfoMapper::InitializeCultureInfoMap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeCultureInfoMap");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
