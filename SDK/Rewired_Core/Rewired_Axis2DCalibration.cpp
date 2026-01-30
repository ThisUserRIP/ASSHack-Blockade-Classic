#include "Rewired_Axis2DCalibration.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Axis2DCalibration::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "Axis2DCalibration");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Axis2DCalibration::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::DeadZone2DType Rewired_Core::Rewired::Axis2DCalibration::get_deadZoneType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_deadZoneType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::DeadZone2DType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::DeadZone2DType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::DeadZone2DType>(*(Rewired_Core::Rewired::DeadZone2DType*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Axis2DCalibration::set_deadZoneType(Rewired_Core::Rewired::DeadZone2DType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_deadZoneType", std::vector<std::string> { "Rewired.DeadZone2DType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::AxisSensitivity2DType Rewired_Core::Rewired::Axis2DCalibration::get_sensitivityType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sensitivityType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisSensitivity2DType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisSensitivity2DType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisSensitivity2DType>(*(Rewired_Core::Rewired::AxisSensitivity2DType*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Axis2DCalibration::set_sensitivityType(Rewired_Core::Rewired::AxisSensitivity2DType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sensitivityType", std::vector<std::string> { "Rewired.AxisSensitivity2DType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Axis2DCalibration::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_Core::Rewired::Axis2DCalibration::GetCalibrated2DValue(float valueRawX, float valueRawY, Rewired_Core::Rewired::AxisCalibration* xAxis, Rewired_Core::Rewired::AxisCalibration* yAxis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCalibrated2DValue", std::vector<std::string> { "System.Single", "System.Single", "Rewired.AxisCalibration", "Rewired.AxisCalibration" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&valueRawX;
	params[1] = (intptr_t)&valueRawY;
	params[2] = (intptr_t)xAxis;
	params[3] = (intptr_t)yAxis;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_Core::Rewired::Axis2DCalibration::GetCalibrated2DValue(float valueRawX, float valueRawY, Rewired_Core::Rewired::AxisCalibration* xAxis, Rewired_Core::Rewired::AxisCalibration* yAxis, Rewired_Core::Rewired::DeadZone2DType deadZoneType, Rewired_Core::Rewired::AxisSensitivity2DType sensitivityType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCalibrated2DValue", std::vector<std::string> { "System.Single", "System.Single", "Rewired.AxisCalibration", "Rewired.AxisCalibration", "Rewired.DeadZone2DType", "Rewired.AxisSensitivity2DType" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&valueRawX;
	params[1] = (intptr_t)&valueRawY;
	params[2] = (intptr_t)xAxis;
	params[3] = (intptr_t)yAxis;
	params[4] = (intptr_t)&deadZoneType;
	params[5] = (intptr_t)&sensitivityType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
