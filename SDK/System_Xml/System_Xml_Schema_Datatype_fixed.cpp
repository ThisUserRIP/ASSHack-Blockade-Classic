#include "System_Xml_Schema_Datatype_fixed.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::Datatype_fixed::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "Datatype_fixed");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::Datatype_fixed::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::Datatype_fixed::ParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseValue", std::vector<std::string> { "System.String", "System.Xml.XmlNameTable", "System.Xml.IXmlNamespaceResolver" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)nameTable;
	params[2] = (intptr_t)nsmgr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Exception* System_Xml::System::Xml::Schema::Datatype_fixed::TryParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, mscorlib::System::Object& typedValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseValue", std::vector<std::string> { "System.String", "System.Xml.XmlNameTable", "System.Xml.IXmlNamespaceResolver", "System.Object&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)nameTable;
	params[2] = (intptr_t)nsmgr;
	params[3] = (intptr_t)&typedValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
void System_Xml::System::Xml::Schema::Datatype_fixed::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
