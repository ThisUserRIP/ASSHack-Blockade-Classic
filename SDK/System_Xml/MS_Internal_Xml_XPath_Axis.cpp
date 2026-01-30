#include "MS_Internal_Xml_XPath_Axis.h"

IL2CPP::Il2CppClass* System_Xml::MS::Internal::Xml::XPath::Axis::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "MS.Internal.Xml.XPath", "Axis");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::MS::Internal::Xml::XPath::Axis::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::MS::Internal::Xml::XPath::Axis::_ctor(System_Xml::MS::Internal::Xml::XPath::Axis_AxisType axisType, System_Xml::MS::Internal::Xml::XPath::AstNode* input, mscorlib::System::String* prefix, mscorlib::System::String* name, System_Xml::System::Xml::XPath::XPathNodeType nodetype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "MS.Internal.Xml.XPath.Axis/AxisType", "MS.Internal.Xml.XPath.AstNode", "System.String", "System.String", "System.Xml.XPath.XPathNodeType" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&axisType;
	params[1] = (intptr_t)input;
	params[2] = (intptr_t)prefix;
	params[3] = (intptr_t)name;
	params[4] = (intptr_t)&nodetype;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::MS::Internal::Xml::XPath::Axis::_ctor(System_Xml::MS::Internal::Xml::XPath::Axis_AxisType axisType, System_Xml::MS::Internal::Xml::XPath::AstNode* input)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "MS.Internal.Xml.XPath.Axis/AxisType", "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&axisType;
	params[1] = (intptr_t)input;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::MS::Internal::Xml::XPath::AstNode_AstType System_Xml::MS::Internal::Xml::XPath::Axis::get_Type()
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
System_Xml::System::Xml::XPath::XPathResultType System_Xml::MS::Internal::Xml::XPath::Axis::get_ReturnType()
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
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::Axis::get_Input()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Input");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
void System_Xml::MS::Internal::Xml::XPath::Axis::set_Input(System_Xml::MS::Internal::Xml::XPath::AstNode* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Input", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System_Xml::MS::Internal::Xml::XPath::Axis::get_Prefix()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Prefix");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::MS::Internal::Xml::XPath::Axis::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System_Xml::System::Xml::XPath::XPathNodeType System_Xml::MS::Internal::Xml::XPath::Axis::get_NodeType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NodeType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::XPath::XPathNodeType ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::XPath::XPathNodeType));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::XPath::XPathNodeType>(*(System_Xml::System::Xml::XPath::XPathNodeType*)il2cpp_object_unbox(returnValue));
}
System_Xml::MS::Internal::Xml::XPath::Axis_AxisType System_Xml::MS::Internal::Xml::XPath::Axis::get_TypeOfAxis()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TypeOfAxis");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::MS::Internal::Xml::XPath::Axis_AxisType ret;
		std::memset(&ret, 0, sizeof(System_Xml::MS::Internal::Xml::XPath::Axis_AxisType));
		return ret;
	}
	return static_cast<System_Xml::MS::Internal::Xml::XPath::Axis_AxisType>(*(System_Xml::MS::Internal::Xml::XPath::Axis_AxisType*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::MS::Internal::Xml::XPath::Axis::get_AbbrAxis()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AbbrAxis");
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
mscorlib::System::String* System_Xml::MS::Internal::Xml::XPath::Axis::get_Urn()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Urn");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::MS::Internal::Xml::XPath::Axis::set_Urn(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Urn", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
