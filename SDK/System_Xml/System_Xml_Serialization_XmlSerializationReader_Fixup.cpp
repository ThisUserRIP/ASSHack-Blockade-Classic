#include "System_Xml_Serialization_XmlSerializationReader_Fixup.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlSerializationReader_Fixup::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Serialization::XmlSerializationReader::GetIl2CppClass(), "Fixup");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlSerializationReader_Fixup::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlSerializationReader_Fixup::_ctor(mscorlib::System::Object* o, System_Xml::System::Xml::Serialization::XmlSerializationFixupCallback* callback, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.Xml.Serialization.XmlSerializationFixupCallback", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)o;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Serialization::XmlSerializationFixupCallback* System_Xml::System::Xml::Serialization::XmlSerializationReader_Fixup::get_Callback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Callback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlSerializationFixupCallback*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* System_Xml::System::Xml::Serialization::XmlSerializationReader_Fixup::get_Ids()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Ids");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReader_Fixup::get_Source()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Source");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
