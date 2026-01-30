#include "Mono_Net_Security_MonoTlsStream.h"

IL2CPP::Il2CppClass* System::Mono::Net::Security::MonoTlsStream::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Net.Security", "MonoTlsStream");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::Security::MonoTlsStream::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Net::HttpWebRequest* System::Mono::Net::Security::MonoTlsStream::get_Request()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Request");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::HttpWebRequest*)returnValue;
}
System::System::Net::WebExceptionStatus System::Mono::Net::Security::MonoTlsStream::get_ExceptionStatus()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ExceptionStatus");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::WebExceptionStatus ret;
		std::memset(&ret, 0, sizeof(System::Net::WebExceptionStatus));
		return ret;
	}
	return static_cast<System::Net::WebExceptionStatus>(*(System::Net::WebExceptionStatus*)il2cpp_object_unbox(returnValue));
}
bool System::Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CertificateValidationFailed");
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
void System::Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_CertificateValidationFailed", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Net::Security::MonoTlsStream::_ctor(System::Net::HttpWebRequest* request, System::Net::Sockets::NetworkStream* networkStream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Net.HttpWebRequest", "System.Net.Sockets.NetworkStream" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)networkStream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::IO::Stream>* System::Mono::Net::Security::MonoTlsStream::CreateStream(System::Net::WebConnectionTunnel* tunnel, mscorlib::System::Threading::CancellationToken cancellationToken)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateStream", std::vector<std::string> { "System.Net.WebConnectionTunnel", "System.Threading.CancellationToken" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tunnel;
	params[1] = (intptr_t)&cancellationToken;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::IO::Stream>*)returnValue;
}
