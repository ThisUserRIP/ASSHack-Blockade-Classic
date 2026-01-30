#include "GAP_ParticleSystemController_SaveParticleSystemScript.h"

IL2CPP::Il2CppClass* Assembly_CSharp::GAP_ParticleSystemController::SaveParticleSystemScript::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "GAP_ParticleSystemController", "SaveParticleSystemScript");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::GAP_ParticleSystemController::SaveParticleSystemScript::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::GAP_ParticleSystemController::SaveParticleSystemScript::SaveVFX(UnityEngine_CoreModule::UnityEngine::GameObject* prefabVFX, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::GAP_ParticleSystemController::ParticleSystemOriginalSettings>* psOriginalSettingsList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveVFX", std::vector<std::string> { "UnityEngine.GameObject", "System.Collections.Generic.List`1<GAP_ParticleSystemController.ParticleSystemOriginalSettings>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)prefabVFX;
	params[1] = (intptr_t)psOriginalSettingsList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::GAP_ParticleSystemController::ParticleSystemOriginalSettings>* Assembly_CSharp::GAP_ParticleSystemController::SaveParticleSystemScript::LoadVFX(UnityEngine_CoreModule::UnityEngine::GameObject* prefabVFX)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadVFX", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prefabVFX;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::GAP_ParticleSystemController::ParticleSystemOriginalSettings>*)returnValue;
}
bool Assembly_CSharp::GAP_ParticleSystemController::SaveParticleSystemScript::CheckExistingFile(UnityEngine_CoreModule::UnityEngine::GameObject* prefabVFX)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckExistingFile", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prefabVFX;
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
mscorlib::System::String* Assembly_CSharp::GAP_ParticleSystemController::SaveParticleSystemScript::GetPrefabFolder(UnityEngine_CoreModule::UnityEngine::GameObject* prefabVFX)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPrefabFolder", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prefabVFX;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
