#include "UnityEngine_Rendering_SupportedRenderingFeatures.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Rendering", "SupportedRenderingFeatures");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures* UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::get_active()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_active");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::set_active(UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_active", std::vector<std::string> { "UnityEngine.Rendering.SupportedRenderingFeatures" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultMixedLightingModes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes>(*(UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mixedLightingModes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes>(*(UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::LightmapBakeType UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lightmapBakeTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LightmapBakeType ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LightmapBakeType));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LightmapBakeType>(*(UnityEngine_CoreModule::UnityEngine::LightmapBakeType*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::LightmapsMode UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lightmapsModes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LightmapsMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LightmapsMode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LightmapsMode>(*(UnityEngine_CoreModule::UnityEngine::LightmapsMode*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_enlighten");
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
bool UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::get_rendersUIOverlay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rendersUIOverlay");
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
bool UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::get_autoAmbientProbeBaking()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_autoAmbientProbeBaking");
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
bool UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_autoDefaultReflectionProbeBaking");
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
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef(intptr_t fallbackModePtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FallbackMixedLightingModeByRef", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&fallbackModePtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine_CoreModule::UnityEngine::MixedLightingMode mixedMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsMixedLightingModeSupported", std::vector<std::string> { "UnityEngine.MixedLightingMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mixedMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine_CoreModule::UnityEngine::MixedLightingMode mixedMode, intptr_t isSupportedPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsMixedLightingModeSupportedByRef", std::vector<std::string> { "UnityEngine.MixedLightingMode", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mixedMode;
	params[1] = (intptr_t)&isSupportedPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine_CoreModule::UnityEngine::LightmapBakeType bakeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsLightmapBakeTypeSupported", std::vector<std::string> { "UnityEngine.LightmapBakeType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&bakeType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine_CoreModule::UnityEngine::LightmapBakeType bakeType, intptr_t isSupportedPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsLightmapBakeTypeSupportedByRef", std::vector<std::string> { "UnityEngine.LightmapBakeType", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&bakeType;
	params[1] = (intptr_t)&isSupportedPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(UnityEngine_CoreModule::UnityEngine::LightmapsMode mode, intptr_t isSupportedPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsLightmapsModeSupportedByRef", std::vector<std::string> { "UnityEngine.LightmapsMode", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mode;
	params[1] = (intptr_t)&isSupportedPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef(int32_t lightmapper, intptr_t isSupportedPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsLightmapperSupportedByRef", std::vector<std::string> { "System.Int32", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lightmapper;
	params[1] = (intptr_t)&isSupportedPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(intptr_t isSupportedPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsUIOverlayRenderedBySRP", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isSupportedPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported(intptr_t isSupportedPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAutoAmbientProbeBakingSupported", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isSupportedPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported(intptr_t isSupportedPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAutoDefaultReflectionProbeBakingSupported", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isSupportedPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef(intptr_t lightmapperPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FallbackLightmapperByRef", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&lightmapperPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
