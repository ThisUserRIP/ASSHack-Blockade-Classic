#include "System_Xml_Schema_SchemaCollectionPreprocessor.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "SchemaCollectionPreprocessor");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::_ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler)
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
bool System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::Execute(System_Xml::System::Xml::Schema::XmlSchema* schema, mscorlib::System::String* targetNamespace, bool loadExternals, System_Xml::System::Xml::Schema::XmlSchemaCollection* xsc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "System.Xml.Schema.XmlSchema", "System.String", "System.Boolean", "System.Xml.Schema.XmlSchemaCollection" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)schema;
	params[1] = (intptr_t)targetNamespace;
	params[2] = (intptr_t)&loadExternals;
	params[3] = (intptr_t)xsc;
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
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::Cleanup(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cleanup", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::set_XmlResolver(System_Xml::System::Xml::XmlResolver* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_XmlResolver", std::vector<std::string> { "System.Xml.XmlResolver" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::LoadExternals(System_Xml::System::Xml::Schema::XmlSchema* schema, System_Xml::System::Xml::Schema::XmlSchemaCollection* xsc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadExternals", std::vector<std::string> { "System.Xml.Schema.XmlSchema", "System.Xml.Schema.XmlSchemaCollection" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)schema;
	params[1] = (intptr_t)xsc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::BuildRefNamespaces(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildRefNamespaces", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::Preprocess(System_Xml::System::Xml::Schema::XmlSchema* schema, mscorlib::System::String* targetNamespace, System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor compositor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Preprocess", std::vector<std::string> { "System.Xml.Schema.XmlSchema", "System.String", "System.Xml.Schema.SchemaCollectionPreprocessor/Compositor" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)schema;
	params[1] = (intptr_t)targetNamespace;
	params[2] = (intptr_t)&compositor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessRedefine(System_Xml::System::Xml::Schema::XmlSchemaRedefine* redefine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessRedefine", std::vector<std::string> { "System.Xml.Schema.XmlSchemaRedefine" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)redefine;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::CountGroupSelfReference(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* items, System_Xml::System::Xml::XmlQualifiedName* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CountGroupSelfReference", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObjectCollection", "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)items;
	params[1] = (intptr_t)name;
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
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedGroup(System_Xml::System::Xml::Schema::XmlSchemaGroup* group)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckRefinedGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)group;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckRefinedAttributeGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttributeGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributeGroup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedSimpleType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* stype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckRefinedSimpleType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSimpleType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stype;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* ctype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckRefinedComplexType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ctype;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attribute;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessLocalAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessLocalAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attribute;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttributeContent(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessAttributeContent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attribute;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessAttributeGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttributeGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributeGroup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessElement", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessLocalElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessLocalElement", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessElementContent(System_Xml::System::Xml::Schema::XmlSchemaElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessElementContent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessIdentityConstraint(System_Xml::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessIdentityConstraint", std::vector<std::string> { "System.Xml.Schema.XmlSchemaIdentityConstraint" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)constraint;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessSimpleType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* simpleType, bool local)
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
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, bool local)
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
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessGroup(System_Xml::System::Xml::Schema::XmlSchemaGroup* group)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)group;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessNotation(System_Xml::System::Xml::Schema::XmlSchemaNotation* notation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessNotation", std::vector<std::string> { "System.Xml.Schema.XmlSchemaNotation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)notation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessParticle", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)particle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttributes(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, System_Xml::System::Xml::Schema::XmlSchemaObject* parent)
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
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::ValidateIdAttribute(System_Xml::System::Xml::Schema::XmlSchemaObject* xso)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateIdAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xso;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::ValidateNameAttribute(System_Xml::System::Xml::Schema::XmlSchemaObject* xso)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateNameAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xso;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::ValidateQNameAttribute(System_Xml::System::Xml::Schema::XmlSchemaObject* xso, mscorlib::System::String* attributeName, System_Xml::System::Xml::XmlQualifiedName* value)
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
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::SetParent(System_Xml::System::Xml::Schema::XmlSchemaObject* child, System_Xml::System::Xml::Schema::XmlSchemaObject* parent)
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
void System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAnnotation(System_Xml::System::Xml::Schema::XmlSchemaObject* schemaObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessAnnotation", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schemaObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Uri* System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::ResolveSchemaLocationUri(System_Xml::System::Xml::Schema::XmlSchema* enclosingSchema, mscorlib::System::String* location)
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
mscorlib::System::IO::Stream* System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor::GetSchemaEntity(System::System::Uri* ruri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSchemaEntity", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ruri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::Stream*)returnValue;
}
