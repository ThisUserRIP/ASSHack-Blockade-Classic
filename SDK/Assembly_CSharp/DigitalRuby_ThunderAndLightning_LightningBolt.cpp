#include "DigitalRuby_ThunderAndLightning_LightningBolt.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DigitalRuby.ThunderAndLightning", "LightningBolt");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::get_MinimumDelay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MinimumDelay");
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
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::set_MinimumDelay(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_MinimumDelay", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::get_HasGlow()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasGlow");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::set_HasGlow(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_HasGlow", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::get_IsActive()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsActive");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::get_CameraMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CameraMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode));
		return ret;
	}
	return static_cast<Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode>(*(Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::set_CameraMode(Assembly_CSharp::DigitalRuby::ThunderAndLightning::CameraMode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_CameraMode", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.CameraMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::SetupLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* dependencies)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupLightningBolt", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltDependencies" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dependencies;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::Cleanup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cleanup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::AddGroup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddGroup");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::ClearCache()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearCache");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::CleanupLight(UnityEngine_CoreModule::UnityEngine::Light* l)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanupLight", std::vector<std::string> { "UnityEngine.Light" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)l;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::EnableLineRenderer(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh* lineRenderer, int32_t tag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableLineRenderer", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBolt/LineRendererMesh", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)lineRenderer;
	params[1] = (intptr_t)&tag;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::EnableLastRendererCoRoutine()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableLastRendererCoRoutine");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::GetOrCreateLineRenderer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOrCreateLineRenderer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt_LineRendererMesh*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::RenderGroup(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup* group, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderGroup", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltSegmentGroup", "DigitalRuby.ThunderAndLightning.LightningBoltParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)group;
	params[1] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::NotifyBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* dependencies, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* p, UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyBolt", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltDependencies", "DigitalRuby.ThunderAndLightning.LightningBoltParameters", "UnityEngine.Transform", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)dependencies;
	params[1] = (intptr_t)p;
	params[2] = (intptr_t)transform;
	params[3] = (intptr_t)&start;
	params[4] = (intptr_t)&end;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::ProcessParameters(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* p, Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats delay, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* depends)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessParameters", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltParameters", "DigitalRuby.ThunderAndLightning.RangeOfFloats", "DigitalRuby.ThunderAndLightning.LightningBoltDependencies" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)&delay;
	params[2] = (intptr_t)depends;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::ProcessAllLightningParameters()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAllLightningParameters");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::EnableCurrentLineRendererFromThread(bool inDestroy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableCurrentLineRendererFromThread", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&inDestroy;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::EnableCurrentLineRenderer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableCurrentLineRenderer");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::RenderParticleSystems(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, float trunkWidth, float lifeTime, float delaySeconds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderParticleSystems", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&end;
	params[2] = (intptr_t)&trunkWidth;
	params[3] = (intptr_t)&lifeTime;
	params[4] = (intptr_t)&delaySeconds;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Transform* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::RenderLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltQualitySetting quality, int32_t generations, int32_t startGroupIndex, int32_t endGroupIndex, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderLightningBolt", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltQualitySetting", "System.Int32", "System.Int32", "System.Int32", "DigitalRuby.ThunderAndLightning.LightningBoltParameters" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&quality;
	params[1] = (intptr_t)&generations;
	params[2] = (intptr_t)&startGroupIndex;
	params[3] = (intptr_t)&endGroupIndex;
	params[4] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Transform*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::CreateLightsForGroup(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup* group, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* lp, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltQualitySetting quality, int32_t maxLights)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateLightsForGroup", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltSegmentGroup", "DigitalRuby.ThunderAndLightning.LightningLightParameters", "DigitalRuby.ThunderAndLightning.LightningBoltQualitySetting", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)group;
	params[1] = (intptr_t)lp;
	params[2] = (intptr_t)&quality;
	params[3] = (intptr_t)&maxLights;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::AddLightToGroup(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegmentGroup* group, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* lp, int32_t segmentIndex, int32_t nthLight, int32_t nthShadows, int32_t& maxLights, int32_t& nthShadowCounter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddLightToGroup", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltSegmentGroup", "DigitalRuby.ThunderAndLightning.LightningLightParameters", "System.Int32", "System.Int32", "System.Int32", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)group;
	params[1] = (intptr_t)lp;
	params[2] = (intptr_t)&segmentIndex;
	params[3] = (intptr_t)&nthLight;
	params[4] = (intptr_t)&nthShadows;
	params[5] = (intptr_t)&maxLights;
	params[6] = (intptr_t)&nthShadowCounter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Light* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::GetOrCreateLight(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* lp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOrCreateLight", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningLightParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)lp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Light*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::UpdateLight(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* lp, mscorlib::System::Collections::Generic::IEnumerable_1<UnityEngine_CoreModule::UnityEngine::Light>* lights, float delay, float peakStart, float peakEnd, float lifeTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateLight", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningLightParameters", "System.Collections.Generic.IEnumerable`1<UnityEngine.Light>", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)lp;
	params[1] = (intptr_t)lights;
	params[2] = (intptr_t)&delay;
	params[3] = (intptr_t)&peakStart;
	params[4] = (intptr_t)&peakEnd;
	params[5] = (intptr_t)&lifeTime;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::UpdateLights()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateLights");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::GenerateParticleCoRoutine(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* p, UnityEngine_CoreModule::UnityEngine::Vector3 pos, float delay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateParticleCoRoutine", std::vector<std::string> { "UnityEngine.ParticleSystem", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)&pos;
	params[2] = (intptr_t)&delay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::CheckForGlow(mscorlib::System::Collections::Generic::IEnumerable_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckForGlow", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<DigitalRuby.ThunderAndLightning.LightningBoltParameters>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
