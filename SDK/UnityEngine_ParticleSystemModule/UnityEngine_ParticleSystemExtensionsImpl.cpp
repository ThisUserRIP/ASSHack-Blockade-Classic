#include "UnityEngine_ParticleSystemExtensionsImpl.h"

IL2CPP::Il2CppClass* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemExtensionsImpl::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.ParticleSystemModule.dll", "UnityEngine", "ParticleSystemExtensionsImpl");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemExtensionsImpl::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemExtensionsImpl::GetCollisionEvents(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* ps, UnityEngine_CoreModule::UnityEngine::GameObject* go, mscorlib::System::Collections::Generic::List_1<UnityEngine_ParticleSystemModule::UnityEngine::ParticleCollisionEvent>* collisionEvents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCollisionEvents", std::vector<std::string> { "UnityEngine.ParticleSystem", "UnityEngine.GameObject", "System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)ps;
	params[1] = (intptr_t)go;
	params[2] = (intptr_t)collisionEvents;
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
