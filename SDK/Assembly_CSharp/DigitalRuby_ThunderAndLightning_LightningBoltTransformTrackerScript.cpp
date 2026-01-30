#include "DigitalRuby_ThunderAndLightning_LightningBoltTransformTrackerScript.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltTransformTrackerScript::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DigitalRuby.ThunderAndLightning", "LightningBoltTransformTrackerScript");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltTransformTrackerScript::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltTransformTrackerScript::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltTransformTrackerScript::AngleBetweenVector2(UnityEngine_CoreModule::UnityEngine::Vector2 vec1, UnityEngine_CoreModule::UnityEngine::Vector2 vec2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AngleBetweenVector2", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&vec1;
	params[1] = (intptr_t)&vec2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltTransformTrackerScript::UpdateTransform(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo* state, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPrefabScript* script, Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats scaleLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateTransform", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningCustomTransformStateInfo", "DigitalRuby.ThunderAndLightning.LightningBoltPrefabScript", "DigitalRuby.ThunderAndLightning.RangeOfFloats" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)state;
	params[1] = (intptr_t)script;
	params[2] = (intptr_t)&scaleLimit;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltTransformTrackerScript::CustomTransformHandler(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CustomTransformHandler", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningCustomTransformStateInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltTransformTrackerScript::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
