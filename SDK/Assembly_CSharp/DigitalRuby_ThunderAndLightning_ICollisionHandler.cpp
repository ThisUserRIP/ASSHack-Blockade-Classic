#include "DigitalRuby_ThunderAndLightning_ICollisionHandler.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DigitalRuby::ThunderAndLightning::ICollisionHandler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DigitalRuby.ThunderAndLightning", "ICollisionHandler");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DigitalRuby::ThunderAndLightning::ICollisionHandler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::ICollisionHandler::HandleCollision(UnityEngine_CoreModule::UnityEngine::GameObject* obj, mscorlib::System::Collections::Generic::List_1<UnityEngine_ParticleSystemModule::UnityEngine::ParticleCollisionEvent>* collision, int32_t collisionCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleCollision", std::vector<std::string> { "UnityEngine.GameObject", "System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)collision;
	params[2] = (intptr_t)&collisionCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
