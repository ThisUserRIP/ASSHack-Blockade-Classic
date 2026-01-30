#include "UnityEngine_Physics2D.h"

IL2CPP::Il2CppClass* UnityEngine_Physics2DModule::UnityEngine::Physics2D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.Physics2DModule.dll", "UnityEngine", "Physics2D");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_Physics2DModule::UnityEngine::Physics2D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D UnityEngine_Physics2DModule::UnityEngine::Physics2D::get_defaultPhysicsScene()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultPhysicsScene");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D ret;
		std::memset(&ret, 0, sizeof(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D));
		return ret;
	}
	return static_cast<UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D>(*(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_Physics2DModule::UnityEngine::Physics2D::get_queriesHitTriggers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_queriesHitTriggers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D UnityEngine_Physics2DModule::UnityEngine::Physics2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D ret;
		std::memset(&ret, 0, sizeof(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D));
		return ret;
	}
	return static_cast<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>(*(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D*)il2cpp_object_unbox(returnValue));
}
UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D UnityEngine_Physics2DModule::UnityEngine::Physics2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&distance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D ret;
		std::memset(&ret, 0, sizeof(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D));
		return ret;
	}
	return static_cast<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>(*(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D*)il2cpp_object_unbox(returnValue));
}
UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D UnityEngine_Physics2DModule::UnityEngine::Physics2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&distance;
	params[3] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D ret;
		std::memset(&ret, 0, sizeof(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D));
		return ret;
	}
	return static_cast<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>(*(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D*)il2cpp_object_unbox(returnValue));
}
UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D UnityEngine_Physics2DModule::UnityEngine::Physics2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, int32_t layerMask, float minDepth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&distance;
	params[3] = (intptr_t)&layerMask;
	params[4] = (intptr_t)&minDepth;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D ret;
		std::memset(&ret, 0, sizeof(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D));
		return ret;
	}
	return static_cast<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>(*(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D*)il2cpp_object_unbox(returnValue));
}
UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D UnityEngine_Physics2DModule::UnityEngine::Physics2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, int32_t layerMask, float minDepth, float maxDepth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "System.Int32", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&distance;
	params[3] = (intptr_t)&layerMask;
	params[4] = (intptr_t)&minDepth;
	params[5] = (intptr_t)&maxDepth;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D ret;
		std::memset(&ret, 0, sizeof(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D));
		return ret;
	}
	return static_cast<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>(*(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_Physics2DModule::UnityEngine::Physics2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "UnityEngine.ContactFilter2D", "UnityEngine.RaycastHit2D[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&contactFilter;
	params[3] = (intptr_t)results;
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
int32_t UnityEngine_Physics2DModule::UnityEngine::Physics2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results, float distance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "UnityEngine.ContactFilter2D", "UnityEngine.RaycastHit2D[]", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&contactFilter;
	params[3] = (intptr_t)results;
	params[4] = (intptr_t)&distance;
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
int32_t UnityEngine_Physics2DModule::UnityEngine::Physics2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, mscorlib::System::Collections::Generic::List_1<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results, float distance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "UnityEngine.ContactFilter2D", "System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&contactFilter;
	params[3] = (intptr_t)results;
	params[4] = (intptr_t)&distance;
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
IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* UnityEngine_Physics2DModule::UnityEngine::Physics2D::GetRayIntersectionAll(UnityEngine_CoreModule::UnityEngine::Ray ray)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRayIntersectionAll", std::vector<std::string> { "UnityEngine.Ray" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ray;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>*)returnValue;
}
IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* UnityEngine_Physics2DModule::UnityEngine::Physics2D::GetRayIntersectionAll(UnityEngine_CoreModule::UnityEngine::Ray ray, float distance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRayIntersectionAll", std::vector<std::string> { "UnityEngine.Ray", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&distance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>*)returnValue;
}
IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* UnityEngine_Physics2DModule::UnityEngine::Physics2D::GetRayIntersectionAll(UnityEngine_CoreModule::UnityEngine::Ray ray, float distance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRayIntersectionAll", std::vector<std::string> { "UnityEngine.Ray", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&distance;
	params[2] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>*)returnValue;
}
IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* UnityEngine_Physics2DModule::UnityEngine::Physics2D::GetRayIntersectionAll_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float distance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRayIntersectionAll_Internal", std::vector<std::string> { "UnityEngine.PhysicsScene2D", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&distance;
	params[4] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>*)returnValue;
}
int32_t UnityEngine_Physics2DModule::UnityEngine::Physics2D::GetRayIntersectionNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRayIntersectionNonAlloc", std::vector<std::string> { "UnityEngine.Ray", "UnityEngine.RaycastHit2D[]" });
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
int32_t UnityEngine_Physics2DModule::UnityEngine::Physics2D::GetRayIntersectionNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results, float distance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRayIntersectionNonAlloc", std::vector<std::string> { "UnityEngine.Ray", "UnityEngine.RaycastHit2D[]", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&distance;
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
int32_t UnityEngine_Physics2DModule::UnityEngine::Physics2D::GetRayIntersectionNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results, float distance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRayIntersectionNonAlloc", std::vector<std::string> { "UnityEngine.Ray", "UnityEngine.RaycastHit2D[]", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&distance;
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
UnityEngine_Physics2DModule::UnityEngine::Collider2D* UnityEngine_Physics2DModule::UnityEngine::Physics2D::OverlapPoint(UnityEngine_CoreModule::UnityEngine::Vector2 point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapPoint", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_Physics2DModule::UnityEngine::Collider2D*)returnValue;
}
IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::Collider2D*>* UnityEngine_Physics2DModule::UnityEngine::Physics2D::OverlapCircleAll(UnityEngine_CoreModule::UnityEngine::Vector2 point, float radius)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapCircleAll", std::vector<std::string> { "UnityEngine.Vector2", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&point;
	params[1] = (intptr_t)&radius;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::Collider2D*>*)returnValue;
}
IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::Collider2D*>* UnityEngine_Physics2DModule::UnityEngine::Physics2D::OverlapCircleAll_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2 point, float radius, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapCircleAll_Internal", std::vector<std::string> { "UnityEngine.PhysicsScene2D", "UnityEngine.Vector2", "System.Single", "UnityEngine.ContactFilter2D" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&point;
	params[2] = (intptr_t)&radius;
	params[3] = (intptr_t)&contactFilter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::Collider2D*>*)returnValue;
}
void UnityEngine_Physics2DModule::UnityEngine::Physics2D::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* UnityEngine_Physics2DModule::UnityEngine::Physics2D::GetRayIntersectionAll_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& origin, UnityEngine_CoreModule::UnityEngine::Vector3& direction, float distance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRayIntersectionAll_Internal_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene2D&", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&distance;
	params[4] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>*)returnValue;
}
IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::Collider2D*>* UnityEngine_Physics2DModule::UnityEngine::Physics2D::OverlapCircleAll_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2& point, float radius, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& contactFilter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapCircleAll_Internal_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene2D&", "UnityEngine.Vector2&", "System.Single", "UnityEngine.ContactFilter2D&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&point;
	params[2] = (intptr_t)&radius;
	params[3] = (intptr_t)&contactFilter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::Collider2D*>*)returnValue;
}
