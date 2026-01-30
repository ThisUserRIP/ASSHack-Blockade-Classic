#include "RootMotion_FinalIK_CCDIKJob.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion.FinalIK", "CCDIKJob");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::Setup(UnityEngine_AnimationModule::UnityEngine::Animator* animator, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones, UnityEngine_CoreModule::UnityEngine::Transform* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Setup", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.Transform[]", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)bones;
	params[2] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::SetUpRotationLimits(UnityEngine_AnimationModule::UnityEngine::Animator* animator, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones)
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
void Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::DisposeRotationLimits()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisposeRotationLimits");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::ProcessRootMotion(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessRootMotion", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::ProcessAnimation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAnimation", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::Update(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&s;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::Read(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Read", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&s;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::Solve(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, bool XY, float weight, int32_t it, bool useRotationLimits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Solve", std::vector<std::string> { "UnityEngine.Animations.AnimationStream", "UnityEngine.Vector3", "System.Boolean", "System.Single", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&s;
	params[1] = (intptr_t)&targetPosition;
	params[2] = (intptr_t)&XY;
	params[3] = (intptr_t)&weight;
	params[4] = (intptr_t)&it;
	params[5] = (intptr_t)&useRotationLimits;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::GetLocalDirection(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalDirection", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&s;
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
float Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::GetPositionOffset(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 localDirection)
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
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::GetSingularityOffset(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition, bool useRotationLimits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSingularityOffset", std::vector<std::string> { "UnityEngine.Animations.AnimationStream", "UnityEngine.Vector3", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&s;
	params[1] = (intptr_t)&IKPosition;
	params[2] = (intptr_t)&useRotationLimits;
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
bool Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::SingularityDetected(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream s, UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SingularityDetected", std::vector<std::string> { "UnityEngine.Animations.AnimationStream", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&s;
	params[1] = (intptr_t)&IKPosition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
