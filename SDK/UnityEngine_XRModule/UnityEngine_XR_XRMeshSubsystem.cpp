#include "UnityEngine_XR_XRMeshSubsystem.h"

IL2CPP::Il2CppClass* UnityEngine_XRModule::UnityEngine::XR::XRMeshSubsystem::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.XRModule.dll", "UnityEngine.XR", "XRMeshSubsystem");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_XRModule::UnityEngine::XR::XRMeshSubsystem::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_XRModule::UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate(UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult result, mscorlib::System::Action_1<UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult>* onMeshGenerationComplete)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeMeshReadyDelegate", std::vector<std::string> { "UnityEngine.XR.MeshGenerationResult", "System.Action`1<UnityEngine.XR.MeshGenerationResult>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)onMeshGenerationComplete;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::XRMeshSubsystem::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
