#include "BestHTTP_Extensions_HeartbeatManager.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Extensions::HeartbeatManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Extensions", "HeartbeatManager");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Extensions::HeartbeatManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Extensions::HeartbeatManager::Subscribe(Assembly_CSharp::BestHTTP::Extensions::IHeartbeat* heartbeat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Subscribe", std::vector<std::string> { "BestHTTP.Extensions.IHeartbeat" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)heartbeat;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Extensions::HeartbeatManager::Unsubscribe(Assembly_CSharp::BestHTTP::Extensions::IHeartbeat* heartbeat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Unsubscribe", std::vector<std::string> { "BestHTTP.Extensions.IHeartbeat" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)heartbeat;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Extensions::HeartbeatManager::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Extensions::HeartbeatManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
