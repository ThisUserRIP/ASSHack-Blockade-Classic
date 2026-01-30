#include "RootMotion_FinalIK_IKSolverLimb_AxisDirection.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb_AxisDirection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb::GetIl2CppClass(), "AxisDirection");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb_AxisDirection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb_AxisDirection::_ctor(UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_CoreModule::UnityEngine::Vector3 axis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&direction;
	params[1] = (intptr_t)&axis;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
