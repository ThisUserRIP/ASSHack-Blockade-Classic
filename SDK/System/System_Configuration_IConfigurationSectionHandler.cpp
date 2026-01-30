#include "System_Configuration_IConfigurationSectionHandler.h"

IL2CPP::Il2CppClass* System::System::Configuration::IConfigurationSectionHandler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Configuration", "IConfigurationSectionHandler");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Configuration::IConfigurationSectionHandler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Object* System::System::Configuration::IConfigurationSectionHandler::Create(mscorlib::System::Object* parent, mscorlib::System::Object* configContext, System_Xml::System::Xml::XmlNode* section)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Object", "System.Object", "System.Xml.XmlNode" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)configContext;
	params[2] = (intptr_t)section;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
