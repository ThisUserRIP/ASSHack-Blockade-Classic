#include "RootMotion_TriggerEventBroadcaster.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::TriggerEventBroadcaster::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion", "TriggerEventBroadcaster");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::TriggerEventBroadcaster::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::TriggerEventBroadcaster::OnTriggerEnter(UnityEngine_PhysicsModule::UnityEngine::Collider* collider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnTriggerEnter", std::vector<std::string> { "UnityEngine.Collider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)collider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::TriggerEventBroadcaster::OnTriggerStay(UnityEngine_PhysicsModule::UnityEngine::Collider* collider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnTriggerStay", std::vector<std::string> { "UnityEngine.Collider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)collider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::TriggerEventBroadcaster::OnTriggerExit(UnityEngine_PhysicsModule::UnityEngine::Collider* collider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnTriggerExit", std::vector<std::string> { "UnityEngine.Collider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)collider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::TriggerEventBroadcaster::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
