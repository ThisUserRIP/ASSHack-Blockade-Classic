#include "System_Xml_Schema_Datatype_negativeInteger.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::Datatype_negativeInteger::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "Datatype_negativeInteger");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::Datatype_negativeInteger::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::System::Xml::Schema::FacetsChecker* System_Xml::System::Xml::Schema::Datatype_negativeInteger::get_FacetsChecker()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FacetsChecker");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::FacetsChecker*)returnValue;
}
System_Xml::System::Xml::Schema::XmlTypeCode System_Xml::System::Xml::Schema::Datatype_negativeInteger::get_TypeCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TypeCode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlTypeCode ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlTypeCode));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlTypeCode>(*(System_Xml::System::Xml::Schema::XmlTypeCode*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::Datatype_negativeInteger::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Datatype_negativeInteger::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
