#include "System_Xml_Schema_XdrBuilder_XdrAttributeEntry.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Schema::XdrBuilder::GetIl2CppClass(), "XdrAttributeEntry");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::_ctor(System_Xml::System::Xml::Schema::SchemaNames_Token a, System_Xml::System::Xml::XmlTokenizedType ttype, System_Xml::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.SchemaNames/Token", "System.Xml.XmlTokenizedType", "System.Xml.Schema.XdrBuilder/XdrBuildFunction" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&ttype;
	params[2] = (intptr_t)build;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::_ctor(System_Xml::System::Xml::Schema::SchemaNames_Token a, System_Xml::System::Xml::XmlTokenizedType ttype, int32_t schemaFlags, System_Xml::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.SchemaNames/Token", "System.Xml.XmlTokenizedType", "System.Int32", "System.Xml.Schema.XdrBuilder/XdrBuildFunction" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&ttype;
	params[2] = (intptr_t)&schemaFlags;
	params[3] = (intptr_t)build;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
