#include "RootMotion_BipedLimbOrientations_LimbOrientation.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations::GetIl2CppClass(), "LimbOrientation");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation::_ctor(UnityEngine_CoreModule::UnityEngine::Vector3 upperBoneForwardAxis, UnityEngine_CoreModule::UnityEngine::Vector3 lowerBoneForwardAxis, UnityEngine_CoreModule::UnityEngine::Vector3 lastBoneLeftAxis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&upperBoneForwardAxis;
	params[1] = (intptr_t)&lowerBoneForwardAxis;
	params[2] = (intptr_t)&lastBoneLeftAxis;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
