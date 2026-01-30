#include "System_Xml_Schema_XmlSchemaSet.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XmlSchemaSet::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSet");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XmlSchemaSet::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaSet::get_InternalSyncObject()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InternalSyncObject");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::_ctor(System_Xml::System::Xml::XmlNameTable* nameTable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNameTable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)nameTable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::add_ValidationEventHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_ValidationEventHandler", std::vector<std::string> { "System.Xml.Schema.ValidationEventHandler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::remove_ValidationEventHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_ValidationEventHandler", std::vector<std::string> { "System.Xml.Schema.ValidationEventHandler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XmlSchemaSet::get_IsCompiled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsCompiled");
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
void System_Xml::System::Xml::Schema::XmlSchemaSet::set_XmlResolver(System_Xml::System::Xml::XmlResolver* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_XmlResolver", std::vector<std::string> { "System.Xml.XmlResolver" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* System_Xml::System::Xml::Schema::XmlSchemaSet::get_CompilationSettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CompilationSettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::set_CompilationSettings(System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_CompilationSettings", std::vector<std::string> { "System.Xml.Schema.XmlSchemaCompilationSettings" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System_Xml::System::Xml::Schema::XmlSchemaSet::get_Count()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Count");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::XmlSchemaObjectTable* System_Xml::System::Xml::Schema::XmlSchemaSet::get_GlobalElements()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GlobalElements");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaObjectTable*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaObjectTable* System_Xml::System::Xml::Schema::XmlSchemaSet::get_GlobalAttributes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GlobalAttributes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaObjectTable*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaObjectTable* System_Xml::System::Xml::Schema::XmlSchemaSet::get_GlobalTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GlobalTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaObjectTable*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaObjectTable* System_Xml::System::Xml::Schema::XmlSchemaSet::get_SubstitutionGroups()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SubstitutionGroups");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaObjectTable*)returnValue;
}
mscorlib::System::Collections::Hashtable* System_Xml::System::Xml::Schema::XmlSchemaSet::get_SchemaLocations()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SchemaLocations");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Hashtable*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaObjectTable* System_Xml::System::Xml::Schema::XmlSchemaSet::get_TypeExtensions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TypeExtensions");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaObjectTable*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::Add(System_Xml::System::Xml::Schema::XmlSchemaSet* schemas)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schemas;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::XmlSchemaSet::Add(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
bool System_Xml::System::Xml::Schema::XmlSchemaSet::RemoveRecursive(System_Xml::System::Xml::Schema::XmlSchema* schemaToRemove)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveRecursive", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schemaToRemove;
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
void System_Xml::System::Xml::Schema::XmlSchemaSet::Compile()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compile");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::CopyTo(IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchema*>* schemas, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyTo", std::vector<std::string> { "System.Xml.Schema.XmlSchema[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)schemas;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::ICollection* System_Xml::System::Xml::Schema::XmlSchemaSet::Schemas(mscorlib::System::String* targetNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Schemas", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)targetNamespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ICollection*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::XmlSchemaSet::Add(mscorlib::System::String* targetNamespace, System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.String", "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)targetNamespace;
	params[1] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::Add(mscorlib::System::String* targetNamespace, System_Xml::System::Xml::XmlReader* reader, mscorlib::System::Collections::Hashtable* validatedNamespaces)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.String", "System.Xml.XmlReader", "System.Collections.Hashtable" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)targetNamespace;
	params[1] = (intptr_t)reader;
	params[2] = (intptr_t)validatedNamespaces;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::XmlSchemaSet::FindSchemaByNSAndUrl(System::System::Uri* schemaUri, mscorlib::System::String* ns, IL2CPP::Array<mscorlib::System::Collections::DictionaryEntry>* locationsTable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSchemaByNSAndUrl", std::vector<std::string> { "System.Uri", "System.String", "System.Collections.DictionaryEntry[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)schemaUri;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)locationsTable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::AddSchemaToSet(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSchemaToSet", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::ProcessNewSubstitutionGroups(System_Xml::System::Xml::Schema::XmlSchemaObjectTable* substitutionGroupsTable, bool resolve)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessNewSubstitutionGroups", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObjectTable", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)substitutionGroupsTable;
	params[1] = (intptr_t)&resolve;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::ResolveSubstitutionGroup(System_Xml::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup, System_Xml::System::Xml::Schema::XmlSchemaObjectTable* substTable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResolveSubstitutionGroup", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSubstitutionGroup", "System.Xml.Schema.XmlSchemaObjectTable" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)substitutionGroup;
	params[1] = (intptr_t)substTable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::XmlSchemaSet::Remove(System_Xml::System::Xml::Schema::XmlSchema* schema, bool forceCompile)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Remove", std::vector<std::string> { "System.Xml.Schema.XmlSchema", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)schema;
	params[1] = (intptr_t)&forceCompile;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::ClearTables()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearTables");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XmlSchemaSet::PreprocessSchema(System_Xml::System::Xml::Schema::XmlSchema& schema, mscorlib::System::String* targetNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreprocessSchema", std::vector<std::string> { "System.Xml.Schema.XmlSchema&", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&schema;
	params[1] = (intptr_t)targetNamespace;
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
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::XmlSchemaSet::ParseSchema(mscorlib::System::String* targetNamespace, System_Xml::System::Xml::XmlReader* reader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseSchema", std::vector<std::string> { "System.String", "System.Xml.XmlReader" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)targetNamespace;
	params[1] = (intptr_t)reader;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::CopyFromCompiledSet(System_Xml::System::Xml::Schema::XmlSchemaSet* otherSet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyFromCompiledSet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)otherSet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::SchemaInfo* System_Xml::System::Xml::Schema::XmlSchemaSet::get_CompiledInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CompiledInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaInfo*)returnValue;
}
System_Xml::System::Xml::XmlReaderSettings* System_Xml::System::Xml::Schema::XmlSchemaSet::get_ReaderSettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ReaderSettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlReaderSettings*)returnValue;
}
System_Xml::System::Xml::XmlResolver* System_Xml::System::Xml::Schema::XmlSchemaSet::GetResolver()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResolver");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlResolver*)returnValue;
}
System_Xml::System::Xml::Schema::ValidationEventHandler* System_Xml::System::Xml::Schema::XmlSchemaSet::GetEventHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEventHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::ValidationEventHandler*)returnValue;
}
System_Xml::System::Xml::Schema::SchemaNames* System_Xml::System::Xml::Schema::XmlSchemaSet::GetSchemaNames(System_Xml::System::Xml::XmlNameTable* nt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSchemaNames", std::vector<std::string> { "System.Xml.XmlNameTable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)nt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaNames*)returnValue;
}
bool System_Xml::System::Xml::Schema::XmlSchemaSet::IsSchemaLoaded(System::System::Uri* schemaUri, mscorlib::System::String* targetNamespace, System_Xml::System::Xml::Schema::XmlSchema& schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSchemaLoaded", std::vector<std::string> { "System.Uri", "System.String", "System.Xml.Schema.XmlSchema&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)schemaUri;
	params[1] = (intptr_t)targetNamespace;
	params[2] = (intptr_t)&schema;
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
bool System_Xml::System::Xml::Schema::XmlSchemaSet::GetSchemaByUri(System::System::Uri* schemaUri, System_Xml::System::Xml::Schema::XmlSchema& schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSchemaByUri", std::vector<std::string> { "System.Uri", "System.Xml.Schema.XmlSchema&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)schemaUri;
	params[1] = (intptr_t)&schema;
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
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaSet::GetTargetNamespace(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTargetNamespace", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Collections::SortedList* System_Xml::System::Xml::Schema::XmlSchemaSet::get_SortedSchemas()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SortedSchemas");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::SortedList*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::RemoveSchemaFromCaches(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveSchemaFromCaches", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::RemoveSchemaFromGlobalTables(System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveSchemaFromGlobalTables", std::vector<std::string> { "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XmlSchemaSet::AddToTable(System_Xml::System::Xml::Schema::XmlSchemaObjectTable* table, System_Xml::System::Xml::XmlQualifiedName* qname, System_Xml::System::Xml::Schema::XmlSchemaObject* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddToTable", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObjectTable", "System.Xml.XmlQualifiedName", "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)table;
	params[1] = (intptr_t)qname;
	params[2] = (intptr_t)item;
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
void System_Xml::System::Xml::Schema::XmlSchemaSet::VerifyTables()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyTables");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::InternalValidationCallback(mscorlib::System::Object* sender, System_Xml::System::Xml::Schema::ValidationEventArgs* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalValidationCallback", std::vector<std::string> { "System.Object", "System.Xml.Schema.ValidationEventArgs" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sender;
	params[1] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaSet::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity)
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
