#include "RootMotion_FinalIK_HitReactionVRIK_PositionOffset_PositionOffsetLink.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReactionVRIK_PositionOffset_PositionOffsetLink::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReactionVRIK_PositionOffset::GetIl2CppClass(), "PositionOffsetLink");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReactionVRIK_PositionOffset_PositionOffsetLink::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReactionVRIK_PositionOffset_PositionOffsetLink::Apply(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik, UnityEngine_CoreModule::UnityEngine::Vector3 offset, float crossFader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "RootMotion.FinalIK.VRIK", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)ik;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&crossFader;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReactionVRIK_PositionOffset_PositionOffsetLink::CrossFadeStart()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CrossFadeStart");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReactionVRIK_PositionOffset_PositionOffsetLink::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
