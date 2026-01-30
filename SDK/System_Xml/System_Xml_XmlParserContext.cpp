#include "System_Xml_XmlParserContext.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlParserContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "XmlParserContext");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlParserContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlParserContext::_ctor(System_Xml::System::Xml::XmlNameTable* nt, System_Xml::System::Xml::XmlNamespaceManager* nsMgr, mscorlib::System::String* docTypeName, mscorlib::System::String* pubId, mscorlib::System::String* sysId, mscorlib::System::String* internalSubset, mscorlib::System::String* baseURI, mscorlib::System::String* xmlLang, System_Xml::System::Xml::XmlSpace xmlSpace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNameTable", "System.Xml.XmlNamespaceManager", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.Xml.XmlSpace" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)nt;
	params[1] = (intptr_t)nsMgr;
	params[2] = (intptr_t)docTypeName;
	params[3] = (intptr_t)pubId;
	params[4] = (intptr_t)sysId;
	params[5] = (intptr_t)internalSubset;
	params[6] = (intptr_t)baseURI;
	params[7] = (intptr_t)xmlLang;
	params[8] = (intptr_t)&xmlSpace;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlParserContext::_ctor(System_Xml::System::Xml::XmlNameTable* nt, System_Xml::System::Xml::XmlNamespaceManager* nsMgr, mscorlib::System::String* docTypeName, mscorlib::System::String* pubId, mscorlib::System::String* sysId, mscorlib::System::String* internalSubset, mscorlib::System::String* baseURI, mscorlib::System::String* xmlLang, System_Xml::System::Xml::XmlSpace xmlSpace, mscorlib::System::Text::Encoding* enc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNameTable", "System.Xml.XmlNamespaceManager", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.Xml.XmlSpace", "System.Text.Encoding" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)nt;
	params[1] = (intptr_t)nsMgr;
	params[2] = (intptr_t)docTypeName;
	params[3] = (intptr_t)pubId;
	params[4] = (intptr_t)sysId;
	params[5] = (intptr_t)internalSubset;
	params[6] = (intptr_t)baseURI;
	params[7] = (intptr_t)xmlLang;
	params[8] = (intptr_t)&xmlSpace;
	params[9] = (intptr_t)enc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlNameTable* System_Xml::System::Xml::XmlParserContext::get_NameTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NameTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNameTable*)returnValue;
}
System_Xml::System::Xml::XmlNamespaceManager* System_Xml::System::Xml::XmlParserContext::get_NamespaceManager()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NamespaceManager");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNamespaceManager*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlParserContext::get_DocTypeName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DocTypeName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlParserContext::get_PublicId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PublicId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlParserContext::get_SystemId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SystemId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlParserContext::get_BaseURI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BaseURI");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlParserContext::get_InternalSubset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InternalSubset");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlParserContext::get_XmlLang()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlLang");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System_Xml::System::Xml::XmlSpace System_Xml::System::Xml::XmlParserContext::get_XmlSpace()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlSpace");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::XmlSpace ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::XmlSpace));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::XmlSpace>(*(System_Xml::System::Xml::XmlSpace*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Text::Encoding* System_Xml::System::Xml::XmlParserContext::get_Encoding()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Encoding");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::Encoding*)returnValue;
}
bool System_Xml::System::Xml::XmlParserContext::get_HasDtdInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasDtdInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
