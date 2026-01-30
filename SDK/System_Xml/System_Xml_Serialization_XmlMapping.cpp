#include "System_Xml_Serialization_XmlMapping.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlMapping::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "XmlMapping");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlMapping::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlMapping::_ctor(mscorlib::System::String* elementName, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elementName;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System_Xml::System::Xml::Serialization::XmlMapping::get_ElementName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ElementName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Serialization::XmlMapping::get_Namespace()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Namespace");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlMapping::SetKey(mscorlib::System::String* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetKey", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Serialization::ObjectMap* System_Xml::System::Xml::Serialization::XmlMapping::get_ObjectMap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ObjectMap");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::ObjectMap*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlMapping::set_ObjectMap(System_Xml::System::Xml::Serialization::ObjectMap* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ObjectMap", std::vector<std::string> { "System.Xml.Serialization.ObjectMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::ArrayList* System_Xml::System::Xml::Serialization::XmlMapping::get_RelatedMaps()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RelatedMaps");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ArrayList*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlMapping::set_RelatedMaps(mscorlib::System::Collections::ArrayList* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_RelatedMaps", std::vector<std::string> { "System.Collections.ArrayList" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Serialization::SerializationFormat System_Xml::System::Xml::Serialization::XmlMapping::get_Format()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Format");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Serialization::SerializationFormat ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Serialization::SerializationFormat));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Serialization::SerializationFormat>(*(System_Xml::System::Xml::Serialization::SerializationFormat*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Serialization::XmlMapping::set_Format(System_Xml::System::Xml::Serialization::SerializationFormat value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Format", std::vector<std::string> { "System.Xml.Serialization.SerializationFormat" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
