#include "UIfxManager.h"

IL2CPP::Il2CppClass* Assembly_CSharp::UIfxManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "UIfxManager");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::UIfxManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::UIfxManager::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::UIfxManager::CreateDamagePopup(UnityEngine_CoreModule::UnityEngine::Vector3 _pos, int32_t _damage, int32_t _damageType, int32_t _damageHead, int32_t _damageArmor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDamagePopup", std::vector<std::string> { "UnityEngine.Vector3", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&_pos;
	params[1] = (intptr_t)&_damage;
	params[2] = (intptr_t)&_damageType;
	params[3] = (intptr_t)&_damageHead;
	params[4] = (intptr_t)&_damageArmor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::UIfxManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
