#include "UnityEngine_Experimental_GlobalIllumination_Lightmapping.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Experimental.GlobalIllumination", "Lightmapping");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping::SetDelegate(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* del)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDelegate", std::vector<std::string> { "UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)del;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping::GetDelegate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDelegate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping::ResetDelegate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetDelegate");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLights(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Light*>* lights, intptr_t outLightsPtr, int32_t outLightsCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RequestLights", std::vector<std::string> { "UnityEngine.Light[]", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)lights;
	params[1] = (intptr_t)&outLightsPtr;
	params[2] = (intptr_t)&outLightsCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
