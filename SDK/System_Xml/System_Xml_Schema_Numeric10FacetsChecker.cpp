#include "System_Xml_Schema_Numeric10FacetsChecker.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::Numeric10FacetsChecker::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "Numeric10FacetsChecker");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::Numeric10FacetsChecker::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::Numeric10FacetsChecker::_ctor(mscorlib::System::Decimal minVal, mscorlib::System::Decimal maxVal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&minVal;
	params[1] = (intptr_t)&maxVal;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Exception* System_Xml::System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets(mscorlib::System::Object* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
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
mscorlib::System::Exception* System_Xml::System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets(mscorlib::System::Decimal value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckValueFacets", std::vector<std::string> { "System.Decimal", "System.Xml.Schema.XmlSchemaDatatype" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)datatype;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
mscorlib::System::Exception* System_Xml::System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets(int64_t value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckValueFacets", std::vector<std::string> { "System.Int64", "System.Xml.Schema.XmlSchemaDatatype" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)datatype;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
mscorlib::System::Exception* System_Xml::System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets(int32_t value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckValueFacets", std::vector<std::string> { "System.Int32", "System.Xml.Schema.XmlSchemaDatatype" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)datatype;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
mscorlib::System::Exception* System_Xml::System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets(int16_t value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckValueFacets", std::vector<std::string> { "System.Int16", "System.Xml.Schema.XmlSchemaDatatype" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)datatype;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
bool System_Xml::System::Xml::Schema::Numeric10FacetsChecker::MatchEnumeration(mscorlib::System::Object* value, mscorlib::System::Collections::ArrayList* enumeration, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype)
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
bool System_Xml::System::Xml::Schema::Numeric10FacetsChecker::MatchEnumeration(mscorlib::System::Decimal value, mscorlib::System::Collections::ArrayList* enumeration, System_Xml::System::Xml::Schema::XmlValueConverter* valueConverter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchEnumeration", std::vector<std::string> { "System.Decimal", "System.Collections.ArrayList", "System.Xml.Schema.XmlValueConverter" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)enumeration;
	params[2] = (intptr_t)valueConverter;
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
mscorlib::System::Exception* System_Xml::System::Xml::Schema::Numeric10FacetsChecker::CheckTotalAndFractionDigits(mscorlib::System::Decimal value, int32_t totalDigits, int32_t fractionDigits, bool checkTotal, bool checkFraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckTotalAndFractionDigits", std::vector<std::string> { "System.Decimal", "System.Int32", "System.Int32", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&totalDigits;
	params[2] = (intptr_t)&fractionDigits;
	params[3] = (intptr_t)&checkTotal;
	params[4] = (intptr_t)&checkFraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
void System_Xml::System::Xml::Schema::Numeric10FacetsChecker::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
