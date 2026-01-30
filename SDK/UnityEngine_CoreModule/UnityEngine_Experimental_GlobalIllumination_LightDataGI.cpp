#include "UnityEngine_Experimental_GlobalIllumination_LightDataGI.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Experimental.GlobalIllumination", "LightDataGI");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::DirectionalLight& light, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "UnityEngine.Experimental.GlobalIllumination.DirectionalLight&", "UnityEngine.Experimental.GlobalIllumination.Cookie&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&light;
	params[1] = (intptr_t)&cookie;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::PointLight& light, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "UnityEngine.Experimental.GlobalIllumination.PointLight&", "UnityEngine.Experimental.GlobalIllumination.Cookie&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&light;
	params[1] = (intptr_t)&cookie;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::SpotLight& light, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "UnityEngine.Experimental.GlobalIllumination.SpotLight&", "UnityEngine.Experimental.GlobalIllumination.Cookie&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&light;
	params[1] = (intptr_t)&cookie;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::RectangleLight& light, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "UnityEngine.Experimental.GlobalIllumination.RectangleLight&", "UnityEngine.Experimental.GlobalIllumination.Cookie&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&light;
	params[1] = (intptr_t)&cookie;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI::Init(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::DiscLight& light, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "UnityEngine.Experimental.GlobalIllumination.DiscLight&", "UnityEngine.Experimental.GlobalIllumination.Cookie&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&light;
	params[1] = (intptr_t)&cookie;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI::InitNoBake(int32_t lightInstanceID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitNoBake", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&lightInstanceID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
