#include "RootMotion_FinalIK_Inertia_Body.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::Inertia_Body::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp_firstpass::RootMotion::FinalIK::Inertia::GetIl2CppClass(), "Body");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::Inertia_Body::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::Inertia_Body::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::Inertia_Body::Update(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight, float deltaTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update", std::vector<std::string> { "RootMotion.FinalIK.IKSolverFullBodyBiped", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)solver;
	params[1] = (intptr_t)&weight;
	params[2] = (intptr_t)&deltaTime;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::Inertia_Body::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
