#include "MS_Internal_Xml_XPath_Operand.h"

IL2CPP::Il2CppClass* System_Xml::MS::Internal::Xml::XPath::Operand::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "MS.Internal.Xml.XPath", "Operand");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::MS::Internal::Xml::XPath::Operand::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::MS::Internal::Xml::XPath::Operand::_ctor(mscorlib::System::String* val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::MS::Internal::Xml::XPath::Operand::_ctor(double val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Double" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::MS::Internal::Xml::XPath::AstNode_AstType System_Xml::MS::Internal::Xml::XPath::Operand::get_Type()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Type");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::MS::Internal::Xml::XPath::AstNode_AstType ret;
		std::memset(&ret, 0, sizeof(System_Xml::MS::Internal::Xml::XPath::AstNode_AstType));
		return ret;
	}
	return static_cast<System_Xml::MS::Internal::Xml::XPath::AstNode_AstType>(*(System_Xml::MS::Internal::Xml::XPath::AstNode_AstType*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::XPath::XPathResultType System_Xml::MS::Internal::Xml::XPath::Operand::get_ReturnType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ReturnType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::XPath::XPathResultType ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::XPath::XPathResultType));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::XPath::XPathResultType>(*(System_Xml::System::Xml::XPath::XPathResultType*)il2cpp_object_unbox(returnValue));
}
