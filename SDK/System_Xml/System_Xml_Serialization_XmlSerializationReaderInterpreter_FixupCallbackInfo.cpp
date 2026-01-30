#include "System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetIl2CppClass(), "FixupCallbackInfo");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::_ctor(System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri, System_Xml::System::Xml::Serialization::ClassMap* map, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Serialization.XmlSerializationReaderInterpreter", "System.Xml.Serialization.ClassMap", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)sri;
	params[1] = (intptr_t)map;
	params[2] = (intptr_t)&isValueList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::FixupMembers(mscorlib::System::Object* fixup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixupMembers", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)fixup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
