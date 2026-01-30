#include "RootMotion_FinalIK_IKSolverVR_BodyPart.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetIl2CppClass(), "BodyPart");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::OnRead(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnRead", std::vector<std::string> { "UnityEngine.Vector3[]", "UnityEngine.Quaternion[]", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)positions;
	params[1] = (intptr_t)rotations;
	params[2] = (intptr_t)&hasChest;
	params[3] = (intptr_t)&hasNeck;
	params[4] = (intptr_t)&hasShoulders;
	params[5] = (intptr_t)&hasToes;
	params[6] = (intptr_t)&hasLegs;
	params[7] = (intptr_t)&rootIndex;
	params[8] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::PreSolve()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreSolve");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::Write(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>& solvedPositions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>& solvedRotations)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Write", std::vector<std::string> { "UnityEngine.Vector3[]&", "UnityEngine.Quaternion[]&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&solvedPositions;
	params[1] = (intptr_t)&solvedRotations;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::ApplyOffsets()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyOffsets");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::ResetOffsets()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetOffsets");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::get_sqrMag()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sqrMag");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::set_sqrMag(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sqrMag", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::get_mag()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mag");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::set_mag(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_mag", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::Read(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Read", std::vector<std::string> { "UnityEngine.Vector3[]", "UnityEngine.Quaternion[]", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)positions;
	params[1] = (intptr_t)rotations;
	params[2] = (intptr_t)&hasChest;
	params[3] = (intptr_t)&hasNeck;
	params[4] = (intptr_t)&hasShoulders;
	params[5] = (intptr_t)&hasToes;
	params[6] = (intptr_t)&hasLegs;
	params[7] = (intptr_t)&rootIndex;
	params[8] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::MovePosition(UnityEngine_CoreModule::UnityEngine::Vector3 position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MovePosition", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::MoveRotation(UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveRotation", std::vector<std::string> { "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::Translate(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Translate", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::TranslateRoot(UnityEngine_CoreModule::UnityEngine::Vector3 newRootPos, UnityEngine_CoreModule::UnityEngine::Quaternion newRootRot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TranslateRoot", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&newRootPos;
	params[1] = (intptr_t)&newRootRot;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::RotateTo(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* bone, UnityEngine_CoreModule::UnityEngine::Quaternion rotation, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateTo", std::vector<std::string> { "RootMotion.FinalIK.IKSolverVR/VirtualBone", "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bone;
	params[1] = (intptr_t)&rotation;
	params[2] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::Visualize(UnityEngine_CoreModule::UnityEngine::Color color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Visualize", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::Visualize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Visualize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
