#include "MS_Internal_Xml_XPath_XPathParser_ParamInfo.h"

IL2CPP::Il2CppClass* System_Xml::MS::Internal::Xml::XPath::XPathParser_ParamInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::MS::Internal::Xml::XPath::XPathParser::GetIl2CppClass(), "ParamInfo");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::MS::Internal::Xml::XPath::XPathParser_ParamInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::MS::Internal::Xml::XPath::Function_FunctionType System_Xml::MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_FType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::MS::Internal::Xml::XPath::Function_FunctionType ret;
		std::memset(&ret, 0, sizeof(System_Xml::MS::Internal::Xml::XPath::Function_FunctionType));
		return ret;
	}
	return static_cast<System_Xml::MS::Internal::Xml::XPath::Function_FunctionType>(*(System_Xml::MS::Internal::Xml::XPath::Function_FunctionType*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_Minargs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Minargs");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_Maxargs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Maxargs");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* System_Xml::MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_ArgTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ArgTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>*)returnValue;
}
void System_Xml::MS::Internal::Xml::XPath::XPathParser_ParamInfo::_ctor(System_Xml::MS::Internal::Xml::XPath::Function_FunctionType ftype, int32_t minargs, int32_t maxargs, IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* argTypes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "MS.Internal.Xml.XPath.Function/FunctionType", "System.Int32", "System.Int32", "System.Xml.XPath.XPathResultType[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ftype;
	params[1] = (intptr_t)&minargs;
	params[2] = (intptr_t)&maxargs;
	params[3] = (intptr_t)argTypes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
