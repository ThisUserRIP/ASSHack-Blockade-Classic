#include "System_Xml_Schema_SchemaCollectionCompiler.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "SchemaCollectionCompiler");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::_ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNameTable", "System.Xml.Schema.ValidationEventHandler" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)nameTable;
	params[1] = (intptr_t)eventHandler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::Execute(System_Xml::System::Xml::Schema::XmlSchema* schema, System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo, bool compileContentModel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "System.Xml.Schema.XmlSchema", "System.Xml.Schema.SchemaInfo", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)schema;
	params[1] = (intptr_t)schemaInfo;
	params[2] = (intptr_t)&compileContentModel;
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
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::Prepare()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Prepare");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::Cleanup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cleanup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::Cleanup(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cleanup", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::Compile()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compile");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::Output(System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Output", std::vector<std::string> { "System.Xml.Schema.SchemaInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schemaInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CleanupAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanupAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attribute;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CleanupAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanupAttributeGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttributeGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributeGroup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CleanupComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanupComplexType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)complexType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CleanupSimpleType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* simpleType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanupSimpleType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSimpleType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)simpleType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CleanupElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanupElement", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CleanupAttributes(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanupAttributes", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObjectCollection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CleanupGroup(System_Xml::System::Xml::Schema::XmlSchemaGroup* group)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanupGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)group;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CleanupParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanupParticle", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)particle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileSubstitutionGroup(System_Xml::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat* substitutionGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileSubstitutionGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSubstitutionGroupV1Compat" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)substitutionGroup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CheckSubstitutionGroup(System_Xml::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckSubstitutionGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSubstitutionGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)substitutionGroup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileGroup(System_Xml::System::Xml::Schema::XmlSchemaGroup* group)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)group;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* simpleType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileSimpleType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSimpleType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)simpleType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileBaseMemberTypes(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* simpleType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileBaseMemberTypes", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSimpleType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)simpleType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>*)returnValue;
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CheckUnionType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* unionMember, mscorlib::System::Collections::ArrayList* memberTypeDefinitions, System_Xml::System::Xml::Schema::XmlSchemaSimpleType* parentType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckUnionType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSimpleType", "System.Collections.ArrayList", "System.Xml.Schema.XmlSchemaSimpleType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)unionMember;
	params[1] = (intptr_t)memberTypeDefinitions;
	params[2] = (intptr_t)parentType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileComplexType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)complexType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleContentExtension(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleExtension)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileSimpleContentExtension", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType", "System.Xml.Schema.XmlSchemaSimpleContentExtension" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)complexType;
	params[1] = (intptr_t)simpleExtension;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleContentRestriction(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleRestriction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileSimpleContentRestriction", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType", "System.Xml.Schema.XmlSchemaSimpleContentRestriction" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)complexType;
	params[1] = (intptr_t)simpleRestriction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContentExtension(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaComplexContent* complexContent, System_Xml::System::Xml::Schema::XmlSchemaComplexContentExtension* complexExtension)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileComplexContentExtension", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType", "System.Xml.Schema.XmlSchemaComplexContent", "System.Xml.Schema.XmlSchemaComplexContentExtension" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)complexType;
	params[1] = (intptr_t)complexContent;
	params[2] = (intptr_t)complexExtension;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContentRestriction(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaComplexContent* complexContent, System_Xml::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexRestriction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileComplexContentRestriction", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType", "System.Xml.Schema.XmlSchemaComplexContent", "System.Xml.Schema.XmlSchemaComplexContentRestriction" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)complexType;
	params[1] = (intptr_t)complexContent;
	params[2] = (intptr_t)complexRestriction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CheckParticleDerivation(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckParticleDerivation", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)complexType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaParticle* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileContentTypeParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, bool substitution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileContentTypeParticle", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)particle;
	params[1] = (intptr_t)&substitution;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaParticle*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaParticle* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, bool root, bool substitution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CannonicalizeParticle", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)particle;
	params[1] = (intptr_t)&root;
	params[2] = (intptr_t)&substitution;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaParticle*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaParticle* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element, bool substitution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CannonicalizeElement", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)&substitution;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaParticle*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaParticle* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeGroupRef(System_Xml::System::Xml::Schema::XmlSchemaGroupRef* groupRef, bool root, bool substitution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CannonicalizeGroupRef", std::vector<std::string> { "System.Xml.Schema.XmlSchemaGroupRef", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)groupRef;
	params[1] = (intptr_t)&root;
	params[2] = (intptr_t)&substitution;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaParticle*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaParticle* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeAll(System_Xml::System::Xml::Schema::XmlSchemaAll* all, bool root, bool substitution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CannonicalizeAll", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAll", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)all;
	params[1] = (intptr_t)&root;
	params[2] = (intptr_t)&substitution;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaParticle*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaParticle* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeChoice(System_Xml::System::Xml::Schema::XmlSchemaChoice* choice, bool root, bool substitution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CannonicalizeChoice", std::vector<std::string> { "System.Xml.Schema.XmlSchemaChoice", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)choice;
	params[1] = (intptr_t)&root;
	params[2] = (intptr_t)&substitution;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaParticle*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaParticle* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeSequence(System_Xml::System::Xml::Schema::XmlSchemaSequence* sequence, bool root, bool substitution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CannonicalizeSequence", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSequence", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)sequence;
	params[1] = (intptr_t)&root;
	params[2] = (intptr_t)&substitution;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaParticle*)returnValue;
}
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsValidRestriction(System_Xml::System::Xml::Schema::XmlSchemaParticle* derivedParticle, System_Xml::System::Xml::Schema::XmlSchemaParticle* baseParticle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidRestriction", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle", "System.Xml.Schema.XmlSchemaParticle" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)derivedParticle;
	params[1] = (intptr_t)baseParticle;
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
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsElementFromElement(System_Xml::System::Xml::Schema::XmlSchemaElement* derivedElement, System_Xml::System::Xml::Schema::XmlSchemaElement* baseElement)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsElementFromElement", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement", "System.Xml.Schema.XmlSchemaElement" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)derivedElement;
	params[1] = (intptr_t)baseElement;
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
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsElementFromAny(System_Xml::System::Xml::Schema::XmlSchemaElement* derivedElement, System_Xml::System::Xml::Schema::XmlSchemaAny* baseAny)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsElementFromAny", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement", "System.Xml.Schema.XmlSchemaAny" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)derivedElement;
	params[1] = (intptr_t)baseAny;
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
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsAnyFromAny(System_Xml::System::Xml::Schema::XmlSchemaAny* derivedAny, System_Xml::System::Xml::Schema::XmlSchemaAny* baseAny)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAnyFromAny", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAny", "System.Xml.Schema.XmlSchemaAny" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)derivedAny;
	params[1] = (intptr_t)baseAny;
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
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsGroupBaseFromAny(System_Xml::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, System_Xml::System::Xml::Schema::XmlSchemaAny* baseAny)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsGroupBaseFromAny", std::vector<std::string> { "System.Xml.Schema.XmlSchemaGroupBase", "System.Xml.Schema.XmlSchemaAny" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)derivedGroupBase;
	params[1] = (intptr_t)baseAny;
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
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsElementFromGroupBase(System_Xml::System::Xml::Schema::XmlSchemaElement* derivedElement, System_Xml::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsElementFromGroupBase", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement", "System.Xml.Schema.XmlSchemaGroupBase", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)derivedElement;
	params[1] = (intptr_t)baseGroupBase;
	params[2] = (intptr_t)&skipEmptableOnly;
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
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsGroupBaseFromGroupBase(System_Xml::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, System_Xml::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsGroupBaseFromGroupBase", std::vector<std::string> { "System.Xml.Schema.XmlSchemaGroupBase", "System.Xml.Schema.XmlSchemaGroupBase", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)derivedGroupBase;
	params[1] = (intptr_t)baseGroupBase;
	params[2] = (intptr_t)&skipEmptableOnly;
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
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsSequenceFromAll(System_Xml::System::Xml::Schema::XmlSchemaSequence* derivedSequence, System_Xml::System::Xml::Schema::XmlSchemaAll* baseAll)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSequenceFromAll", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSequence", "System.Xml.Schema.XmlSchemaAll" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)derivedSequence;
	params[1] = (intptr_t)baseAll;
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
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsSequenceFromChoice(System_Xml::System::Xml::Schema::XmlSchemaSequence* derivedSequence, System_Xml::System::Xml::Schema::XmlSchemaChoice* baseChoice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSequenceFromChoice", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSequence", "System.Xml.Schema.XmlSchemaChoice" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)derivedSequence;
	params[1] = (intptr_t)baseChoice;
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
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CalculateSequenceRange(System_Xml::System::Xml::Schema::XmlSchemaSequence* sequence, mscorlib::System::Decimal& minOccurs, mscorlib::System::Decimal& maxOccurs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateSequenceRange", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSequence", "System.Decimal&", "System.Decimal&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)sequence;
	params[1] = (intptr_t)&minOccurs;
	params[2] = (intptr_t)&maxOccurs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsValidOccurrenceRangeRestriction(System_Xml::System::Xml::Schema::XmlSchemaParticle* derivedParticle, System_Xml::System::Xml::Schema::XmlSchemaParticle* baseParticle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidOccurrenceRangeRestriction", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle", "System.Xml.Schema.XmlSchemaParticle" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)derivedParticle;
	params[1] = (intptr_t)baseParticle;
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
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsValidOccurrenceRangeRestriction(mscorlib::System::Decimal minOccurs, mscorlib::System::Decimal maxOccurs, mscorlib::System::Decimal baseMinOccurs, mscorlib::System::Decimal baseMaxOccurs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidOccurrenceRangeRestriction", std::vector<std::string> { "System.Decimal", "System.Decimal", "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&minOccurs;
	params[1] = (intptr_t)&maxOccurs;
	params[2] = (intptr_t)&baseMinOccurs;
	params[3] = (intptr_t)&baseMaxOccurs;
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
int32_t System_Xml::System::Xml::Schema::SchemaCollectionCompiler::GetMappingParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* collection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMappingParticle", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle", "System.Xml.Schema.XmlSchemaObjectCollection" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)particle;
	params[1] = (intptr_t)collection;
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
bool System_Xml::System::Xml::Schema::SchemaCollectionCompiler::IsParticleEmptiable(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsParticleEmptiable", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)particle;
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
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CalculateEffectiveTotalRange(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, mscorlib::System::Decimal& minOccurs, mscorlib::System::Decimal& maxOccurs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateEffectiveTotalRange", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle", "System.Decimal&", "System.Decimal&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)particle;
	params[1] = (intptr_t)&minOccurs;
	params[2] = (intptr_t)&maxOccurs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::PushComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PushComplexType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)complexType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaContentType System_Xml::System::Xml::Schema::SchemaCollectionCompiler::GetSchemaContentType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaComplexContent* complexContent, System_Xml::System::Xml::Schema::XmlSchemaParticle* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSchemaContentType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType", "System.Xml.Schema.XmlSchemaComplexContent", "System.Xml.Schema.XmlSchemaParticle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)complexType;
	params[1] = (intptr_t)complexContent;
	params[2] = (intptr_t)particle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaContentType ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaContentType));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaContentType>(*(System_Xml::System::Xml::Schema::XmlSchemaContentType*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileAttributeGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttributeGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributeGroup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileLocalAttributes(System_Xml::System::Xml::Schema::XmlSchemaComplexType* baseType, System_Xml::System::Xml::Schema::XmlSchemaComplexType* derivedType, System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileLocalAttributes", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType", "System.Xml.Schema.XmlSchemaComplexType", "System.Xml.Schema.XmlSchemaObjectCollection", "System.Xml.Schema.XmlSchemaAnyAttribute", "System.Xml.Schema.XmlSchemaDerivationMethod" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)baseType;
	params[1] = (intptr_t)derivedType;
	params[2] = (intptr_t)attributes;
	params[3] = (intptr_t)anyAttribute;
	params[4] = (intptr_t)&derivedBy;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileAnyAttributeUnion(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* a, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileAnyAttributeUnion", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAnyAttribute", "System.Xml.Schema.XmlSchemaAnyAttribute" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileAnyAttributeIntersection(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* a, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileAnyAttributeIntersection", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAnyAttribute", "System.Xml.Schema.XmlSchemaAnyAttribute" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute*)returnValue;
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* xa)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xa;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileIdentityConstraint(System_Xml::System::Xml::Schema::XmlSchemaIdentityConstraint* xi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileIdentityConstraint", std::vector<std::string> { "System.Xml.Schema.XmlSchemaIdentityConstraint" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xi;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileElement(System_Xml::System::Xml::Schema::XmlSchemaElement* xe)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileElement", std::vector<std::string> { "System.Xml.Schema.XmlSchemaElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xe;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::ContentValidator* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContent(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileComplexContent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)complexType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::ContentValidator*)returnValue;
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::BuildParticleContentModel(System_Xml::System::Xml::Schema::ParticleContentValidator* contentValidator, System_Xml::System::Xml::Schema::XmlSchemaParticle* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildParticleContentModel", std::vector<std::string> { "System.Xml.Schema.ParticleContentValidator", "System.Xml.Schema.XmlSchemaParticle" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)contentValidator;
	params[1] = (intptr_t)particle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileParticleElements(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaParticle* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileParticleElements", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType", "System.Xml.Schema.XmlSchemaParticle" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)complexType;
	params[1] = (intptr_t)particle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::SchemaCollectionCompiler::CompileCompexTypeElements(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileCompexTypeElements", std::vector<std::string> { "System.Xml.Schema.XmlSchemaComplexType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)complexType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaSimpleType* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::GetSimpleType(System_Xml::System::Xml::XmlQualifiedName* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSimpleType", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaSimpleType*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaComplexType* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::GetComplexType(System_Xml::System::Xml::XmlQualifiedName* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComplexType", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaComplexType*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaType* System_Xml::System::Xml::Schema::SchemaCollectionCompiler::GetAnySchemaType(System_Xml::System::Xml::XmlQualifiedName* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnySchemaType", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaType*)returnValue;
}
