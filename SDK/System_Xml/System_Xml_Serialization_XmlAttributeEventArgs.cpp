#include "System_Xml_Serialization_XmlAttributeEventArgs.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlAttributeEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "XmlAttributeEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlAttributeEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlAttributeEventArgs::_ctor(System_Xml::System::Xml::XmlAttribute* attr, int32_t lineNumber, int32_t linePosition, mscorlib::System::Object* o, mscorlib::System::String* qnames)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlAttribute", "System.Int32", "System.Int32", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)attr;
	params[1] = (intptr_t)&lineNumber;
	params[2] = (intptr_t)&linePosition;
	params[3] = (intptr_t)o;
	params[4] = (intptr_t)qnames;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
