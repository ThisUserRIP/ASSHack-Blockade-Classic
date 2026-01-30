#include "System_ComponentModel_ComponentResourceManager.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::ComponentResourceManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "ComponentResourceManager");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::ComponentResourceManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::ComponentResourceManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ComponentResourceManager::_ctor(mscorlib::System::Type* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Globalization::CultureInfo* System::System::ComponentModel::ComponentResourceManager::get_NeutralResourcesCulture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NeutralResourcesCulture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Globalization::CultureInfo*)returnValue;
}
void System::System::ComponentModel::ComponentResourceManager::ApplyResources(mscorlib::System::Object* value, mscorlib::System::String* objectName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyResources", std::vector<std::string> { "System.Object", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)objectName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ComponentResourceManager::ApplyResources(mscorlib::System::Object* value, mscorlib::System::String* objectName, mscorlib::System::Globalization::CultureInfo* culture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyResources", std::vector<std::string> { "System.Object", "System.String", "System.Globalization.CultureInfo" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)objectName;
	params[2] = (intptr_t)culture;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Collections::Generic::SortedList_2<mscorlib::System::String, mscorlib::System::Object>* System::System::ComponentModel::ComponentResourceManager::FillResources(mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Resources::ResourceSet& resourceSet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillResources", std::vector<std::string> { "System.Globalization.CultureInfo", "System.Resources.ResourceSet&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)culture;
	params[1] = (intptr_t)&resourceSet;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Collections::Generic::SortedList_2<mscorlib::System::String, mscorlib::System::Object>*)returnValue;
}
