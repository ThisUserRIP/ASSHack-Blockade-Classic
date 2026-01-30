#include "Mono_Security_ASN1Convert.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::ASN1Convert::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security", "ASN1Convert");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::ASN1Convert::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Mono_Security::Mono::Security::ASN1* Mono_Security::Mono::Security::ASN1Convert::FromInt32(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromInt32", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::ASN1*)returnValue;
}
Mono_Security::Mono::Security::ASN1* Mono_Security::Mono::Security::ASN1Convert::FromOid(mscorlib::System::String* oid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromOid", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)oid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::ASN1*)returnValue;
}
Mono_Security::Mono::Security::ASN1* Mono_Security::Mono::Security::ASN1Convert::FromUnsignedBigInteger(IL2CPP::Array<uint8_t>* big)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromUnsignedBigInteger", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)big;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::ASN1*)returnValue;
}
int32_t Mono_Security::Mono::Security::ASN1Convert::ToInt32(Mono_Security::Mono::Security::ASN1* asn1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToInt32", std::vector<std::string> { "Mono.Security.ASN1" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asn1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
mscorlib::System::String* Mono_Security::Mono::Security::ASN1Convert::ToOid(Mono_Security::Mono::Security::ASN1* asn1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToOid", std::vector<std::string> { "Mono.Security.ASN1" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asn1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::DateTime Mono_Security::Mono::Security::ASN1Convert::ToDateTime(Mono_Security::Mono::Security::ASN1* time)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToDateTime", std::vector<std::string> { "Mono.Security.ASN1" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)time;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
