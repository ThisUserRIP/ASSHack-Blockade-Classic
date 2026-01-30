#include "Mono_Unity_UnityTls_unitytls_tlsctx_certificate_callback.h"

IL2CPP::Il2CppClass* System::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::Mono::Unity::UnityTls::GetIl2CppClass(), "unitytls_tlsctx_certificate_callback");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::_ctor(mscorlib::System::Object* object, intptr_t method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)object;
	params[1] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::Invoke(void* userData, System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* cn, intptr_t cnLen, System::Mono::Unity::UnityTls_unitytls_x509name* caList, intptr_t caListLen, System::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, System::Mono::Unity::UnityTls_unitytls_key_ref* key, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.Void*", "Mono.Unity.UnityTls/unitytls_tlsctx*", "System.Byte*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_x509name*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_x509list_ref*", "Mono.Unity.UnityTls/unitytls_key_ref*", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)userData;
	params[1] = (intptr_t)ctx;
	params[2] = (intptr_t)cn;
	params[3] = (intptr_t)&cnLen;
	params[4] = (intptr_t)caList;
	params[5] = (intptr_t)&caListLen;
	params[6] = (intptr_t)chain;
	params[7] = (intptr_t)key;
	params[8] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IAsyncResult* System::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::BeginInvoke(void* userData, System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* cn, intptr_t cnLen, System::Mono::Unity::UnityTls_unitytls_x509name* caList, intptr_t caListLen, System::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, System::Mono::Unity::UnityTls_unitytls_key_ref* key, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "System.Void*", "Mono.Unity.UnityTls/unitytls_tlsctx*", "System.Byte*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_x509name*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_x509list_ref*", "Mono.Unity.UnityTls/unitytls_key_ref*", "Mono.Unity.UnityTls/unitytls_errorstate*", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)userData;
	params[1] = (intptr_t)ctx;
	params[2] = (intptr_t)cn;
	params[3] = (intptr_t)&cnLen;
	params[4] = (intptr_t)caList;
	params[5] = (intptr_t)&caListLen;
	params[6] = (intptr_t)chain;
	params[7] = (intptr_t)key;
	params[8] = (intptr_t)errorState;
	params[9] = (intptr_t)callback;
	params[10] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
void System::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::EndInvoke(mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
