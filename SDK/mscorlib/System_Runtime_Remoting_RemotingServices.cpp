#include "System_Runtime_Remoting_RemotingServices.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::RemotingServices::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting", "RemotingServices");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::RemotingServices::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::RemotingServices::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::InternalExecute(mscorlib::System::Reflection::MethodBase* method, mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Object*>* parameters, IL2CPP::Array<mscorlib::System::Object*>& out_args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalExecute", std::vector<std::string> { "System.Reflection.MethodBase", "System.Object", "System.Object[]", "System.Object[]&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)method;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)parameters;
	params[3] = (intptr_t)&out_args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Reflection::MethodBase* mscorlib::System::Runtime::Remoting::RemotingServices::GetVirtualMethod(mscorlib::System::Type* type, mscorlib::System::Reflection::MethodBase* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVirtualMethod", std::vector<std::string> { "System.Type", "System.Reflection.MethodBase" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)method;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodBase*)returnValue;
}
bool mscorlib::System::Runtime::Remoting::RemotingServices::IsTransparentProxy(mscorlib::System::Object* proxy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsTransparentProxy", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)proxy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage* mscorlib::System::Runtime::Remoting::RemotingServices::InternalExecuteMessage(mscorlib::System::MarshalByRefObject* target, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* reqMsg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalExecuteMessage", std::vector<std::string> { "System.MarshalByRefObject", "System.Runtime.Remoting.Messaging.IMethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)reqMsg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::Connect(mscorlib::System::Type* classToProxy, mscorlib::System::String* url)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "System.Type", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)classToProxy;
	params[1] = (intptr_t)url;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::Connect(mscorlib::System::Type* classToProxy, mscorlib::System::String* url, mscorlib::System::Object* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "System.Type", "System.String", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)classToProxy;
	params[1] = (intptr_t)url;
	params[2] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::RemotingServices::GetServerTypeForUri(mscorlib::System::String* URI)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetServerTypeForUri", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)URI;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::Unmarshal(mscorlib::System::Runtime::Remoting::ObjRef* objectRef)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Unmarshal", std::vector<std::string> { "System.Runtime.Remoting.ObjRef" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)objectRef;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::Unmarshal(mscorlib::System::Runtime::Remoting::ObjRef* objectRef, bool fRefine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Unmarshal", std::vector<std::string> { "System.Runtime.Remoting.ObjRef", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)objectRef;
	params[1] = (intptr_t)&fRefine;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Runtime::Remoting::ObjRef* mscorlib::System::Runtime::Remoting::RemotingServices::Marshal(mscorlib::System::MarshalByRefObject* Obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Marshal", std::vector<std::string> { "System.MarshalByRefObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)Obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::ObjRef*)returnValue;
}
mscorlib::System::Runtime::Remoting::ObjRef* mscorlib::System::Runtime::Remoting::RemotingServices::Marshal(mscorlib::System::MarshalByRefObject* Obj, mscorlib::System::String* ObjURI, mscorlib::System::Type* RequestedType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Marshal", std::vector<std::string> { "System.MarshalByRefObject", "System.String", "System.Type" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)Obj;
	params[1] = (intptr_t)ObjURI;
	params[2] = (intptr_t)RequestedType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::ObjRef*)returnValue;
}
mscorlib::System::String* mscorlib::System::Runtime::Remoting::RemotingServices::NewUri()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NewUri");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Runtime::Remoting::Proxies::RealProxy* mscorlib::System::Runtime::Remoting::RemotingServices::GetRealProxy(mscorlib::System::Object* proxy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRealProxy", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)proxy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Proxies::RealProxy*)returnValue;
}
mscorlib::System::Reflection::MethodBase* mscorlib::System::Runtime::Remoting::RemotingServices::GetMethodBaseFromMethodMessage(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodBaseFromMethodMessage", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMethodMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodBase*)returnValue;
}
mscorlib::System::Reflection::MethodBase* mscorlib::System::Runtime::Remoting::RemotingServices::GetMethodBaseFromName(mscorlib::System::Type* type, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Type*>* signature)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodBaseFromName", std::vector<std::string> { "System.Type", "System.String", "System.Type[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)methodName;
	params[2] = (intptr_t)signature;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodBase*)returnValue;
}
mscorlib::System::Reflection::MethodBase* mscorlib::System::Runtime::Remoting::RemotingServices::FindInterfaceMethod(mscorlib::System::Type* type, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Type*>* signature)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindInterfaceMethod", std::vector<std::string> { "System.Type", "System.String", "System.Type[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)methodName;
	params[2] = (intptr_t)signature;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodBase*)returnValue;
}
void mscorlib::System::Runtime::Remoting::RemotingServices::GetObjectData(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectData", std::vector<std::string> { "System.Object", "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)info;
	params[2] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::Remoting::RemotingServices::IsOneWay(mscorlib::System::Reflection::MethodBase* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsOneWay", std::vector<std::string> { "System.Reflection.MethodBase" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)method;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::CreateClientProxy(mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry* entry, IL2CPP::Array<mscorlib::System::Object*>* activationAttributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateClientProxy", std::vector<std::string> { "System.Runtime.Remoting.ActivatedClientTypeEntry", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)entry;
	params[1] = (intptr_t)activationAttributes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::CreateClientProxy(mscorlib::System::Type* objectType, mscorlib::System::String* url, IL2CPP::Array<mscorlib::System::Object*>* activationAttributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateClientProxy", std::vector<std::string> { "System.Type", "System.String", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)url;
	params[2] = (intptr_t)activationAttributes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::CreateClientProxy(mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry* entry)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateClientProxy", std::vector<std::string> { "System.Runtime.Remoting.WellKnownClientTypeEntry" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)entry;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::CreateClientProxyForContextBound(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Object*>* activationAttributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateClientProxyForContextBound", std::vector<std::string> { "System.Type", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)activationAttributes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Runtime::Remoting::Identity* mscorlib::System::Runtime::Remoting::RemotingServices::GetIdentityForUri(mscorlib::System::String* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIdentityForUri", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Identity*)returnValue;
}
mscorlib::System::String* mscorlib::System::Runtime::Remoting::RemotingServices::RemoveAppNameFromUri(mscorlib::System::String* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveAppNameFromUri", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Runtime::Remoting::ClientIdentity* mscorlib::System::Runtime::Remoting::RemotingServices::GetOrCreateClientIdentity(mscorlib::System::Runtime::Remoting::ObjRef* objRef, mscorlib::System::Type* proxyType, mscorlib::System::Object& clientProxy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOrCreateClientIdentity", std::vector<std::string> { "System.Runtime.Remoting.ObjRef", "System.Type", "System.Object&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objRef;
	params[1] = (intptr_t)proxyType;
	params[2] = (intptr_t)&clientProxy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::ClientIdentity*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* mscorlib::System::Runtime::Remoting::RemotingServices::GetClientChannelSinkChain(mscorlib::System::String* url, mscorlib::System::Object* channelData, mscorlib::System::String& objectUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetClientChannelSinkChain", std::vector<std::string> { "System.String", "System.Object", "System.String&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)channelData;
	params[2] = (intptr_t)&objectUri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessageSink*)returnValue;
}
mscorlib::System::Runtime::Remoting::ClientActivatedIdentity* mscorlib::System::Runtime::Remoting::RemotingServices::CreateContextBoundObjectIdentity(mscorlib::System::Type* objectType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateContextBoundObjectIdentity", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)objectType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::ClientActivatedIdentity*)returnValue;
}
mscorlib::System::Runtime::Remoting::ClientActivatedIdentity* mscorlib::System::Runtime::Remoting::RemotingServices::CreateClientActivatedServerIdentity(mscorlib::System::MarshalByRefObject* realObject, mscorlib::System::Type* objectType, mscorlib::System::String* objectUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateClientActivatedServerIdentity", std::vector<std::string> { "System.MarshalByRefObject", "System.Type", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)realObject;
	params[1] = (intptr_t)objectType;
	params[2] = (intptr_t)objectUri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::ClientActivatedIdentity*)returnValue;
}
mscorlib::System::Runtime::Remoting::ServerIdentity* mscorlib::System::Runtime::Remoting::RemotingServices::CreateWellKnownServerIdentity(mscorlib::System::Type* objectType, mscorlib::System::String* objectUri, mscorlib::System::Runtime::Remoting::WellKnownObjectMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateWellKnownServerIdentity", std::vector<std::string> { "System.Type", "System.String", "System.Runtime.Remoting.WellKnownObjectMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)objectUri;
	params[2] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::ServerIdentity*)returnValue;
}
void mscorlib::System::Runtime::Remoting::RemotingServices::RegisterServerIdentity(mscorlib::System::Runtime::Remoting::ServerIdentity* identity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterServerIdentity", std::vector<std::string> { "System.Runtime.Remoting.ServerIdentity" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)identity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::GetProxyForRemoteObject(mscorlib::System::Runtime::Remoting::ObjRef* objref, mscorlib::System::Type* classToProxy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProxyForRemoteObject", std::vector<std::string> { "System.Runtime.Remoting.ObjRef", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)objref;
	params[1] = (intptr_t)classToProxy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::GetRemoteObject(mscorlib::System::Runtime::Remoting::ObjRef* objRef, mscorlib::System::Type* proxyType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRemoteObject", std::vector<std::string> { "System.Runtime.Remoting.ObjRef", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)objRef;
	params[1] = (intptr_t)proxyType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Runtime::Remoting::RemotingServices::SerializeCallData(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SerializeCallData", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::RemotingServices::DeserializeCallData(IL2CPP::Array<uint8_t>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeserializeCallData", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Runtime::Remoting::RemotingServices::SerializeExceptionData(mscorlib::System::Exception* ex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SerializeExceptionData", std::vector<std::string> { "System.Exception" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void mscorlib::System::Runtime::Remoting::RemotingServices::RegisterInternalChannels()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterInternalChannels");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::RemotingServices::DisposeIdentity(mscorlib::System::Runtime::Remoting::Identity* ident)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisposeIdentity", std::vector<std::string> { "System.Runtime.Remoting.Identity" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ident;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::Identity* mscorlib::System::Runtime::Remoting::RemotingServices::GetMessageTargetIdentity(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMessageTargetIdentity", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Identity*)returnValue;
}
void mscorlib::System::Runtime::Remoting::RemotingServices::SetMessageTargetIdentity(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Runtime::Remoting::Identity* ident)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMessageTargetIdentity", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage", "System.Runtime.Remoting.Identity" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)msg;
	params[1] = (intptr_t)ident;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::Remoting::RemotingServices::UpdateOutArgObject(mscorlib::System::Reflection::ParameterInfo* pi, mscorlib::System::Object* local, mscorlib::System::Object* remote)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateOutArgObject", std::vector<std::string> { "System.Reflection.ParameterInfo", "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pi;
	params[1] = (intptr_t)local;
	params[2] = (intptr_t)remote;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::Runtime::Remoting::RemotingServices::GetNormalizedUri(mscorlib::System::String* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNormalizedUri", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
