#include "Rewired_AxisCalibrationData.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::AxisCalibrationData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "AxisCalibrationData");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::AxisCalibrationData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::AxisCalibrationData::_ctor(bool enabled, float deadZone, float zero, float min, float max, bool invert, bool applyRangeCalibration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "System.Single", "System.Single", "System.Single", "System.Single", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&enabled;
	params[1] = (intptr_t)&deadZone;
	params[2] = (intptr_t)&zero;
	params[3] = (intptr_t)&min;
	params[4] = (intptr_t)&max;
	params[5] = (intptr_t)&invert;
	params[6] = (intptr_t)&applyRangeCalibration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::AxisCalibrationData::_ctor(bool enabled, float deadZone, float zero, float min, float max, bool invert, bool applyRangeCalibration, float sensitivity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "System.Single", "System.Single", "System.Single", "System.Single", "System.Boolean", "System.Boolean", "System.Single" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&enabled;
	params[1] = (intptr_t)&deadZone;
	params[2] = (intptr_t)&zero;
	params[3] = (intptr_t)&min;
	params[4] = (intptr_t)&max;
	params[5] = (intptr_t)&invert;
	params[6] = (intptr_t)&applyRangeCalibration;
	params[7] = (intptr_t)&sensitivity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::AxisCalibrationData::_ctor(bool enabled, float deadZone, float zero, float min, float max, bool invert, bool applyRangeCalibration, Rewired_Core::Rewired::AxisSensitivityType sensitivityType, float sensitivity, UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "System.Single", "System.Single", "System.Single", "System.Single", "System.Boolean", "System.Boolean", "Rewired.AxisSensitivityType", "System.Single", "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&enabled;
	params[1] = (intptr_t)&deadZone;
	params[2] = (intptr_t)&zero;
	params[3] = (intptr_t)&min;
	params[4] = (intptr_t)&max;
	params[5] = (intptr_t)&invert;
	params[6] = (intptr_t)&applyRangeCalibration;
	params[7] = (intptr_t)&sensitivityType;
	params[8] = (intptr_t)&sensitivity;
	params[9] = (intptr_t)sensitivityCurve;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::AxisCalibrationData Rewired_Core::Rewired::AxisCalibrationData::get_Default()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Default");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisCalibrationData ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisCalibrationData));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisCalibrationData>(*(Rewired_Core::Rewired::AxisCalibrationData*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::AxisCalibrationData Rewired_Core::Rewired::AxisCalibrationData::get_Raw()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Raw");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisCalibrationData ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisCalibrationData));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisCalibrationData>(*(Rewired_Core::Rewired::AxisCalibrationData*)il2cpp_object_unbox(returnValue));
}
