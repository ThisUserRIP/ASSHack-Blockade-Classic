#include "System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Schema::XmlSchemaObjectTable::GetIl2CppClass(), "XmlSchemaObjectEntry");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry::_ctor(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::XmlSchemaObject* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlQualifiedName", "System.Xml.Schema.XmlSchemaObject" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
