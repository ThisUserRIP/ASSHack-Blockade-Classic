#include "Rewired_Data_EditorPlatformData.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::EditorPlatformData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Data", "EditorPlatformData");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::EditorPlatformData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::TextAsset*>* Rewired_Core::Rewired::Data::EditorPlatformData::GetLibraries(Rewired_Core::Rewired::Platforms::Platform platform, Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform, Rewired_Core::Rewired::Platforms::EditorPlatform editorPlatform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLibraries", std::vector<std::string> { "Rewired.Platforms.Platform", "Rewired.Platforms.WebplayerPlatform", "Rewired.Platforms.EditorPlatform" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&platform;
	params[1] = (intptr_t)&webplayerPlatform;
	params[2] = (intptr_t)&editorPlatform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::TextAsset*>*)returnValue;
}
Rewired_Core::Rewired::Data::EditorPlatformData_Platform* Rewired_Core::Rewired::Data::EditorPlatformData::GetPlatform(Rewired_Core::Rewired::Platforms::Platform platform, Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform, Rewired_Core::Rewired::Platforms::EditorPlatform editorPlatform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlatform", std::vector<std::string> { "Rewired.Platforms.Platform", "Rewired.Platforms.WebplayerPlatform", "Rewired.Platforms.EditorPlatform" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&platform;
	params[1] = (intptr_t)&webplayerPlatform;
	params[2] = (intptr_t)&editorPlatform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::EditorPlatformData_Platform*)returnValue;
}
void Rewired_Core::Rewired::Data::EditorPlatformData::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
