#include "System_Xml_XmlWellFormedWriter_Namespace.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlWellFormedWriter_Namespace::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::XmlWellFormedWriter::GetIl2CppClass(), "Namespace");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlWellFormedWriter_Namespace::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlWellFormedWriter_Namespace::Set(mscorlib::System::String* prefix, mscorlib::System::String* namespaceUri, System_Xml::System::Xml::XmlWellFormedWriter_NamespaceKind kind)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { "System.String", "System.String", "System.Xml.XmlWellFormedWriter/NamespaceKind" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)namespaceUri;
	params[2] = (intptr_t)&kind;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlWellFormedWriter_Namespace::WriteDecl(System_Xml::System::Xml::XmlWriter* writer, System_Xml::System::Xml::XmlRawWriter* rawWriter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteDecl", std::vector<std::string> { "System.Xml.XmlWriter", "System.Xml.XmlRawWriter" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)writer;
	params[1] = (intptr_t)rawWriter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
