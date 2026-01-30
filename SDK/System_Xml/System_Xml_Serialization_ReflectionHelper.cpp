#include "System_Xml_Serialization_ReflectionHelper.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::ReflectionHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "ReflectionHelper");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::ReflectionHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::ReflectionHelper::RegisterSchemaType(System_Xml::System::Xml::Serialization::XmlTypeMapping* map, mscorlib::System::String* xmlType, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterSchemaType", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)xmlType;
	params[2] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::ReflectionHelper::GetRegisteredSchemaType(mscorlib::System::String* xmlType, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRegisteredSchemaType", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)xmlType;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
void System_Xml::System::Xml::Serialization::ReflectionHelper::RegisterClrType(System_Xml::System::Xml::Serialization::XmlTypeMapping* map, mscorlib::System::Type* type, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterClrType", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Type", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::ReflectionHelper::GetRegisteredClrType(mscorlib::System::Type* type, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRegisteredClrType", std::vector<std::string> { "System.Type", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
void System_Xml::System::Xml::Serialization::ReflectionHelper::CheckSerializableType(mscorlib::System::Type* type, bool allowPrivateConstructors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckSerializableType", std::vector<std::string> { "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)&allowPrivateConstructors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::ReflectionHelper::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::ReflectionHelper::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
