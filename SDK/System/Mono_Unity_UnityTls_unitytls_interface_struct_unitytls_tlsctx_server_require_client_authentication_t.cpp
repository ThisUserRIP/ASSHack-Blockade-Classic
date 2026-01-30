#include "Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t.h"

IL2CPP::Il2CppClass* System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::Mono::Unity::UnityTls_unitytls_interface_struct::GetIl2CppClass(), "unitytls_tlsctx_server_require_client_authentication_t");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t::_ctor(mscorlib::System::Object* object, intptr_t method)
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
void System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t::Invoke(System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, System::Mono::Unity::UnityTls_unitytls_x509list_ref clientAuthCAList, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_tlsctx*", "Mono.Unity.UnityTls/unitytls_x509list_ref", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)ctx;
	params[1] = (intptr_t)&clientAuthCAList;
	params[2] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IAsyncResult* System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t::BeginInvoke(System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, System::Mono::Unity::UnityTls_unitytls_x509list_ref clientAuthCAList, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_tlsctx*", "Mono.Unity.UnityTls/unitytls_x509list_ref", "Mono.Unity.UnityTls/unitytls_errorstate*", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)ctx;
	params[1] = (intptr_t)&clientAuthCAList;
	params[2] = (intptr_t)errorState;
	params[3] = (intptr_t)callback;
	params[4] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
void System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t::EndInvoke(mscorlib::System::IAsyncResult* result)
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
