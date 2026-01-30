#include "UnityEngine_AI_NavMesh.h"

IL2CPP::Il2CppClass* UnityEngine_AIModule::UnityEngine::AI::NavMesh::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AIModule.dll", "UnityEngine.AI", "NavMesh");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AIModule::UnityEngine::AI::NavMesh::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_AIModule::UnityEngine::AI::NavMesh::Internal_CallOnNavMeshPreUpdate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CallOnNavMeshPreUpdate");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_AIModule::UnityEngine::AI::NavMesh::CalculatePath(UnityEngine_CoreModule::UnityEngine::Vector3 sourcePosition, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, int32_t areaMask, UnityEngine_AIModule::UnityEngine::AI::NavMeshPath* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculatePath", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Int32", "UnityEngine.AI.NavMeshPath" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&sourcePosition;
	params[1] = (intptr_t)&targetPosition;
	params[2] = (intptr_t)&areaMask;
	params[3] = (intptr_t)path;
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
bool UnityEngine_AIModule::UnityEngine::AI::NavMesh::CalculatePathInternal(UnityEngine_CoreModule::UnityEngine::Vector3 sourcePosition, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, int32_t areaMask, UnityEngine_AIModule::UnityEngine::AI::NavMeshPath* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculatePathInternal", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Int32", "UnityEngine.AI.NavMeshPath" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&sourcePosition;
	params[1] = (intptr_t)&targetPosition;
	params[2] = (intptr_t)&areaMask;
	params[3] = (intptr_t)path;
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
bool UnityEngine_AIModule::UnityEngine::AI::NavMesh::SamplePosition(UnityEngine_CoreModule::UnityEngine::Vector3 sourcePosition, UnityEngine_AIModule::UnityEngine::AI::NavMeshHit& hit, float maxDistance, int32_t areaMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SamplePosition", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.AI.NavMeshHit&", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&sourcePosition;
	params[1] = (intptr_t)&hit;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&areaMask;
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
bool UnityEngine_AIModule::UnityEngine::AI::NavMesh::CalculatePathInternal_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& sourcePosition, UnityEngine_CoreModule::UnityEngine::Vector3& targetPosition, int32_t areaMask, UnityEngine_AIModule::UnityEngine::AI::NavMeshPath* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculatePathInternal_Injected", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&", "System.Int32", "UnityEngine.AI.NavMeshPath" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&sourcePosition;
	params[1] = (intptr_t)&targetPosition;
	params[2] = (intptr_t)&areaMask;
	params[3] = (intptr_t)path;
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
bool UnityEngine_AIModule::UnityEngine::AI::NavMesh::SamplePosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& sourcePosition, UnityEngine_AIModule::UnityEngine::AI::NavMeshHit& hit, float maxDistance, int32_t areaMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SamplePosition_Injected", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.AI.NavMeshHit&", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&sourcePosition;
	params[1] = (intptr_t)&hit;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&areaMask;
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
