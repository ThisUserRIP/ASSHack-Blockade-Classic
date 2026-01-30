#include "Mono_Security_Interface_MonoTlsSettings.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Interface::MonoTlsSettings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Interface", "MonoTlsSettings");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Interface::MonoTlsSettings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RemoteCertificateValidationCallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*)returnValue;
}
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback(Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_RemoteCertificateValidationCallback", std::vector<std::string> { "Mono.Security.Interface.MonoRemoteCertificateValidationCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ClientCertificateSelectionCallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*)returnValue;
}
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback(Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ClientCertificateSelectionCallback", std::vector<std::string> { "Mono.Security.Interface.MonoLocalCertificateSelectionCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Nullable_1<mscorlib::System::Boolean> Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UseServicePointManagerCallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Nullable_1<mscorlib::System::Boolean> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Nullable_1<mscorlib::System::Boolean>));
		return ret;
	}
	return static_cast<mscorlib::System::Nullable_1<mscorlib::System::Boolean>>(*(mscorlib::System::Nullable_1<mscorlib::System::Boolean>*)il2cpp_object_unbox(returnValue));
}
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback(mscorlib::System::Nullable_1<mscorlib::System::Boolean> value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_UseServicePointManagerCallback", std::vector<std::string> { "System.Nullable`1<System.Boolean>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CallbackNeedsCertificateChain");
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
mscorlib::System::Nullable_1<mscorlib::System::DateTime> Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CertificateValidationTime");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Nullable_1<mscorlib::System::DateTime> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Nullable_1<mscorlib::System::DateTime>));
		return ret;
	}
	return static_cast<mscorlib::System::Nullable_1<mscorlib::System::DateTime>>(*(mscorlib::System::Nullable_1<mscorlib::System::DateTime>*)il2cpp_object_unbox(returnValue));
}
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime(mscorlib::System::Nullable_1<mscorlib::System::DateTime> value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_CertificateValidationTime", std::vector<std::string> { "System.Nullable`1<System.DateTime>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TrustAnchors");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)returnValue;
}
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors(System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_TrustAnchors", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509CertificateCollection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_UserSettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UserSettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::set_UserSettings(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_UserSettings", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<mscorlib::System::String*>* Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CertificateSearchPaths");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths(IL2CPP::Array<mscorlib::System::String*>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_CertificateSearchPaths", std::vector<std::string> { "System.String[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SendCloseNotify");
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
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_SendCloseNotify", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::TlsProtocols> Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EnabledProtocols");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::TlsProtocols> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::TlsProtocols>));
		return ret;
	}
	return static_cast<mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::TlsProtocols>>(*(mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::TlsProtocols>*)il2cpp_object_unbox(returnValue));
}
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols(mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::TlsProtocols> value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_EnabledProtocols", std::vector<std::string> { "System.Nullable`1<Mono.Security.Interface.TlsProtocols>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Mono_Security::Mono::Security::Interface::CipherSuiteCode>* Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EnabledCiphers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Mono_Security::Mono::Security::Interface::CipherSuiteCode>*)returnValue;
}
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers(IL2CPP::Array<Mono_Security::Mono::Security::Interface::CipherSuiteCode>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_EnabledCiphers", std::vector<std::string> { "Mono.Security.Interface.CipherSuiteCode[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Mono_Security::Mono::Security::Interface::MonoTlsSettings* Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DefaultSettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoTlsSettings*)returnValue;
}
Mono_Security::Mono::Security::Interface::MonoTlsSettings* Mono_Security::Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyDefaultSettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoTlsSettings*)returnValue;
}
Mono_Security::Mono::Security::Interface::ICertificateValidator* Mono_Security::Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CertificateValidator");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::ICertificateValidator*)returnValue;
}
Mono_Security::Mono::Security::Interface::MonoTlsSettings* Mono_Security::Mono::Security::Interface::MonoTlsSettings::CloneWithValidator(Mono_Security::Mono::Security::Interface::ICertificateValidator* validator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CloneWithValidator", std::vector<std::string> { "Mono.Security.Interface.ICertificateValidator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)validator;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoTlsSettings*)returnValue;
}
Mono_Security::Mono::Security::Interface::MonoTlsSettings* Mono_Security::Mono::Security::Interface::MonoTlsSettings::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoTlsSettings*)returnValue;
}
void Mono_Security::Mono::Security::Interface::MonoTlsSettings::_ctor(Mono_Security::Mono::Security::Interface::MonoTlsSettings* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Security.Interface.MonoTlsSettings" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
