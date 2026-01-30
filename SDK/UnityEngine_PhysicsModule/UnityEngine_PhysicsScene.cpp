#include "UnityEngine_PhysicsScene.h"

IL2CPP::Il2CppClass* UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.PhysicsModule.dll", "UnityEngine", "PhysicsScene");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Equals(mscorlib::System::Object* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Equals(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "UnityEngine.PhysicsScene" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&layerMask;
	params[4] = (intptr_t)&queryTriggerInteraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Internal_RaycastTest(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_RaycastTest", std::vector<std::string> { "UnityEngine.PhysicsScene", "UnityEngine.Ray", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&layerMask;
	params[4] = (intptr_t)&queryTriggerInteraction;
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&hitInfo;
	params[3] = (intptr_t)&maxDistance;
	params[4] = (intptr_t)&layerMask;
	params[5] = (intptr_t)&queryTriggerInteraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Internal_Raycast(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hit, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Raycast", std::vector<std::string> { "UnityEngine.PhysicsScene", "UnityEngine.Ray", "System.Single", "UnityEngine.RaycastHit&", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&hit;
	params[4] = (intptr_t)&layerMask;
	params[5] = (intptr_t)&queryTriggerInteraction;
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
int32_t UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* raycastHits, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit[]", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)raycastHits;
	params[3] = (intptr_t)&maxDistance;
	params[4] = (intptr_t)&layerMask;
	params[5] = (intptr_t)&queryTriggerInteraction;
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
int32_t UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Internal_RaycastNonAlloc(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* raycastHits, float maxDistance, int32_t mask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_RaycastNonAlloc", std::vector<std::string> { "UnityEngine.PhysicsScene", "UnityEngine.Ray", "UnityEngine.RaycastHit[]", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)raycastHits;
	params[3] = (intptr_t)&maxDistance;
	params[4] = (intptr_t)&mask;
	params[5] = (intptr_t)&queryTriggerInteraction;
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Query_CapsuleCast(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 point1, UnityEngine_CoreModule::UnityEngine::Vector3 point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Query_CapsuleCast", std::vector<std::string> { "UnityEngine.PhysicsScene", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "System.Single", "UnityEngine.RaycastHit&", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&point1;
	params[2] = (intptr_t)&point2;
	params[3] = (intptr_t)&radius;
	params[4] = (intptr_t)&direction;
	params[5] = (intptr_t)&maxDistance;
	params[6] = (intptr_t)&hitInfo;
	params[7] = (intptr_t)&layerMask;
	params[8] = (intptr_t)&queryTriggerInteraction;
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Internal_CapsuleCast(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 point1, UnityEngine_CoreModule::UnityEngine::Vector3 point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CapsuleCast", std::vector<std::string> { "UnityEngine.PhysicsScene", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&point1;
	params[2] = (intptr_t)&point2;
	params[3] = (intptr_t)&radius;
	params[4] = (intptr_t)&direction;
	params[5] = (intptr_t)&hitInfo;
	params[6] = (intptr_t)&maxDistance;
	params[7] = (intptr_t)&layerMask;
	params[8] = (intptr_t)&queryTriggerInteraction;
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::CapsuleCast(UnityEngine_CoreModule::UnityEngine::Vector3 point1, UnityEngine_CoreModule::UnityEngine::Vector3 point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CapsuleCast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&point1;
	params[1] = (intptr_t)&point2;
	params[2] = (intptr_t)&radius;
	params[3] = (intptr_t)&direction;
	params[4] = (intptr_t)&hitInfo;
	params[5] = (intptr_t)&maxDistance;
	params[6] = (intptr_t)&layerMask;
	params[7] = (intptr_t)&queryTriggerInteraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Query_SphereCast(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Query_SphereCast", std::vector<std::string> { "UnityEngine.PhysicsScene", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "System.Single", "UnityEngine.RaycastHit&", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&radius;
	params[3] = (intptr_t)&direction;
	params[4] = (intptr_t)&maxDistance;
	params[5] = (intptr_t)&hitInfo;
	params[6] = (intptr_t)&layerMask;
	params[7] = (intptr_t)&queryTriggerInteraction;
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Internal_SphereCast(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SphereCast", std::vector<std::string> { "UnityEngine.PhysicsScene", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&radius;
	params[3] = (intptr_t)&direction;
	params[4] = (intptr_t)&hitInfo;
	params[5] = (intptr_t)&maxDistance;
	params[6] = (intptr_t)&layerMask;
	params[7] = (intptr_t)&queryTriggerInteraction;
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::SphereCast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SphereCast", std::vector<std::string> { "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&radius;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&hitInfo;
	params[4] = (intptr_t)&maxDistance;
	params[5] = (intptr_t)&layerMask;
	params[6] = (intptr_t)&queryTriggerInteraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Internal_RaycastTest_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Ray& ray, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_RaycastTest_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene&", "UnityEngine.Ray&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&layerMask;
	params[4] = (intptr_t)&queryTriggerInteraction;
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Internal_Raycast_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Ray& ray, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hit, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Raycast_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene&", "UnityEngine.Ray&", "System.Single", "UnityEngine.RaycastHit&", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&hit;
	params[4] = (intptr_t)&layerMask;
	params[5] = (intptr_t)&queryTriggerInteraction;
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
int32_t UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Ray& ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* raycastHits, float maxDistance, int32_t mask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_RaycastNonAlloc_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene&", "UnityEngine.Ray&", "UnityEngine.RaycastHit[]", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)raycastHits;
	params[3] = (intptr_t)&maxDistance;
	params[4] = (intptr_t)&mask;
	params[5] = (intptr_t)&queryTriggerInteraction;
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Query_CapsuleCast_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3& direction, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Query_CapsuleCast_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene&", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "System.Single", "UnityEngine.Vector3&", "System.Single", "UnityEngine.RaycastHit&", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&point1;
	params[2] = (intptr_t)&point2;
	params[3] = (intptr_t)&radius;
	params[4] = (intptr_t)&direction;
	params[5] = (intptr_t)&maxDistance;
	params[6] = (intptr_t)&hitInfo;
	params[7] = (intptr_t)&layerMask;
	params[8] = (intptr_t)&queryTriggerInteraction;
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
bool UnityEngine_PhysicsModule::UnityEngine::PhysicsScene::Query_SphereCast_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3& direction, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Query_SphereCast_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene&", "UnityEngine.Vector3&", "System.Single", "UnityEngine.Vector3&", "System.Single", "UnityEngine.RaycastHit&", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&radius;
	params[3] = (intptr_t)&direction;
	params[4] = (intptr_t)&maxDistance;
	params[5] = (intptr_t)&hitInfo;
	params[6] = (intptr_t)&layerMask;
	params[7] = (intptr_t)&queryTriggerInteraction;
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
