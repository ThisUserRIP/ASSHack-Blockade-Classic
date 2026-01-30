#include "DigitalRuby_ThunderAndLightning_LightningBoltScript.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DigitalRuby.ThunderAndLightning", "LightningBoltScript");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::get_LightningStartedCallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LightningStartedCallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::set_LightningStartedCallback(mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_LightningStartedCallback", std::vector<std::string> { "System.Action`3<DigitalRuby.ThunderAndLightning.LightningBoltParameters,UnityEngine.Vector3,UnityEngine.Vector3>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::get_LightningEndedCallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LightningEndedCallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::set_LightningEndedCallback(mscorlib::System::Action_3<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters, UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_LightningEndedCallback", std::vector<std::string> { "System.Action`3<DigitalRuby.ThunderAndLightning.LightningBoltParameters,UnityEngine.Vector3,UnityEngine.Vector3>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::get_LightAddedCallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LightAddedCallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::set_LightAddedCallback(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_LightAddedCallback", std::vector<std::string> { "System.Action`1<UnityEngine.Light>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::get_LightRemovedCallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LightRemovedCallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::set_LightRemovedCallback(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Light>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_LightRemovedCallback", std::vector<std::string> { "System.Action`1<UnityEngine.Light>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::get_HasActiveBolts()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasActiveBolts");
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
UnityEngine_CoreModule::UnityEngine::Vector4 Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::get_TimeVectorSinceStart()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TimeVectorSinceStart");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::set_TimeVectorSinceStart(UnityEngine_CoreModule::UnityEngine::Vector4 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_TimeVectorSinceStart", std::vector<std::string> { "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::get_TimeSinceStart()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TimeSinceStart");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::set_TimeSinceStart(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_TimeSinceStart", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::get_DeltaTime()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DeltaTime");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::set_DeltaTime(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DeltaTime", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::CreateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateLightningBolt", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::CreateLightningBolts(mscorlib::System::Collections::Generic::ICollection_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateLightningBolts", std::vector<std::string> { "System.Collections.Generic.ICollection`1<DigitalRuby.ThunderAndLightning.LightningBoltParameters>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::LateUpdate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LateUpdate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::OnCreateParameters()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCreateParameters");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters*)returnValue;
}
Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::CreateParameters()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateParameters");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::PopulateParameters(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulateParameters", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Material* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::get_lightningMaterialMeshInternal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lightningMaterialMeshInternal");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::set_lightningMaterialMeshInternal(UnityEngine_CoreModule::UnityEngine::Material* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_lightningMaterialMeshInternal", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Material* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::get_lightningMaterialMeshNoGlowInternal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lightningMaterialMeshNoGlowInternal");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::set_lightningMaterialMeshNoGlowInternal(UnityEngine_CoreModule::UnityEngine::Material* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_lightningMaterialMeshNoGlowInternal", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Coroutine* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::StartCoroutineWrapper(mscorlib::System::Collections::IEnumerator* routine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartCoroutineWrapper", std::vector<std::string> { "System.Collections.IEnumerator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)routine;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::OnSceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene arg0, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSceneLoaded", std::vector<std::string> { "UnityEngine.SceneManagement.Scene", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&arg0;
	params[1] = (intptr_t)&arg1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::CreateLightningBoltDependencies(mscorlib::System::Collections::Generic::ICollection_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateLightningBoltDependencies", std::vector<std::string> { "System.Collections.Generic.ICollection`1<DigitalRuby.ThunderAndLightning.LightningBoltParameters>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::ReturnLightningDependenciesToCache(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReturnLightningDependenciesToCache", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltDependencies" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)d;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::OnLightAdded(UnityEngine_CoreModule::UnityEngine::Light* l)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnLightAdded", std::vector<std::string> { "UnityEngine.Light" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)l;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::OnLightRemoved(UnityEngine_CoreModule::UnityEngine::Light* l)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnLightRemoved", std::vector<std::string> { "UnityEngine.Light" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)l;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::AddActiveBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddActiveBolt", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBolt" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bolt;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::UpdateShaderIds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateShaderIds");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::UpdateMaterialsForLastTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateMaterialsForLastTexture");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::UpdateTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateTexture");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::SetMaterialPerspective()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMaterialPerspective");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::SetMaterialOrthographicXY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMaterialOrthographicXY");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::SetMaterialOrthographicXZ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMaterialOrthographicXZ");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::SetupMaterialCamera()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupMaterialCamera");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::EnableKeyword(mscorlib::System::String* keyword, bool enable, UnityEngine_CoreModule::UnityEngine::Material* m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableKeyword", std::vector<std::string> { "System.String", "System.Boolean", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)keyword;
	params[1] = (intptr_t)&enable;
	params[2] = (intptr_t)m;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::UpdateShaderParameters()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateShaderParameters");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::CheckCompensateForParentTransform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckCompensateForParentTransform");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::UpdateCamera()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateCamera");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::GetOrCreateLightningBolt()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOrCreateLightningBolt");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::UpdateActiveBolts()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateActiveBolts");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::OnApplicationQuit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnApplicationQuit");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::Cleanup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cleanup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltScript::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
