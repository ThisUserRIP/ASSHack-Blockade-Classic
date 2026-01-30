#include "Doozy_Engine_Utils_DColor.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Utils::DColor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.Utils", "DColor");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Utils::DColor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Color Assembly_CSharp::Doozy::Engine::Utils::DColor::GetLightColor(UnityEngine_CoreModule::UnityEngine::Color normalColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLightColor", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&normalColor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Color Assembly_CSharp::Doozy::Engine::Utils::DColor::GetDarkColor(UnityEngine_CoreModule::UnityEngine::Color normalColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDarkColor", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&normalColor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::Utils::DColor::_ctor(UnityEngine_CoreModule::UnityEngine::Color normal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&normal;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DColor::_ctor(mscorlib::System::String* colorName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)colorName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DColor::_ctor(mscorlib::System::String* colorName, UnityEngine_CoreModule::UnityEngine::Color normal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)colorName;
	params[1] = (intptr_t)&normal;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DColor::_ctor(UnityEngine_CoreModule::UnityEngine::Color light, UnityEngine_CoreModule::UnityEngine::Color normal, UnityEngine_CoreModule::UnityEngine::Color dark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&light;
	params[1] = (intptr_t)&normal;
	params[2] = (intptr_t)&dark;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DColor::_ctor(mscorlib::System::String* colorName, UnityEngine_CoreModule::UnityEngine::Color light, UnityEngine_CoreModule::UnityEngine::Color normal, UnityEngine_CoreModule::UnityEngine::Color dark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)colorName;
	params[1] = (intptr_t)&light;
	params[2] = (intptr_t)&normal;
	params[3] = (intptr_t)&dark;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DColor::_ctor(Assembly_CSharp::Doozy::Engine::Utils::DColor* dColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.Utils.DColor" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
