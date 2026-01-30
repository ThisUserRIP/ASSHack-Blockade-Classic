#include "RootMotion_FinalIK_BipedIKSolvers.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::BipedIKSolvers::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion.FinalIK", "BipedIKSolvers");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::BipedIKSolvers::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb*>* Assembly_CSharp_firstpass::RootMotion::FinalIK::BipedIKSolvers::get_limbs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_limbs");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb*>*)returnValue;
}
IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver*>* Assembly_CSharp_firstpass::RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ikSolvers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver*>*)returnValue;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::BipedIKSolvers::AssignReferences(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AssignReferences", std::vector<std::string> { "RootMotion.BipedReferences" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)references;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::BipedIKSolvers::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
