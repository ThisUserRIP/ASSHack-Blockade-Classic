#include "GAP_ParticleSystemController_SerializableKeyFrames.h"

IL2CPP::Il2CppClass* Assembly_CSharp::GAP_ParticleSystemController::SerializableKeyFrames::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "GAP_ParticleSystemController", "SerializableKeyFrames");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::GAP_ParticleSystemController::SerializableKeyFrames::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::GAP_ParticleSystemController::SerializableKeyFrames::_ctor(UnityEngine_CoreModule::UnityEngine::Keyframe keyFrame)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Keyframe" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyFrame;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Keyframe Assembly_CSharp::GAP_ParticleSystemController::SerializableKeyFrames::GetKeyFrames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyFrames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Keyframe ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Keyframe));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Keyframe>(*(UnityEngine_CoreModule::UnityEngine::Keyframe*)il2cpp_object_unbox(returnValue));
}
