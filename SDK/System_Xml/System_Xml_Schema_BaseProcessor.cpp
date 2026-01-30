#include "System_Xml_Schema_BaseProcessor.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::BaseProcessor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "BaseProcessor");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::BaseProcessor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::BaseProcessor::_ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNameTable", "System.Xml.Schema.SchemaNames", "System.Xml.Schema.ValidationEventHandler" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)nameTable;
	params[1] = (intptr_t)schemaNames;
	params[2] = (intptr_t)eventHandler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseProcessor::_ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNameTable", "System.Xml.Schema.SchemaNames", "System.Xml.Schema.ValidationEventHandler", "System.Xml.Schema.XmlSchemaCompilationSettings" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)nameTable;
	params[1] = (intptr_t)schemaNames;
	params[2] = (intptr_t)eventHandler;
	params[3] = (intptr_t)compilationSettings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlNameTable* System_Xml::System::Xml::Schema::BaseProcessor::get_NameTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NameTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNameTable*)returnValue;
}
System_Xml::System::Xml::Schema::SchemaNames* System_Xml::System::Xml::Schema::BaseProcessor::get_SchemaNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SchemaNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaNames*)returnValue;
}
System_Xml::System::Xml::Schema::ValidationEventHandler* System_Xml::System::Xml::Schema::BaseProcessor::get_EventHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EventHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::ValidationEventHandler*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* System_Xml::System::Xml::Schema::BaseProcessor::get_CompilationSettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CompilationSettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings*)returnValue;
}
bool System_Xml::System::Xml::Schema::BaseProcessor::get_HasErrors()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasErrors");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::BaseProcessor::AddToTable(System_Xml::System::Xml::Schema::XmlSchemaObjectTable* table, System_Xml::System::Xml::XmlQualifiedName* qname, System_Xml::System::Xml::Schema::XmlSchemaObject* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddToTable", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObjectTable", "System.Xml.XmlQualifiedName", "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)table;
	params[1] = (intptr_t)qname;
	params[2] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::BaseProcessor::IsValidAttributeGroupRedefine(System_Xml::System::Xml::Schema::XmlSchemaObject* existingObject, System_Xml::System::Xml::Schema::XmlSchemaObject* item, System_Xml::System::Xml::Schema::XmlSchemaObjectTable* table)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidAttributeGroupRedefine", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject", "System.Xml.Schema.XmlSchemaObject", "System.Xml.Schema.XmlSchemaObjectTable" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)existingObject;
	params[1] = (intptr_t)item;
	params[2] = (intptr_t)table;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::Schema::BaseProcessor::IsValidGroupRedefine(System_Xml::System::Xml::Schema::XmlSchemaObject* existingObject, System_Xml::System::Xml::Schema::XmlSchemaObject* item, System_Xml::System::Xml::Schema::XmlSchemaObjectTable* table)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidGroupRedefine", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject", "System.Xml.Schema.XmlSchemaObject", "System.Xml.Schema.XmlSchemaObjectTable" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)existingObject;
	params[1] = (intptr_t)item;
	params[2] = (intptr_t)table;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::Schema::BaseProcessor::IsValidTypeRedefine(System_Xml::System::Xml::Schema::XmlSchemaObject* existingObject, System_Xml::System::Xml::Schema::XmlSchemaObject* item, System_Xml::System::Xml::Schema::XmlSchemaObjectTable* table)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidTypeRedefine", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject", "System.Xml.Schema.XmlSchemaObject", "System.Xml.Schema.XmlSchemaObjectTable" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)existingObject;
	params[1] = (intptr_t)item;
	params[2] = (intptr_t)table;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::BaseProcessor::SendValidationEvent(mscorlib::System::String* code, System_Xml::System::Xml::Schema::XmlSchemaObject* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseProcessor::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg, System_Xml::System::Xml::Schema::XmlSchemaObject* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String", "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)msg;
	params[2] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseProcessor::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg1, mscorlib::System::String* msg2, System_Xml::System::Xml::Schema::XmlSchemaObject* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)msg1;
	params[2] = (intptr_t)msg2;
	params[3] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseProcessor::SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* innerException, System_Xml::System::Xml::Schema::XmlSchemaObject* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String[]", "System.Exception", "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)innerException;
	params[3] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseProcessor::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg1, mscorlib::System::String* msg2, mscorlib::System::String* sourceUri, int32_t lineNumber, int32_t linePosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)msg1;
	params[2] = (intptr_t)msg2;
	params[3] = (intptr_t)sourceUri;
	params[4] = (intptr_t)&lineNumber;
	params[5] = (intptr_t)&linePosition;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseProcessor::SendValidationEvent(mscorlib::System::String* code, System_Xml::System::Xml::Schema::XmlSchemaObject* source, System_Xml::System::Xml::Schema::XmlSeverityType severity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.Xml.Schema.XmlSchemaObject", "System.Xml.Schema.XmlSeverityType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)source;
	params[2] = (intptr_t)&severity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseProcessor::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaException" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseProcessor::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg, System_Xml::System::Xml::Schema::XmlSchemaObject* source, System_Xml::System::Xml::Schema::XmlSeverityType severity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String", "System.Xml.Schema.XmlSchemaObject", "System.Xml.Schema.XmlSeverityType" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)msg;
	params[2] = (intptr_t)source;
	params[3] = (intptr_t)&severity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::BaseProcessor::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity)
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
void System_Xml::System::Xml::Schema::BaseProcessor::SendValidationEventNoThrow(System_Xml::System::Xml::Schema::XmlSchemaException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEventNoThrow", std::vector<std::string> { "System.Xml.Schema.XmlSchemaException", "System.Xml.Schema.XmlSeverityType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)e;
	params[1] = (intptr_t)&severity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
