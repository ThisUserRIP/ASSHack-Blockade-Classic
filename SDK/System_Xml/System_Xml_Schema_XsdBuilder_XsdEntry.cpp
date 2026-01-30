#include "System_Xml_Schema_XsdBuilder_XsdEntry.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XsdBuilder_XsdEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Schema::XsdBuilder::GetIl2CppClass(), "XsdEntry");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XsdBuilder_XsdEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XsdBuilder_XsdEntry::_ctor(System_Xml::System::Xml::Schema::SchemaNames_Token n, System_Xml::System::Xml::Schema::XsdBuilder_State state, IL2CPP::Array<System_Xml::System::Xml::Schema::XsdBuilder_State>* nextStates, IL2CPP::Array<System_Xml::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>* attributes, System_Xml::System::Xml::Schema::XsdBuilder_XsdInitFunction* init, System_Xml::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* end, bool parseContent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.SchemaNames/Token", "System.Xml.Schema.XsdBuilder/State", "System.Xml.Schema.XsdBuilder/State[]", "System.Xml.Schema.XsdBuilder/XsdAttributeEntry[]", "System.Xml.Schema.XsdBuilder/XsdInitFunction", "System.Xml.Schema.XsdBuilder/XsdEndChildFunction", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)&state;
	params[2] = (intptr_t)nextStates;
	params[3] = (intptr_t)attributes;
	params[4] = (intptr_t)init;
	params[5] = (intptr_t)end;
	params[6] = (intptr_t)&parseContent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
