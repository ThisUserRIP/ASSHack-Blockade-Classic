#include "MS_Internal_Xml_XPath_Operator.h"

IL2CPP::Il2CppClass* System_Xml::MS::Internal::Xml::XPath::Operator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "MS.Internal.Xml.XPath", "Operator");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::MS::Internal::Xml::XPath::Operator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::MS::Internal::Xml::XPath::Operator::_ctor(System_Xml::MS::Internal::Xml::XPath::Operator_Op op, System_Xml::MS::Internal::Xml::XPath::AstNode* opnd1, System_Xml::MS::Internal::Xml::XPath::AstNode* opnd2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "MS.Internal.Xml.XPath.Operator/Op", "MS.Internal.Xml.XPath.AstNode", "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&op;
	params[1] = (intptr_t)opnd1;
	params[2] = (intptr_t)opnd2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::MS::Internal::Xml::XPath::AstNode_AstType System_Xml::MS::Internal::Xml::XPath::Operator::get_Type()
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
System_Xml::System::Xml::XPath::XPathResultType System_Xml::MS::Internal::Xml::XPath::Operator::get_ReturnType()
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
void System_Xml::MS::Internal::Xml::XPath::Operator::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
