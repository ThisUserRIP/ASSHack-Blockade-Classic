#include "Mono_Security_Protocol_Ntlm_ChallengeResponse2.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Protocol.Ntlm", "ChallengeResponse2");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<uint8_t>* Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_LM(mscorlib::System::String* password, IL2CPP::Array<uint8_t>* challenge)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compute_LM", std::vector<std::string> { "System.String", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)password;
	params[1] = (intptr_t)challenge;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM_Password(mscorlib::System::String* password)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compute_NTLM_Password", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)password;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM(mscorlib::System::String* password, IL2CPP::Array<uint8_t>* challenge)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compute_NTLM", std::vector<std::string> { "System.String", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)password;
	params[1] = (intptr_t)challenge;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2_Session(mscorlib::System::String* password, IL2CPP::Array<uint8_t>* challenge, IL2CPP::Array<uint8_t>& lm, IL2CPP::Array<uint8_t>& ntlm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compute_NTLMv2_Session", std::vector<std::string> { "System.String", "System.Byte[]", "System.Byte[]&", "System.Byte[]&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)password;
	params[1] = (intptr_t)challenge;
	params[2] = (intptr_t)&lm;
	params[3] = (intptr_t)&ntlm;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2(Mono_Security::Mono::Security::Protocol::Ntlm::Type2Message* type2, mscorlib::System::String* username, mscorlib::System::String* password, mscorlib::System::String* domain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compute_NTLMv2", std::vector<std::string> { "Mono.Security.Protocol.Ntlm.Type2Message", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)type2;
	params[1] = (intptr_t)username;
	params[2] = (intptr_t)password;
	params[3] = (intptr_t)domain;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute(Mono_Security::Mono::Security::Protocol::Ntlm::Type2Message* type2, Mono_Security::Mono::Security::Protocol::Ntlm::NtlmAuthLevel level, mscorlib::System::String* username, mscorlib::System::String* password, mscorlib::System::String* domain, IL2CPP::Array<uint8_t>& lm, IL2CPP::Array<uint8_t>& ntlm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compute", std::vector<std::string> { "Mono.Security.Protocol.Ntlm.Type2Message", "Mono.Security.Protocol.Ntlm.NtlmAuthLevel", "System.String", "System.String", "System.String", "System.Byte[]&", "System.Byte[]&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)type2;
	params[1] = (intptr_t)&level;
	params[2] = (intptr_t)username;
	params[3] = (intptr_t)password;
	params[4] = (intptr_t)domain;
	params[5] = (intptr_t)&lm;
	params[6] = (intptr_t)&ntlm;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::GetResponse(IL2CPP::Array<uint8_t>* challenge, IL2CPP::Array<uint8_t>* pwd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResponse", std::vector<std::string> { "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)challenge;
	params[1] = (intptr_t)pwd;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::PrepareDESKey(IL2CPP::Array<uint8_t>* key56bits, int32_t position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareDESKey", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)key56bits;
	params[1] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::PasswordToKey(mscorlib::System::String* password, int32_t position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PasswordToKey", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)password;
	params[1] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Mono_Security::Mono::Security::Protocol::Ntlm::ChallengeResponse2::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
