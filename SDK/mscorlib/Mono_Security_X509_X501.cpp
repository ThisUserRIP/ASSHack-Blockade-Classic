#include "Mono_Security_X509_X501.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Security::X509::X501::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Mono.Security.X509", "X501");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Security::X509::X501::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* mscorlib::Mono::Security::X509::X501::ToString(mscorlib::Mono::Security::ASN1* seq)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "Mono.Security.ASN1" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)seq;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::Mono::Security::X509::X501::ToString(mscorlib::Mono::Security::ASN1* seq, bool reversed, mscorlib::System::String* separator, bool quotes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "Mono.Security.ASN1", "System.Boolean", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)seq;
	params[1] = (intptr_t)&reversed;
	params[2] = (intptr_t)separator;
	params[3] = (intptr_t)&quotes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::Mono::Security::X509::X501::AppendEntry(mscorlib::System::Text::StringBuilder* sb, mscorlib::Mono::Security::ASN1* entry, bool quotes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendEntry", std::vector<std::string> { "System.Text.StringBuilder", "Mono.Security.ASN1", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)sb;
	params[1] = (intptr_t)entry;
	params[2] = (intptr_t)&quotes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Security::X509::X501::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
