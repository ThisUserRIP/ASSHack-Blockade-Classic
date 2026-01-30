#include "System_Xml_IDtdParser.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::IDtdParser::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "IDtdParser");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::IDtdParser::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::System::Xml::IDtdInfo* System_Xml::System::Xml::IDtdParser::ParseInternalDtd(System_Xml::System::Xml::IDtdParserAdapter* adapter, bool saveInternalSubset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseInternalDtd", std::vector<std::string> { "System.Xml.IDtdParserAdapter", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)adapter;
	params[1] = (intptr_t)&saveInternalSubset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::IDtdInfo*)returnValue;
}
System_Xml::System::Xml::IDtdInfo* System_Xml::System::Xml::IDtdParser::ParseFreeFloatingDtd(mscorlib::System::String* baseUri, mscorlib::System::String* docTypeName, mscorlib::System::String* publicId, mscorlib::System::String* systemId, mscorlib::System::String* internalSubset, System_Xml::System::Xml::IDtdParserAdapter* adapter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseFreeFloatingDtd", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.String", "System.Xml.IDtdParserAdapter" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)baseUri;
	params[1] = (intptr_t)docTypeName;
	params[2] = (intptr_t)publicId;
	params[3] = (intptr_t)systemId;
	params[4] = (intptr_t)internalSubset;
	params[5] = (intptr_t)adapter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::IDtdInfo*)returnValue;
}
