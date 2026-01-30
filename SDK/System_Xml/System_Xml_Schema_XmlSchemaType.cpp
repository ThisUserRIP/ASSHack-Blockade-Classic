#include "System_Xml_Schema_XmlSchemaType.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XmlSchemaType::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaType");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XmlSchemaType::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::System::Xml::Schema::XmlSchemaSimpleType* System_Xml::System::Xml::Schema::XmlSchemaType::GetBuiltInSimpleType(System_Xml::System::Xml::Schema::XmlTypeCode typeCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBuiltInSimpleType", std::vector<std::string> { "System.Xml.Schema.XmlTypeCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&typeCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaSimpleType*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaComplexType* System_Xml::System::Xml::Schema::XmlSchemaType::GetBuiltInComplexType(System_Xml::System::Xml::XmlQualifiedName* qualifiedName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBuiltInComplexType", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qualifiedName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaComplexType*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaType::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaType::set_Name(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Name", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod System_Xml::System::Xml::Schema::XmlSchemaType::get_Final()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Final");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod>(*(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::XmlSchemaType::set_Final(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Final", std::vector<std::string> { "System.Xml.Schema.XmlSchemaDerivationMethod" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlQualifiedName* System_Xml::System::Xml::Schema::XmlSchemaType::get_QualifiedName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_QualifiedName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlQualifiedName*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod System_Xml::System::Xml::Schema::XmlSchemaType::get_FinalResolved()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FinalResolved");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod>(*(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::XmlSchemaType* System_Xml::System::Xml::Schema::XmlSchemaType::get_BaseXmlSchemaType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BaseXmlSchemaType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaType*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod System_Xml::System::Xml::Schema::XmlSchemaType::get_DerivedBy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DerivedBy");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod>(*(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::XmlSchemaDatatype* System_Xml::System::Xml::Schema::XmlSchemaType::get_Datatype()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Datatype");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaDatatype*)returnValue;
}
bool System_Xml::System::Xml::Schema::XmlSchemaType::get_IsMixed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsMixed");
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
void System_Xml::System::Xml::Schema::XmlSchemaType::set_IsMixed(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_IsMixed", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlTypeCode System_Xml::System::Xml::Schema::XmlSchemaType::get_TypeCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TypeCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlTypeCode ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlTypeCode));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlTypeCode>(*(System_Xml::System::Xml::Schema::XmlTypeCode*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::XmlValueConverter* System_Xml::System::Xml::Schema::XmlSchemaType::get_ValueConverter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ValueConverter");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlValueConverter*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaContentType System_Xml::System::Xml::Schema::XmlSchemaType::get_SchemaContentType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SchemaContentType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaContentType ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaContentType));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaContentType>(*(System_Xml::System::Xml::Schema::XmlSchemaContentType*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::XmlSchemaType::SetQualifiedName(System_Xml::System::Xml::XmlQualifiedName* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetQualifiedName", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaType::SetFinalResolved(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFinalResolved", std::vector<std::string> { "System.Xml.Schema.XmlSchemaDerivationMethod" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaType::SetBaseSchemaType(System_Xml::System::Xml::Schema::XmlSchemaType* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBaseSchemaType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaType::SetDerivedBy(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDerivedBy", std::vector<std::string> { "System.Xml.Schema.XmlSchemaDerivationMethod" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaType::SetDatatype(System_Xml::System::Xml::Schema::XmlSchemaDatatype* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDatatype", std::vector<std::string> { "System.Xml.Schema.XmlSchemaDatatype" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::SchemaElementDecl* System_Xml::System::Xml::Schema::XmlSchemaType::get_ElementDecl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ElementDecl");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaElementDecl*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaType::set_ElementDecl(System_Xml::System::Xml::Schema::SchemaElementDecl* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ElementDecl", std::vector<std::string> { "System.Xml.Schema.SchemaElementDecl" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaType* System_Xml::System::Xml::Schema::XmlSchemaType::get_Redefined()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Redefined");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaType*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaType::set_Redefined(System_Xml::System::Xml::Schema::XmlSchemaType* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Redefined", std::vector<std::string> { "System.Xml.Schema.XmlSchemaType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaType::SetContentType(System_Xml::System::Xml::Schema::XmlSchemaContentType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetContentType", std::vector<std::string> { "System.Xml.Schema.XmlSchemaContentType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XmlSchemaType::IsDerivedFrom(System_Xml::System::Xml::Schema::XmlSchemaType* derivedType, System_Xml::System::Xml::Schema::XmlSchemaType* baseType, System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod except)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDerivedFrom", std::vector<std::string> { "System.Xml.Schema.XmlSchemaType", "System.Xml.Schema.XmlSchemaType", "System.Xml.Schema.XmlSchemaDerivationMethod" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)derivedType;
	params[1] = (intptr_t)baseType;
	params[2] = (intptr_t)&except;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool System_Xml::System::Xml::Schema::XmlSchemaType::IsDerivedFromDatatype(System_Xml::System::Xml::Schema::XmlSchemaDatatype* derivedDataType, System_Xml::System::Xml::Schema::XmlSchemaDatatype* baseDataType, System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod except)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDerivedFromDatatype", std::vector<std::string> { "System.Xml.Schema.XmlSchemaDatatype", "System.Xml.Schema.XmlSchemaDatatype", "System.Xml.Schema.XmlSchemaDerivationMethod" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)derivedDataType;
	params[1] = (intptr_t)baseDataType;
	params[2] = (intptr_t)&except;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
mscorlib::System::String* System_Xml::System::Xml::Schema::XmlSchemaType::get_NameAttribute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NameAttribute");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaType::set_NameAttribute(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_NameAttribute", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaType::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
