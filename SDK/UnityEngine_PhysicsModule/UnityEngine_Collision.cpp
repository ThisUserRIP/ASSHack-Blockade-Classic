#include "UnityEngine_Collision.h"

IL2CPP::Il2CppClass* UnityEngine_PhysicsModule::UnityEngine::Collision::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.PhysicsModule.dll", "UnityEngine", "Collision");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_PhysicsModule::UnityEngine::Collision::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_PhysicsModule::UnityEngine::Collision::get_relativeVelocity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_relativeVelocity");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_PhysicsModule::UnityEngine::Rigidbody* UnityEngine_PhysicsModule::UnityEngine::Collision::get_rigidbody()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rigidbody");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_PhysicsModule::UnityEngine::Rigidbody*)returnValue;
}
UnityEngine_PhysicsModule::UnityEngine::Collider* UnityEngine_PhysicsModule::UnityEngine::Collision::get_collider()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_collider");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_PhysicsModule::UnityEngine::Collider*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Transform* UnityEngine_PhysicsModule::UnityEngine::Collision::get_transform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_transform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Transform*)returnValue;
}
IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::ContactPoint>* UnityEngine_PhysicsModule::UnityEngine::Collision::get_contacts()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_contacts");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::ContactPoint>*)returnValue;
}
