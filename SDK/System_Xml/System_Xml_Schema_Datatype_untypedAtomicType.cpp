#include "System_Xml_Schema_Datatype_untypedAtomicType.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::Datatype_untypedAtomicType::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "Datatype_untypedAtomicType");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::Datatype_untypedAtomicType::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::System::Xml::Schema::XmlValueConverter* System_Xml::System::Xml::Schema::Datatype_untypedAtomicType::CreateValueConverter(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateValueConverter", std::vector<std::string> { "System.Xml.Schema.XmlSchemaType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schemaType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlValueConverter*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace System_Xml::System::Xml::Schema::Datatype_untypedAtomicType::get_BuiltInWhitespaceFacet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BuiltInWhitespaceFacet");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace>(*(System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::XmlTypeCode System_Xml::System::Xml::Schema::Datatype_untypedAtomicType::get_TypeCode()
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
void System_Xml::System::Xml::Schema::Datatype_untypedAtomicType::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
