#include "UnityEngine_Networking_DownloadHandlerTexture.h"

IL2CPP::Il2CppClass* UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::DownloadHandlerTexture::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UnityWebRequestTextureModule.dll", "UnityEngine.Networking", "DownloadHandlerTexture");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::DownloadHandlerTexture::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
intptr_t UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::DownloadHandlerTexture::Create(UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::DownloadHandlerTexture* obj, bool readable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "UnityEngine.Networking.DownloadHandlerTexture", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&readable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::DownloadHandlerTexture::InternalCreateTexture(bool readable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalCreateTexture", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&readable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::DownloadHandlerTexture::_ctor(bool readable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&readable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::DownloadHandlerTexture::GetData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetData");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Texture2D* UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::DownloadHandlerTexture::get_texture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_texture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Texture2D* UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::DownloadHandlerTexture::InternalGetTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Texture2D* UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::DownloadHandlerTexture::InternalGetTextureNative()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetTextureNative");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
