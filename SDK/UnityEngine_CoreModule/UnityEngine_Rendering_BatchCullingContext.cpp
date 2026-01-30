#include "UnityEngine_Rendering_BatchCullingContext.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::BatchCullingContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Rendering", "BatchCullingContext");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::BatchCullingContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::BatchCullingContext::_ctor(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Plane> inCullingPlanes, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::BatchVisibility> inOutBatchVisibility, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> outVisibleIndices, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> outVisibleIndicesY, UnityEngine_CoreModule::UnityEngine::Rendering::LODParameters inLodParameters, UnityEngine_CoreModule::UnityEngine::Matrix4x4 inCullingMatrix, float inNearPlane)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Unity.Collections.NativeArray`1<UnityEngine.Plane>", "Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>", "Unity.Collections.NativeArray`1<System.Int32>", "Unity.Collections.NativeArray`1<System.Int32>", "UnityEngine.Rendering.LODParameters", "UnityEngine.Matrix4x4", "System.Single" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&inCullingPlanes;
	params[1] = (intptr_t)&inOutBatchVisibility;
	params[2] = (intptr_t)&outVisibleIndices;
	params[3] = (intptr_t)&outVisibleIndicesY;
	params[4] = (intptr_t)&inLodParameters;
	params[5] = (intptr_t)&inCullingMatrix;
	params[6] = (intptr_t)&inNearPlane;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
