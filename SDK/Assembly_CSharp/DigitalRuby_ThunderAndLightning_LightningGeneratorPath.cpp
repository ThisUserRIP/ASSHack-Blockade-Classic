#include "DigitalRuby_ThunderAndLightning_LightningGeneratorPath.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGeneratorPath::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DigitalRuby.ThunderAndLightning", "LightningGeneratorPath");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGeneratorPath::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGeneratorPath::GenerateLightningBoltPath(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateLightningBoltPath", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBolt", "UnityEngine.Vector3", "UnityEngine.Vector3", "DigitalRuby.ThunderAndLightning.LightningBoltParameters" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)bolt;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGeneratorPath::OnGenerateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGenerateLightningBolt", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBolt", "UnityEngine.Vector3", "UnityEngine.Vector3", "DigitalRuby.ThunderAndLightning.LightningBoltParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)bolt;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGeneratorPath::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGeneratorPath::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
