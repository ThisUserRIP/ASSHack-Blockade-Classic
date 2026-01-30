#include "System_Xml_Schema_RedefineEntry.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::RedefineEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "RedefineEntry");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::RedefineEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::RedefineEntry::_ctor(System_Xml::System::Xml::Schema::XmlSchemaRedefine* external, System_Xml::System::Xml::Schema::XmlSchema* schema)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.XmlSchemaRedefine", "System.Xml.Schema.XmlSchema" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)external;
	params[1] = (intptr_t)schema;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
