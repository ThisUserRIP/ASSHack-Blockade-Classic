#include "System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::GetIl2CppClass(), "CallbackInfo");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::_ctor(System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter* swi, System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Serialization.XmlSerializationWriterInterpreter", "System.Xml.Serialization.XmlTypeMapping" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)swi;
	params[1] = (intptr_t)typeMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::WriteObject(mscorlib::System::Object* ob)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObject", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ob;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::WriteEnum(mscorlib::System::Object* ob)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEnum", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ob;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
