#include "com_playGenesis_VkUnityPlugin_VKShare.h"

IL2CPP::Il2CppClass* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "com.playGenesis.VkUnityPlugin", "VKShare");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare::_ctor(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* CallbackFunction, mscorlib::System::String* text, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::ShareImage>* images, mscorlib::System::String* link, int64_t group_id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Action`1<com.playGenesis.VkUnityPlugin.VKRequest>", "System.String", "System.Collections.Generic.List`1<com.playGenesis.VkUnityPlugin.ShareImage>", "System.String", "System.Int64" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)CallbackFunction;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)images;
	params[3] = (intptr_t)link;
	params[4] = (intptr_t)&group_id;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare::Share()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Share");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare::GotWallUploadServer(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GotWallUploadServer", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)arg1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare::PhotoHasBeenUploaded(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PhotoHasBeenUploaded", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)arg1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare::OnPhotoSaved(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPhotoSaved", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)arg1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare::GenerateAttachementsForWall()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateAttachementsForWall");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare::PostToWall(int32_t attemptsLeft)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PostToWall", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&attemptsLeft;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare::WhenPosted(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WhenPosted", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)arg1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKShare::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
