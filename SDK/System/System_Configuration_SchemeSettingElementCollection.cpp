#include "System_Configuration_SchemeSettingElementCollection.h"

IL2CPP::Il2CppClass* System::System::Configuration::SchemeSettingElementCollection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Configuration", "SchemeSettingElementCollection");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Configuration::SchemeSettingElementCollection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Configuration::SchemeSettingElementCollection::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System_Configuration::System::Configuration::ConfigurationElementCollectionType System::System::Configuration::SchemeSettingElementCollection::get_CollectionType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CollectionType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Configuration::System::Configuration::ConfigurationElementCollectionType ret;
		std::memset(&ret, 0, sizeof(System_Configuration::System::Configuration::ConfigurationElementCollectionType));
		return ret;
	}
	return static_cast<System_Configuration::System::Configuration::ConfigurationElementCollectionType>(*(System_Configuration::System::Configuration::ConfigurationElementCollectionType*)il2cpp_object_unbox(returnValue));
}
System::System::Configuration::SchemeSettingElement* System::System::Configuration::SchemeSettingElementCollection::get_Item(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Configuration::SchemeSettingElement*)returnValue;
}
System::System::Configuration::SchemeSettingElement* System::System::Configuration::SchemeSettingElementCollection::get_Item(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Configuration::SchemeSettingElement*)returnValue;
}
System_Configuration::System::Configuration::ConfigurationElement* System::System::Configuration::SchemeSettingElementCollection::CreateNewElement()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateNewElement");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Configuration::System::Configuration::ConfigurationElement*)returnValue;
}
mscorlib::System::Object* System::System::Configuration::SchemeSettingElementCollection::GetElementKey(System_Configuration::System::Configuration::ConfigurationElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementKey", std::vector<std::string> { "System.Configuration.ConfigurationElement" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
int32_t System::System::Configuration::SchemeSettingElementCollection::IndexOf(System::Configuration::SchemeSettingElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOf", std::vector<std::string> { "System.Configuration.SchemeSettingElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
