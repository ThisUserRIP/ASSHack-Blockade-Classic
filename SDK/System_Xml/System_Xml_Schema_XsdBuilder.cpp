#include "System_Xml_Schema_XsdBuilder.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XsdBuilder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "XsdBuilder");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XsdBuilder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XsdBuilder::_ctor(System_Xml::System::Xml::XmlReader* reader, System_Xml::System::Xml::XmlNamespaceManager* curmgr, System_Xml::System::Xml::Schema::XmlSchema* schema, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventhandler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlReader", "System.Xml.XmlNamespaceManager", "System.Xml.Schema.XmlSchema", "System.Xml.XmlNameTable", "System.Xml.Schema.SchemaNames", "System.Xml.Schema.ValidationEventHandler" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)reader;
	params[1] = (intptr_t)curmgr;
	params[2] = (intptr_t)schema;
	params[3] = (intptr_t)nameTable;
	params[4] = (intptr_t)schemaNames;
	params[5] = (intptr_t)eventhandler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XsdBuilder::ProcessElement(mscorlib::System::String* prefix, mscorlib::System::String* name, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessElement", std::vector<std::string> { "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void System_Xml::System::Xml::Schema::XsdBuilder::ProcessAttribute(mscorlib::System::String* prefix, mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAttribute", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XsdBuilder::IsContentParsed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsContentParsed");
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
void System_Xml::System::Xml::Schema::XsdBuilder::ProcessMarkup(IL2CPP::Array<System_Xml::System::Xml::XmlNode*>* markup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessMarkup", std::vector<std::string> { "System.Xml.XmlNode[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)markup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::ProcessCData(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCData", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::StartChildren()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartChildren");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::EndChildren()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndChildren");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::Push()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Push");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::Pop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pop");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::SchemaNames_Token System_Xml::System::Xml::Schema::XsdBuilder::get_CurrentElement()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CurrentElement");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::SchemaNames_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::SchemaNames_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::SchemaNames_Token>(*(System_Xml::System::Xml::Schema::SchemaNames_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::SchemaNames_Token System_Xml::System::Xml::Schema::XsdBuilder::get_ParentElement()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ParentElement");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::SchemaNames_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::SchemaNames_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::SchemaNames_Token>(*(System_Xml::System::Xml::Schema::SchemaNames_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::XmlSchemaObject* System_Xml::System::Xml::Schema::XsdBuilder::get_ParentContainer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ParentContainer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaObject*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaObject* System_Xml::System::Xml::Schema::XsdBuilder::GetContainer(System_Xml::System::Xml::Schema::XsdBuilder_State state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetContainer", std::vector<std::string> { "System.Xml.Schema.XsdBuilder/State" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaObject*)returnValue;
}
void System_Xml::System::Xml::Schema::XsdBuilder::SetContainer(System_Xml::System::Xml::Schema::XsdBuilder_State state, mscorlib::System::Object* container)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetContainer", std::vector<std::string> { "System.Xml.Schema.XsdBuilder/State", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)container;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAnnotated_Id(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAnnotated_Id", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSchema_AttributeFormDefault(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSchema_AttributeFormDefault", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSchema_ElementFormDefault(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSchema_ElementFormDefault", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSchema_TargetNamespace(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSchema_TargetNamespace", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSchema_Version(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSchema_Version", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSchema_FinalDefault(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSchema_FinalDefault", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSchema_BlockDefault(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSchema_BlockDefault", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitSchema(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSchema", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitInclude(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitInclude", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildInclude_SchemaLocation(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildInclude_SchemaLocation", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitImport(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitImport", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildImport_Namespace(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildImport_Namespace", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildImport_SchemaLocation(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildImport_SchemaLocation", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitRedefine(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitRedefine", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildRedefine_SchemaLocation(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildRedefine_SchemaLocation", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::EndRedefine(System_Xml::System::Xml::Schema::XsdBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndRedefine", std::vector<std::string> { "System.Xml.Schema.XsdBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitAttribute(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitAttribute", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAttribute_Default(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAttribute_Default", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAttribute_Fixed(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAttribute_Fixed", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAttribute_Form(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAttribute_Form", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAttribute_Use(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAttribute_Use", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAttribute_Ref(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAttribute_Ref", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAttribute_Name(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAttribute_Name", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAttribute_Type(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAttribute_Type", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitElement(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitElement", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_Abstract(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_Abstract", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_Block(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_Block", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_Default(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_Default", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_Form(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_Form", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_SubstitutionGroup(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_SubstitutionGroup", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_Final(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_Final", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_Fixed(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_Fixed", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_MaxOccurs(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_MaxOccurs", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_MinOccurs(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_MinOccurs", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_Name(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_Name", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_Nillable(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_Nillable", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_Ref(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_Ref", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildElement_Type(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildElement_Type", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitSimpleType(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSimpleType", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSimpleType_Name(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSimpleType_Name", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSimpleType_Final(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSimpleType_Final", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitSimpleTypeUnion(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSimpleTypeUnion", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSimpleTypeUnion_MemberTypes(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSimpleTypeUnion_MemberTypes", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitSimpleTypeList(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSimpleTypeList", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSimpleTypeList_ItemType(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSimpleTypeList_ItemType", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitSimpleTypeRestriction(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSimpleTypeRestriction", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSimpleTypeRestriction_Base(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSimpleTypeRestriction_Base", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitComplexType(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitComplexType", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildComplexType_Abstract(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildComplexType_Abstract", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildComplexType_Block(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildComplexType_Block", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildComplexType_Final(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildComplexType_Final", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildComplexType_Mixed(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildComplexType_Mixed", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildComplexType_Name(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildComplexType_Name", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitComplexContent(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitComplexContent", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildComplexContent_Mixed(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildComplexContent_Mixed", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitComplexContentExtension(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitComplexContentExtension", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildComplexContentExtension_Base(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildComplexContentExtension_Base", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitComplexContentRestriction(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitComplexContentRestriction", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildComplexContentRestriction_Base(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildComplexContentRestriction_Base", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitSimpleContent(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSimpleContent", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitSimpleContentExtension(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSimpleContentExtension", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSimpleContentExtension_Base(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSimpleContentExtension_Base", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitSimpleContentRestriction(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSimpleContentRestriction", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSimpleContentRestriction_Base(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSimpleContentRestriction_Base", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitAttributeGroup(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitAttributeGroup", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAttributeGroup_Name(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAttributeGroup_Name", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitAttributeGroupRef(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitAttributeGroupRef", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAttributeGroupRef_Ref(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAttributeGroupRef_Ref", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitAnyAttribute(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitAnyAttribute", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAnyAttribute_Namespace(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAnyAttribute_Namespace", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAnyAttribute_ProcessContents(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAnyAttribute_ProcessContents", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitGroup(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitGroup", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildGroup_Name(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildGroup_Name", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitGroupRef(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitGroupRef", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildParticle_MaxOccurs(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildParticle_MaxOccurs", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildParticle_MinOccurs(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildParticle_MinOccurs", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildGroupRef_Ref(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildGroupRef_Ref", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitAll(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitAll", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitChoice(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitChoice", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitSequence(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSequence", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitAny(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitAny", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAny_Namespace(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAny_Namespace", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAny_ProcessContents(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAny_ProcessContents", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitNotation(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitNotation", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildNotation_Name(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildNotation_Name", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildNotation_Public(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildNotation_Public", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildNotation_System(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildNotation_System", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitFacet(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitFacet", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildFacet_Fixed(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildFacet_Fixed", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildFacet_Value(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildFacet_Value", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitIdentityConstraint(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitIdentityConstraint", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildIdentityConstraint_Name(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildIdentityConstraint_Name", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildIdentityConstraint_Refer(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildIdentityConstraint_Refer", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitSelector(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSelector", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildSelector_XPath(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildSelector_XPath", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitField(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitField", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildField_XPath(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildField_XPath", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitAnnotation(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitAnnotation", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitAppinfo(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitAppinfo", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildAppinfo_Source(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildAppinfo_Source", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::EndAppinfo(System_Xml::System::Xml::Schema::XsdBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndAppinfo", std::vector<std::string> { "System.Xml.Schema.XsdBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::InitDocumentation(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitDocumentation", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildDocumentation_Source(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildDocumentation_Source", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::BuildDocumentation_XmlLang(System_Xml::System::Xml::Schema::XsdBuilder* builder, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildDocumentation_XmlLang", std::vector<std::string> { "System.Xml.Schema.XsdBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::EndDocumentation(System_Xml::System::Xml::Schema::XsdBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndDocumentation", std::vector<std::string> { "System.Xml.Schema.XsdBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::AddAttribute(System_Xml::System::Xml::Schema::XmlSchemaObject* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAttribute", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::AddParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddParticle", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)particle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XsdBuilder::GetNextState(System_Xml::System::Xml::XmlQualifiedName* qname)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNextState", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qname;
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
bool System_Xml::System::Xml::Schema::XsdBuilder::IsSkipableElement(System_Xml::System::Xml::XmlQualifiedName* qname)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSkipableElement", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qname;
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
void System_Xml::System::Xml::Schema::XsdBuilder::SetMinOccurs(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMinOccurs", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)particle;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::SetMaxOccurs(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMaxOccurs", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)particle;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XsdBuilder::ParseBoolean(mscorlib::System::String* value, mscorlib::System::String* attributeName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseBoolean", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)attributeName;
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
int32_t System_Xml::System::Xml::Schema::XsdBuilder::ParseEnum(mscorlib::System::String* value, mscorlib::System::String* attributeName, IL2CPP::Array<mscorlib::System::String*>* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseEnum", std::vector<std::string> { "System.String", "System.String", "System.String[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)attributeName;
	params[2] = (intptr_t)values;
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
System_Xml::System::Xml::XmlQualifiedName* System_Xml::System::Xml::Schema::XsdBuilder::ParseQName(mscorlib::System::String* value, mscorlib::System::String* attributeName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseQName", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)attributeName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlQualifiedName*)returnValue;
}
int32_t System_Xml::System::Xml::Schema::XsdBuilder::ParseBlockFinalEnum(mscorlib::System::String* value, mscorlib::System::String* attributeName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseBlockFinalEnum", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)attributeName;
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
mscorlib::System::String* System_Xml::System::Xml::Schema::XsdBuilder::ParseUriReference(mscorlib::System::String* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseUriReference", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Schema::XsdBuilder::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* arg0, mscorlib::System::String* arg1, mscorlib::System::String* arg2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)arg0;
	params[2] = (intptr_t)arg1;
	params[3] = (intptr_t)arg2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)code;
	params[1] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::Schema::XmlSeverityType severity)
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
void System_Xml::System::Xml::Schema::XsdBuilder::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity)
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
void System_Xml::System::Xml::Schema::XsdBuilder::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.Xml.Schema.XmlSchemaException" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::RecordPosition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecordPosition");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdBuilder::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
