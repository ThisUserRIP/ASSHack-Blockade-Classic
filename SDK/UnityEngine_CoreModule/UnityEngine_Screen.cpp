#include "UnityEngine_Screen.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Screen::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "Screen");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Screen::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t UnityEngine_CoreModule::UnityEngine::Screen::get_width()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_width");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_CoreModule::UnityEngine::Screen::get_height()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_height");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_CoreModule::UnityEngine::Screen::get_dpi()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_dpi");
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
void UnityEngine_CoreModule::UnityEngine::Screen::RequestOrientation(UnityEngine_CoreModule::UnityEngine::ScreenOrientation orient)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RequestOrientation", std::vector<std::string> { "UnityEngine.ScreenOrientation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&orient;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::ScreenOrientation UnityEngine_CoreModule::UnityEngine::Screen::GetScreenOrientation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetScreenOrientation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::ScreenOrientation ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::ScreenOrientation));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::ScreenOrientation>(*(UnityEngine_CoreModule::UnityEngine::ScreenOrientation*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::ScreenOrientation UnityEngine_CoreModule::UnityEngine::Screen::get_orientation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_orientation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::ScreenOrientation ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::ScreenOrientation));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::ScreenOrientation>(*(UnityEngine_CoreModule::UnityEngine::ScreenOrientation*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Screen::set_orientation(UnityEngine_CoreModule::UnityEngine::ScreenOrientation value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_orientation", std::vector<std::string> { "UnityEngine.ScreenOrientation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Resolution UnityEngine_CoreModule::UnityEngine::Screen::get_currentResolution()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_currentResolution");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Resolution ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Resolution));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Resolution>(*(UnityEngine_CoreModule::UnityEngine::Resolution*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Screen::get_fullScreen()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fullScreen");
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
void UnityEngine_CoreModule::UnityEngine::Screen::set_fullScreen(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_fullScreen", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::FullScreenMode UnityEngine_CoreModule::UnityEngine::Screen::get_fullScreenMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fullScreenMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::FullScreenMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::FullScreenMode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::FullScreenMode>(*(UnityEngine_CoreModule::UnityEngine::FullScreenMode*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Screen::SetResolution(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::FullScreenMode fullscreenMode, int32_t preferredRefreshRate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetResolution", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.FullScreenMode", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&fullscreenMode;
	params[3] = (intptr_t)&preferredRefreshRate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Screen::SetResolution(int32_t width, int32_t height, bool fullscreen, int32_t preferredRefreshRate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetResolution", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&fullscreen;
	params[3] = (intptr_t)&preferredRefreshRate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Screen::SetResolution(int32_t width, int32_t height, bool fullscreen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetResolution", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&fullscreen;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Resolution>* UnityEngine_CoreModule::UnityEngine::Screen::get_resolutions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_resolutions");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Resolution>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Screen::get_currentResolution_Injected(UnityEngine_CoreModule::UnityEngine::Resolution& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_currentResolution_Injected", std::vector<std::string> { "UnityEngine.Resolution&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
