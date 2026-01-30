#include "UnityEngine_StaticBatchingHelper.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::StaticBatchingHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "StaticBatchingHelper");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::StaticBatchingHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Mesh* UnityEngine_CoreModule::UnityEngine::StaticBatchingHelper::InternalCombineVertices(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::MeshSubsetCombineUtility_MeshInstance>* meshes, mscorlib::System::String* meshName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalCombineVertices", std::vector<std::string> { "UnityEngine.MeshSubsetCombineUtility/MeshInstance[]", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)meshes;
	params[1] = (intptr_t)meshName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Mesh*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::StaticBatchingHelper::InternalCombineIndices(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::MeshSubsetCombineUtility_SubMeshInstance>* submeshes, UnityEngine_CoreModule::UnityEngine::Mesh* combinedMesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalCombineIndices", std::vector<std::string> { "UnityEngine.MeshSubsetCombineUtility/SubMeshInstance[]", "UnityEngine.Mesh" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)submeshes;
	params[1] = (intptr_t)combinedMesh;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::StaticBatchingHelper::IsMeshBatchable(UnityEngine_CoreModule::UnityEngine::Mesh* mesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsMeshBatchable", std::vector<std::string> { "UnityEngine.Mesh" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mesh;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
