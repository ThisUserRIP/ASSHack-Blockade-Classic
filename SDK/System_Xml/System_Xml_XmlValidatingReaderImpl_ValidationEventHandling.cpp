#include "System_Xml_XmlValidatingReaderImpl_ValidationEventHandling.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::XmlValidatingReaderImpl::GetIl2CppClass(), "ValidationEventHandling");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling::_ctor(System_Xml::System::Xml::XmlValidatingReaderImpl* reader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlValidatingReaderImpl" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)reader;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling::System_Xml_IValidationEventHandling_get_EventHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Xml.IValidationEventHandling.get_EventHandler");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling::System_Xml_IValidationEventHandling_SendEvent(mscorlib::System::Exception* exception, System_Xml::System::Xml::Schema::XmlSeverityType severity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Xml.IValidationEventHandling.SendEvent", std::vector<std::string> { "System.Exception", "System.Xml.Schema.XmlSeverityType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)exception;
	params[1] = (intptr_t)&severity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling::AddHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* handler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddHandler", std::vector<std::string> { "System.Xml.Schema.ValidationEventHandler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)handler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
