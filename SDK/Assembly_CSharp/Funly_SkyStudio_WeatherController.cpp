#include "Funly_SkyStudio_WeatherController.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Funly::SkyStudio::WeatherController::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Funly.SkyStudio", "WeatherController");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Funly::SkyStudio::WeatherController::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::Funly::SkyStudio::RainDownfallController* Assembly_CSharp::Funly::SkyStudio::WeatherController::get_rainDownfallController()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rainDownfallController");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::RainDownfallController*)returnValue;
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::set_rainDownfallController(Assembly_CSharp::Funly::SkyStudio::RainDownfallController* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_rainDownfallController", std::vector<std::string> { "Funly.SkyStudio.RainDownfallController" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Funly::SkyStudio::RainSplashController* Assembly_CSharp::Funly::SkyStudio::WeatherController::get_rainSplashController()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rainSplashController");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::RainSplashController*)returnValue;
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::set_rainSplashController(Assembly_CSharp::Funly::SkyStudio::RainSplashController* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_rainSplashController", std::vector<std::string> { "Funly.SkyStudio.RainSplashController" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Funly::SkyStudio::LightningController* Assembly_CSharp::Funly::SkyStudio::WeatherController::get_lightningController()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lightningController");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::LightningController*)returnValue;
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::set_lightningController(Assembly_CSharp::Funly::SkyStudio::LightningController* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_lightningController", std::vector<std::string> { "Funly.SkyStudio.LightningController" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Funly::SkyStudio::WeatherDepthCamera* Assembly_CSharp::Funly::SkyStudio::WeatherController::get_weatherDepthCamera()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_weatherDepthCamera");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::WeatherDepthCamera*)returnValue;
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::set_weatherDepthCamera(Assembly_CSharp::Funly::SkyStudio::WeatherDepthCamera* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_weatherDepthCamera", std::vector<std::string> { "Funly.SkyStudio.WeatherDepthCamera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::DiscoverWeatherControllers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DiscoverWeatherControllers");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::UpdateForTimeOfDay(Assembly_CSharp::Funly::SkyStudio::SkyProfile* skyProfile, float timeOfDay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateForTimeOfDay", std::vector<std::string> { "Funly.SkyStudio.SkyProfile", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)skyProfile;
	params[1] = (intptr_t)&timeOfDay;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::LateUpdate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LateUpdate");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::OnEnclosureDidChange(Assembly_CSharp::Funly::SkyStudio::WeatherEnclosure* enclosure)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnclosureDidChange", std::vector<std::string> { "Funly.SkyStudio.WeatherEnclosure" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)enclosure;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Funly::SkyStudio::WeatherController::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
