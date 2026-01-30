#include "System_Xml_Serialization_XmlNodeEventArgs.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlNodeEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "XmlNodeEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlNodeEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlNodeEventArgs::_ctor(System_Xml::System::Xml::XmlNode* xmlNode, int32_t lineNumber, int32_t linePosition, mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNode", "System.Int32", "System.Int32", "System.Object" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)xmlNode;
	params[1] = (intptr_t)&lineNumber;
	params[2] = (intptr_t)&linePosition;
	params[3] = (intptr_t)o;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
