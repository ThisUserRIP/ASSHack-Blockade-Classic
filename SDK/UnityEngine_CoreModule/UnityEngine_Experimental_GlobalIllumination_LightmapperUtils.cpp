#include "UnityEngine_Experimental_GlobalIllumination_LightmapperUtils.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Experimental.GlobalIllumination", "LightmapperUtils");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightMode UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(UnityEngine_CoreModule::UnityEngine::LightmapBakeType baketype)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Extract", std::vector<std::string> { "UnityEngine.LightmapBakeType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&baketype;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightMode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightMode>(*(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightMode*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractIndirect(UnityEngine_CoreModule::UnityEngine::Light* l)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExtractIndirect", std::vector<std::string> { "UnityEngine.Light" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)l;
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
float UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractInnerCone(UnityEngine_CoreModule::UnityEngine::Light* l)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExtractInnerCone", std::vector<std::string> { "UnityEngine.Light" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)l;
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
UnityEngine_CoreModule::UnityEngine::Color UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractColorTemperature(UnityEngine_CoreModule::UnityEngine::Light* l)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExtractColorTemperature", std::vector<std::string> { "UnityEngine.Light" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)l;
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
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ApplyColorTemperature(UnityEngine_CoreModule::UnityEngine::Color cct, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor& lightColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyColorTemperature", std::vector<std::string> { "UnityEngine.Color", "UnityEngine.Experimental.GlobalIllumination.LinearColor&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&cct;
	params[1] = (intptr_t)&lightColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::DirectionalLight& dir)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Extract", std::vector<std::string> { "UnityEngine.Light", "UnityEngine.Experimental.GlobalIllumination.DirectionalLight&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)l;
	params[1] = (intptr_t)&dir;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::PointLight& point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Extract", std::vector<std::string> { "UnityEngine.Light", "UnityEngine.Experimental.GlobalIllumination.PointLight&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)l;
	params[1] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::SpotLight& spot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Extract", std::vector<std::string> { "UnityEngine.Light", "UnityEngine.Experimental.GlobalIllumination.SpotLight&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)l;
	params[1] = (intptr_t)&spot;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::RectangleLight& rect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Extract", std::vector<std::string> { "UnityEngine.Light", "UnityEngine.Experimental.GlobalIllumination.RectangleLight&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)l;
	params[1] = (intptr_t)&rect;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::DiscLight& disc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Extract", std::vector<std::string> { "UnityEngine.Light", "UnityEngine.Experimental.GlobalIllumination.DiscLight&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)l;
	params[1] = (intptr_t)&disc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(UnityEngine_CoreModule::UnityEngine::Light* l, UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Cookie& cookie)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Extract", std::vector<std::string> { "UnityEngine.Light", "UnityEngine.Experimental.GlobalIllumination.Cookie&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)l;
	params[1] = (intptr_t)&cookie;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
