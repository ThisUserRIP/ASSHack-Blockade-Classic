#include "System_Xml_XmlWellFormedWriter_ElementScope.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlWellFormedWriter_ElementScope::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::XmlWellFormedWriter::GetIl2CppClass(), "ElementScope");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlWellFormedWriter_ElementScope::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlWellFormedWriter_ElementScope::Set(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceUri, int32_t prevNSTop)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)namespaceUri;
	params[3] = (intptr_t)&prevNSTop;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlWellFormedWriter_ElementScope::WriteEndElement(System_Xml::System::Xml::XmlRawWriter* rawWriter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEndElement", std::vector<std::string> { "System.Xml.XmlRawWriter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rawWriter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlWellFormedWriter_ElementScope::WriteFullEndElement(System_Xml::System::Xml::XmlRawWriter* rawWriter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteFullEndElement", std::vector<std::string> { "System.Xml.XmlRawWriter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rawWriter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
