#include "System_Xml_XmlDocument.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlDocument::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "XmlDocument");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlDocument::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlDocument::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlDocument::_ctor(System_Xml::System::Xml::XmlNameTable* nt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNameTable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)nt;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlDocument::_ctor(System_Xml::System::Xml::XmlImplementation* imp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlImplementation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)imp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::SchemaInfo* System_Xml::System::Xml::XmlDocument::get_DtdSchemaInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DtdSchemaInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaInfo*)returnValue;
}
void System_Xml::System::Xml::XmlDocument::set_DtdSchemaInfo(System_Xml::System::Xml::Schema::SchemaInfo* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DtdSchemaInfo", std::vector<std::string> { "System.Xml.Schema.SchemaInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlDocument::CheckName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlName* System_Xml::System::Xml::XmlDocument::AddXmlName(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddXmlName", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Xml.Schema.IXmlSchemaInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)namespaceURI;
	params[3] = (intptr_t)schemaInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlName*)returnValue;
}
System_Xml::System::Xml::XmlName* System_Xml::System::Xml::XmlDocument::GetXmlName(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetXmlName", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Xml.Schema.IXmlSchemaInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)namespaceURI;
	params[3] = (intptr_t)schemaInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlName*)returnValue;
}
System_Xml::System::Xml::XmlName* System_Xml::System::Xml::XmlDocument::AddAttrXmlName(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAttrXmlName", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Xml.Schema.IXmlSchemaInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)namespaceURI;
	params[3] = (intptr_t)schemaInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlName*)returnValue;
}
bool System_Xml::System::Xml::XmlDocument::AddIdInfo(System_Xml::System::Xml::XmlName* eleName, System_Xml::System::Xml::XmlName* attrName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddIdInfo", std::vector<std::string> { "System.Xml.XmlName", "System.Xml.XmlName" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eleName;
	params[1] = (intptr_t)attrName;
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
System_Xml::System::Xml::XmlName* System_Xml::System::Xml::XmlDocument::GetIDInfoByElement_(System_Xml::System::Xml::XmlName* eleName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIDInfoByElement_", std::vector<std::string> { "System.Xml.XmlName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eleName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlName*)returnValue;
}
System_Xml::System::Xml::XmlName* System_Xml::System::Xml::XmlDocument::GetIDInfoByElement(System_Xml::System::Xml::XmlName* eleName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIDInfoByElement", std::vector<std::string> { "System.Xml.XmlName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eleName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlName*)returnValue;
}
mscorlib::System::WeakReference* System_Xml::System::Xml::XmlDocument::GetElement(mscorlib::System::Collections::ArrayList* elementList, System_Xml::System::Xml::XmlElement* elem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElement", std::vector<std::string> { "System.Collections.ArrayList", "System.Xml.XmlElement" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elementList;
	params[1] = (intptr_t)elem;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::WeakReference*)returnValue;
}
void System_Xml::System::Xml::XmlDocument::AddElementWithId(mscorlib::System::String* id, System_Xml::System::Xml::XmlElement* elem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddElementWithId", std::vector<std::string> { "System.String", "System.Xml.XmlElement" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)elem;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlDocument::RemoveElementWithId(mscorlib::System::String* id, System_Xml::System::Xml::XmlElement* elem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementWithId", std::vector<std::string> { "System.String", "System.Xml.XmlElement" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)elem;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlDocument::CloneNode(bool deep)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CloneNode", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&deep;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
System_Xml::System::Xml::XmlNodeType System_Xml::System::Xml::XmlDocument::get_NodeType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NodeType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::XmlNodeType ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::XmlNodeType));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::XmlNodeType>(*(System_Xml::System::Xml::XmlNodeType*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlDocument::get_ParentNode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ParentNode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
System_Xml::System::Xml::XmlDocumentType* System_Xml::System::Xml::XmlDocument::get_DocumentType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DocumentType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlDocumentType*)returnValue;
}
System_Xml::System::Xml::XmlDeclaration* System_Xml::System::Xml::XmlDocument::get_Declaration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Declaration");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlDeclaration*)returnValue;
}
System_Xml::System::Xml::XmlImplementation* System_Xml::System::Xml::XmlDocument::get_Implementation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Implementation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlImplementation*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlDocument::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlDocument::get_LocalName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LocalName");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System_Xml::System::Xml::XmlElement* System_Xml::System::Xml::XmlDocument::get_DocumentElement()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DocumentElement");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlElement*)returnValue;
}
bool System_Xml::System::Xml::XmlDocument::get_IsContainer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsContainer");
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
System_Xml::System::Xml::XmlLinkedNode* System_Xml::System::Xml::XmlDocument::get_LastNode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LastNode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlLinkedNode*)returnValue;
}
void System_Xml::System::Xml::XmlDocument::set_LastNode(System_Xml::System::Xml::XmlLinkedNode* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_LastNode", std::vector<std::string> { "System.Xml.XmlLinkedNode" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlDocument* System_Xml::System::Xml::XmlDocument::get_OwnerDocument()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OwnerDocument");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlDocument*)returnValue;
}
void System_Xml::System::Xml::XmlDocument::set_Schemas(System_Xml::System::Xml::Schema::XmlSchemaSet* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Schemas", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::XmlDocument::get_CanReportValidity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CanReportValidity");
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
bool System_Xml::System::Xml::XmlDocument::get_HasSetResolver()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasSetResolver");
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
System_Xml::System::Xml::XmlResolver* System_Xml::System::Xml::XmlDocument::GetResolver()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResolver");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlResolver*)returnValue;
}
bool System_Xml::System::Xml::XmlDocument::IsValidChildType(System_Xml::System::Xml::XmlNodeType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidChildType", std::vector<std::string> { "System.Xml.XmlNodeType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
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
bool System_Xml::System::Xml::XmlDocument::HasNodeTypeInPrevSiblings(System_Xml::System::Xml::XmlNodeType nt, System_Xml::System::Xml::XmlNode* refNode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasNodeTypeInPrevSiblings", std::vector<std::string> { "System.Xml.XmlNodeType", "System.Xml.XmlNode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nt;
	params[1] = (intptr_t)refNode;
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
bool System_Xml::System::Xml::XmlDocument::HasNodeTypeInNextSiblings(System_Xml::System::Xml::XmlNodeType nt, System_Xml::System::Xml::XmlNode* refNode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasNodeTypeInNextSiblings", std::vector<std::string> { "System.Xml.XmlNodeType", "System.Xml.XmlNode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nt;
	params[1] = (intptr_t)refNode;
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
bool System_Xml::System::Xml::XmlDocument::CanInsertAfter(System_Xml::System::Xml::XmlNode* newChild, System_Xml::System::Xml::XmlNode* refChild)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanInsertAfter", std::vector<std::string> { "System.Xml.XmlNode", "System.Xml.XmlNode" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)newChild;
	params[1] = (intptr_t)refChild;
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
void System_Xml::System::Xml::XmlDocument::SetDefaultNamespace(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String& namespaceURI)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDefaultNamespace", std::vector<std::string> { "System.String", "System.String", "System.String&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)&namespaceURI;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlCDataSection* System_Xml::System::Xml::XmlDocument::CreateCDataSection(mscorlib::System::String* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCDataSection", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlCDataSection*)returnValue;
}
System_Xml::System::Xml::XmlComment* System_Xml::System::Xml::XmlDocument::CreateComment(mscorlib::System::String* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateComment", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlComment*)returnValue;
}
System_Xml::System::Xml::XmlDocumentType* System_Xml::System::Xml::XmlDocument::CreateDocumentType(mscorlib::System::String* name, mscorlib::System::String* publicId, mscorlib::System::String* systemId, mscorlib::System::String* internalSubset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDocumentType", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)publicId;
	params[2] = (intptr_t)systemId;
	params[3] = (intptr_t)internalSubset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlDocumentType*)returnValue;
}
System_Xml::System::Xml::XmlDocumentFragment* System_Xml::System::Xml::XmlDocument::CreateDocumentFragment()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDocumentFragment");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlDocumentFragment*)returnValue;
}
void System_Xml::System::Xml::XmlDocument::AddDefaultAttributes(System_Xml::System::Xml::XmlElement* elem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddDefaultAttributes", std::vector<std::string> { "System.Xml.XmlElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elem;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::SchemaElementDecl* System_Xml::System::Xml::XmlDocument::GetSchemaElementDecl(System_Xml::System::Xml::XmlElement* elem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSchemaElementDecl", std::vector<std::string> { "System.Xml.XmlElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elem;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaElementDecl*)returnValue;
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlDocument::PrepareDefaultAttribute(System_Xml::System::Xml::Schema::SchemaAttDef* attdef, mscorlib::System::String* attrPrefix, mscorlib::System::String* attrLocalname, mscorlib::System::String* attrNamespaceURI)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareDefaultAttribute", std::vector<std::string> { "System.Xml.Schema.SchemaAttDef", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)attdef;
	params[1] = (intptr_t)attrPrefix;
	params[2] = (intptr_t)attrLocalname;
	params[3] = (intptr_t)attrNamespaceURI;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}
