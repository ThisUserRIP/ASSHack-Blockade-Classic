#include "System_Xml_Schema_XdrBuilder_GroupContent.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XdrBuilder_GroupContent::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Schema::XdrBuilder::GetIl2CppClass(), "GroupContent");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XdrBuilder_GroupContent::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XdrBuilder_GroupContent::Copy(System_Xml::System::Xml::Schema::XdrBuilder_GroupContent* from, System_Xml::System::Xml::Schema::XdrBuilder_GroupContent* to)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Copy", std::vector<std::string> { "System.Xml.Schema.XdrBuilder/GroupContent", "System.Xml.Schema.XdrBuilder/GroupContent" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XdrBuilder_GroupContent* System_Xml::System::Xml::Schema::XdrBuilder_GroupContent::Copy(System_Xml::System::Xml::Schema::XdrBuilder_GroupContent* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Copy", std::vector<std::string> { "System.Xml.Schema.XdrBuilder/GroupContent" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XdrBuilder_GroupContent*)returnValue;
}
void System_Xml::System::Xml::Schema::XdrBuilder_GroupContent::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
