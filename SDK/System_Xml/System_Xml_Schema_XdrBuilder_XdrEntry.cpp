#include "System_Xml_Schema_XdrBuilder_XdrEntry.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XdrBuilder_XdrEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Schema::XdrBuilder::GetIl2CppClass(), "XdrEntry");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XdrBuilder_XdrEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XdrBuilder_XdrEntry::_ctor(System_Xml::System::Xml::Schema::SchemaNames_Token n, IL2CPP::Array<int32_t>* states, IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* attributes, System_Xml::System::Xml::Schema::XdrBuilder_XdrInitFunction* init, System_Xml::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* begin, System_Xml::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* end, bool fText)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.SchemaNames/Token", "System.Int32[]", "System.Xml.Schema.XdrBuilder/XdrAttributeEntry[]", "System.Xml.Schema.XdrBuilder/XdrInitFunction", "System.Xml.Schema.XdrBuilder/XdrBeginChildFunction", "System.Xml.Schema.XdrBuilder/XdrEndChildFunction", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)states;
	params[2] = (intptr_t)attributes;
	params[3] = (intptr_t)init;
	params[4] = (intptr_t)begin;
	params[5] = (intptr_t)end;
	params[6] = (intptr_t)&fText;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
