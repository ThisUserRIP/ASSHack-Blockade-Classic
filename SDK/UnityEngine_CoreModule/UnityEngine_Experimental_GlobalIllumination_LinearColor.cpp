#include "UnityEngine_Experimental_GlobalIllumination_LinearColor.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Experimental.GlobalIllumination", "LinearColor");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor::get_red()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_red");
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
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor::set_red(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_red", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor::get_green()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_green");
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
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor::set_green(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_green", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor::get_blue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_blue");
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
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor::set_blue(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_blue", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor::Convert(UnityEngine_CoreModule::UnityEngine::Color color, float intensity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Convert", std::vector<std::string> { "UnityEngine.Color", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&color;
	params[1] = (intptr_t)&intensity;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor>(*(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor::Black()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Black");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor>(*(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor*)il2cpp_object_unbox(returnValue));
}
