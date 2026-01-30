#include "com_playGenesis_VkUnityPlugin_VKScope.h"

IL2CPP::Il2CppClass* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKScope::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "com.playGenesis.VkUnityPlugin", "VKScope");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKScope::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKScope::ParseVKPermissionsFromInteger(int32_t permissionsValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseVKPermissionsFromInteger", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&permissionsValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKScope::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
