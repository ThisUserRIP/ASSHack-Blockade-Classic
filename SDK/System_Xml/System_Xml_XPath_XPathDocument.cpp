#include "System_Xml_XPath_XPathDocument.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XPath::XPathDocument::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.XPath", "XPathDocument");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XPath::XPathDocument::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::System::Xml::XmlNameTable* System_Xml::System::Xml::XPath::XPathDocument::get_NameTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NameTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNameTable*)returnValue;
}
int32_t System_Xml::System::Xml::XPath::XPathDocument::GetXmlNamespaceNode(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageXmlNmsp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetXmlNamespaceNode", std::vector<std::string> { "MS.Internal.Xml.Cache.XPathNode[]&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pageXmlNmsp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::XPath::XPathDocument::LookupNamespaces(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageElem, int32_t idxElem, IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNmsp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LookupNamespaces", std::vector<std::string> { "MS.Internal.Xml.Cache.XPathNode[]", "System.Int32", "MS.Internal.Xml.Cache.XPathNode[]&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pageElem;
	params[1] = (intptr_t)&idxElem;
	params[2] = (intptr_t)&pageNmsp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
