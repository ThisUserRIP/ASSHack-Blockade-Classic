#include "System_Xml_Serialization_XmlChoiceIdentifierAttribute.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlChoiceIdentifierAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "XmlChoiceIdentifierAttribute");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlChoiceIdentifierAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* System_Xml::System::Xml::Serialization::XmlChoiceIdentifierAttribute::get_MemberName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MemberName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
