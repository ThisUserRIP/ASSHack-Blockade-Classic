#include "UnityEngine_PhysicsScene2D.h"

IL2CPP::Il2CppClass* UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.Physics2DModule.dll", "UnityEngine", "PhysicsScene2D");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::GetHashCode()
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
bool UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::Equals(mscorlib::System::Object* other)
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
bool UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::Equals(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "UnityEngine.PhysicsScene2D" });
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
UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&distance;
	params[3] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "UnityEngine.ContactFilter2D" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&distance;
	params[3] = (intptr_t)&contactFilter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::Raycast_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast_Internal", std::vector<std::string> { "UnityEngine.PhysicsScene2D", "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "UnityEngine.ContactFilter2D" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&distance;
	params[4] = (intptr_t)&contactFilter;
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
int32_t UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "UnityEngine.ContactFilter2D", "UnityEngine.RaycastHit2D[]" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&distance;
	params[3] = (intptr_t)&contactFilter;
	params[4] = (intptr_t)results;
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
int32_t UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::RaycastArray_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastArray_Internal", std::vector<std::string> { "UnityEngine.PhysicsScene2D", "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "UnityEngine.ContactFilter2D", "UnityEngine.RaycastHit2D[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&distance;
	params[4] = (intptr_t)&contactFilter;
	params[5] = (intptr_t)results;
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
int32_t UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, mscorlib::System::Collections::Generic::List_1<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "UnityEngine.ContactFilter2D", "System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&distance;
	params[3] = (intptr_t)&contactFilter;
	params[4] = (intptr_t)results;
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
int32_t UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::RaycastList_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, mscorlib::System::Collections::Generic::List_1<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastList_Internal", std::vector<std::string> { "UnityEngine.PhysicsScene2D", "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "UnityEngine.ContactFilter2D", "System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&distance;
	params[4] = (intptr_t)&contactFilter;
	params[5] = (intptr_t)results;
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
int32_t UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::GetRayIntersection(UnityEngine_CoreModule::UnityEngine::Ray ray, float distance, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRayIntersection", std::vector<std::string> { "UnityEngine.Ray", "System.Single", "UnityEngine.RaycastHit2D[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&distance;
	params[2] = (intptr_t)results;
	params[3] = (intptr_t)&layerMask;
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
int32_t UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float distance, int32_t layerMask, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRayIntersectionArray_Internal", std::vector<std::string> { "UnityEngine.PhysicsScene2D", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.RaycastHit2D[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&distance;
	params[4] = (intptr_t)&layerMask;
	params[5] = (intptr_t)results;
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
UnityEngine_Physics2DModule::UnityEngine::Collider2D* UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::OverlapPoint(UnityEngine_CoreModule::UnityEngine::Vector2 point, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapPoint", std::vector<std::string> { "UnityEngine.Vector2", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&point;
	params[1] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_Physics2DModule::UnityEngine::Collider2D*)returnValue;
}
UnityEngine_Physics2DModule::UnityEngine::Collider2D* UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::OverlapPoint_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2 point, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapPoint_Internal", std::vector<std::string> { "UnityEngine.PhysicsScene2D", "UnityEngine.Vector2", "UnityEngine.ContactFilter2D" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&point;
	params[2] = (intptr_t)&contactFilter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_Physics2DModule::UnityEngine::Collider2D*)returnValue;
}
void UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::Raycast_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2& origin, UnityEngine_CoreModule::UnityEngine::Vector2& direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& contactFilter, UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast_Internal_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene2D&", "UnityEngine.Vector2&", "UnityEngine.Vector2&", "System.Single", "UnityEngine.ContactFilter2D&", "UnityEngine.RaycastHit2D&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&distance;
	params[4] = (intptr_t)&contactFilter;
	params[5] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::RaycastArray_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2& origin, UnityEngine_CoreModule::UnityEngine::Vector2& direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& contactFilter, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastArray_Internal_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene2D&", "UnityEngine.Vector2&", "UnityEngine.Vector2&", "System.Single", "UnityEngine.ContactFilter2D&", "UnityEngine.RaycastHit2D[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&distance;
	params[4] = (intptr_t)&contactFilter;
	params[5] = (intptr_t)results;
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
int32_t UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::RaycastList_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2& origin, UnityEngine_CoreModule::UnityEngine::Vector2& direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& contactFilter, mscorlib::System::Collections::Generic::List_1<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastList_Internal_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene2D&", "UnityEngine.Vector2&", "UnityEngine.Vector2&", "System.Single", "UnityEngine.ContactFilter2D&", "System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&distance;
	params[4] = (intptr_t)&contactFilter;
	params[5] = (intptr_t)results;
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
int32_t UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& origin, UnityEngine_CoreModule::UnityEngine::Vector3& direction, float distance, int32_t layerMask, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRayIntersectionArray_Internal_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene2D&", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "System.Single", "System.Int32", "UnityEngine.RaycastHit2D[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&distance;
	params[4] = (intptr_t)&layerMask;
	params[5] = (intptr_t)results;
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
UnityEngine_Physics2DModule::UnityEngine::Collider2D* UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D::OverlapPoint_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2& point, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& contactFilter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverlapPoint_Internal_Injected", std::vector<std::string> { "UnityEngine.PhysicsScene2D&", "UnityEngine.Vector2&", "UnityEngine.ContactFilter2D&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&physicsScene;
	params[1] = (intptr_t)&point;
	params[2] = (intptr_t)&contactFilter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_Physics2DModule::UnityEngine::Collider2D*)returnValue;
}
