#include "UnityEngine_Joint.h"

IL2CPP::Il2CppClass* UnityEngine_PhysicsModule::UnityEngine::Joint::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.PhysicsModule.dll", "UnityEngine", "Joint");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_PhysicsModule::UnityEngine::Joint::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_PhysicsModule::UnityEngine::Rigidbody* UnityEngine_PhysicsModule::UnityEngine::Joint::get_connectedBody()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_connectedBody");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_PhysicsModule::UnityEngine::Rigidbody*)returnValue;
}
void UnityEngine_PhysicsModule::UnityEngine::Joint::set_connectedAnchor(UnityEngine_CoreModule::UnityEngine::Vector3 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_connectedAnchor", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Joint::set_connectedAnchor_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_connectedAnchor_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
