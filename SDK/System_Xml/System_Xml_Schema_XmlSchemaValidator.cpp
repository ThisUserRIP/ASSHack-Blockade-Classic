#include "System_Xml_Schema_XmlSchemaValidator.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XmlSchemaValidator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaValidator");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XmlSchemaValidator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::_ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::XmlSchemaSet* schemas, System_Xml::System::Xml::IXmlNamespaceResolver* namespaceResolver, System_Xml::System::Xml::Schema::XmlSchemaValidationFlags validationFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNameTable", "System.Xml.Schema.XmlSchemaSet", "System.Xml.IXmlNamespaceResolver", "System.Xml.Schema.XmlSchemaValidationFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)nameTable;
	params[1] = (intptr_t)schemas;
	params[2] = (intptr_t)namespaceResolver;
	params[3] = (intptr_t)&validationFlags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::Init()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::set_XmlResolver(System_Xml::System::Xml::XmlResolver* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_XmlResolver", std::vector<std::string> { "System.Xml.XmlResolver" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::set_LineInfoProvider(System_Xml::System::Xml::IXmlLineInfo* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_LineInfoProvider", std::vector<std::string> { "System.Xml.IXmlLineInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::set_SourceUri(System::System::Uri* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_SourceUri", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::set_ValidationEventSender(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ValidationEventSender", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::add_ValidationEventHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_ValidationEventHandler", std::vector<std::string> { "System.Xml.Schema.ValidationEventHandler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::remove_ValidationEventHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_ValidationEventHandler", std::vector<std::string> { "System.Xml.Schema.ValidationEventHandler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::AddSchema(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSchema", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::Initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::Initialize(System_Xml::System::Xml::Schema::XmlSchemaObject* partialValidationType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)partialValidationType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateElement(mscorlib::System::String* localName, mscorlib::System::String* namespaceUri, System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo, mscorlib::System::String* xsiType, mscorlib::System::String* xsiNil, mscorlib::System::String* xsiSchemaLocation, mscorlib::System::String* xsiNoNamespaceSchemaLocation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateElement", std::vector<std::string> { "System.String", "System.String", "System.Xml.Schema.XmlSchemaInfo", "System.String", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)localName;
	params[1] = (intptr_t)namespaceUri;
	params[2] = (intptr_t)schemaInfo;
	params[3] = (intptr_t)xsiType;
	params[4] = (intptr_t)xsiNil;
	params[5] = (intptr_t)xsiSchemaLocation;
	params[6] = (intptr_t)xsiNoNamespaceSchemaLocation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateAttribute(mscorlib::System::String* localName, mscorlib::System::String* namespaceUri, System_Xml::System::Xml::Schema::XmlValueGetter* attributeValue, System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateAttribute", std::vector<std::string> { "System.String", "System.String", "System.Xml.Schema.XmlValueGetter", "System.Xml.Schema.XmlSchemaInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)localName;
	params[1] = (intptr_t)namespaceUri;
	params[2] = (intptr_t)attributeValue;
	params[3] = (intptr_t)schemaInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateAttribute(mscorlib::System::String* lName, mscorlib::System::String* ns, System_Xml::System::Xml::Schema::XmlValueGetter* attributeValueGetter, mscorlib::System::String* attributeStringValue, System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateAttribute", std::vector<std::string> { "System.String", "System.String", "System.Xml.Schema.XmlValueGetter", "System.String", "System.Xml.Schema.XmlSchemaInfo" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)lName;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)attributeValueGetter;
	params[3] = (intptr_t)attributeStringValue;
	params[4] = (intptr_t)schemaInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateEndOfAttributes(System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateEndOfAttributes", std::vector<std::string> { "System.Xml.Schema.XmlSchemaInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schemaInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateText(System_Xml::System::Xml::Schema::XmlValueGetter* elementValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateText", std::vector<std::string> { "System.Xml.Schema.XmlValueGetter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elementValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateText(mscorlib::System::String* elementStringValue, System_Xml::System::Xml::Schema::XmlValueGetter* elementValueGetter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateText", std::vector<std::string> { "System.String", "System.Xml.Schema.XmlValueGetter" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elementStringValue;
	params[1] = (intptr_t)elementValueGetter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateWhitespace(System_Xml::System::Xml::Schema::XmlValueGetter* elementValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateWhitespace", std::vector<std::string> { "System.Xml.Schema.XmlValueGetter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elementValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateWhitespace(mscorlib::System::String* elementStringValue, System_Xml::System::Xml::Schema::XmlValueGetter* elementValueGetter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateWhitespace", std::vector<std::string> { "System.String", "System.Xml.Schema.XmlValueGetter" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elementStringValue;
	params[1] = (intptr_t)elementValueGetter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateEndElement(System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateEndElement", std::vector<std::string> { "System.Xml.Schema.XmlSchemaInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schemaInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SkipToEndElement(System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SkipToEndElement", std::vector<std::string> { "System.Xml.Schema.XmlSchemaInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schemaInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::EndValidation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndValidation");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::GetUnspecifiedDefaultAttributes(mscorlib::System::Collections::ArrayList* defaultAttributes, bool createNodeData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnspecifiedDefaultAttributes", std::vector<std::string> { "System.Collections.ArrayList", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)defaultAttributes;
	params[1] = (intptr_t)&createNodeData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaSet* System_Xml::System::Xml::Schema::XmlSchemaValidator::get_SchemaSet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SchemaSet");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaSet*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaValidationFlags System_Xml::System::Xml::Schema::XmlSchemaValidator::get_ValidationFlags()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ValidationFlags");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaValidationFlags ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaValidationFlags));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaValidationFlags>(*(System_Xml::System::Xml::Schema::XmlSchemaValidationFlags*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::XmlSchemaContentType System_Xml::System::Xml::Schema::XmlSchemaValidator::get_CurrentContentType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CurrentContentType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaContentType ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaContentType));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaContentType>(*(System_Xml::System::Xml::Schema::XmlSchemaContentType*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SetDtdSchemaInfo(System_Xml::System::Xml::IDtdInfo* dtdSchemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDtdSchemaInfo", std::vector<std::string> { "System.Xml.IDtdInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dtdSchemaInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XmlSchemaValidator::get_StrictlyAssessed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_StrictlyAssessed");
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
bool System_Xml::System::Xml::Schema::XmlSchemaValidator::get_HasSchema()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasSchema");
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
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaValidator::GetConcatenatedValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetConcatenatedValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaValidator::InternalValidateEndElement(System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo, mscorlib::System::Object* typedValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalValidateEndElement", std::vector<std::string> { "System.Xml.Schema.XmlSchemaInfo", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)schemaInfo;
	params[1] = (intptr_t)typedValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ProcessSchemaLocations(mscorlib::System::String* xsiSchemaLocation, mscorlib::System::String* xsiNoNamespaceSchemaLocation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessSchemaLocations", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)xsiSchemaLocation;
	params[1] = (intptr_t)xsiNoNamespaceSchemaLocation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateElementContext(System_Xml::System::Xml::XmlQualifiedName* elementName, bool& invalidElementInContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateElementContext", std::vector<std::string> { "System.Xml.XmlQualifiedName", "System.Boolean&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elementName;
	params[1] = (intptr_t)&invalidElementInContext;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaElement* System_Xml::System::Xml::Schema::XmlSchemaValidator::GetSubstitutionGroupHead(System_Xml::System::Xml::XmlQualifiedName* member)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSubstitutionGroupHead", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)member;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaElement*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateAtomicValue(mscorlib::System::String* stringValue, System_Xml::System::Xml::Schema::XmlSchemaSimpleType& memberType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateAtomicValue", std::vector<std::string> { "System.String", "System.Xml.Schema.XmlSchemaSimpleType&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)stringValue;
	params[1] = (intptr_t)&memberType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateAtomicValue(mscorlib::System::Object* parsedValue, System_Xml::System::Xml::Schema::XmlSchemaSimpleType& memberType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateAtomicValue", std::vector<std::string> { "System.Object", "System.Xml.Schema.XmlSchemaSimpleType&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)parsedValue;
	params[1] = (intptr_t)&memberType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaValidator::GetTypeName(System_Xml::System::Xml::Schema::SchemaDeclBase* decl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeName", std::vector<std::string> { "System.Xml.Schema.SchemaDeclBase" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)decl;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SaveTextValue(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveTextValue", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::Push(System_Xml::System::Xml::XmlQualifiedName* elementName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Push", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elementName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::Pop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pop");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::SchemaElementDecl* System_Xml::System::Xml::Schema::XmlSchemaValidator::FastGetElementDecl(System_Xml::System::Xml::XmlQualifiedName* elementName, mscorlib::System::Object* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FastGetElementDecl", std::vector<std::string> { "System.Xml.XmlQualifiedName", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elementName;
	params[1] = (intptr_t)particle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaElementDecl*)returnValue;
}
System_Xml::System::Xml::Schema::SchemaElementDecl* System_Xml::System::Xml::Schema::XmlSchemaValidator::CheckXsiTypeAndNil(System_Xml::System::Xml::Schema::SchemaElementDecl* elementDecl, mscorlib::System::String* xsiType, mscorlib::System::String* xsiNil, bool& declFound)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckXsiTypeAndNil", std::vector<std::string> { "System.Xml.Schema.SchemaElementDecl", "System.String", "System.String", "System.Boolean&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)elementDecl;
	params[1] = (intptr_t)xsiType;
	params[2] = (intptr_t)xsiNil;
	params[3] = (intptr_t)&declFound;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaElementDecl*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ThrowDeclNotFoundWarningOrError(bool declFound)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowDeclNotFoundWarningOrError", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&declFound;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::CheckElementProperties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckElementProperties");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ValidateStartElementIdentityConstraints()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateStartElementIdentityConstraints");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::SchemaAttDef* System_Xml::System::Xml::Schema::XmlSchemaValidator::CheckIsXmlAttribute(System_Xml::System::Xml::XmlQualifiedName* attQName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckIsXmlAttribute", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attQName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaAttDef*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::AddXmlNamespaceSchema()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddXmlNamespaceSchema");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaValidator::CheckMixedValueConstraint(mscorlib::System::String* elementValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckMixedValueConstraint", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elementValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::LoadSchema(mscorlib::System::String* uri, mscorlib::System::String* url)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSchema", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)url;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::RecompileSchemaSet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecompileSchemaSet");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ProcessTokenizedType(System_Xml::System::Xml::XmlTokenizedType ttype, mscorlib::System::String* name, bool attrValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessTokenizedType", std::vector<std::string> { "System.Xml.XmlTokenizedType", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ttype;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)&attrValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaValidator::CheckAttributeValue(mscorlib::System::Object* value, System_Xml::System::Xml::Schema::SchemaAttDef* attdef)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckAttributeValue", std::vector<std::string> { "System.Object", "System.Xml.Schema.SchemaAttDef" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)attdef;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaValidator::CheckElementValue(mscorlib::System::String* stringValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckElementValue", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stringValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::CheckTokenizedTypes(System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtype, mscorlib::System::Object* typedValue, bool attrValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckTokenizedTypes", std::vector<std::string> { "System.Xml.Schema.XmlSchemaDatatype", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dtype;
	params[1] = (intptr_t)typedValue;
	params[2] = (intptr_t)&attrValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaValidator::FindId(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindId", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::CheckForwardRefs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckForwardRefs");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XmlSchemaValidator::get_HasIdentityConstraints()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasIdentityConstraints");
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
bool System_Xml::System::Xml::Schema::XmlSchemaValidator::get_ProcessIdentityConstraints()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ProcessIdentityConstraints");
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
bool System_Xml::System::Xml::Schema::XmlSchemaValidator::get_ReportValidationWarnings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ReportValidationWarnings");
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
bool System_Xml::System::Xml::Schema::XmlSchemaValidator::get_ProcessSchemaHints()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ProcessSchemaHints");
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
void System_Xml::System::Xml::Schema::XmlSchemaValidator::CheckStateTransition(System_Xml::System::Xml::Schema::ValidatorState toState, mscorlib::System::String* methodName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckStateTransition", std::vector<std::string> { "System.Xml.Schema.ValidatorState", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&toState;
	params[1] = (intptr_t)methodName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ClearPSVI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearPSVI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::CheckRequiredAttributes(System_Xml::System::Xml::Schema::SchemaElementDecl* currentElementDecl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckRequiredAttributes", std::vector<std::string> { "System.Xml.Schema.SchemaElementDecl" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)currentElementDecl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaElement* System_Xml::System::Xml::Schema::XmlSchemaValidator::GetSchemaElement()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSchemaElement");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaElement*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaValidator::GetDefaultAttributePrefix(mscorlib::System::String* attributeNS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultAttributePrefix", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributeNS;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::AddIdentityConstraints()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddIdentityConstraints");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ElementIdentityConstraints()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementIdentityConstraints");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::AttributeIdentityConstraints(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Object* obj, mscorlib::System::String* sobj, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AttributeIdentityConstraints", std::vector<std::string> { "System.String", "System.String", "System.Object", "System.String", "System.Xml.Schema.XmlSchemaDatatype" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)obj;
	params[3] = (intptr_t)sobj;
	params[4] = (intptr_t)datatype;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::EndElementIdentityConstraints(mscorlib::System::Object* typedValue, mscorlib::System::String* stringValue, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndElementIdentityConstraints", std::vector<std::string> { "System.Object", "System.String", "System.Xml.Schema.XmlSchemaDatatype" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)typedValue;
	params[1] = (intptr_t)stringValue;
	params[2] = (intptr_t)datatype;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ElementValidationError(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::ValidationState* context, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, mscorlib::System::Object* sender, mscorlib::System::String* sourceUri, int32_t lineNo, int32_t linePos, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementValidationError", std::vector<std::string> { "System.Xml.XmlQualifiedName", "System.Xml.Schema.ValidationState", "System.Xml.Schema.ValidationEventHandler", "System.Object", "System.String", "System.Int32", "System.Int32", "System.Xml.Schema.XmlSchemaSet" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)context;
	params[2] = (intptr_t)eventHandler;
	params[3] = (intptr_t)sender;
	params[4] = (intptr_t)sourceUri;
	params[5] = (intptr_t)&lineNo;
	params[6] = (intptr_t)&linePos;
	params[7] = (intptr_t)schemaSet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::CompleteValidationError(System_Xml::System::Xml::Schema::ValidationState* context, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, mscorlib::System::Object* sender, mscorlib::System::String* sourceUri, int32_t lineNo, int32_t linePos, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteValidationError", std::vector<std::string> { "System.Xml.Schema.ValidationState", "System.Xml.Schema.ValidationEventHandler", "System.Object", "System.String", "System.Int32", "System.Int32", "System.Xml.Schema.XmlSchemaSet" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)context;
	params[1] = (intptr_t)eventHandler;
	params[2] = (intptr_t)sender;
	params[3] = (intptr_t)sourceUri;
	params[4] = (intptr_t)&lineNo;
	params[5] = (intptr_t)&linePos;
	params[6] = (intptr_t)schemaSet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaValidator::PrintExpectedElements(mscorlib::System::Collections::ArrayList* expected, bool getParticles)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrintExpectedElements", std::vector<std::string> { "System.Collections.ArrayList", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)expected;
	params[1] = (intptr_t)&getParticles;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaValidator::PrintNames(mscorlib::System::Collections::ArrayList* expected)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrintNames", std::vector<std::string> { "System.Collections.ArrayList" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)expected;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::PrintNamesWithNS(mscorlib::System::Collections::ArrayList* expected, mscorlib::System::Text::StringBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrintNamesWithNS", std::vector<std::string> { "System.Collections.ArrayList", "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)expected;
	params[1] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::EnumerateAny(mscorlib::System::Text::StringBuilder* builder, mscorlib::System::String* namespaces)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnumerateAny", std::vector<std::string> { "System.Text.StringBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)namespaces;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaValidator::QNameString(mscorlib::System::String* localName, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QNameString", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)localName;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaValidator::BuildElementName(System_Xml::System::Xml::XmlQualifiedName* qname)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElementName", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qname;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaValidator::BuildElementName(mscorlib::System::String* localName, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElementName", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)localName;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::ProcessEntity(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessEntity", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(mscorlib::System::String* code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)code;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args)
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
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* arg)
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
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* arg1, mscorlib::System::String* arg2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)arg1;
	params[2] = (intptr_t)arg2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* innerException, System_Xml::System::Xml::Schema::XmlSeverityType severity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String[]", "System.Exception", "System.Xml.Schema.XmlSeverityType" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)innerException;
	params[3] = (intptr_t)&severity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* innerException)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String[]", "System.Exception" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)innerException;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaValidationException* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaValidationException" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaException" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg, System_Xml::System::Xml::Schema::XmlSeverityType severity)
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
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaValidationException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaValidationException", "System.Xml.Schema.XmlSeverityType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)e;
	params[1] = (intptr_t)&severity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, mscorlib::System::Object* sender, System_Xml::System::Xml::Schema::XmlSchemaValidationException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.Xml.Schema.ValidationEventHandler", "System.Object", "System.Xml.Schema.XmlSchemaValidationException", "System.Xml.Schema.XmlSeverityType" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)eventHandler;
	params[1] = (intptr_t)sender;
	params[2] = (intptr_t)e;
	params[3] = (intptr_t)&severity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaValidator::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
