#include "System_Xml_Schema_ContentValidator.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::ContentValidator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "ContentValidator");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::ContentValidator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::ContentValidator::_ctor(System_Xml::System::Xml::Schema::XmlSchemaContentType contentType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.XmlSchemaContentType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&contentType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ContentValidator::_ctor(System_Xml::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.XmlSchemaContentType", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&contentType;
	params[1] = (intptr_t)&isOpen;
	params[2] = (intptr_t)&isEmptiable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaContentType System_Xml::System::Xml::Schema::ContentValidator::get_ContentType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ContentType");
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
bool System_Xml::System::Xml::Schema::ContentValidator::get_PreserveWhitespace()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PreserveWhitespace");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::Schema::ContentValidator::get_IsEmptiable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsEmptiable");
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
bool System_Xml::System::Xml::Schema::ContentValidator::get_IsOpen()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsOpen");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::ContentValidator::set_IsOpen(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_IsOpen", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ContentValidator::InitValidation(System_Xml::System::Xml::Schema::ValidationState* context)
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
mscorlib::System::Object* System_Xml::System::Xml::Schema::ContentValidator::ValidateElement(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::ValidationState* context, int32_t& errorCode)
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
bool System_Xml::System::Xml::Schema::ContentValidator::CompleteValidation(System_Xml::System::Xml::Schema::ValidationState* context)
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
mscorlib::System::Collections::ArrayList* System_Xml::System::Xml::Schema::ContentValidator::ExpectedElements(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly)
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
mscorlib::System::Collections::ArrayList* System_Xml::System::Xml::Schema::ContentValidator::ExpectedParticles(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet)
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
void System_Xml::System::Xml::Schema::ContentValidator::AddParticleToExpected(System_Xml::System::Xml::Schema::XmlSchemaParticle* p, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet, mscorlib::System::Collections::ArrayList* particles)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddParticleToExpected", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle", "System.Xml.Schema.XmlSchemaSet", "System.Collections.ArrayList" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)schemaSet;
	params[2] = (intptr_t)particles;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ContentValidator::AddParticleToExpected(System_Xml::System::Xml::Schema::XmlSchemaParticle* p, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet, mscorlib::System::Collections::ArrayList* particles, bool global)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddParticleToExpected", std::vector<std::string> { "System.Xml.Schema.XmlSchemaParticle", "System.Xml.Schema.XmlSchemaSet", "System.Collections.ArrayList", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)schemaSet;
	params[2] = (intptr_t)particles;
	params[3] = (intptr_t)&global;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::ContentValidator::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
