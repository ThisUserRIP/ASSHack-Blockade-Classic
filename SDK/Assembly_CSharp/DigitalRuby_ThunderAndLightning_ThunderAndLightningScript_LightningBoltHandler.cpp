#include "DigitalRuby_ThunderAndLightning_ThunderAndLightningScript_LightningBoltHandler.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript::GetIl2CppClass(), "LightningBoltHandler");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler::get_VolumeMultiplier()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_VolumeMultiplier");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler::set_VolumeMultiplier(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_VolumeMultiplier", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler::_ctor(Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript* script)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.ThunderAndLightningScript" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)script;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler::UpdateLighting()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateLighting");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler::CalculateNextLightningTime()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateNextLightningTime");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler::ProcessLightning(mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> _start, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> _end, bool intense, bool visible)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessLightning", std::vector<std::string> { "System.Nullable`1<UnityEngine.Vector3>", "System.Nullable`1<UnityEngine.Vector3>", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&_start;
	params[1] = (intptr_t)&_end;
	params[2] = (intptr_t)&intense;
	params[3] = (intptr_t)&visible;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler::Strike(mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> _start, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> _end, bool intense, float intensity, UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Camera* visibleInCamera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Strike", std::vector<std::string> { "System.Nullable`1<UnityEngine.Vector3>", "System.Nullable`1<UnityEngine.Vector3>", "System.Boolean", "System.Single", "UnityEngine.Camera", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&_start;
	params[1] = (intptr_t)&_end;
	params[2] = (intptr_t)&intense;
	params[3] = (intptr_t)&intensity;
	params[4] = (intptr_t)camera;
	params[5] = (intptr_t)visibleInCamera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler::CheckForLightning()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckForLightning");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
