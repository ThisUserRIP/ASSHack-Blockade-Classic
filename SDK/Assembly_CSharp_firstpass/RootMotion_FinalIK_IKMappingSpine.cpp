#include "RootMotion_FinalIK_IKMappingSpine.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion.FinalIK", "IKMappingSpine");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::IsValid(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* solver, mscorlib::System::String& message)
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
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::_ctor(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* spineBones, UnityEngine_CoreModule::UnityEngine::Transform* leftUpperArmBone, UnityEngine_CoreModule::UnityEngine::Transform* rightUpperArmBone, UnityEngine_CoreModule::UnityEngine::Transform* leftThighBone, UnityEngine_CoreModule::UnityEngine::Transform* rightThighBone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Transform[]", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)spineBones;
	params[1] = (intptr_t)leftUpperArmBone;
	params[2] = (intptr_t)rightUpperArmBone;
	params[3] = (intptr_t)leftThighBone;
	params[4] = (intptr_t)rightThighBone;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::SetBones(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* spineBones, UnityEngine_CoreModule::UnityEngine::Transform* leftUpperArmBone, UnityEngine_CoreModule::UnityEngine::Transform* rightUpperArmBone, UnityEngine_CoreModule::UnityEngine::Transform* leftThighBone, UnityEngine_CoreModule::UnityEngine::Transform* rightThighBone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBones", std::vector<std::string> { "UnityEngine.Transform[]", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)spineBones;
	params[1] = (intptr_t)leftUpperArmBone;
	params[2] = (intptr_t)rightUpperArmBone;
	params[3] = (intptr_t)leftThighBone;
	params[4] = (intptr_t)rightThighBone;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::StoreDefaultLocalState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StoreDefaultLocalState");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::FixTransforms()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixTransforms");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver)
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
bool Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::UseFABRIK()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UseFABRIK");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::ReadPose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadPose");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::WritePose(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WritePose", std::vector<std::string> { "RootMotion.FinalIK.IKSolverFullBody" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)solver;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::ForwardReach(UnityEngine_CoreModule::UnityEngine::Vector3 position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForwardReach", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::BackwardReach(UnityEngine_CoreModule::UnityEngine::Vector3 position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BackwardReach", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine::MapToSolverPositions(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MapToSolverPositions", std::vector<std::string> { "RootMotion.FinalIK.IKSolverFullBody" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)solver;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
