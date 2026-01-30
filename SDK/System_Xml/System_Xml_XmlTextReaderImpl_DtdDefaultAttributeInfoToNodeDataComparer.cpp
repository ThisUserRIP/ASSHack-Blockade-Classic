#include "System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::XmlTextReaderImpl::GetIl2CppClass(), "DtdDefaultAttributeInfoToNodeDataComparer");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::IComparer_1<mscorlib::System::Object>* System_Xml::System::Xml::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer::get_Instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IComparer_1<mscorlib::System::Object>*)returnValue;
}
int32_t System_Xml::System::Xml::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer::Compare(mscorlib::System::Object* x, mscorlib::System::Object* y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "System.Object", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void System_Xml::System::Xml::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
