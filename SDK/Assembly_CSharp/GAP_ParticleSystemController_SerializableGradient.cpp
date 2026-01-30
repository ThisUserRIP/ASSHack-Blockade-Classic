#include "GAP_ParticleSystemController_SerializableGradient.h"

IL2CPP::Il2CppClass* Assembly_CSharp::GAP_ParticleSystemController::SerializableGradient::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "GAP_ParticleSystemController", "SerializableGradient");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::GAP_ParticleSystemController::SerializableGradient::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::GAP_ParticleSystemController::SerializableGradient::_ctor(UnityEngine_CoreModule::UnityEngine::Gradient* gradient)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Gradient" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)gradient;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Gradient* Assembly_CSharp::GAP_ParticleSystemController::SerializableGradient::GetGradient()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGradient");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Gradient*)returnValue;
}
