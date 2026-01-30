#include "System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetIl2CppClass(), "ReaderCallbackInfo");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::_ctor(System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri, System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Serialization.XmlSerializationReaderInterpreter", "System.Xml.Serialization.XmlTypeMapping" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sri;
	params[1] = (intptr_t)typeMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::ReadObject()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadObject");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
