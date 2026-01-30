#include "UnityEngine_Networking_DotNetCompatibility.h"

IL2CPP::Il2CppClass* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DotNetCompatibility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("com.unity.multiplayer-hlapi.Runtime.dll", "UnityEngine.Networking", "DotNetCompatibility");
	return il2cppclass;
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DotNetCompatibility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DotNetCompatibility::GetMethodName(mscorlib::System::Delegate* func)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodName", std::vector<std::string> { "System.Delegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)func;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DotNetCompatibility::GetBaseType(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBaseType", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::String* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DotNetCompatibility::GetErrorCode(System::System::Net::Sockets::SocketException* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetErrorCode", std::vector<std::string> { "System.Net.Sockets.SocketException" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
