#include "System_Xml_Schema_XsdBuilder_XsdAttributeEntry.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XsdBuilder_XsdAttributeEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Schema::XsdBuilder::GetIl2CppClass(), "XsdAttributeEntry");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XsdBuilder_XsdAttributeEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XsdBuilder_XsdAttributeEntry::_ctor(System_Xml::System::Xml::Schema::SchemaNames_Token a, System_Xml::System::Xml::Schema::XsdBuilder_XsdBuildFunction* build)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.SchemaNames/Token", "System.Xml.Schema.XsdBuilder/XsdBuildFunction" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)build;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
