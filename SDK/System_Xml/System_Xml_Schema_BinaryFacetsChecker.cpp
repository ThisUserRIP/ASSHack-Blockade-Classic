#include "System_Xml_Schema_BinaryFacetsChecker.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::BinaryFacetsChecker::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "BinaryFacetsChecker");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::BinaryFacetsChecker::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Exception* System_Xml::System::Xml::Schema::BinaryFacetsChecker::CheckValueFacets(mscorlib::System::Object* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckValueFacets", std::vector<std::string> { "System.Object", "System.Xml.Schema.XmlSchemaDatatype" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)datatype;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
mscorlib::System::Exception* System_Xml::System::Xml::Schema::BinaryFacetsChecker::CheckValueFacets(IL2CPP::Array<uint8_t>* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckValueFacets", std::vector<std::string> { "System.Byte[]", "System.Xml.Schema.XmlSchemaDatatype" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)datatype;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
bool System_Xml::System::Xml::Schema::BinaryFacetsChecker::MatchEnumeration(mscorlib::System::Object* value, mscorlib::System::Collections::ArrayList* enumeration, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchEnumeration", std::vector<std::string> { "System.Object", "System.Collections.ArrayList", "System.Xml.Schema.XmlSchemaDatatype" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)enumeration;
	params[2] = (intptr_t)datatype;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::Schema::BinaryFacetsChecker::MatchEnumeration(IL2CPP::Array<uint8_t>* value, mscorlib::System::Collections::ArrayList* enumeration, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchEnumeration", std::vector<std::string> { "System.Byte[]", "System.Collections.ArrayList", "System.Xml.Schema.XmlSchemaDatatype" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)enumeration;
	params[2] = (intptr_t)datatype;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::BinaryFacetsChecker::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
