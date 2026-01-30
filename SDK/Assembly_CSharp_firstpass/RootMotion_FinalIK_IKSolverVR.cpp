#include "RootMotion_FinalIK_IKSolverVR.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion.FinalIK", "IKSolverVR");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::SetToReferences(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK_References* references)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetToReferences", std::vector<std::string> { "RootMotion.FinalIK.VRIK/References" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)references;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GuessHandOrientations(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK_References* references, bool onlyIfZero)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GuessHandOrientations", std::vector<std::string> { "RootMotion.FinalIK.VRIK/References", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)references;
	params[1] = (intptr_t)&onlyIfZero;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::DefaultAnimationCurves()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DefaultAnimationCurves");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::AddPositionOffset(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_PositionOffset positionOffset, UnityEngine_CoreModule::UnityEngine::Vector3 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddPositionOffset", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/PositionOffset", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&positionOffset;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::AddRotationOffset(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_RotationOffset rotationOffset, UnityEngine_CoreModule::UnityEngine::Vector3 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRotationOffset", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/RotationOffset", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&rotationOffset;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::AddRotationOffset(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_RotationOffset rotationOffset, UnityEngine_CoreModule::UnityEngine::Quaternion value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRotationOffset", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/RotationOffset", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&rotationOffset;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::AddPlatformMotion(UnityEngine_CoreModule::UnityEngine::Vector3 deltaPosition, UnityEngine_CoreModule::UnityEngine::Quaternion deltaRotation, UnityEngine_CoreModule::UnityEngine::Vector3 platformPivot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddPlatformMotion", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Quaternion", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&deltaPosition;
	params[1] = (intptr_t)&deltaRotation;
	params[2] = (intptr_t)&platformPivot;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::StoreDefaultLocalState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StoreDefaultLocalState");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::FixTransforms()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixTransforms");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*>* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetPoints()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPoints");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*>*)returnValue;
}
Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetPoint(UnityEngine_CoreModule::UnityEngine::Transform* transform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPoint", std::vector<std::string> { "UnityEngine.Transform" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)transform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*)returnValue;
}
bool Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::IsValid(mscorlib::System::String& message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid", std::vector<std::string> { "System.String&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&message;
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
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetNormal(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* transforms)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNormal", std::vector<std::string> { "UnityEngine.Transform[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)transforms;
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
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GuessWristToPalmAxis(UnityEngine_CoreModule::UnityEngine::Transform* hand, UnityEngine_CoreModule::UnityEngine::Transform* forearm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GuessWristToPalmAxis", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hand;
	params[1] = (intptr_t)forearm;
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
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GuessPalmToThumbAxis(UnityEngine_CoreModule::UnityEngine::Transform* hand, UnityEngine_CoreModule::UnityEngine::Transform* forearm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GuessPalmToThumbAxis", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hand;
	params[1] = (intptr_t)forearm;
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
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetSineKeyframes(float mag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSineKeyframes", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mag;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>*)returnValue;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::UpdateSolverTransforms()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateSolverTransforms");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::OnInitiate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnInitiate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::OnUpdate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnUpdate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::WriteTransforms()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteTransforms");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::Read(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Read", std::vector<std::string> { "UnityEngine.Vector3[]", "UnityEngine.Quaternion[]", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)positions;
	params[1] = (intptr_t)rotations;
	params[2] = (intptr_t)&hasChest;
	params[3] = (intptr_t)&hasNeck;
	params[4] = (intptr_t)&hasShoulders;
	params[5] = (intptr_t)&hasToes;
	params[6] = (intptr_t)&hasLegs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::Solve()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Solve");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetPosition(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPosition", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
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
UnityEngine_CoreModule::UnityEngine::Quaternion Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetRotation(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRotation", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::get_rootBone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rootBone");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*)returnValue;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::set_rootBone(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_rootBone", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/VirtualBone" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::Write()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Write");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetPelvisOffset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPelvisOffset");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
