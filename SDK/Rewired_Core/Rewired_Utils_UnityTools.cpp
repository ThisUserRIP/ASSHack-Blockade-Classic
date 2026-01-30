#include "Rewired_Utils_UnityTools.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::UnityTools::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils", "UnityTools");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::UnityTools::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* Rewired_Core::Rewired::Utils::UnityTools::get_unityVersionObj()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_unityVersionObj");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass*)returnValue;
}
Rewired_Core::Rewired::Utils::UnityTools_UnityVersion Rewired_Core::Rewired::Utils::UnityTools::get_unityVersion()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_unityVersion");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::UnityTools_UnityVersion ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::UnityTools_UnityVersion));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::UnityTools_UnityVersion>(*(Rewired_Core::Rewired::Utils::UnityTools_UnityVersion*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Rewired_Core::Rewired::Utils::UnityTools::get_unityVersionString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_unityVersionString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Rewired_Core::Rewired::Platforms::Platform Rewired_Core::Rewired::Utils::UnityTools::get_platform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_platform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::Platform ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::Platform));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::Platform>(*(Rewired_Core::Rewired::Platforms::Platform*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Platforms::Platform Rewired_Core::Rewired::Utils::UnityTools::get_effectivePlatform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_effectivePlatform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::Platform ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::Platform));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::Platform>(*(Rewired_Core::Rewired::Platforms::Platform*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Platforms::EditorPlatform Rewired_Core::Rewired::Utils::UnityTools::get_editorPlatform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_editorPlatform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::EditorPlatform ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::EditorPlatform));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::EditorPlatform>(*(Rewired_Core::Rewired::Platforms::EditorPlatform*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_isEditor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isEditor");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_isPlaying()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isPlaying");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_isDebugBuild()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isDebugBuild");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Platforms::WebplayerPlatform Rewired_Core::Rewired::Utils::UnityTools::get_webplayerPlatform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_webplayerPlatform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::WebplayerPlatform ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::WebplayerPlatform));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::WebplayerPlatform>(*(Rewired_Core::Rewired::Platforms::WebplayerPlatform*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_logToDebugLog()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_logToDebugLog");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_editorPlatformMatchesBuildPlatform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_editorPlatformMatchesBuildPlatform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_isSupportedVersion3()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isSupportedVersion3");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_isSupportedVersion4()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isSupportedVersion4");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_supports2DColliders()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supports2DColliders");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_supportsSortingLayers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportsSortingLayers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_supportsUnityUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportsUnityUI");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_supportsTouchControls()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportsTouchControls");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_isAndroidPlatform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isAndroidPlatform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_isIOSPlatform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isIOSPlatform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_isStandalonePlatform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isStandalonePlatform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_windowsJoystickNamesReturnsEmptyStringsIfJoystickNull()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_windowsJoystickNamesReturnsEmptyStringsIfJoystickNull");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_supportsUnityUIGraphicRaycastTarget()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportsUnityUIGraphicRaycastTarget");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_supportsNestedPrefabs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportsNestedPrefabs");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_supportsWindowsAppStore()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportsWindowsAppStore");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_supportsWindowsUWP()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportsWindowsUWP");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_supportsWindowsUWP_IL2CPP()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportsWindowsUWP_IL2CPP");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_supportsXboxOne()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportsXboxOne");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_supportsStadia()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportsStadia");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Platforms::ScriptingBackend Rewired_Core::Rewired::Utils::UnityTools::get_scriptingBackend()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_scriptingBackend");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::ScriptingBackend ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::ScriptingBackend));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::ScriptingBackend>(*(Rewired_Core::Rewired::Platforms::ScriptingBackend*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Platforms::ScriptingAPILevel Rewired_Core::Rewired::Utils::UnityTools::get_scriptingAPILevel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_scriptingAPILevel");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::ScriptingAPILevel ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::ScriptingAPILevel));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::ScriptingAPILevel>(*(Rewired_Core::Rewired::Platforms::ScriptingAPILevel*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Interfaces::IExternalTools* Rewired_Core::Rewired::Utils::UnityTools::get_externalTools()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_externalTools");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Interfaces::IExternalTools*)returnValue;
}
Rewired_Core::Rewired::Interfaces::IAndroidFallbackPlatformHelper* Rewired_Core::Rewired::Utils::UnityTools::get_androidFallbackPlatformHelper()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_androidFallbackPlatformHelper");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Interfaces::IAndroidFallbackPlatformHelper*)returnValue;
}
void Rewired_Core::Rewired::Utils::UnityTools::set_androidFallbackPlatformHelper(Rewired_Core::Rewired::Interfaces::IAndroidFallbackPlatformHelper* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_androidFallbackPlatformHelper", std::vector<std::string> { "Rewired.Interfaces.IAndroidFallbackPlatformHelper" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_isInitialized()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isInitialized");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::get_initialized()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_initialized");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::lHmzKaAcKrsGvBrLjguUymRcdjD()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lHmzKaAcKrsGvBrLjguUymRcdjD");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Utils::UnityTools::pKLNoWCgVUqlRfCsOXaDmHUNbICB(Rewired_Core::Rewired::Platforms::Platform A_0, Rewired_Core::Rewired::Platforms::EditorPlatform A_1, bool A_2, Rewired_Core::Rewired::Platforms::WebplayerPlatform A_3, Rewired_Core::Rewired::Platforms::ScriptingBackend A_4, Rewired_Core::Rewired::Platforms::ScriptingAPILevel A_5, Rewired_Core::Rewired::Utils::Interfaces::IExternalTools* A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pKLNoWCgVUqlRfCsOXaDmHUNbICB");
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)&A_1;
	params[2] = (intptr_t)&A_2;
	params[3] = (intptr_t)&A_3;
	params[4] = (intptr_t)&A_4;
	params[5] = (intptr_t)&A_5;
	params[6] = (intptr_t)A_6;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::WebplayerPlatform Rewired_Core::Rewired::Utils::UnityTools::DetermineWebplayerPlatformType(Rewired_Core::Rewired::Platforms::Platform platform, Rewired_Core::Rewired::Platforms::EditorPlatform editorPlatform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DetermineWebplayerPlatformType", std::vector<std::string> { "Rewired.Platforms.Platform", "Rewired.Platforms.EditorPlatform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&platform;
	params[1] = (intptr_t)&editorPlatform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::WebplayerPlatform ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::WebplayerPlatform));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::WebplayerPlatform>(*(Rewired_Core::Rewired::Platforms::WebplayerPlatform*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::IsUnityVersionInRange(mscorlib::System::String* minVersionStr, mscorlib::System::String* maxVersionStr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsUnityVersionInRange", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)minVersionStr;
	params[1] = (intptr_t)maxVersionStr;
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
bool Rewired_Core::Rewired::Utils::UnityTools::zVhthFasWjHpZMmPtyEIhNxHgsOd(mscorlib::System::String* A_0, int32_t& A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zVhthFasWjHpZMmPtyEIhNxHgsOd", std::vector<std::string> { "System.String", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_0;
	params[1] = (intptr_t)&A_1;
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
void Rewired_Core::Rewired::Utils::UnityTools::IGIclpKqejzqcwQQqlOZECVSupwg()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IGIclpKqejzqcwQQqlOZECVSupwg");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Utils::UnityTools_UnityVersion Rewired_Core::Rewired::Utils::UnityTools::yJrHIxDHYJGrJDOMbVPsSbxUNlB(mscorlib::System::String* A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "yJrHIxDHYJGrJDOMbVPsSbxUNlB");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::UnityTools_UnityVersion ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::UnityTools_UnityVersion));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::UnityTools_UnityVersion>(*(Rewired_Core::Rewired::Utils::UnityTools_UnityVersion*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::UnityTools_UnityVersion Rewired_Core::Rewired::Utils::UnityTools::hesczzStftcaBTQWJMnTjlopGDVj(int32_t A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hesczzStftcaBTQWJMnTjlopGDVj");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::UnityTools_UnityVersion ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::UnityTools_UnityVersion));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::UnityTools_UnityVersion>(*(Rewired_Core::Rewired::Utils::UnityTools_UnityVersion*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::UnityTools_UnityVersion Rewired_Core::Rewired::Utils::UnityTools::irvWfMTcuaeItHtLGdKGHgKDzEL(int32_t A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "irvWfMTcuaeItHtLGdKGHgKDzEL");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::UnityTools_UnityVersion ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::UnityTools_UnityVersion));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::UnityTools_UnityVersion>(*(Rewired_Core::Rewired::Utils::UnityTools_UnityVersion*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Utils::UnityTools::VYreXNfRobhfeqLAqioUvXQvqeZn()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VYreXNfRobhfeqLAqioUvXQvqeZn");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::UnityTools::WMTOVRAZOdMbYPNziCizRVifaAX(Rewired_Core::zHkMidCZlSshIdzJDKlSGxptCJI A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WMTOVRAZOdMbYPNziCizRVifaAX");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::UnityTools::RBPHeYgSFSTUXdfWcjNBZVSFQfT(Rewired_Core::zHkMidCZlSshIdzJDKlSGxptCJI A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RBPHeYgSFSTUXdfWcjNBZVSFQfT");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Rewired_Core::Rewired::Utils::UnityTools::GetCurrentPlatformResourecesDLLPaths()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurrentPlatformResourecesDLLPaths");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Transform* Rewired_Core::Rewired::Utils::UnityTools::FindTransformInChildren(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindTransformInChildren", std::vector<std::string> { "UnityEngine.Transform", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Transform*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Transform* Rewired_Core::Rewired::Utils::UnityTools::FindTransformInChildren(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindTransformInChildren", std::vector<std::string> { "UnityEngine.GameObject", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Transform*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Rewired_Core::Rewired::Utils::UnityTools::FindGameObjectInChildren(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindGameObjectInChildren", std::vector<std::string> { "UnityEngine.GameObject", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Rewired_Core::Rewired::Utils::UnityTools::FindGameObjectInChildren(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindGameObjectInChildren", std::vector<std::string> { "UnityEngine.Transform", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponent(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type, bool includeInactive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponent", std::vector<std::string> { "UnityEngine.Transform", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&includeInactive;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponent(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::Type* type, bool includeInactive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponent", std::vector<std::string> { "UnityEngine.Component", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&includeInactive;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponent(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::Type* type, bool includeInactive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponent", std::vector<std::string> { "UnityEngine.GameObject", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&includeInactive;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponent(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponent", std::vector<std::string> { "UnityEngine.Transform", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponent(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponent", std::vector<std::string> { "UnityEngine.Component", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponent(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponent", std::vector<std::string> { "UnityEngine.GameObject", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponentInChildren(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentInChildren", std::vector<std::string> { "UnityEngine.GameObject", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponentInChildren(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentInChildren", std::vector<std::string> { "UnityEngine.Component", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponentInChildren(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentInChildren", std::vector<std::string> { "UnityEngine.Transform", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponentInChildren(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::Type* type, bool includeInactive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentInChildren", std::vector<std::string> { "UnityEngine.GameObject", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&includeInactive;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponentInChildren(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::Type* type, bool includeInactive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentInChildren", std::vector<std::string> { "UnityEngine.Component", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&includeInactive;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Component* Rewired_Core::Rewired::Utils::UnityTools::GetComponentInChildren(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type, bool includeInactive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentInChildren", std::vector<std::string> { "UnityEngine.Transform", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&includeInactive;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Component*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.Transform", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.Component", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.GameObject", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type, bool includeInactive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.Transform", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&includeInactive;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::Type* type, bool includeInactive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.Component", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&includeInactive;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::Type* type, bool includeInactive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.GameObject", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&includeInactive;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInChildren(UnityEngine_CoreModule::UnityEngine::Transform* transform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInChildren", std::vector<std::string> { "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)transform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInChildren(UnityEngine_CoreModule::UnityEngine::Component* component)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInChildren", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)component;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInChildren(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInChildren", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)gameObject;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInParents(UnityEngine_CoreModule::UnityEngine::Transform* transform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInParents", std::vector<std::string> { "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)transform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInParents(UnityEngine_CoreModule::UnityEngine::Component* component)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInParents", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)component;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInParents(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInParents", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)gameObject;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>*)returnValue;
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.Transform", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.Component", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.GameObject", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.Transform", "System.Type", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)results;
	params[3] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::Type* type, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.Component", "System.Type", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)results;
	params[3] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponents(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::Type* type, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponents", std::vector<std::string> { "UnityEngine.GameObject", "System.Type", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)results;
	params[3] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInSelfAndChildren", std::vector<std::string> { "UnityEngine.Transform", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInSelfAndChildren", std::vector<std::string> { "UnityEngine.Component", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInSelfAndChildren", std::vector<std::string> { "UnityEngine.GameObject", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInChildren(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInChildren", std::vector<std::string> { "UnityEngine.Transform", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInChildren(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInChildren", std::vector<std::string> { "UnityEngine.Component", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInChildren(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInChildren", std::vector<std::string> { "UnityEngine.GameObject", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInParents(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInParents", std::vector<std::string> { "UnityEngine.Transform", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInParents(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInParents", std::vector<std::string> { "UnityEngine.Component", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::UnityTools::GetComponentsInParents(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* results, bool append)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentsInParents", std::vector<std::string> { "UnityEngine.GameObject", "System.Collections.Generic.List`1<UnityEngine.Component>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)results;
	params[2] = (intptr_t)&append;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::UnityTools::IsEnabled(UnityEngine_CoreModule::UnityEngine::Component* component)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEnabled", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)component;
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
bool Rewired_Core::Rewired::Utils::UnityTools::IsActiveAndEnabled(UnityEngine_CoreModule::UnityEngine::Component* component)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsActiveAndEnabled", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)component;
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
UnityEngine_CoreModule::UnityEngine::Object* Rewired_Core::Rewired::Utils::UnityTools::Instantiate(UnityEngine_CoreModule::UnityEngine::Object* original, UnityEngine_CoreModule::UnityEngine::Transform* parent, bool instantiateInWorldSpace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Instantiate", std::vector<std::string> { "UnityEngine.Object", "UnityEngine.Transform", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)original;
	params[1] = (intptr_t)parent;
	params[2] = (intptr_t)&instantiateInWorldSpace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Object*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Object* Rewired_Core::Rewired::Utils::UnityTools::Instantiate(UnityEngine_CoreModule::UnityEngine::Object* original, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Transform* parent, bool instantiateInWorldSpace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Instantiate", std::vector<std::string> { "UnityEngine.Object", "UnityEngine.Vector3", "UnityEngine.Quaternion", "UnityEngine.Transform", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)original;
	params[1] = (intptr_t)&position;
	params[2] = (intptr_t)&rotation;
	params[3] = (intptr_t)parent;
	params[4] = (intptr_t)&instantiateInWorldSpace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Object*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::Utils::UnityTools::TransformPoint(UnityEngine_CoreModule::UnityEngine::Transform* from, UnityEngine_CoreModule::UnityEngine::Transform* to, UnityEngine_CoreModule::UnityEngine::Vector3 point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransformPoint", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	params[2] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::Utils::UnityTools::TransformPoint(UnityEngine_CoreModule::UnityEngine::Transform* from, UnityEngine_CoreModule::UnityEngine::Transform* to)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransformPoint", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::Utils::UnityTools::TransformDirection(UnityEngine_CoreModule::UnityEngine::Transform* from, UnityEngine_CoreModule::UnityEngine::Transform* to, UnityEngine_CoreModule::UnityEngine::Vector3 direction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransformDirection", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	params[2] = (intptr_t)&direction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::Utils::UnityTools::TransformDirection(UnityEngine_CoreModule::UnityEngine::Transform* from, UnityEngine_CoreModule::UnityEngine::Transform* to)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransformDirection", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::Utils::UnityTools::TransformVector(UnityEngine_CoreModule::UnityEngine::Transform* from, UnityEngine_CoreModule::UnityEngine::Transform* to, UnityEngine_CoreModule::UnityEngine::Vector3 vector)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransformVector", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	params[2] = (intptr_t)&vector;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::Utils::UnityTools::TransformVector(UnityEngine_CoreModule::UnityEngine::Transform* from, UnityEngine_CoreModule::UnityEngine::Transform* to)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransformVector", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Rect Rewired_Core::Rewired::Utils::UnityTools::TransformRect(UnityEngine_CoreModule::UnityEngine::Transform* from, UnityEngine_CoreModule::UnityEngine::Transform* to, UnityEngine_CoreModule::UnityEngine::Rect rect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransformRect", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Rect" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	params[2] = (intptr_t)&rect;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Utils::UnityTools::DebugDrawCross(UnityEngine_CoreModule::UnityEngine::Vector3 position, float length, UnityEngine_CoreModule::UnityEngine::Color color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DebugDrawCross", std::vector<std::string> { "UnityEngine.Vector3", "System.Single", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::UnityTools::DebugDrawCross(UnityEngine_CoreModule::UnityEngine::Vector3 position, float length, UnityEngine_CoreModule::UnityEngine::Color color, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DebugDrawCross", std::vector<std::string> { "UnityEngine.Vector3", "System.Single", "UnityEngine.Color", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&color;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::Utils::UnityTools::GetUnityInputAxisName(int32_t unityJoystickIndex, int32_t axisIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnityInputAxisName", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unityJoystickIndex;
	params[1] = (intptr_t)&axisIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::Utils::UnityTools::GetUnityInputAxisNameByJoystickId(int32_t unityJoystickId, int32_t axisIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnityInputAxisNameByJoystickId", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unityJoystickId;
	params[1] = (intptr_t)&axisIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::Utils::UnityTools::GetUnityInputButtonName(int32_t unityJoystickIndex, int32_t buttonIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnityInputButtonName", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unityJoystickIndex;
	params[1] = (intptr_t)&buttonIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::Utils::UnityTools::GetUnityInputButtonNameByJoystickId(int32_t unityJoystickId, int32_t buttonIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnityInputButtonNameByJoystickId", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unityJoystickId;
	params[1] = (intptr_t)&buttonIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Rewired_Core::Rewired::Utils::UnityTools::IsValidUnityJoystickName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidUnityJoystickName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
UnityEngine_CoreModule::UnityEngine::AnimationCurve* Rewired_Core::Rewired::Utils::UnityTools::Copy(UnityEngine_CoreModule::UnityEngine::AnimationCurve* orig)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Copy", std::vector<std::string> { "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)orig;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AnimationCurve*)returnValue;
}
bool Rewired_Core::Rewired::Utils::UnityTools::IsNullOrDestroyed(mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsNullOrDestroyed", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)object;
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
Rewired_Core::Rewired::ButtonStateFlags Rewired_Core::Rewired::Utils::UnityTools::JXwGuMpkieTVgRxhXDfHnchqrMI(UnityEngine_CoreModule::UnityEngine::KeyCode A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JXwGuMpkieTVgRxhXDfHnchqrMI");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ButtonStateFlags ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ButtonStateFlags));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ButtonStateFlags>(*(Rewired_Core::Rewired::ButtonStateFlags*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ButtonStateFlags Rewired_Core::Rewired::Utils::UnityTools::KBFiAUAMvjuiowBvwTtPxpnRTTZ(mscorlib::System::String* A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KBFiAUAMvjuiowBvwTtPxpnRTTZ");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ButtonStateFlags ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ButtonStateFlags));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ButtonStateFlags>(*(Rewired_Core::Rewired::ButtonStateFlags*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Utils::UnityTools::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
