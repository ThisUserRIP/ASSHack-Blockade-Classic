#include "System_Xml_Serialization_TypeTranslator.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::TypeTranslator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "TypeTranslator");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::TypeTranslator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::TypeTranslator::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Serialization::TypeData* System_Xml::System::Xml::Serialization::TypeTranslator::GetTypeData(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeData", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::TypeData*)returnValue;
}
System_Xml::System::Xml::Serialization::TypeData* System_Xml::System::Xml::Serialization::TypeTranslator::GetTypeData(mscorlib::System::Type* runtimeType, mscorlib::System::String* xmlDataType, bool underlyingEnumType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeData", std::vector<std::string> { "System.Type", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)runtimeType;
	params[1] = (intptr_t)xmlDataType;
	params[2] = (intptr_t)&underlyingEnumType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::TypeData*)returnValue;
}
System_Xml::System::Xml::Serialization::TypeData* System_Xml::System::Xml::Serialization::TypeTranslator::GetPrimitiveTypeData(mscorlib::System::String* typeName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPrimitiveTypeData", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)typeName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::TypeData*)returnValue;
}
System_Xml::System::Xml::Serialization::TypeData* System_Xml::System::Xml::Serialization::TypeTranslator::GetPrimitiveTypeData(mscorlib::System::String* typeName, bool nullable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPrimitiveTypeData", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeName;
	params[1] = (intptr_t)&nullable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::TypeData*)returnValue;
}
System_Xml::System::Xml::Serialization::TypeData* System_Xml::System::Xml::Serialization::TypeTranslator::FindPrimitiveTypeData(mscorlib::System::String* typeName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindPrimitiveTypeData", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)typeName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::TypeData*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Serialization::TypeTranslator::GetArrayName(mscorlib::System::String* elemName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetArrayName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elemName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Serialization::TypeTranslator::ParseArrayType(mscorlib::System::String* arrayType, mscorlib::System::String& type, mscorlib::System::String& ns, mscorlib::System::String& dimensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseArrayType", std::vector<std::string> { "System.String", "System.String&", "System.String&", "System.String&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)arrayType;
	params[1] = (intptr_t)&type;
	params[2] = (intptr_t)&ns;
	params[3] = (intptr_t)&dimensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
