#include "UnityEngine_InternalStaticBatchingUtility_StaticBatcherGOSorter.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility::GetIl2CppClass(), "StaticBatcherGOSorter");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int64_t UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter::GetMaterialId(UnityEngine_CoreModule::UnityEngine::Renderer* renderer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaterialId", std::vector<std::string> { "UnityEngine.Renderer" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)renderer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter::GetLightmapIndex(UnityEngine_CoreModule::UnityEngine::Renderer* renderer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLightmapIndex", std::vector<std::string> { "UnityEngine.Renderer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)renderer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Renderer* UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter::GetRenderer(UnityEngine_CoreModule::UnityEngine::GameObject* go)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderer", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)go;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Renderer*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Mesh* UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter::GetMesh(UnityEngine_CoreModule::UnityEngine::GameObject* go)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMesh", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)go;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Mesh*)returnValue;
}
int64_t UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter::GetRendererId(UnityEngine_CoreModule::UnityEngine::Renderer* renderer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRendererId", std::vector<std::string> { "UnityEngine.Renderer" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)renderer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
