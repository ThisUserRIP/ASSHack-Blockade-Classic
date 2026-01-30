#include "System_Xml_Schema_RangeContentValidator.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::RangeContentValidator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "RangeContentValidator");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::RangeContentValidator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::RangeContentValidator::_ctor(System_Xml::System::Xml::Schema::BitSet* firstpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos, System_Xml::System::Xml::Schema::SymbolsDictionary* symbols, System_Xml::System::Xml::Schema::Positions* positions, int32_t endMarkerPos, System_Xml::System::Xml::Schema::XmlSchemaContentType contentType, bool isEmptiable, System_Xml::System::Xml::Schema::BitSet* positionsWithRangeTerminals, int32_t minmaxNodesCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.BitSet", "System.Xml.Schema.BitSet[]", "System.Xml.Schema.SymbolsDictionary", "System.Xml.Schema.Positions", "System.Int32", "System.Xml.Schema.XmlSchemaContentType", "System.Boolean", "System.Xml.Schema.BitSet", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)firstpos;
	params[1] = (intptr_t)followpos;
	params[2] = (intptr_t)symbols;
	params[3] = (intptr_t)positions;
	params[4] = (intptr_t)&endMarkerPos;
	params[5] = (intptr_t)&contentType;
	params[6] = (intptr_t)&isEmptiable;
	params[7] = (intptr_t)positionsWithRangeTerminals;
	params[8] = (intptr_t)&minmaxNodesCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::RangeContentValidator::InitValidation(System_Xml::System::Xml::Schema::ValidationState* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitValidation", std::vector<std::string> { "System.Xml.Schema.ValidationState" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::RangeContentValidator::ValidateElement(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::ValidationState* context, int32_t& errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateElement", std::vector<std::string> { "System.Xml.XmlQualifiedName", "System.Xml.Schema.ValidationState", "System.Int32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)context;
	params[2] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool System_Xml::System::Xml::Schema::RangeContentValidator::CompleteValidation(System_Xml::System::Xml::Schema::ValidationState* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteValidation", std::vector<std::string> { "System.Xml.Schema.ValidationState" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)context;
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
mscorlib::System::Collections::ArrayList* System_Xml::System::Xml::Schema::RangeContentValidator::ExpectedElements(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpectedElements", std::vector<std::string> { "System.Xml.Schema.ValidationState", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)context;
	params[1] = (intptr_t)&isRequiredOnly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ArrayList*)returnValue;
}
mscorlib::System::Collections::ArrayList* System_Xml::System::Xml::Schema::RangeContentValidator::ExpectedParticles(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpectedParticles", std::vector<std::string> { "System.Xml.Schema.ValidationState", "System.Boolean", "System.Xml.Schema.XmlSchemaSet" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)context;
	params[1] = (intptr_t)&isRequiredOnly;
	params[2] = (intptr_t)schemaSet;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ArrayList*)returnValue;
}
