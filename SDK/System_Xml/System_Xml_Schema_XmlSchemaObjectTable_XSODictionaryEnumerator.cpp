#include "System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Schema::XmlSchemaObjectTable::GetIl2CppClass(), "XSODictionaryEnumerator");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::_ctor(mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, int32_t size, System_Xml::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Generic.List`1<System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry>", "System.Int32", "System.Xml.Schema.XmlSchemaObjectTable/EnumeratorType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)entries;
	params[1] = (intptr_t)&size;
	params[2] = (intptr_t)&enumType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::DictionaryEntry System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::get_Entry()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Entry");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Collections::DictionaryEntry ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Collections::DictionaryEntry));
		return ret;
	}
	return static_cast<mscorlib::System::Collections::DictionaryEntry>(*(mscorlib::System::Collections::DictionaryEntry*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::get_Key()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Key");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator::get_Value()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Value");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
