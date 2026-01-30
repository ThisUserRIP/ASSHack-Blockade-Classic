#include "Mono_Unity_UnityTls_unitytls_tlsctx_trace_callback.h"

IL2CPP::Il2CppClass* System::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::Mono::Unity::UnityTls::GetIl2CppClass(), "unitytls_tlsctx_trace_callback");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::_ctor(mscorlib::System::Object* object, intptr_t method)
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
void System::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::Invoke(void* userData, System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* traceMessage, intptr_t traceMessageLen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.Void*", "Mono.Unity.UnityTls/unitytls_tlsctx*", "System.Byte*", "System.IntPtr" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)userData;
	params[1] = (intptr_t)ctx;
	params[2] = (intptr_t)traceMessage;
	params[3] = (intptr_t)&traceMessageLen;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IAsyncResult* System::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::BeginInvoke(void* userData, System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* traceMessage, intptr_t traceMessageLen, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "System.Void*", "Mono.Unity.UnityTls/unitytls_tlsctx*", "System.Byte*", "System.IntPtr", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)userData;
	params[1] = (intptr_t)ctx;
	params[2] = (intptr_t)traceMessage;
	params[3] = (intptr_t)&traceMessageLen;
	params[4] = (intptr_t)callback;
	params[5] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
void System::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::EndInvoke(mscorlib::System::IAsyncResult* result)
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
