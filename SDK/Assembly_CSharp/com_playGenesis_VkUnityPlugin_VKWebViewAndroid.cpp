#include "com_playGenesis_VkUnityPlugin_VKWebViewAndroid.h"

IL2CPP::Il2CppClass* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWebViewAndroid::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "com.playGenesis.VkUnityPlugin", "VKWebViewAndroid");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWebViewAndroid::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWebViewAndroid::OpenWebView(mscorlib::System::String* openurl, mscorlib::System::String* closeurl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OpenWebView", std::vector<std::string> { "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)openurl;
	params[1] = (intptr_t)closeurl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWebViewAndroid::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
