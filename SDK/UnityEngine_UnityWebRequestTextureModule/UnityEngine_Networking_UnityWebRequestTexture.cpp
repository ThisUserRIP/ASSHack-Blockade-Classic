#include "UnityEngine_Networking_UnityWebRequestTexture.h"

IL2CPP::Il2CppClass* UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::UnityWebRequestTexture::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UnityWebRequestTextureModule.dll", "UnityEngine.Networking", "UnityWebRequestTexture");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::UnityWebRequestTexture::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::UnityWebRequestTexture::GetTexture(mscorlib::System::String* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTexture", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest*)returnValue;
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::UnityWebRequestTexture::GetTexture(mscorlib::System::String* uri, bool nonReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTexture", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)&nonReadable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest*)returnValue;
}
