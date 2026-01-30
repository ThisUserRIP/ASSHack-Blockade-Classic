#include "UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents___c__DisplayClass6_0.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass6_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::GetIl2CppClass(), "<>c__DisplayClass6_0");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass6_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass6_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents___c__DisplayClass6_0::_InvokeMessageIdSubscribers_b__0(UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<InvokeMessageIdSubscribers>b__0", std::vector<std::string> { "UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
