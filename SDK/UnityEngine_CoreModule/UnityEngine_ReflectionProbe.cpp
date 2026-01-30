#include "UnityEngine_ReflectionProbe.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::ReflectionProbe::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "ReflectionProbe");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::ReflectionProbe::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::ReflectionProbe::CallReflectionProbeEvent(UnityEngine_CoreModule::UnityEngine::ReflectionProbe* probe, UnityEngine_CoreModule::UnityEngine::ReflectionProbe_ReflectionProbeEvent probeEvent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallReflectionProbeEvent", std::vector<std::string> { "UnityEngine.ReflectionProbe", "UnityEngine.ReflectionProbe/ReflectionProbeEvent" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)probe;
	params[1] = (intptr_t)&probeEvent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ReflectionProbe::CallSetDefaultReflection(UnityEngine_CoreModule::UnityEngine::Cubemap* defaultReflectionCubemap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallSetDefaultReflection", std::vector<std::string> { "UnityEngine.Cubemap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)defaultReflectionCubemap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
