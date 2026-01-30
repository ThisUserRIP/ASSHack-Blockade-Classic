#include "UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::InvokeMessageIdSubscribers(mscorlib::System::Guid messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeMessageIdSubscribers", std::vector<std::string> { "System.Guid", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&messageId;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)&playerId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::MessageEventArgs>* UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::AddAndCreate(mscorlib::System::Guid messageId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAndCreate", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&messageId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::MessageEventArgs>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::UnregisterManagedCallback(mscorlib::System::Guid messageId, UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::MessageEventArgs>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnregisterManagedCallback", std::vector<std::string> { "System.Guid", "UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&messageId;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
