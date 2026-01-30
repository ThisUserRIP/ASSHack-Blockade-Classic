#include "Rewired_Data_RuntimeData.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::RuntimeData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Data", "RuntimeData");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::RuntimeData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Data::RuntimeData::SetPlatform(Rewired_Core::Rewired::Platforms::Platform platform, Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform, Rewired_Core::Rewired::Platforms::EditorPlatform editorPlatform, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::TextAsset>* libraries)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPlatform", std::vector<std::string> { "Rewired.Platforms.Platform", "Rewired.Platforms.WebplayerPlatform", "Rewired.Platforms.EditorPlatform", "System.Collections.Generic.List`1<UnityEngine.TextAsset>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&platform;
	params[1] = (intptr_t)&webplayerPlatform;
	params[2] = (intptr_t)&editorPlatform;
	params[3] = (intptr_t)libraries;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::RuntimeData::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
