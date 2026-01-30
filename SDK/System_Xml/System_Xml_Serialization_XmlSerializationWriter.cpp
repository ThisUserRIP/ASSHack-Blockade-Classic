#include "System_Xml_Serialization_XmlSerializationWriter.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlSerializationWriter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "XmlSerializationWriter");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlSerializationWriter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::Initialize(System_Xml::System::Xml::XmlWriter* writer, System_Xml::System::Xml::Serialization::XmlSerializerNamespaces* nss)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize", std::vector<std::string> { "System.Xml.XmlWriter", "System.Xml.Serialization.XmlSerializerNamespaces" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)writer;
	params[1] = (intptr_t)nss;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlWriter* System_Xml::System::Xml::Serialization::XmlSerializationWriter::get_Writer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Writer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlWriter*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::AddWriteCallback(mscorlib::System::Type* type, mscorlib::System::String* typeName, mscorlib::System::String* typeNs, System_Xml::System::Xml::Serialization::XmlSerializationWriteCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddWriteCallback", std::vector<std::string> { "System.Type", "System.String", "System.String", "System.Xml.Serialization.XmlSerializationWriteCallback" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)typeName;
	params[2] = (intptr_t)typeNs;
	params[3] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Exception* System_Xml::System::Xml::Serialization::XmlSerializationWriter::CreateUnknownAnyElementException(mscorlib::System::String* name, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateUnknownAnyElementException", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
mscorlib::System::Exception* System_Xml::System::Xml::Serialization::XmlSerializationWriter::CreateUnknownTypeException(mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateUnknownTypeException", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)o;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
mscorlib::System::Exception* System_Xml::System::Xml::Serialization::XmlSerializationWriter::CreateUnknownTypeException(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateUnknownTypeException", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Serialization::XmlSerializationWriter::FromXmlQualifiedName(System_Xml::System::Xml::XmlQualifiedName* xmlQualifiedName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromXmlQualifiedName", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xmlQualifiedName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Serialization::XmlSerializationWriter::GetId(mscorlib::System::Object* o, bool addToReferencesList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetId", std::vector<std::string> { "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)o;
	params[1] = (intptr_t)&addToReferencesList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool System_Xml::System::Xml::Serialization::XmlSerializationWriter::AlreadyQueued(mscorlib::System::Object* ob)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AlreadyQueued", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ob;
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
mscorlib::System::String* System_Xml::System::Xml::Serialization::XmlSerializationWriter::GetNamespacePrefix(mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNamespacePrefix", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Serialization::XmlSerializationWriter::GetQualifiedName(mscorlib::System::String* name, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetQualifiedName", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::InitCallbacks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitCallbacks");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::TopLevelElement()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TopLevelElement");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteAttribute(mscorlib::System::String* localName, mscorlib::System::String* ns, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteAttribute", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)localName;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteAttribute", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteXmlNode(System_Xml::System::Xml::XmlNode* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteXmlNode", std::vector<std::string> { "System.Xml.XmlNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteElementEncoded(System_Xml::System::Xml::XmlNode* node, mscorlib::System::String* name, mscorlib::System::String* ns, bool isNullable, bool any)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteElementEncoded", std::vector<std::string> { "System.Xml.XmlNode", "System.String", "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)&isNullable;
	params[4] = (intptr_t)&any;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteElementLiteral(System_Xml::System::Xml::XmlNode* node, mscorlib::System::String* name, mscorlib::System::String* ns, bool isNullable, bool any)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteElementLiteral", std::vector<std::string> { "System.Xml.XmlNode", "System.String", "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)&isNullable;
	params[4] = (intptr_t)&any;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteElementQualifiedName(mscorlib::System::String* localName, mscorlib::System::String* ns, System_Xml::System::Xml::XmlQualifiedName* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteElementQualifiedName", std::vector<std::string> { "System.String", "System.String", "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)localName;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteElementQualifiedName(mscorlib::System::String* localName, mscorlib::System::String* ns, System_Xml::System::Xml::XmlQualifiedName* value, System_Xml::System::Xml::XmlQualifiedName* xsiType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteElementQualifiedName", std::vector<std::string> { "System.String", "System.String", "System.Xml.XmlQualifiedName", "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)localName;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)value;
	params[3] = (intptr_t)xsiType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteElementString(mscorlib::System::String* localName, mscorlib::System::String* ns, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteElementString", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)localName;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteElementString(mscorlib::System::String* localName, mscorlib::System::String* ns, mscorlib::System::String* value, System_Xml::System::Xml::XmlQualifiedName* xsiType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteElementString", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)localName;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)value;
	params[3] = (intptr_t)xsiType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteEndElement()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEndElement");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteEndElement(mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEndElement", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)o;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteNamespaceDeclarations(System_Xml::System::Xml::Serialization::XmlSerializerNamespaces* xmlns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNamespaceDeclarations", std::vector<std::string> { "System.Xml.Serialization.XmlSerializerNamespaces" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xmlns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteNullableQualifiedNameEncoded(mscorlib::System::String* name, mscorlib::System::String* ns, System_Xml::System::Xml::XmlQualifiedName* value, System_Xml::System::Xml::XmlQualifiedName* xsiType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNullableQualifiedNameEncoded", std::vector<std::string> { "System.String", "System.String", "System.Xml.XmlQualifiedName", "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)value;
	params[3] = (intptr_t)xsiType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteNullableQualifiedNameLiteral(mscorlib::System::String* name, mscorlib::System::String* ns, System_Xml::System::Xml::XmlQualifiedName* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNullableQualifiedNameLiteral", std::vector<std::string> { "System.String", "System.String", "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteNullableStringEncoded(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::String* value, System_Xml::System::Xml::XmlQualifiedName* xsiType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNullableStringEncoded", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)value;
	params[3] = (intptr_t)xsiType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteNullableStringLiteral(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNullableStringLiteral", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteNullTagEncoded(mscorlib::System::String* name, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNullTagEncoded", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteNullTagLiteral(mscorlib::System::String* name, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNullTagLiteral", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WritePotentiallyReferencingElement(mscorlib::System::String* n, mscorlib::System::String* ns, mscorlib::System::Object* o, mscorlib::System::Type* ambientType, bool suppressReference, bool isNullable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WritePotentiallyReferencingElement", std::vector<std::string> { "System.String", "System.String", "System.Object", "System.Type", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)n;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)o;
	params[3] = (intptr_t)ambientType;
	params[4] = (intptr_t)&suppressReference;
	params[5] = (intptr_t)&isNullable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteReferencedElements()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteReferencedElements");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Serialization::XmlSerializationWriter::IsPrimitiveArray(System_Xml::System::Xml::Serialization::TypeData* td)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPrimitiveArray", std::vector<std::string> { "System.Xml.Serialization.TypeData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)td;
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
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteArray(mscorlib::System::Object* o, System_Xml::System::Xml::Serialization::TypeData* td)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteArray", std::vector<std::string> { "System.Object", "System.Xml.Serialization.TypeData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)o;
	params[1] = (intptr_t)td;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteReferencingElement(mscorlib::System::String* n, mscorlib::System::String* ns, mscorlib::System::Object* o, bool isNullable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteReferencingElement", std::vector<std::string> { "System.String", "System.String", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)n;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)o;
	params[3] = (intptr_t)&isNullable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::CheckReferenceQueue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckReferenceQueue");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteSerializable(System_Xml::System::Xml::Serialization::IXmlSerializable* serializable, mscorlib::System::String* name, mscorlib::System::String* ns, bool isNullable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteSerializable", std::vector<std::string> { "System.Xml.Serialization.IXmlSerializable", "System.String", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)serializable;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)&isNullable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteSerializable(System_Xml::System::Xml::Serialization::IXmlSerializable* serializable, mscorlib::System::String* name, mscorlib::System::String* ns, bool isNullable, bool wrapped)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteSerializable", std::vector<std::string> { "System.Xml.Serialization.IXmlSerializable", "System.String", "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)serializable;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)&isNullable;
	params[4] = (intptr_t)&wrapped;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteStartDocument()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStartDocument");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteStartElement(mscorlib::System::String* name, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStartElement", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteStartElement(mscorlib::System::String* name, mscorlib::System::String* ns, bool writePrefixed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStartElement", std::vector<std::string> { "System.String", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)&writePrefixed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteStartElement(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStartElement", std::vector<std::string> { "System.String", "System.String", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)o;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteStartElement(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Object* o, bool writePrefixed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStartElement", std::vector<std::string> { "System.String", "System.String", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)o;
	params[3] = (intptr_t)&writePrefixed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteStartElement(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Object* o, bool writePrefixed, mscorlib::System::Collections::ICollection* namespaces)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStartElement", std::vector<std::string> { "System.String", "System.String", "System.Object", "System.Boolean", "System.Collections.ICollection" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)o;
	params[3] = (intptr_t)&writePrefixed;
	params[4] = (intptr_t)namespaces;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteTypedPrimitive(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Object* o, bool xsiType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteTypedPrimitive", std::vector<std::string> { "System.String", "System.String", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	params[2] = (intptr_t)o;
	params[3] = (intptr_t)&xsiType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteValue(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteValue", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteXmlAttribute(System_Xml::System::Xml::XmlNode* node, mscorlib::System::Object* container)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteXmlAttribute", std::vector<std::string> { "System.Xml.XmlNode", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)container;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriter::WriteXsiType(mscorlib::System::String* name, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteXsiType", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
