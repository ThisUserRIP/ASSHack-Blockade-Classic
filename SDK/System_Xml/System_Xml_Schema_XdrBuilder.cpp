#include "System_Xml_Schema_XdrBuilder.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XdrBuilder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "XdrBuilder");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XdrBuilder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XdrBuilder::_ctor(System_Xml::System::Xml::XmlReader* reader, System_Xml::System::Xml::XmlNamespaceManager* curmgr, System_Xml::System::Xml::Schema::SchemaInfo* sinfo, mscorlib::System::String* targetNamspace, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventhandler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlReader", "System.Xml.XmlNamespaceManager", "System.Xml.Schema.SchemaInfo", "System.String", "System.Xml.XmlNameTable", "System.Xml.Schema.SchemaNames", "System.Xml.Schema.ValidationEventHandler" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)reader;
	params[1] = (intptr_t)curmgr;
	params[2] = (intptr_t)sinfo;
	params[3] = (intptr_t)targetNamspace;
	params[4] = (intptr_t)nameTable;
	params[5] = (intptr_t)schemaNames;
	params[6] = (intptr_t)eventhandler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XdrBuilder::ProcessElement(mscorlib::System::String* prefix, mscorlib::System::String* name, mscorlib::System::String* ns)
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
void System_Xml::System::Xml::Schema::XdrBuilder::ProcessAttribute(mscorlib::System::String* prefix, mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::String* value)
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
void System_Xml::System::Xml::Schema::XdrBuilder::set_XmlResolver(System_Xml::System::Xml::XmlResolver* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_XmlResolver", std::vector<std::string> { "System.Xml.XmlResolver" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XdrBuilder::LoadSchema(mscorlib::System::String* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSchema", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
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
bool System_Xml::System::Xml::Schema::XdrBuilder::IsXdrSchema(mscorlib::System::String* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsXdrSchema", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool System_Xml::System::Xml::Schema::XdrBuilder::IsContentParsed()
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
void System_Xml::System::Xml::Schema::XdrBuilder::ProcessMarkup(IL2CPP::Array<System_Xml::System::Xml::XmlNode*>* markup)
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
void System_Xml::System::Xml::Schema::XdrBuilder::ProcessCData(mscorlib::System::String* value)
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
void System_Xml::System::Xml::Schema::XdrBuilder::StartChildren()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartChildren");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::EndChildren()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndChildren");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::Push()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Push");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::Pop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pop");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::PushGroupInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PushGroupInfo");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::PopGroupInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopGroupInfo");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_InitRoot(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_InitRoot", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildRoot_Name(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildRoot_Name", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildRoot_ID(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildRoot_ID", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BeginRoot(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BeginRoot", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_EndRoot(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_EndRoot", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_InitElementType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_InitElementType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Name(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildElementType_Name", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Content(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildElementType_Content", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Model(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildElementType_Model", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Order(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildElementType_Order", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildElementType_DtType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtValues(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildElementType_DtValues", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtMaxLength(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildElementType_DtMaxLength", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtMinLength(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildElementType_DtMinLength", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BeginElementType(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BeginElementType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_EndElementType(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_EndElementType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_InitAttributeType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_InitAttributeType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Name(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildAttributeType_Name", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Required(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildAttributeType_Required", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Default(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildAttributeType_Default", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildAttributeType_DtType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtValues(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildAttributeType_DtValues", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtMaxLength(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildAttributeType_DtMaxLength", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtMinLength(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildAttributeType_DtMinLength", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BeginAttributeType(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BeginAttributeType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_EndAttributeType(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_EndAttributeType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_InitElement(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_InitElement", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildElement_Type(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildElement_Type", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildElement_MinOccurs(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildElement_MinOccurs", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildElement_MaxOccurs(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildElement_MaxOccurs", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_EndElement(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_EndElement", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_InitAttribute(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_InitAttribute", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Type(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildAttribute_Type", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Required(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildAttribute_Required", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Default(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildAttribute_Default", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BeginAttribute(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BeginAttribute", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_EndAttribute(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_EndAttribute", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_InitGroup(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_InitGroup", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildGroup_Order(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildGroup_Order", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildGroup_MinOccurs(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildGroup_MinOccurs", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_BuildGroup_MaxOccurs(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_BuildGroup_MaxOccurs", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_EndGroup(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_EndGroup", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_InitElementDtType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_InitElementDtType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_EndElementDtType(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_EndElementDtType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_InitAttributeDtType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_InitAttributeDtType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)builder;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_EndAttributeDtType(System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_EndAttributeDtType", std::vector<std::string> { "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XdrBuilder::GetNextState(System_Xml::System::Xml::XmlQualifiedName* qname)
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
bool System_Xml::System::Xml::Schema::XdrBuilder::IsSkipableElement(System_Xml::System::Xml::XmlQualifiedName* qname)
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
bool System_Xml::System::Xml::Schema::XdrBuilder::IsSkipableAttribute(System_Xml::System::Xml::XmlQualifiedName* qname)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSkipableAttribute", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
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
int32_t System_Xml::System::Xml::Schema::XdrBuilder::GetOrder(System_Xml::System::Xml::XmlQualifiedName* qname)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOrder", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qname;
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
void System_Xml::System::Xml::Schema::XdrBuilder::AddOrder()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddOrder");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XdrBuilder::IsYes(mscorlib::System::Object* obj, System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsYes", std::vector<std::string> { "System.Object", "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
uint32_t System_Xml::System::Xml::Schema::XdrBuilder::ParseMinOccurs(mscorlib::System::Object* obj, System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseMinOccurs", std::vector<std::string> { "System.Object", "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t System_Xml::System::Xml::Schema::XdrBuilder::ParseMaxOccurs(mscorlib::System::Object* obj, System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseMaxOccurs", std::vector<std::string> { "System.Object", "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::XdrBuilder::HandleMinMax(System_Xml::System::Xml::Schema::ParticleContentValidator* pContent, uint32_t cMin, uint32_t cMax)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleMinMax", std::vector<std::string> { "System.Xml.Schema.ParticleContentValidator", "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pContent;
	params[1] = (intptr_t)&cMin;
	params[2] = (intptr_t)&cMax;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::ParseDtMaxLength(uint32_t& cVal, mscorlib::System::Object* obj, System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseDtMaxLength", std::vector<std::string> { "System.UInt32&", "System.Object", "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&cVal;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::ParseDtMinLength(uint32_t& cVal, mscorlib::System::Object* obj, System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseDtMinLength", std::vector<std::string> { "System.UInt32&", "System.Object", "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&cVal;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::CompareMinMaxLength(uint32_t cMin, uint32_t cMax, System_Xml::System::Xml::Schema::XdrBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareMinMaxLength", std::vector<std::string> { "System.UInt32", "System.UInt32", "System.Xml.Schema.XdrBuilder" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&cMin;
	params[1] = (intptr_t)&cMax;
	params[2] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XdrBuilder::ParseInteger(mscorlib::System::String* str, uint32_t& n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseInteger", std::vector<std::string> { "System.String", "System.UInt32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&n;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void System_Xml::System::Xml::Schema::XdrBuilder::XDR_CheckAttributeDefault(System_Xml::System::Xml::Schema::XdrBuilder_DeclBaseInfo* decl, System_Xml::System::Xml::Schema::SchemaAttDef* pAttdef)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDR_CheckAttributeDefault", std::vector<std::string> { "System.Xml.Schema.XdrBuilder/DeclBaseInfo", "System.Xml.Schema.SchemaAttDef" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)decl;
	params[1] = (intptr_t)pAttdef;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::SetAttributePresence(System_Xml::System::Xml::Schema::SchemaAttDef* pAttdef, bool fRequired)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAttributePresence", std::vector<std::string> { "System.Xml.Schema.SchemaAttDef", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pAttdef;
	params[1] = (intptr_t)&fRequired;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System_Xml::System::Xml::Schema::XdrBuilder::GetContent(System_Xml::System::Xml::XmlQualifiedName* qname)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetContent", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qname;
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
bool System_Xml::System::Xml::Schema::XdrBuilder::GetModel(System_Xml::System::Xml::XmlQualifiedName* qname)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetModel", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
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
System_Xml::System::Xml::Schema::XmlSchemaDatatype* System_Xml::System::Xml::Schema::XdrBuilder::CheckDatatype(mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckDatatype", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaDatatype*)returnValue;
}
void System_Xml::System::Xml::Schema::XdrBuilder::CheckDefaultAttValue(System_Xml::System::Xml::Schema::SchemaAttDef* attDef)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckDefaultAttValue", std::vector<std::string> { "System.Xml.Schema.SchemaAttDef" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attDef;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XdrBuilder::IsGlobal(int32_t flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsGlobal", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
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
void System_Xml::System::Xml::Schema::XdrBuilder::SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::Schema::XmlSeverityType severity)
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
void System_Xml::System::Xml::Schema::XdrBuilder::SendValidationEvent(mscorlib::System::String* code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)code;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder::SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg)
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
void System_Xml::System::Xml::Schema::XdrBuilder::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity)
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
void System_Xml::System::Xml::Schema::XdrBuilder::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
