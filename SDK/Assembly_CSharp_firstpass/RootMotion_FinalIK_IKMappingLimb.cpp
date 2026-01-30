#include "RootMotion_FinalIK_IKMappingLimb.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion.FinalIK", "IKMappingLimb");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::IsValid(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* solver, mscorlib::System::String& message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid", std::vector<std::string> { "RootMotion.FinalIK.IKSolver", "System.String&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)solver;
	params[1] = (intptr_t)&message;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::GetBoneMap(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb_BoneMapType boneMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBoneMap", std::vector<std::string> { "RootMotion.FinalIK.IKMappingLimb/BoneMapType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&boneMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap*)returnValue;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::SetLimbOrientation(UnityEngine_CoreModule::UnityEngine::Vector3 upper, UnityEngine_CoreModule::UnityEngine::Vector3 lower)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLimbOrientation", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&upper;
	params[1] = (intptr_t)&lower;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::_ctor(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3, UnityEngine_CoreModule::UnityEngine::Transform* parentBone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)bone1;
	params[1] = (intptr_t)bone2;
	params[2] = (intptr_t)bone3;
	params[3] = (intptr_t)parentBone;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::SetBones(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3, UnityEngine_CoreModule::UnityEngine::Transform* parentBone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBones", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)bone1;
	params[1] = (intptr_t)bone2;
	params[2] = (intptr_t)bone3;
	params[3] = (intptr_t)parentBone;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::StoreDefaultLocalState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StoreDefaultLocalState");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::FixTransforms()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixTransforms");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initiate", std::vector<std::string> { "RootMotion.FinalIK.IKSolverFullBody" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)solver;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::ReadPose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadPose");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb::WritePose(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, bool fullBody)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WritePose", std::vector<std::string> { "RootMotion.FinalIK.IKSolverFullBody", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)solver;
	params[1] = (intptr_t)&fullBody;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
