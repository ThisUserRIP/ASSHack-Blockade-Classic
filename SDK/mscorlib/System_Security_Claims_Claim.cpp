#include "System_Security_Claims_Claim.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Claims::Claim::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Claims", "Claim");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Claims::Claim::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Security::Claims::Claim::_ctor(mscorlib::System::String* type, mscorlib::System::String* value, mscorlib::System::String* valueType, mscorlib::System::String* issuer, mscorlib::System::String* originalIssuer, mscorlib::System::Security::Claims::ClaimsIdentity* subject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.String", "System.Security.Claims.ClaimsIdentity" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)value;
	params[2] = (intptr_t)valueType;
	params[3] = (intptr_t)issuer;
	params[4] = (intptr_t)originalIssuer;
	params[5] = (intptr_t)subject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Claims::Claim::_ctor(mscorlib::System::String* type, mscorlib::System::String* value, mscorlib::System::String* valueType, mscorlib::System::String* issuer, mscorlib::System::String* originalIssuer, mscorlib::System::Security::Claims::ClaimsIdentity* subject, mscorlib::System::String* propertyKey, mscorlib::System::String* propertyValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.String", "System.Security.Claims.ClaimsIdentity", "System.String", "System.String" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)value;
	params[2] = (intptr_t)valueType;
	params[3] = (intptr_t)issuer;
	params[4] = (intptr_t)originalIssuer;
	params[5] = (intptr_t)subject;
	params[6] = (intptr_t)propertyKey;
	params[7] = (intptr_t)propertyValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Claims::Claim::_ctor(mscorlib::System::Security::Claims::Claim* other, mscorlib::System::Security::Claims::ClaimsIdentity* subject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Security.Claims.Claim", "System.Security.Claims.ClaimsIdentity" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)other;
	params[1] = (intptr_t)subject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Claims::Claim::OnDeserializedMethod(mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDeserializedMethod", std::vector<std::string> { "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* mscorlib::System::Security::Claims::Claim::get_Properties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Properties");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>*)returnValue;
}
mscorlib::System::Security::Claims::ClaimsIdentity* mscorlib::System::Security::Claims::Claim::get_Subject()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Subject");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Claims::ClaimsIdentity*)returnValue;
}
void mscorlib::System::Security::Claims::Claim::set_Subject(mscorlib::System::Security::Claims::ClaimsIdentity* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Subject", std::vector<std::string> { "System.Security.Claims.ClaimsIdentity" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Security::Claims::Claim::get_Type()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Type");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Security::Claims::Claim::get_Value()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Value");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Security::Claims::Claim* mscorlib::System::Security::Claims::Claim::Clone(mscorlib::System::Security::Claims::ClaimsIdentity* identity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone", std::vector<std::string> { "System.Security.Claims.ClaimsIdentity" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)identity;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Claims::Claim*)returnValue;
}
mscorlib::System::String* mscorlib::System::Security::Claims::Claim::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
