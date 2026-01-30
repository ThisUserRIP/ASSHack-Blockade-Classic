#include "UnityEngine_InternalStaticBatchingUtility.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "InternalStaticBatchingUtility");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
uint32_t UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility::GetMeshFormatHash(UnityEngine_CoreModule::UnityEngine::Mesh* mesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMeshFormatHash", std::vector<std::string> { "UnityEngine.Mesh" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mesh;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility::SortGameObjectsForStaticBatching(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* gos, UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter* sorter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortGameObjectsForStaticBatching", std::vector<std::string> { "UnityEngine.GameObject[]", "UnityEngine.InternalStaticBatchingUtility/StaticBatcherGOSorter" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)gos;
	params[1] = (intptr_t)sorter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility::CombineGameObjects(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* gos, UnityEngine_CoreModule::UnityEngine::GameObject* staticBatchRoot, bool isEditorPostprocessScene, UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter* sorter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CombineGameObjects", std::vector<std::string> { "UnityEngine.GameObject[]", "UnityEngine.GameObject", "System.Boolean", "UnityEngine.InternalStaticBatchingUtility/StaticBatcherGOSorter" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)gos;
	params[1] = (intptr_t)staticBatchRoot;
	params[2] = (intptr_t)&isEditorPostprocessScene;
	params[3] = (intptr_t)sorter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility::MakeBatch(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::MeshSubsetCombineUtility_MeshContainer>* meshes, UnityEngine_CoreModule::UnityEngine::Transform* staticBatchRootTransform, int32_t batchIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakeBatch", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/MeshContainer>", "UnityEngine.Transform", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)meshes;
	params[1] = (intptr_t)staticBatchRootTransform;
	params[2] = (intptr_t)&batchIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
