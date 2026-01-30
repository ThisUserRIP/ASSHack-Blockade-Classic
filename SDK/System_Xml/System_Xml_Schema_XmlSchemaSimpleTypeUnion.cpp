#include "System_Xml_Schema_XmlSchemaSimpleTypeUnion.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeUnion::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSimpleTypeUnion");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeUnion::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeUnion::get_BaseTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BaseTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaObjectCollection*)returnValue;
}
IL2CPP::Array<System_Xml::System::Xml::XmlQualifiedName*>* System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeUnion::get_MemberTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MemberTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System_Xml::System::Xml::XmlQualifiedName*>*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeUnion::set_MemberTypes(IL2CPP::Array<System_Xml::System::Xml::XmlQualifiedName*>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_MemberTypes", std::vector<std::string> { "System.Xml.XmlQualifiedName[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeUnion::get_BaseMemberTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BaseMemberTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeUnion::SetBaseMemberTypes(IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* baseMemberTypes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBaseMemberTypes", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSimpleType[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)baseMemberTypes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaObject* System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeUnion::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaObject*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeUnion::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
