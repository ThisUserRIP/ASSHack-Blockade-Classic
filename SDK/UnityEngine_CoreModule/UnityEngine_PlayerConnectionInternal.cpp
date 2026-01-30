#include "UnityEngine_PlayerConnectionInternal.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "PlayerConnectionInternal");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_SendMessage(mscorlib::System::Guid messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.IPlayerEditorConnectionNative.SendMessage", std::vector<std::string> { "System.Guid", "System.Byte[]", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&messageId;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)&playerId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(mscorlib::System::Guid messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.IPlayerEditorConnectionNative.TrySendMessage", std::vector<std::string> { "System.Guid", "System.Byte[]", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&messageId;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)&playerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Poll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.IPlayerEditorConnectionNative.Poll");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(mscorlib::System::Guid messageId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.IPlayerEditorConnectionNative.RegisterInternal", std::vector<std::string> { "System.Guid" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&messageId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(mscorlib::System::Guid messageId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal", std::vector<std::string> { "System.Guid" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&messageId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.IPlayerEditorConnectionNative.Initialize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_IsConnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.IPlayerEditorConnectionNative.IsConnected");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_DisconnectAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.IPlayerEditorConnectionNative.DisconnectAll");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::IsConnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsConnected");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::Initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::RegisterInternal(mscorlib::System::String* messageId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterInternal", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)messageId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::UnregisterInternal(mscorlib::System::String* messageId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnregisterInternal", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)messageId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::SendMessage(mscorlib::System::String* messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendMessage", std::vector<std::string> { "System.String", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)messageId;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)&playerId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::TrySendMessage(mscorlib::System::String* messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrySendMessage", std::vector<std::string> { "System.String", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)messageId;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)&playerId;
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
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::PollInternal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollInternal");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::DisconnectAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisconnectAll");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::PlayerConnectionInternal::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
