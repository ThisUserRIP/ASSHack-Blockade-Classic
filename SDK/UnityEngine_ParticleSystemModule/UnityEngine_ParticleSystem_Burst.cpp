#include "UnityEngine_ParticleSystem_Burst.h"

IL2CPP::Il2CppClass* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Burst::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem::GetIl2CppClass(), "Burst");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Burst::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int16_t UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Burst::get_minCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_minCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int16_t ret;
		std::memset(&ret, 0, sizeof(int16_t));
		return ret;
	}
	return static_cast<int16_t>(*(int16_t*)il2cpp_object_unbox(returnValue));
}
int16_t UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Burst::get_maxCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_maxCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int16_t ret;
		std::memset(&ret, 0, sizeof(int16_t));
		return ret;
	}
	return static_cast<int16_t>(*(int16_t*)il2cpp_object_unbox(returnValue));
}
