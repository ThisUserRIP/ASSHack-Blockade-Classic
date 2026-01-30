#include "System_Xml_Schema_BaseValidator.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::BaseValidator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "BaseValidator");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::BaseValidator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::BaseValidator::_ctor(System_Xml::System::Xml::Schema::BaseValidator* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.BaseValidator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::_ctor(System_Xml::System::Xml::XmlValidatingReaderImpl* reader, System_Xml::System::Xml::Schema::XmlSchemaCollection* schemaCollection, System_Xml::System::Xml::IValidationEventHandling* eventHandling)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlValidatingReaderImpl", "System.Xml.Schema.XmlSchemaCollection", "System.Xml.IValidationEventHandling" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)reader;
	params[1] = (intptr_t)schemaCollection;
	params[2] = (intptr_t)eventHandling;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlValidatingReaderImpl* System_Xml::System::Xml::Schema::BaseValidator::get_Reader()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Reader");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlValidatingReaderImpl*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaCollection* System_Xml::System::Xml::Schema::BaseValidator::get_SchemaCollection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SchemaCollection");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaCollection*)returnValue;
}
System_Xml::System::Xml::XmlNameTable* System_Xml::System::Xml::Schema::BaseValidator::get_NameTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NameTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNameTable*)returnValue;
}
System_Xml::System::Xml::Schema::SchemaNames* System_Xml::System::Xml::Schema::BaseValidator::get_SchemaNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SchemaNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaNames*)returnValue;
}
System_Xml::System::Xml::PositionInfo* System_Xml::System::Xml::Schema::BaseValidator::get_PositionInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PositionInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::PositionInfo*)returnValue;
}
System_Xml::System::Xml::XmlResolver* System_Xml::System::Xml::Schema::BaseValidator::get_XmlResolver()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlResolver");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlResolver*)returnValue;
}
void System_Xml::System::Xml::Schema::BaseValidator::set_XmlResolver(System_Xml::System::Xml::XmlResolver* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_XmlResolver", std::vector<std::string> { "System.Xml.XmlResolver" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Uri* System_Xml::System::Xml::Schema::BaseValidator::get_BaseUri()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BaseUri");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Uri*)returnValue;
}
void System_Xml::System::Xml::Schema::BaseValidator::set_BaseUri(System::System::Uri* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_BaseUri", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::ValidationEventHandler* System_Xml::System::Xml::Schema::BaseValidator::get_EventHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EventHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::ValidationEventHandler*)returnValue;
}
System_Xml::System::Xml::Schema::SchemaInfo* System_Xml::System::Xml::Schema::BaseValidator::get_SchemaInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SchemaInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaInfo*)returnValue;
}
void System_Xml::System::Xml::Schema::BaseValidator::set_DtdInfo(System_Xml::System::Xml::IDtdInfo* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DtdInfo", std::vector<std::string> { "System.Xml.IDtdInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::BaseValidator::get_PreserveWhitespace()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PreserveWhitespace");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::BaseValidator::Validate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Validate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::CompleteValidation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteValidation");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::BaseValidator::FindId(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindId", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Schema::BaseValidator::ValidateText()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateText");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::ValidateWhitespace()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateWhitespace");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::SaveTextValue(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveTextValue", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::SendValidationEvent(mscorlib::System::String* code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)code;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* arg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)arg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaException" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg, System_Xml::System::Xml::Schema::XmlSeverityType severity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String", "System.Xml.Schema.XmlSeverityType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)msg;
	params[2] = (intptr_t)&severity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::Schema::XmlSeverityType severity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String[]", "System.Xml.Schema.XmlSeverityType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)&severity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaException", "System.Xml.Schema.XmlSeverityType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)e;
	params[1] = (intptr_t)&severity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::ProcessEntity(System_Xml::System::Xml::Schema::SchemaInfo* sinfo, mscorlib::System::String* name, mscorlib::System::Object* sender, System_Xml::System::Xml::Schema::ValidationEventHandler* eventhandler, mscorlib::System::String* baseUri, int32_t lineNumber, int32_t linePosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessEntity", std::vector<std::string> { "System.Xml.Schema.SchemaInfo", "System.String", "System.Object", "System.Xml.Schema.ValidationEventHandler", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)sinfo;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)sender;
	params[3] = (intptr_t)eventhandler;
	params[4] = (intptr_t)baseUri;
	params[5] = (intptr_t)&lineNumber;
	params[6] = (intptr_t)&linePosition;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseValidator::ProcessEntity(System_Xml::System::Xml::Schema::SchemaInfo* sinfo, mscorlib::System::String* name, System_Xml::System::Xml::IValidationEventHandling* eventHandling, mscorlib::System::String* baseUriStr, int32_t lineNumber, int32_t linePosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessEntity", std::vector<std::string> { "System.Xml.Schema.SchemaInfo", "System.String", "System.Xml.IValidationEventHandling", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)sinfo;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)eventHandling;
	params[3] = (intptr_t)baseUriStr;
	params[4] = (intptr_t)&lineNumber;
	params[5] = (intptr_t)&linePosition;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::BaseValidator* System_Xml::System::Xml::Schema::BaseValidator::CreateInstance(System_Xml::System::Xml::ValidationType valType, System_Xml::System::Xml::XmlValidatingReaderImpl* reader, System_Xml::System::Xml::Schema::XmlSchemaCollection* schemaCollection, System_Xml::System::Xml::IValidationEventHandling* eventHandling, bool processIdentityConstraints)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInstance", std::vector<std::string> { "System.Xml.ValidationType", "System.Xml.XmlValidatingReaderImpl", "System.Xml.Schema.XmlSchemaCollection", "System.Xml.IValidationEventHandling", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&valType;
	params[1] = (intptr_t)reader;
	params[2] = (intptr_t)schemaCollection;
	params[3] = (intptr_t)eventHandling;
	params[4] = (intptr_t)&processIdentityConstraints;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::BaseValidator*)returnValue;
}
