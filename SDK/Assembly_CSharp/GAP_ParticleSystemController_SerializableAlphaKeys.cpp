#include "GAP_ParticleSystemController_SerializableAlphaKeys.h"

IL2CPP::Il2CppClass* Assembly_CSharp::GAP_ParticleSystemController::SerializableAlphaKeys::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "GAP_ParticleSystemController", "SerializableAlphaKeys");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::GAP_ParticleSystemController::SerializableAlphaKeys::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::GAP_ParticleSystemController::SerializableAlphaKeys::_ctor(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GradientAlphaKey>* gradAlphaKeys)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.GradientAlphaKey[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)gradAlphaKeys;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GradientAlphaKey>* Assembly_CSharp::GAP_ParticleSystemController::SerializableAlphaKeys::GetAlphaKeys()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAlphaKeys");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GradientAlphaKey>*)returnValue;
}
