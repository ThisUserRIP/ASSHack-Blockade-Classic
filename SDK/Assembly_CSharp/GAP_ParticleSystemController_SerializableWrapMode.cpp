#include "GAP_ParticleSystemController_SerializableWrapMode.h"

IL2CPP::Il2CppClass* Assembly_CSharp::GAP_ParticleSystemController::SerializableWrapMode::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "GAP_ParticleSystemController", "SerializableWrapMode");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::GAP_ParticleSystemController::SerializableWrapMode::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::GAP_ParticleSystemController::SerializableWrapMode::_ctor(UnityEngine_CoreModule::UnityEngine::WrapMode wrapMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.WrapMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&wrapMode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::WrapMode Assembly_CSharp::GAP_ParticleSystemController::SerializableWrapMode::GetWrapMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetWrapMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::WrapMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::WrapMode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::WrapMode>(*(UnityEngine_CoreModule::UnityEngine::WrapMode*)il2cpp_object_unbox(returnValue));
}
