#include "System_Xml_XmlTextReaderImpl_XmlContext.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlTextReaderImpl_XmlContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::XmlTextReaderImpl::GetIl2CppClass(), "XmlContext");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlTextReaderImpl_XmlContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlTextReaderImpl_XmlContext::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlTextReaderImpl_XmlContext::_ctor(System_Xml::System::Xml::XmlTextReaderImpl_XmlContext* previousContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlTextReaderImpl/XmlContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)previousContext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
