#include "RootMotion_FinalIK_AimIKJob.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion.FinalIK", "AimIKJob");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::Setup(UnityEngine_AnimationModule::UnityEngine::Animator* animator, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones, UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Transform* poleTarget, UnityEngine_CoreModule::UnityEngine::Transform* aimTransform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Setup", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.Transform[]", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)bones;
	params[2] = (intptr_t)target;
	params[3] = (intptr_t)poleTarget;
	params[4] = (intptr_t)aimTransform;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::SetUpRotationLimits(UnityEngine_AnimationModule::UnityEngine::Animator* animator, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUpRotationLimits", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.Transform[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)bones;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::DisposeRotationLimits()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisposeRotationLimits");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::ProcessRootMotion(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessRootMotion", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::ProcessAnimation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAnimation", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::Update(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&s;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::RotateToTarget(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, UnityEngine_CoreModule::UnityEngine::Vector3 polePosition, int32_t i, float weight, float poleWeight, bool XY, bool useRotationLimits, UnityEngine_CoreModule::UnityEngine::Vector3 axis, UnityEngine_CoreModule::UnityEngine::Vector3 poleAxis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateToTarget", std::vector<std::string> { "UnityEngine.Animations.AnimationStream", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Int32", "System.Single", "System.Single", "System.Boolean", "System.Boolean", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&s;
	params[1] = (intptr_t)&targetPosition;
	params[2] = (intptr_t)&polePosition;
	params[3] = (intptr_t)&i;
	params[4] = (intptr_t)&weight;
	params[5] = (intptr_t)&poleWeight;
	params[6] = (intptr_t)&XY;
	params[7] = (intptr_t)&useRotationLimits;
	params[8] = (intptr_t)&axis;
	params[9] = (intptr_t)&poleAxis;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::GetAngle(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 axis, UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAngle", std::vector<std::string> { "UnityEngine.Animations.AnimationStream", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&s;
	params[1] = (intptr_t)&axis;
	params[2] = (intptr_t)&IKPosition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::GetClampedIKPosition(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, float clampWeight, int32_t clampSmoothing, UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition, UnityEngine_CoreModule::UnityEngine::Vector3 transformPosition, UnityEngine_CoreModule::UnityEngine::Vector3 transformAxis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetClampedIKPosition", std::vector<std::string> { "UnityEngine.Animations.AnimationStream", "System.Single", "System.Int32", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&s;
	params[1] = (intptr_t)&clampWeight;
	params[2] = (intptr_t)&clampSmoothing;
	params[3] = (intptr_t)&IKPosition;
	params[4] = (intptr_t)&transformPosition;
	params[5] = (intptr_t)&transformAxis;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::GetLocalDirection(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 transformAxis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalDirection", std::vector<std::string> { "UnityEngine.Animations.AnimationStream", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&s;
	params[1] = (intptr_t)&transformAxis;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::GetPositionOffset(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 localDirection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPositionOffset", std::vector<std::string> { "UnityEngine.Animations.AnimationStream", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&s;
	params[1] = (intptr_t)&localDirection;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
