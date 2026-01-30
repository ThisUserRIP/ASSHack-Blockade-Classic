#include "System_Xml_Schema_XmlSchemaDatatype.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XmlSchemaDatatype::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaDatatype");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XmlSchemaDatatype::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XmlSchemaDatatype::get_ValueType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ValueType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
System_Xml::System::Xml::XmlTokenizedType System_Xml::System::Xml::Schema::XmlSchemaDatatype::get_TokenizedType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TokenizedType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::XmlTokenizedType ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::XmlTokenizedType));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::XmlTokenizedType>(*(System_Xml::System::Xml::XmlTokenizedType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaDatatype::ParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseValue", std::vector<std::string> { "System.String", "System.Xml.XmlNameTable", "System.Xml.IXmlNamespaceResolver" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)nameTable;
	params[2] = (intptr_t)nsmgr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaDatatypeVariety System_Xml::System::Xml::Schema::XmlSchemaDatatype::get_Variety()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Variety");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaDatatypeVariety ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaDatatypeVariety));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaDatatypeVariety>(*(System_Xml::System::Xml::Schema::XmlSchemaDatatypeVariety*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::XmlTypeCode System_Xml::System::Xml::Schema::XmlSchemaDatatype::get_TypeCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TypeCode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlTypeCode ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlTypeCode));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlTypeCode>(*(System_Xml::System::Xml::Schema::XmlTypeCode*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::Schema::XmlSchemaDatatype::IsDerivedFrom(System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDerivedFrom", std::vector<std::string> { "System.Xml.Schema.XmlSchemaDatatype" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)datatype;
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
bool System_Xml::System::Xml::Schema::XmlSchemaDatatype::get_HasLexicalFacets()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasLexicalFacets");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::Schema::XmlSchemaDatatype::get_HasValueFacets()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasValueFacets");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::XmlValueConverter* System_Xml::System::Xml::Schema::XmlSchemaDatatype::get_ValueConverter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ValueConverter");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlValueConverter*)returnValue;
}
System_Xml::System::Xml::Schema::RestrictionFacets* System_Xml::System::Xml::Schema::XmlSchemaDatatype::get_Restriction()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Restriction");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::RestrictionFacets*)returnValue;
}
int32_t System_Xml::System::Xml::Schema::XmlSchemaDatatype::Compare(mscorlib::System::Object* value1, mscorlib::System::Object* value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "System.Object", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaDatatype::ParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, bool createAtomicValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseValue", std::vector<std::string> { "System.String", "System.Xml.XmlNameTable", "System.Xml.IXmlNamespaceResolver", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)nameTable;
	params[2] = (intptr_t)nsmgr;
	params[3] = (intptr_t)&createAtomicValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Exception* System_Xml::System::Xml::Schema::XmlSchemaDatatype::TryParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, mscorlib::System::Object& typedValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseValue", std::vector<std::string> { "System.String", "System.Xml.XmlNameTable", "System.Xml.IXmlNamespaceResolver", "System.Object&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)nameTable;
	params[2] = (intptr_t)nsmgr;
	params[3] = (intptr_t)&typedValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
mscorlib::System::Exception* System_Xml::System::Xml::Schema::XmlSchemaDatatype::TryParseValue(mscorlib::System::Object* value, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* namespaceResolver, mscorlib::System::Object& typedValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseValue", std::vector<std::string> { "System.Object", "System.Xml.XmlNameTable", "System.Xml.IXmlNamespaceResolver", "System.Object&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)nameTable;
	params[2] = (intptr_t)namespaceResolver;
	params[3] = (intptr_t)&typedValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
System_Xml::System::Xml::Schema::FacetsChecker* System_Xml::System::Xml::Schema::XmlSchemaDatatype::get_FacetsChecker()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FacetsChecker");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::FacetsChecker*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace System_Xml::System::Xml::Schema::XmlSchemaDatatype::get_BuiltInWhitespaceFacet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BuiltInWhitespaceFacet");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace>(*(System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::XmlSchemaDatatype* System_Xml::System::Xml::Schema::XmlSchemaDatatype::DeriveByRestriction(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* facets, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::XmlSchemaType* schemaType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeriveByRestriction", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObjectCollection", "System.Xml.XmlNameTable", "System.Xml.Schema.XmlSchemaType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)facets;
	params[1] = (intptr_t)nameTable;
	params[2] = (intptr_t)schemaType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaDatatype*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaDatatype* System_Xml::System::Xml::Schema::XmlSchemaDatatype::DeriveByList(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeriveByList", std::vector<std::string> { "System.Xml.Schema.XmlSchemaType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schemaType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaDatatype*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaDatatype::VerifySchemaValid(System_Xml::System::Xml::Schema::XmlSchemaObjectTable* notations, System_Xml::System::Xml::Schema::XmlSchemaObject* caller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifySchemaValid", std::vector<std::string> { "System.Xml.Schema.XmlSchemaObjectTable", "System.Xml.Schema.XmlSchemaObject" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)notations;
	params[1] = (intptr_t)caller;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XmlSchemaDatatype::IsEqual(mscorlib::System::Object* o1, mscorlib::System::Object* o2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEqual", std::vector<std::string> { "System.Object", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)o1;
	params[1] = (intptr_t)o2;
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
bool System_Xml::System::Xml::Schema::XmlSchemaDatatype::IsComparable(System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsComparable", std::vector<std::string> { "System.Xml.Schema.XmlSchemaDatatype" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dtype;
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
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaDatatype::get_TypeCodeString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TypeCodeString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaDatatype::TypeCodeToString(System_Xml::System::Xml::Schema::XmlTypeCode typeCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TypeCodeToString", std::vector<std::string> { "System.Xml.Schema.XmlTypeCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&typeCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaDatatype::ConcatenatedToString(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConcatenatedToString", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaDatatype* System_Xml::System::Xml::Schema::XmlSchemaDatatype::FromXmlTokenizedType(System_Xml::System::Xml::XmlTokenizedType token)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromXmlTokenizedType", std::vector<std::string> { "System.Xml.XmlTokenizedType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&token;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaDatatype*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaDatatype* System_Xml::System::Xml::Schema::XmlSchemaDatatype::FromXmlTokenizedTypeXsd(System_Xml::System::Xml::XmlTokenizedType token)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromXmlTokenizedTypeXsd", std::vector<std::string> { "System.Xml.XmlTokenizedType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&token;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaDatatype*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaDatatype* System_Xml::System::Xml::Schema::XmlSchemaDatatype::FromXdrName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromXdrName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaDatatype*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaDatatype* System_Xml::System::Xml::Schema::XmlSchemaDatatype::DeriveByUnion(IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* types, System_Xml::System::Xml::Schema::XmlSchemaType* schemaType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeriveByUnion", std::vector<std::string> { "System.Xml.Schema.XmlSchemaSimpleType[]", "System.Xml.Schema.XmlSchemaType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)types;
	params[1] = (intptr_t)schemaType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaDatatype*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaDatatype::XdrCanonizeUri(mscorlib::System::String* uri, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XdrCanonizeUri", std::vector<std::string> { "System.String", "System.Xml.XmlNameTable", "System.Xml.Schema.SchemaNames" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)nameTable;
	params[2] = (intptr_t)schemaNames;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaDatatype::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
