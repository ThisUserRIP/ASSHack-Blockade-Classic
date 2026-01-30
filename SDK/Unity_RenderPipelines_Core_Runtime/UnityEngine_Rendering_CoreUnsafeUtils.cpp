#include "UnityEngine_Rendering_CoreUnsafeUtils.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUnsafeUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "CoreUnsafeUtils");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUnsafeUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUnsafeUtils::QuickSort(IL2CPP::Array<uint32_t>* arr, int32_t left, int32_t right)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QuickSort", std::vector<std::string> { "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)arr;
	params[1] = (intptr_t)&left;
	params[2] = (intptr_t)&right;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUnsafeUtils::CompareHashes(int32_t oldHashCount, UnityEngine_CoreModule::UnityEngine::Hash128* oldHashes, int32_t newHashCount, UnityEngine_CoreModule::UnityEngine::Hash128* newHashes, int32_t* addIndices, int32_t* removeIndices, int32_t& addCount, int32_t& remCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareHashes", std::vector<std::string> { "System.Int32", "UnityEngine.Hash128*", "System.Int32", "UnityEngine.Hash128*", "System.Int32*", "System.Int32*", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&oldHashCount;
	params[1] = (intptr_t)oldHashes;
	params[2] = (intptr_t)&newHashCount;
	params[3] = (intptr_t)newHashes;
	params[4] = (intptr_t)addIndices;
	params[5] = (intptr_t)removeIndices;
	params[6] = (intptr_t)&addCount;
	params[7] = (intptr_t)&remCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUnsafeUtils::CombineHashes(int32_t count, UnityEngine_CoreModule::UnityEngine::Hash128* hashes, UnityEngine_CoreModule::UnityEngine::Hash128* outHash)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CombineHashes", std::vector<std::string> { "System.Int32", "UnityEngine.Hash128*", "UnityEngine.Hash128*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&count;
	params[1] = (intptr_t)hashes;
	params[2] = (intptr_t)outHash;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUnsafeUtils::HaveDuplicates(IL2CPP::Array<int32_t>* arr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HaveDuplicates", std::vector<std::string> { "System.Int32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)arr;
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
