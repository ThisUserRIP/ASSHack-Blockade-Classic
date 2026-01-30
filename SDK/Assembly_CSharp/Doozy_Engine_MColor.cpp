#include "Doozy_Engine_MColor.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::MColor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine", "MColor");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::MColor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::MColor::_ctor(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Color m50, UnityEngine_CoreModule::UnityEngine::Color m100, UnityEngine_CoreModule::UnityEngine::Color m200, UnityEngine_CoreModule::UnityEngine::Color m300, UnityEngine_CoreModule::UnityEngine::Color m400, UnityEngine_CoreModule::UnityEngine::Color m500, UnityEngine_CoreModule::UnityEngine::Color m600, UnityEngine_CoreModule::UnityEngine::Color m700, UnityEngine_CoreModule::UnityEngine::Color m800, UnityEngine_CoreModule::UnityEngine::Color m900, UnityEngine_CoreModule::UnityEngine::Color a100, UnityEngine_CoreModule::UnityEngine::Color a200, UnityEngine_CoreModule::UnityEngine::Color a400, UnityEngine_CoreModule::UnityEngine::Color a700)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[15];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&m50;
	params[2] = (intptr_t)&m100;
	params[3] = (intptr_t)&m200;
	params[4] = (intptr_t)&m300;
	params[5] = (intptr_t)&m400;
	params[6] = (intptr_t)&m500;
	params[7] = (intptr_t)&m600;
	params[8] = (intptr_t)&m700;
	params[9] = (intptr_t)&m800;
	params[10] = (intptr_t)&m900;
	params[11] = (intptr_t)&a100;
	params[12] = (intptr_t)&a200;
	params[13] = (intptr_t)&a400;
	params[14] = (intptr_t)&a700;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::MColor::_ctor(mscorlib::System::String* name, mscorlib::System::String* m50Hex, mscorlib::System::String* m100Hex, mscorlib::System::String* m200Hex, mscorlib::System::String* m300Hex, mscorlib::System::String* m400Hex, mscorlib::System::String* m500Hex, mscorlib::System::String* m600Hex, mscorlib::System::String* m700Hex, mscorlib::System::String* m800Hex, mscorlib::System::String* m900Hex, mscorlib::System::String* a100Hex, mscorlib::System::String* a200Hex, mscorlib::System::String* a400Hex, mscorlib::System::String* a700Hex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[15];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)m50Hex;
	params[2] = (intptr_t)m100Hex;
	params[3] = (intptr_t)m200Hex;
	params[4] = (intptr_t)m300Hex;
	params[5] = (intptr_t)m400Hex;
	params[6] = (intptr_t)m500Hex;
	params[7] = (intptr_t)m600Hex;
	params[8] = (intptr_t)m700Hex;
	params[9] = (intptr_t)m800Hex;
	params[10] = (intptr_t)m900Hex;
	params[11] = (intptr_t)a100Hex;
	params[12] = (intptr_t)a200Hex;
	params[13] = (intptr_t)a400Hex;
	params[14] = (intptr_t)a700Hex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
