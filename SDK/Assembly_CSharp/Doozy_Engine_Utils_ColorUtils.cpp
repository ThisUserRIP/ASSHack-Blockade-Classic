#include "Doozy_Engine_Utils_ColorUtils.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.Utils", "ColorUtils");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::HUEtoRGB(float H)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HUEtoRGB", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&H;
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
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::HSLtoRGB(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSL* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HSLtoRGB", std::vector<std::string> { "Doozy.Engine.Utils.ColorModels.HSL" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSL* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::RGBtoHSL(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RGBtoHSL", std::vector<std::string> { "Doozy.Engine.Utils.ColorModels.RGB" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSL*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::HSVtoRGB(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSV* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HSVtoRGB", std::vector<std::string> { "Doozy.Engine.Utils.ColorModels.HSV" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSV* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::RGBtoHSV(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RGBtoHSV", std::vector<std::string> { "Doozy.Engine.Utils.ColorModels.RGB" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSV*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::CMYtoRGB(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMY* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CMYtoRGB", std::vector<std::string> { "Doozy.Engine.Utils.ColorModels.CMY" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMY* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::RGBtoCMY(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RGBtoCMY", std::vector<std::string> { "Doozy.Engine.Utils.ColorModels.RGB" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMY*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::CMYKtoRGB(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMYK* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CMYKtoRGB", std::vector<std::string> { "Doozy.Engine.Utils.ColorModels.CMYK" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMYK* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::RGBtoCMYK(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RGBtoCMYK", std::vector<std::string> { "Doozy.Engine.Utils.ColorModels.RGB" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMYK*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::XYZtoRGB(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::XYZ* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XYZtoRGB", std::vector<std::string> { "Doozy.Engine.Utils.ColorModels.XYZ" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::XYZ* Assembly_CSharp::Doozy::Engine::Utils::ColorUtils::RGBtoXYZ(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RGBtoXYZ", std::vector<std::string> { "Doozy.Engine.Utils.ColorModels.RGB" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::XYZ*)returnValue;
}
