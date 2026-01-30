#include "System_Xml_Serialization_XmlSerializationReader_CollectionFixup.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Serialization::XmlSerializationReader::GetIl2CppClass(), "CollectionFixup");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::_ctor(mscorlib::System::Object* collection, System_Xml::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback, mscorlib::System::String* id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.Xml.Serialization.XmlSerializationCollectionFixupCallback", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)collection;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)id;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* System_Xml::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_Callback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Callback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_Collection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Collection");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_Id()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Id");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::get_CollectionItems()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CollectionItems");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlSerializationReader_CollectionFixup::set_CollectionItems(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_CollectionItems", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
