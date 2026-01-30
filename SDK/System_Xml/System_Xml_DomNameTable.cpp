#include "System_Xml_DomNameTable.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::DomNameTable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "DomNameTable");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::DomNameTable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::DomNameTable::_ctor(System_Xml::System::Xml::XmlDocument* document)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlDocument" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)document;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlName* System_Xml::System::Xml::DomNameTable::GetName(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetName", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Xml.Schema.IXmlSchemaInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)schemaInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlName*)returnValue;
}
System_Xml::System::Xml::XmlName* System_Xml::System::Xml::DomNameTable::AddName(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddName", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Xml.Schema.IXmlSchemaInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)schemaInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlName*)returnValue;
}
void System_Xml::System::Xml::DomNameTable::Grow()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Grow");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
