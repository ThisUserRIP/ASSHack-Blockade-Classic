#include "RootMotion_BipedLimbOrientations.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion", "BipedLimbOrientations");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations::_ctor(Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* leftArm, Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* rightArm, Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* leftLeg, Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* rightLeg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "RootMotion.BipedLimbOrientations/LimbOrientation", "RootMotion.BipedLimbOrientations/LimbOrientation", "RootMotion.BipedLimbOrientations/LimbOrientation", "RootMotion.BipedLimbOrientations/LimbOrientation" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)leftArm;
	params[1] = (intptr_t)rightArm;
	params[2] = (intptr_t)leftLeg;
	params[3] = (intptr_t)rightLeg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations* Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations::get_UMA()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UMA");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations*)returnValue;
}
Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations* Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations::get_MaxBiped()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MaxBiped");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations*)returnValue;
}
