#include "UnityEngine_Physics.h"

IL2CPP::Il2CppClass* UnityEngine_PhysicsModule::UnityEngine::Physics::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.PhysicsModule.dll", "UnityEngine", "Physics");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_PhysicsModule::UnityEngine::Physics::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_PhysicsModule::UnityEngine::Physics::get_gravity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_gravity");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_PhysicsModule::UnityEngine::PhysicsScene UnityEngine_PhysicsModule::UnityEngine::Physics::get_defaultPhysicsScene()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultPhysicsScene");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_PhysicsModule::UnityEngine::PhysicsScene ret;
		std::memset(&ret, 0, sizeof(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene));
		return ret;
	}
	return static_cast<UnityEngine_PhysicsModule::UnityEngine::PhysicsScene>(*(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_PhysicsModule::UnityEngine::Physics::IgnoreCollision(UnityEngine_PhysicsModule::UnityEngine::Collider* collider1, UnityEngine_PhysicsModule::UnityEngine::Collider* collider2, bool ignore)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IgnoreCollision", std::vector<std::string> { "UnityEngine.Collider", "UnityEngine.Collider", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)collider1;
	params[1] = (intptr_t)collider2;
	params[2] = (intptr_t)&ignore;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Physics::IgnoreCollision(UnityEngine_PhysicsModule::UnityEngine::Collider* collider1, UnityEngine_PhysicsModule::UnityEngine::Collider* collider2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IgnoreCollision", std::vector<std::string> { "UnityEngine.Collider", "UnityEngine.Collider" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)collider1;
	params[1] = (intptr_t)collider2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Physics::IgnoreLayerCollision(int32_t layer1, int32_t layer2, bool ignore)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IgnoreLayerCollision", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&layer1;
	params[1] = (intptr_t)&layer2;
	params[2] = (intptr_t)&ignore;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Physics::IgnoreLayerCollision(int32_t layer1, int32_t layer2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IgnoreLayerCollision", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&layer1;
	params[1] = (intptr_t)&layer2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&layerMask;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&maxDistance;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&hitInfo;
	params[3] = (intptr_t)&maxDistance;
	params[4] = (intptr_t)&layerMask;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&hitInfo;
	params[3] = (intptr_t)&maxDistance;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&hitInfo;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Ray", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&maxDistance;
	params[2] = (intptr_t)&layerMask;
	params[3] = (intptr_t)&queryTriggerInteraction;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Ray", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&maxDistance;
	params[2] = (intptr_t)&layerMask;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Ray", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&maxDistance;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Ray" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ray;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Ray", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&hitInfo;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Ray", "UnityEngine.RaycastHit&", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&hitInfo;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&layerMask;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Ray", "UnityEngine.RaycastHit&", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&hitInfo;
	params[2] = (intptr_t)&maxDistance;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Ray", "UnityEngine.RaycastHit&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&hitInfo;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Linecast(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Linecast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&end;
	params[2] = (intptr_t)&hitInfo;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Linecast(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Linecast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&end;
	params[2] = (intptr_t)&hitInfo;
	params[3] = (intptr_t)&layerMask;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::Linecast(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Linecast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&end;
	params[2] = (intptr_t)&hitInfo;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::CapsuleCast(UnityEngine_CoreModule::UnityEngine::Vector3 point1, UnityEngine_CoreModule::UnityEngine::Vector3 point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::CapsuleCast(UnityEngine_CoreModule::UnityEngine::Vector3 point1, UnityEngine_CoreModule::UnityEngine::Vector3 point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CapsuleCast", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&point1;
	params[1] = (intptr_t)&point2;
	params[2] = (intptr_t)&radius;
	params[3] = (intptr_t)&direction;
	params[4] = (intptr_t)&hitInfo;
	params[5] = (intptr_t)&maxDistance;
	params[6] = (intptr_t)&layerMask;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::SphereCast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::SphereCast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SphereCast", std::vector<std::string> { "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&radius;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&hitInfo;
	params[4] = (intptr_t)&maxDistance;
	params[5] = (intptr_t)&layerMask;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::SphereCast(UnityEngine_CoreModule::UnityEngine::Ray ray, float radius, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SphereCast", std::vector<std::string> { "UnityEngine.Ray", "System.Single", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&radius;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::SphereCast(UnityEngine_CoreModule::UnityEngine::Ray ray, float radius, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SphereCast", std::vector<std::string> { "UnityEngine.Ray", "System.Single", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&radius;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&layerMask;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::SphereCast(UnityEngine_CoreModule::UnityEngine::Ray ray, float radius, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SphereCast", std::vector<std::string> { "UnityEngine.Ray", "System.Single", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&radius;
	params[2] = (intptr_t)&hitInfo;
	params[3] = (intptr_t)&maxDistance;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::SphereCast(UnityEngine_CoreModule::UnityEngine::Ray ray, float radius, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SphereCast", std::vector<std::string> { "UnityEngine.Ray", "System.Single", "UnityEngine.RaycastHit&", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&radius;
	params[2] = (intptr_t)&hitInfo;
	params[3] = (intptr_t)&maxDistance;
	params[4] = (intptr_t)&layerMask;
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
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* UnityEngine_PhysicsModule::UnityEngine::Physics::Internal_RaycastAll(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t mask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_RaycastAll", std::vector<std::string> { "UnityEngine.PhysicsScene", "UnityEngine.Ray", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&mask;
	params[4] = (intptr_t)&queryTriggerInteraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastAll(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastAll", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&layerMask;
	params[4] = (intptr_t)&queryTriggerInteraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastAll(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastAll", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastAll(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastAll", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&maxDistance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastAll(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastAll", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastAll(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastAll", std::vector<std::string> { "UnityEngine.Ray", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&maxDistance;
	params[2] = (intptr_t)&layerMask;
	params[3] = (intptr_t)&queryTriggerInteraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastAll(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastAll", std::vector<std::string> { "UnityEngine.Ray", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&maxDistance;
	params[2] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastAll(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastAll", std::vector<std::string> { "UnityEngine.Ray", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&maxDistance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastAll(UnityEngine_CoreModule::UnityEngine::Ray ray)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastAll", std::vector<std::string> { "UnityEngine.Ray" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ray;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>*)returnValue;
}
int32_t UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastNonAlloc", std::vector<std::string> { "UnityEngine.Ray", "UnityEngine.RaycastHit[]", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&layerMask;
	params[4] = (intptr_t)&queryTriggerInteraction;
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
int32_t UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastNonAlloc", std::vector<std::string> { "UnityEngine.Ray", "UnityEngine.RaycastHit[]", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&layerMask;
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
int32_t UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastNonAlloc", std::vector<std::string> { "UnityEngine.Ray", "UnityEngine.RaycastHit[]", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&maxDistance;
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
int32_t UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastNonAlloc", std::vector<std::string> { "UnityEngine.Ray", "UnityEngine.RaycastHit[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)results;
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
int32_t UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastNonAlloc", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit[]", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)results;
	params[3] = (intptr_t)&maxDistance;
	params[4] = (intptr_t)&layerMask;
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
int32_t UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastNonAlloc", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit[]", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)results;
	params[3] = (intptr_t)&maxDistance;
	params[4] = (intptr_t)&layerMask;
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
int32_t UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastNonAlloc", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit[]", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)results;
	params[3] = (intptr_t)&maxDistance;
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
int32_t UnityEngine_PhysicsModule::UnityEngine::Physics::RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastNonAlloc", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)results;
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
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* UnityEngine_PhysicsModule::UnityEngine::Physics::OverlapSphere_Internal(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapSphere_Internal", std::vector<std::string> { "UnityEngine.PhysicsScene", "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&position;
	params[2] = (intptr_t)&radius;
	params[3] = (intptr_t)&layerMask;
	params[4] = (intptr_t)&queryTriggerInteraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* UnityEngine_PhysicsModule::UnityEngine::Physics::OverlapSphere(UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapSphere", std::vector<std::string> { "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&radius;
	params[2] = (intptr_t)&layerMask;
	params[3] = (intptr_t)&queryTriggerInteraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* UnityEngine_PhysicsModule::UnityEngine::Physics::OverlapSphere(UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapSphere", std::vector<std::string> { "UnityEngine.Vector3", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&radius;
	params[2] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* UnityEngine_PhysicsModule::UnityEngine::Physics::OverlapSphere(UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapSphere", std::vector<std::string> { "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&radius;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>*)returnValue;
}
bool UnityEngine_PhysicsModule::UnityEngine::Physics::CheckSphere_Internal(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckSphere_Internal", std::vector<std::string> { "UnityEngine.PhysicsScene", "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&position;
	params[2] = (intptr_t)&radius;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::CheckSphere(UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckSphere", std::vector<std::string> { "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&radius;
	params[2] = (intptr_t)&layerMask;
	params[3] = (intptr_t)&queryTriggerInteraction;
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
bool UnityEngine_PhysicsModule::UnityEngine::Physics::CheckSphere(UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckSphere", std::vector<std::string> { "UnityEngine.Vector3", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&radius;
	params[2] = (intptr_t)&layerMask;
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
void UnityEngine_PhysicsModule::UnityEngine::Physics::get_gravity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_gravity_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Physics::get_defaultPhysicsScene_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultPhysicsScene_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* UnityEngine_PhysicsModule::UnityEngine::Physics::Internal_RaycastAll_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Ray& ray, float maxDistance, int32_t mask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_RaycastAll_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene&", "UnityEngine.Ray&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&maxDistance;
	params[3] = (intptr_t)&mask;
	params[4] = (intptr_t)&queryTriggerInteraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* UnityEngine_PhysicsModule::UnityEngine::Physics::OverlapSphere_Internal_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapSphere_Internal_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene&", "UnityEngine.Vector3&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&position;
	params[2] = (intptr_t)&radius;
	params[3] = (intptr_t)&layerMask;
	params[4] = (intptr_t)&queryTriggerInteraction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>*)returnValue;
}
bool UnityEngine_PhysicsModule::UnityEngine::Physics::CheckSphere_Internal_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckSphere_Internal_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene&", "UnityEngine.Vector3&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&position;
	params[2] = (intptr_t)&radius;
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
