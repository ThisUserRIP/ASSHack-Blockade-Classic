#include "DigitalRuby_ThunderAndLightning_LightningGenerator.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DigitalRuby.ThunderAndLightning", "LightningGenerator");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::GetPerpendicularVector(UnityEngine_CoreModule::UnityEngine::Vector3& directionNormalized, UnityEngine_CoreModule::UnityEngine::Vector3& side)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPerpendicularVector", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&directionNormalized;
	params[1] = (intptr_t)&side;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::OnGenerateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters)
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
bool Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::ShouldCreateFork(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters, int32_t generation, int32_t totalGenerations)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShouldCreateFork", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltParameters", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)parameters;
	params[1] = (intptr_t)&generation;
	params[2] = (intptr_t)&totalGenerations;
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
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::CreateFork(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters, int32_t generation, int32_t totalGenerations, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 midPoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFork", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBolt", "DigitalRuby.ThunderAndLightning.LightningBoltParameters", "System.Int32", "System.Int32", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)bolt;
	params[1] = (intptr_t)parameters;
	params[2] = (intptr_t)&generation;
	params[3] = (intptr_t)&totalGenerations;
	params[4] = (intptr_t)&start;
	params[5] = (intptr_t)&midPoint;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::GenerateLightningBoltStandard(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, int32_t generation, int32_t totalGenerations, float offsetAmount, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateLightningBoltStandard", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBolt", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Int32", "System.Int32", "System.Single", "DigitalRuby.ThunderAndLightning.LightningBoltParameters" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)bolt;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&generation;
	params[4] = (intptr_t)&totalGenerations;
	params[5] = (intptr_t)&offsetAmount;
	params[6] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::RandomDirection3D(mscorlib::System::Random_* random)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RandomDirection3D", std::vector<std::string> { "System.Random" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)random;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::RandomDirection2D(mscorlib::System::Random_* random)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RandomDirection2D", std::vector<std::string> { "System.Random" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)random;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::RandomDirection2DXZ(mscorlib::System::Random_* random)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RandomDirection2DXZ", std::vector<std::string> { "System.Random" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)random;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::RandomVector(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, UnityEngine_CoreModule::UnityEngine::Vector3& start, UnityEngine_CoreModule::UnityEngine::Vector3& end, float offsetAmount, mscorlib::System::Random_* random, UnityEngine_CoreModule::UnityEngine::Vector3& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RandomVector", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBolt", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "System.Single", "System.Random", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)bolt;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&offsetAmount;
	params[4] = (intptr_t)random;
	params[5] = (intptr_t)&result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::GenerateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateLightningBolt", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBolt", "DigitalRuby.ThunderAndLightning.LightningBoltParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bolt;
	params[1] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::GenerateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* bolt, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters, UnityEngine_CoreModule::UnityEngine::Vector3& start, UnityEngine_CoreModule::UnityEngine::Vector3& end)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateLightningBolt", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBolt", "DigitalRuby.ThunderAndLightning.LightningBoltParameters", "UnityEngine.Vector3&", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)bolt;
	params[1] = (intptr_t)parameters;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&end;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningGenerator::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
