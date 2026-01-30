#include "System_Xml_Schema_Preprocessor.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::Preprocessor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "Preprocessor");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::Preprocessor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::Preprocessor::_ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings)
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
bool System_Xml::System::Xml::Schema::Preprocessor::Execute(System_Xml::System::Xml::Schema::XmlSchema* schema, mscorlib::System::String* targetNamespace, bool loadExternals)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "System.Xml.Schema.XmlSchema", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)schema;
	params[1] = (intptr_t)targetNamespace;
	params[2] = (intptr_t)&loadExternals;
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
void System_Xml::System::Xml::Schema::Preprocessor::Cleanup(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cleanup", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::CleanupRedefine(System_Xml::System::Xml::Schema::XmlSchemaExternal* include)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanupRedefine", std::vector<std::string> { "System.Xml.Schema.XmlSchemaExternal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)include;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::set_XmlResolver(System_Xml::System::Xml::XmlResolver* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_XmlResolver", std::vector<std::string> { "System.Xml.XmlResolver" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::set_ReaderSettings(System_Xml::System::Xml::XmlReaderSettings* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ReaderSettings", std::vector<std::string> { "System.Xml.XmlReaderSettings" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::set_SchemaLocations(mscorlib::System::Collections::Hashtable* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_SchemaLocations", std::vector<std::string> { "System.Collections.Hashtable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::set_ChameleonSchemas(mscorlib::System::Collections::Hashtable* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ChameleonSchemas", std::vector<std::string> { "System.Collections.Hashtable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::Preprocessor::get_RootSchema()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RootSchema");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
void System_Xml::System::Xml::Schema::Preprocessor::BuildSchemaList(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSchemaList", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::LoadExternals(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadExternals", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::Preprocessor::GetBuildInSchema()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBuildInSchema");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
void System_Xml::System::Xml::Schema::Preprocessor::BuildRefNamespaces(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildRefNamespaces", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::ParseUri(mscorlib::System::String* uri, mscorlib::System::String* code, System_Xml::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseUri", std::vector<std::string> { "System.String", "System.String", "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)code;
	params[2] = (intptr_t)sourceSchemaObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::Preprocess(System_Xml::System::Xml::Schema::XmlSchema* schema, mscorlib::System::String* targetNamespace, mscorlib::System::Collections::ArrayList* imports)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Preprocess", std::vector<std::string> { "System.Xml.Schema.XmlSchema", "System.String", "System.Collections.ArrayList" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)schema;
	params[1] = (intptr_t)targetNamespace;
	params[2] = (intptr_t)imports;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::CopyIncludedComponents(System_Xml::System::Xml::Schema::XmlSchema* includedSchema, System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyIncludedComponents", std::vector<std::string> { "System.Xml.Schema.XmlSchema", "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)includedSchema;
	params[1] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessRedefine(System_Xml::System::Xml::Schema::RedefineEntry* redefineEntry)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessRedefine", std::vector<std::string> { "System.Xml.Schema.RedefineEntry" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)redefineEntry;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::GetIncludedSet(System_Xml::System::Xml::Schema::XmlSchema* schema, mscorlib::System::Collections::ArrayList* includesList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIncludedSet", std::vector<std::string> { "System.Xml.Schema.XmlSchema", "System.Collections.ArrayList" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)schema;
	params[1] = (intptr_t)includesList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::Preprocessor::GetParentSchema(System_Xml::System::Xml::Schema::XmlSchemaObject* currentSchemaObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetParentSchema", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)currentSchemaObject;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
void System_Xml::System::Xml::Schema::Preprocessor::SetSchemaDefaults(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSchemaDefaults", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System_Xml::System::Xml::Schema::Preprocessor::CountGroupSelfReference(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* items, System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::XmlSchemaGroup* redefined)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CountGroupSelfReference", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObjectCollection", "System.Xml.XmlQualifiedName", "System.Xml.Schema.XmlSchemaGroup" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)items;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)redefined;
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
void System_Xml::System::Xml::Schema::Preprocessor::CheckRefinedGroup(System_Xml::System::Xml::Schema::XmlSchemaGroup* group)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckRefinedGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)group;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::CheckRefinedAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckRefinedAttributeGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttributeGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributeGroup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::CheckRefinedSimpleType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* stype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckRefinedSimpleType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSimpleType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stype;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::CheckRefinedComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* ctype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckRefinedComplexType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ctype;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attribute;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessLocalAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessLocalAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attribute;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessAttributeContent(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessAttributeContent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attribute;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessAttributeGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttributeGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributeGroup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessElement", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessLocalElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessLocalElement", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessElementContent(System_Xml::System::Xml::Schema::XmlSchemaElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessElementContent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessIdentityConstraint(System_Xml::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessIdentityConstraint", std::vector<std::string> { "System.Xml.Schema.XmlSchemaIdentityConstraint" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)constraint;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessSimpleType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* simpleType, bool local)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessSimpleType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSimpleType", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)simpleType;
	params[1] = (intptr_t)&local;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, bool local)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessComplexType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)complexType;
	params[1] = (intptr_t)&local;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessGroup(System_Xml::System::Xml::Schema::XmlSchemaGroup* group)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)group;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessNotation(System_Xml::System::Xml::Schema::XmlSchemaNotation* notation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessNotation", std::vector<std::string> { "System.Xml.Schema.XmlSchemaNotation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)notation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessParticle", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)particle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessAttributes(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, System_Xml::System::Xml::Schema::XmlSchemaObject* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessAttributes", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObjectCollection", "System.Xml.Schema.XmlSchemaAnyAttribute", "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)attributes;
	params[1] = (intptr_t)anyAttribute;
	params[2] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::ValidateIdAttribute(System_Xml::System::Xml::Schema::XmlSchemaObject* xso)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateIdAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xso;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::ValidateNameAttribute(System_Xml::System::Xml::Schema::XmlSchemaObject* xso)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateNameAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xso;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::ValidateQNameAttribute(System_Xml::System::Xml::Schema::XmlSchemaObject* xso, mscorlib::System::String* attributeName, System_Xml::System::Xml::XmlQualifiedName* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateQNameAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject", "System.String", "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)xso;
	params[1] = (intptr_t)attributeName;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Uri* System_Xml::System::Xml::Schema::Preprocessor::ResolveSchemaLocationUri(System_Xml::System::Xml::Schema::XmlSchema* enclosingSchema, mscorlib::System::String* location)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResolveSchemaLocationUri", std::vector<std::string> { "System.Xml.Schema.XmlSchema", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)enclosingSchema;
	params[1] = (intptr_t)location;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Uri*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::Preprocessor::GetSchemaEntity(System::System::Uri* ruri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSchemaEntity", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ruri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::Preprocessor::GetChameleonSchema(mscorlib::System::String* targetNamespace, System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetChameleonSchema", std::vector<std::string> { "System.String", "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)targetNamespace;
	params[1] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
void System_Xml::System::Xml::Schema::Preprocessor::SetParent(System_Xml::System::Xml::Schema::XmlSchemaObject* child, System_Xml::System::Xml::Schema::XmlSchemaObject* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetParent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject", "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)child;
	params[1] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessAnnotation(System_Xml::System::Xml::Schema::XmlSchemaObject* schemaObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessAnnotation", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schemaObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Preprocessor::PreprocessAnnotation(System_Xml::System::Xml::Schema::XmlSchemaAnnotation* annotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessAnnotation", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAnnotation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)annotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