System_Xml::System::Xml::XmlEntityReference* System_Xml::System::Xml::XmlDocument::CreateEntityReference(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateEntityReference", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlEntityReference*)returnValue;
}
System_Xml::System::Xml::XmlProcessingInstruction* System_Xml::System::Xml::XmlDocument::CreateProcessingInstruction(mscorlib::System::String* target, mscorlib::System::String* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateProcessingInstruction", std::vector<std::string> { "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlProcessingInstruction*)returnValue;
}
System_Xml::System::Xml::XmlDeclaration* System_Xml::System::Xml::XmlDocument::CreateXmlDeclaration(mscorlib::System::String* version, mscorlib::System::String* encoding, mscorlib::System::String* standalone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateXmlDeclaration", std::vector<std::string> { "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)version;
	params[1] = (intptr_t)encoding;
	params[2] = (intptr_t)standalone;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlDeclaration*)returnValue;
}
System_Xml::System::Xml::XmlText* System_Xml::System::Xml::XmlDocument::CreateTextNode(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateTextNode", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlText*)returnValue;
}
System_Xml::System::Xml::XmlSignificantWhitespace* System_Xml::System::Xml::XmlDocument::CreateSignificantWhitespace(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSignificantWhitespace", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlSignificantWhitespace*)returnValue;
}
System_Xml::System::Xml::XmlWhitespace* System_Xml::System::Xml::XmlDocument::CreateWhitespace(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateWhitespace", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlWhitespace*)returnValue;
}
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlDocument::ImportNodeInternal(System_Xml::System::Xml::XmlNode* node, bool deep)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportNodeInternal", std::vector<std::string> { "System.Xml.XmlNode", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)&deep;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
void System_Xml::System::Xml::XmlDocument::ImportAttributes(System_Xml::System::Xml::XmlNode* fromElem, System_Xml::System::Xml::XmlNode* toElem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportAttributes", std::vector<std::string> { "System.Xml.XmlNode", "System.Xml.XmlNode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)fromElem;
	params[1] = (intptr_t)toElem;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlDocument::ImportChildren(System_Xml::System::Xml::XmlNode* fromNode, System_Xml::System::Xml::XmlNode* toNode, bool deep)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportChildren", std::vector<std::string> { "System.Xml.XmlNode", "System.Xml.XmlNode", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)fromNode;
	params[1] = (intptr_t)toNode;
	params[2] = (intptr_t)&deep;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlNameTable* System_Xml::System::Xml::XmlDocument::get_NameTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NameTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNameTable*)returnValue;
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlDocument::CreateAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateAttribute", std::vector<std::string> { "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)namespaceURI;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlDocument::CreateDefaultAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDefaultAttribute", std::vector<std::string> { "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)namespaceURI;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}
System_Xml::System::Xml::XmlElement* System_Xml::System::Xml::XmlDocument::CreateElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElement", std::vector<std::string> { "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)namespaceURI;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlElement*)returnValue;
}
bool System_Xml::System::Xml::XmlDocument::get_IsReadOnly()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsReadOnly");
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
System_Xml::System::Xml::XmlNamedNodeMap* System_Xml::System::Xml::XmlDocument::get_Entities()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Entities");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNamedNodeMap*)returnValue;
}
void System_Xml::System::Xml::XmlDocument::set_Entities(System_Xml::System::Xml::XmlNamedNodeMap* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Entities", std::vector<std::string> { "System.Xml.XmlNamedNodeMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::XmlDocument::get_IsLoading()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsLoading");
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
void System_Xml::System::Xml::XmlDocument::set_IsLoading(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_IsLoading", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::XmlDocument::get_ActualLoadingStatus()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ActualLoadingStatus");
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
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlDocument::ReadNode(System_Xml::System::Xml::XmlReader* reader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadNode", std::vector<std::string> { "System.Xml.XmlReader" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)reader;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
System_Xml::System::Xml::XmlTextReader* System_Xml::System::Xml::XmlDocument::SetupReader(System_Xml::System::Xml::XmlTextReader* tr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupReader", std::vector<std::string> { "System.Xml.XmlTextReader" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlTextReader*)returnValue;
}
void System_Xml::System::Xml::XmlDocument::Load(System_Xml::System::Xml::XmlReader* reader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Load", std::vector<std::string> { "System.Xml.XmlReader" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)reader;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlDocument::LoadXml(mscorlib::System::String* xml)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadXml", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xml;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlDocument::set_InnerText(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_InnerText", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlDocument::set_InnerXml(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_InnerXml", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlDocument::WriteTo(System_Xml::System::Xml::XmlWriter* w)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteTo", std::vector<std::string> { "System.Xml.XmlWriter" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)w;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlDocument::WriteContentTo(System_Xml::System::Xml::XmlWriter* xw)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteContentTo", std::vector<std::string> { "System.Xml.XmlWriter" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xw;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlNodeChangedEventArgs* System_Xml::System::Xml::XmlDocument::GetEventArgs(System_Xml::System::Xml::XmlNode* node, System_Xml::System::Xml::XmlNode* oldParent, System_Xml::System::Xml::XmlNode* newParent, mscorlib::System::String* oldValue, mscorlib::System::String* newValue, System_Xml::System::Xml::XmlNodeChangedAction action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEventArgs", std::vector<std::string> { "System.Xml.XmlNode", "System.Xml.XmlNode", "System.Xml.XmlNode", "System.String", "System.String", "System.Xml.XmlNodeChangedAction" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)oldParent;
	params[2] = (intptr_t)newParent;
	params[3] = (intptr_t)oldValue;
	params[4] = (intptr_t)newValue;
	params[5] = (intptr_t)&action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNodeChangedEventArgs*)returnValue;
}
System_Xml::System::Xml::XmlNodeChangedEventArgs* System_Xml::System::Xml::XmlDocument::GetInsertEventArgsForLoad(System_Xml::System::Xml::XmlNode* node, System_Xml::System::Xml::XmlNode* newParent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInsertEventArgsForLoad", std::vector<std::string> { "System.Xml.XmlNode", "System.Xml.XmlNode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)newParent;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNodeChangedEventArgs*)returnValue;
}
void System_Xml::System::Xml::XmlDocument::BeforeEvent(System_Xml::System::Xml::XmlNodeChangedEventArgs* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeforeEvent", std::vector<std::string> { "System.Xml.XmlNodeChangedEventArgs" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlDocument::AfterEvent(System_Xml::System::Xml::XmlNodeChangedEventArgs* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AfterEvent", std::vector<std::string> { "System.Xml.XmlNodeChangedEventArgs" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlDocument::GetDefaultAttribute(System_Xml::System::Xml::XmlElement* elem, mscorlib::System::String* attrPrefix, mscorlib::System::String* attrLocalname, mscorlib::System::String* attrNamespaceURI)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultAttribute", std::vector<std::string> { "System.Xml.XmlElement", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)elem;
	params[1] = (intptr_t)attrPrefix;
	params[2] = (intptr_t)attrLocalname;
	params[3] = (intptr_t)attrNamespaceURI;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}
System_Xml::System::Xml::XmlEntity* System_Xml::System::Xml::XmlDocument::GetEntityNode(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEntityNode", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlEntity*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlDocument::get_BaseURI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BaseURI");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::XmlDocument::SetBaseURI(mscorlib::System::String* inBaseURI)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBaseURI", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)inBaseURI;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlDocument::AppendChildForLoad(System_Xml::System::Xml::XmlNode* newChild, System_Xml::System::Xml::XmlDocument* doc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendChildForLoad", std::vector<std::string> { "System.Xml.XmlNode", "System.Xml.XmlDocument" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)newChild;
	params[1] = (intptr_t)doc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
void System_Xml::System::Xml::XmlDocument::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
