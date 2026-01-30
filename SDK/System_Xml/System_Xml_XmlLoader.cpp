#include "System_Xml_XmlLoader.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlLoader::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "XmlLoader");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlLoader::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlLoader::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlLoader::Load(System_Xml::System::Xml::XmlDocument* doc, System_Xml::System::Xml::XmlReader* reader, bool preserveWhitespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Load", std::vector<std::string> { "System.Xml.XmlDocument", "System.Xml.XmlReader", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)doc;
	params[1] = (intptr_t)reader;
	params[2] = (intptr_t)&preserveWhitespace;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlLoader::LoadDocSequence(System_Xml::System::Xml::XmlDocument* parentDoc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadDocSequence", std::vector<std::string> { "System.Xml.XmlDocument" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parentDoc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlLoader::ReadCurrentNode(System_Xml::System::Xml::XmlDocument* doc, System_Xml::System::Xml::XmlReader* reader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadCurrentNode", std::vector<std::string> { "System.Xml.XmlDocument", "System.Xml.XmlReader" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)doc;
	params[1] = (intptr_t)reader;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlLoader::LoadNode(bool skipOverWhitespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadNode", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&skipOverWhitespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlLoader::LoadAttributeNode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAttributeNode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlLoader::LoadDefaultAttribute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadDefaultAttribute");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}
void System_Xml::System::Xml::XmlLoader::LoadAttributeValue(System_Xml::System::Xml::XmlNode* parent, bool direct)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAttributeValue", std::vector<std::string> { "System.Xml.XmlNode", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)&direct;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlEntityReference* System_Xml::System::Xml::XmlLoader::LoadEntityReferenceNode(bool direct)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadEntityReferenceNode", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&direct;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlEntityReference*)returnValue;
}
System_Xml::System::Xml::XmlDeclaration* System_Xml::System::Xml::XmlLoader::LoadDeclarationNode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadDeclarationNode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlDeclaration*)returnValue;
}
System_Xml::System::Xml::XmlDocumentType* System_Xml::System::Xml::XmlLoader::LoadDocumentTypeNode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadDocumentTypeNode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlDocumentType*)returnValue;
}
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlLoader::LoadNodeDirect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadNodeDirect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlLoader::LoadAttributeNodeDirect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAttributeNodeDirect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}
void System_Xml::System::Xml::XmlLoader::ParseDocumentType(System_Xml::System::Xml::XmlDocumentType* dtNode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseDocumentType", std::vector<std::string> { "System.Xml.XmlDocumentType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dtNode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlLoader::ParseDocumentType(System_Xml::System::Xml::XmlDocumentType* dtNode, bool bUseResolver, System_Xml::System::Xml::XmlResolver* resolver)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseDocumentType", std::vector<std::string> { "System.Xml.XmlDocumentType", "System.Boolean", "System.Xml.XmlResolver" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dtNode;
	params[1] = (intptr_t)&bUseResolver;
	params[2] = (intptr_t)resolver;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlLoader::LoadDocumentType(System_Xml::System::Xml::IDtdInfo* dtdInfo, System_Xml::System::Xml::XmlDocumentType* dtNode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadDocumentType", std::vector<std::string> { "System.Xml.IDtdInfo", "System.Xml.XmlDocumentType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)dtdInfo;
	params[1] = (intptr_t)dtNode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlParserContext* System_Xml::System::Xml::XmlLoader::GetContext(System_Xml::System::Xml::XmlNode* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetContext", std::vector<std::string> { "System.Xml.XmlNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlParserContext*)returnValue;
}
System_Xml::System::Xml::XmlNamespaceManager* System_Xml::System::Xml::XmlLoader::ParsePartialContent(System_Xml::System::Xml::XmlNode* parentNode, mscorlib::System::String* innerxmltext, System_Xml::System::Xml::XmlNodeType nt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParsePartialContent", std::vector<std::string> { "System.Xml.XmlNode", "System.String", "System.Xml.XmlNodeType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)parentNode;
	params[1] = (intptr_t)innerxmltext;
	params[2] = (intptr_t)&nt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNamespaceManager*)returnValue;
}
void System_Xml::System::Xml::XmlLoader::LoadInnerXmlElement(System_Xml::System::Xml::XmlElement* node, mscorlib::System::String* innerxmltext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadInnerXmlElement", std::vector<std::string> { "System.Xml.XmlElement", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)innerxmltext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlLoader::LoadInnerXmlAttribute(System_Xml::System::Xml::XmlAttribute* node, mscorlib::System::String* innerxmltext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadInnerXmlAttribute", std::vector<std::string> { "System.Xml.XmlAttribute", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)innerxmltext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlLoader::RemoveDuplicateNamespace(System_Xml::System::Xml::XmlElement* elem, System_Xml::System::Xml::XmlNamespaceManager* mgr, bool fCheckElemAttrs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveDuplicateNamespace", std::vector<std::string> { "System.Xml.XmlElement", "System.Xml.XmlNamespaceManager", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)elem;
	params[1] = (intptr_t)mgr;
	params[2] = (intptr_t)&fCheckElemAttrs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System_Xml::System::Xml::XmlLoader::EntitizeName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EntitizeName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::XmlLoader::ExpandEntity(System_Xml::System::Xml::XmlEntity* ent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpandEntity", std::vector<std::string> { "System.Xml.XmlEntity" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlLoader::ExpandEntityReference(System_Xml::System::Xml::XmlEntityReference* eref)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpandEntityReference", std::vector<std::string> { "System.Xml.XmlEntityReference" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eref;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlReader* System_Xml::System::Xml::XmlLoader::CreateInnerXmlReader(mscorlib::System::String* xmlFragment, System_Xml::System::Xml::XmlNodeType nt, System_Xml::System::Xml::XmlParserContext* context, System_Xml::System::Xml::XmlDocument* doc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInnerXmlReader", std::vector<std::string> { "System.String", "System.Xml.XmlNodeType", "System.Xml.XmlParserContext", "System.Xml.XmlDocument" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)xmlFragment;
	params[1] = (intptr_t)&nt;
	params[2] = (intptr_t)context;
	params[3] = (intptr_t)doc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlReader*)returnValue;
}
void System_Xml::System::Xml::XmlLoader::ParseXmlDeclarationValue(mscorlib::System::String* strValue, mscorlib::System::String& version, mscorlib::System::String& encoding, mscorlib::System::String& standalone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseXmlDeclarationValue", std::vector<std::string> { "System.String", "System.String&", "System.String&", "System.String&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)strValue;
	params[1] = (intptr_t)&version;
	params[2] = (intptr_t)&encoding;
	params[3] = (intptr_t)&standalone;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Exception* System_Xml::System::Xml::XmlLoader::UnexpectedNodeType(System_Xml::System::Xml::XmlNodeType nodetype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnexpectedNodeType", std::vector<std::string> { "System.Xml.XmlNodeType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&nodetype;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
