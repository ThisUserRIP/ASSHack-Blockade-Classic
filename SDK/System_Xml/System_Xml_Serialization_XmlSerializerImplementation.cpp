#include "System_Xml_Serialization_XmlSerializerImplementation.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlSerializerImplementation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "XmlSerializerImplementation");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlSerializerImplementation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::System::Xml::Serialization::XmlSerializationWriter* System_Xml::System::Xml::Serialization::XmlSerializerImplementation::get_Writer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Writer");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlSerializationWriter*)returnValue;
}
