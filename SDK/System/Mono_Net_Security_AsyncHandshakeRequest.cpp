#include "Mono_Net_Security_AsyncHandshakeRequest.h"

IL2CPP::Il2CppClass* System::Mono::Net::Security::AsyncHandshakeRequest::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Net.Security", "AsyncHandshakeRequest");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::Security::AsyncHandshakeRequest::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Net::Security::AsyncHandshakeRequest::_ctor(System::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Net.Security.MobileAuthenticatedStream", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)&sync;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::Mono::Net::Security::AsyncOperationStatus System::Mono::Net::Security::AsyncHandshakeRequest::Run(System::Mono::Net::Security::AsyncOperationStatus status)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Run", std::vector<std::string> { "Mono.Net.Security.AsyncOperationStatus" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&status;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Mono::Net::Security::AsyncOperationStatus ret;
		std::memset(&ret, 0, sizeof(System::Mono::Net::Security::AsyncOperationStatus));
		return ret;
	}
	return static_cast<System::Mono::Net::Security::AsyncOperationStatus>(*(System::Mono::Net::Security::AsyncOperationStatus*)il2cpp_object_unbox(returnValue));
}
