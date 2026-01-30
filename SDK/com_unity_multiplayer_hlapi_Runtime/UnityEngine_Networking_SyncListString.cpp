#include "UnityEngine_Networking_SyncListString.h"

IL2CPP::Il2CppClass* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("com.unity.multiplayer-hlapi.Runtime.dll", "UnityEngine.Networking", "SyncListString");
	return il2cppclass;
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString::SerializeItem(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, mscorlib::System::String* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SerializeItem", std::vector<std::string> { "UnityEngine.Networking.NetworkWriter", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)writer;
	params[1] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString::DeserializeItem(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeserializeItem", std::vector<std::string> { "UnityEngine.Networking.NetworkReader" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)reader;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString::ReadInstance(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadInstance", std::vector<std::string> { "UnityEngine.Networking.NetworkReader" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)reader;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString*)returnValue;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString::ReadReference(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString* syncList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadReference", std::vector<std::string> { "UnityEngine.Networking.NetworkReader", "UnityEngine.Networking.SyncListString" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)reader;
	params[1] = (intptr_t)syncList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString::WriteInstance(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString* items)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteInstance", std::vector<std::string> { "UnityEngine.Networking.NetworkWriter", "UnityEngine.Networking.SyncListString" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)writer;
	params[1] = (intptr_t)items;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListString::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
