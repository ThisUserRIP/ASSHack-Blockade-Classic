#include "RootMotion_FinalIK_IKSolverVR_VirtualBone.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetIl2CppClass(), "VirtualBone");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::_ctor(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::Read(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Read", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::SwingRotation(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t index, UnityEngine_CoreModule::UnityEngine::Vector3 swingTarget, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SwingRotation", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/VirtualBone[]", "System.Int32", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)bones;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&swingTarget;
	params[3] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::PreSolve(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>& bones)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreSolve", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/VirtualBone[]&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&bones;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::RotateAroundPoint(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t index, UnityEngine_CoreModule::UnityEngine::Vector3 point, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateAroundPoint", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/VirtualBone[]", "System.Int32", "UnityEngine.Vector3", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)bones;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&point;
	params[3] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::RotateBy(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t index, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateBy", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/VirtualBone[]", "System.Int32", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bones;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::RotateBy(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateBy", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/VirtualBone[]", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bones;
	params[1] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::RotateTo(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t index, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateTo", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/VirtualBone[]", "System.Int32", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bones;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::SolveTrigonometric(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t first, int32_t second, int32_t third, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, UnityEngine_CoreModule::UnityEngine::Vector3 bendNormal, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SolveTrigonometric", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/VirtualBone[]", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)bones;
	params[1] = (intptr_t)&first;
	params[2] = (intptr_t)&second;
	params[3] = (intptr_t)&third;
	params[4] = (intptr_t)&targetPosition;
	params[5] = (intptr_t)&bendNormal;
	params[6] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::GetDirectionToBendPoint(UnityEngine_CoreModule::UnityEngine::Vector3 direction, float directionMag, UnityEngine_CoreModule::UnityEngine::Vector3 bendDirection, float sqrMag1, float sqrMag2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDirectionToBendPoint", std::vector<std::string> { "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&direction;
	params[1] = (intptr_t)&directionMag;
	params[2] = (intptr_t)&bendDirection;
	params[3] = (intptr_t)&sqrMag1;
	params[4] = (intptr_t)&sqrMag2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::SolveFABRIK(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, UnityEngine_CoreModule::UnityEngine::Vector3 startPosition, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, float weight, float minNormalizedTargetDistance, int32_t iterations, float length, UnityEngine_CoreModule::UnityEngine::Vector3 startOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SolveFABRIK", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/VirtualBone[]", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Single", "System.Int32", "System.Single", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)bones;
	params[1] = (intptr_t)&startPosition;
	params[2] = (intptr_t)&targetPosition;
	params[3] = (intptr_t)&weight;
	params[4] = (intptr_t)&minNormalizedTargetDistance;
	params[5] = (intptr_t)&iterations;
	params[6] = (intptr_t)&length;
	params[7] = (intptr_t)&startOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::SolveFABRIKJoint(UnityEngine_CoreModule::UnityEngine::Vector3 pos1, UnityEngine_CoreModule::UnityEngine::Vector3 pos2, float length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SolveFABRIKJoint", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&pos1;
	params[1] = (intptr_t)&pos2;
	params[2] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone::SolveCCD(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, float weight, int32_t iterations)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SolveCCD", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/VirtualBone[]", "UnityEngine.Vector3", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)bones;
	params[1] = (intptr_t)&targetPosition;
	params[2] = (intptr_t)&weight;
	params[3] = (intptr_t)&iterations;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
