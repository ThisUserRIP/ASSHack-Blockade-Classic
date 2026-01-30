#include "System_Runtime_Remoting_Proxies_RealProxy.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Proxies::RealProxy::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Proxies", "RealProxy");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Proxies::RealProxy::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Proxies::RealProxy::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Proxies::RealProxy::_ctor(mscorlib::System::Type* classToProxy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)classToProxy;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Proxies::RealProxy::_ctor(mscorlib::System::Type* classToProxy, mscorlib::System::Runtime::Remoting::ClientIdentity* identity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type", "System.Runtime.Remoting.ClientIdentity" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)classToProxy;
	params[1] = (intptr_t)identity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Proxies::RealProxy::_ctor(mscorlib::System::Type* classToProxy, intptr_t stub, mscorlib::System::Object* stubData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type", "System.IntPtr", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)classToProxy;
	params[1] = (intptr_t)&stub;
	params[2] = (intptr_t)stubData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Proxies::RealProxy::InternalGetProxyType(mscorlib::System::Object* transparentProxy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetProxyType", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)transparentProxy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Proxies::RealProxy::GetProxiedType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProxiedType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Proxies::RealProxy::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::Identity* mscorlib::System::Runtime::Remoting::Proxies::RealProxy::get_ObjectIdentity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ObjectIdentity");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Identity*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Proxies::RealProxy::set_ObjectIdentity(mscorlib::System::Runtime::Remoting::Identity* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ObjectIdentity", std::vector<std::string> { "System.Runtime.Remoting.Identity" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::Messaging::IMessage* mscorlib::System::Runtime::Remoting::Proxies::RealProxy::Invoke(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessage*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::Proxies::RealProxy::PrivateInvoke(mscorlib::System::Runtime::Remoting::Proxies::RealProxy* rp, mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Exception& exc, IL2CPP::Array<mscorlib::System::Object*>& out_args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrivateInvoke", std::vector<std::string> { "System.Runtime.Remoting.Proxies.RealProxy", "System.Runtime.Remoting.Messaging.IMessage", "System.Exception&", "System.Object[]&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rp;
	params[1] = (intptr_t)msg;
	params[2] = (intptr_t)&exc;
	params[3] = (intptr_t)&out_args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::Proxies::RealProxy::InternalGetTransparentProxy(mscorlib::System::String* className)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetTransparentProxy", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)className;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::Proxies::RealProxy::GetTransparentProxy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTransparentProxy");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Proxies::RealProxy::AttachServer(mscorlib::System::MarshalByRefObject* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AttachServer", std::vector<std::string> { "System.MarshalByRefObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Proxies::RealProxy::SetTargetDomain(int32_t domainId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTargetDomain", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&domainId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::Proxies::RealProxy::GetAppDomainTarget()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAppDomainTarget");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::Runtime::Remoting::Proxies::RealProxy::ProcessResponse(mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage* mrm, mscorlib::System::Runtime::Remoting::Messaging::MonoMethodMessage* call)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessResponse", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMethodReturnMessage", "System.Runtime.Remoting.Messaging.MonoMethodMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mrm;
	params[1] = (intptr_t)call;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
