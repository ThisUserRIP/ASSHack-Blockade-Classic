#include "Rewired_AxisCalibration.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::AxisCalibration::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "AxisCalibration");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::AxisCalibration::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Rewired_Core::Rewired::AxisCalibration::get_enabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_enabled");
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
void Rewired_Core::Rewired::AxisCalibration::set_enabled(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_enabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::AxisCalibration::get_deadZone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_deadZone");
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
void Rewired_Core::Rewired::AxisCalibration::set_deadZone(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_deadZone", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::AxisCalibration::get_calibratedZero()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_calibratedZero");
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
void Rewired_Core::Rewired::AxisCalibration::set_calibratedZero(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_calibratedZero", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::AxisCalibration::get_calibratedMin()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_calibratedMin");
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
void Rewired_Core::Rewired::AxisCalibration::set_calibratedMin(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_calibratedMin", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::AxisCalibration::get_calibratedMax()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_calibratedMax");
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
void Rewired_Core::Rewired::AxisCalibration::set_calibratedMax(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_calibratedMax", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::AxisCalibration::get_invert()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_invert");
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
void Rewired_Core::Rewired::AxisCalibration::set_invert(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_invert", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::AxisSensitivityType Rewired_Core::Rewired::AxisCalibration::get_sensitivityType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sensitivityType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisSensitivityType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisSensitivityType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisSensitivityType>(*(Rewired_Core::Rewired::AxisSensitivityType*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::AxisCalibration::set_sensitivityType(Rewired_Core::Rewired::AxisSensitivityType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sensitivityType", std::vector<std::string> { "Rewired.AxisSensitivityType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::AxisCalibration::get_sensitivity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sensitivity");
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
void Rewired_Core::Rewired::AxisCalibration::set_sensitivity(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sensitivity", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::AnimationCurve* Rewired_Core::Rewired::AxisCalibration::get_sensitivityCurve()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sensitivityCurve");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AnimationCurve*)returnValue;
}
void Rewired_Core::Rewired::AxisCalibration::set_sensitivityCurve(UnityEngine_CoreModule::UnityEngine::AnimationCurve* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sensitivityCurve", std::vector<std::string> { "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::AxisCalibration::get_applyRangeCalibration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_applyRangeCalibration");
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
void Rewired_Core::Rewired::AxisCalibration::set_applyRangeCalibration(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_applyRangeCalibration", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType Rewired_Core::Rewired::AxisCalibration::get_calibrationMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_calibrationMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType>(*(Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::AxisCalibration::set_calibrationMode(Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_calibrationMode", std::vector<std::string> { "Rewired.Data.Mapping.AlternateAxisCalibrationType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::AxisCalibration::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::AxisCalibration::_ctor(bool enabled, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo>* hardwareCalibrations, float deadZone, float calibratedZero, float calibratedMin, float calibratedMax, bool invert, bool applyRangeCalibration, Rewired_Core::Rewired::AxisSensitivityType sensitivityType, float sensitivity, UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "System.Collections.Generic.Dictionary`2<System.Int32,Rewired.Data.Mapping.AxisCalibrationInfo>", "System.Single", "System.Single", "System.Single", "System.Single", "System.Boolean", "System.Boolean", "Rewired.AxisSensitivityType", "System.Single", "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&enabled;
	params[1] = (intptr_t)hardwareCalibrations;
	params[2] = (intptr_t)&deadZone;
	params[3] = (intptr_t)&calibratedZero;
	params[4] = (intptr_t)&calibratedMin;
	params[5] = (intptr_t)&calibratedMax;
	params[6] = (intptr_t)&invert;
	params[7] = (intptr_t)&applyRangeCalibration;
	params[8] = (intptr_t)&sensitivityType;
	params[9] = (intptr_t)&sensitivity;
	params[10] = (intptr_t)sensitivityCurve;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::AxisCalibration::_ctor(Rewired_Core::Rewired::AxisCalibrationData hardwareData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.AxisCalibrationData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hardwareData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::AxisCalibration::CopyFrom(Rewired_Core::Rewired::AxisCalibration* data, bool copyHardwareData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyFrom", std::vector<std::string> { "Rewired.AxisCalibration", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&copyHardwareData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::AxisCalibration::GetCalibratedValue(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCalibratedValue", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
float Rewired_Core::Rewired::AxisCalibration::GetCalibratedValue(float value, float customDeadzone, bool applySensitivity, bool applyInversion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCalibratedValue", std::vector<std::string> { "System.Single", "System.Single", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&customDeadzone;
	params[2] = (intptr_t)&applySensitivity;
	params[3] = (intptr_t)&applyInversion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
float Rewired_Core::Rewired::AxisCalibration::GetCalibratedValue(float value, Rewired_Core::Rewired::AxisRange axisRange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCalibratedValue", std::vector<std::string> { "System.Single", "Rewired.AxisRange" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&axisRange;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
float Rewired_Core::Rewired::AxisCalibration::GetCalibratedValue(float value, Rewired_Core::Rewired::AxisRange axisRange, float customDeadzone, bool applySensitivity, bool applyInversion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCalibratedValue", std::vector<std::string> { "System.Single", "Rewired.AxisRange", "System.Single", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&axisRange;
	params[2] = (intptr_t)&customDeadzone;
	params[3] = (intptr_t)&applySensitivity;
	params[4] = (intptr_t)&applyInversion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
Rewired_Core::Rewired::AxisCalibrationData Rewired_Core::Rewired::AxisCalibration::GetData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisCalibrationData ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisCalibrationData));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisCalibrationData>(*(Rewired_Core::Rewired::AxisCalibrationData*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::AxisCalibration::SetData(Rewired_Core::Rewired::AxisCalibrationData data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetData", std::vector<std::string> { "Rewired.AxisCalibrationData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::AxisCalibration::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* Rewired_Core::Rewired::AxisCalibration::ExportData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExportData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject*)returnValue;
}
void Rewired_Core::Rewired::AxisCalibration::Import(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import", std::vector<std::string> { "Rewired.Utils.Classes.Data.SerializedObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serializedObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::AxisCalibration::InitHardwareCalibrations(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo>* hardwareCalibrations, Rewired_Core::Rewired::AxisCalibrationData defaultData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitHardwareCalibrations", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.Int32,Rewired.Data.Mapping.AxisCalibrationInfo>", "Rewired.AxisCalibrationData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hardwareCalibrations;
	params[1] = (intptr_t)&defaultData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::AxisCalibration::CreateDefaultHardwareCalibration(Rewired_Core::Rewired::AxisCalibrationData defaultData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDefaultHardwareCalibration", std::vector<std::string> { "Rewired.AxisCalibrationData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&defaultData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo* Rewired_Core::Rewired::AxisCalibration::GetHardwareDefault()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHardwareDefault");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo*)returnValue;
}
Rewired_Core::Rewired::AxisCalibration* Rewired_Core::Rewired::AxisCalibration::CreateRelative()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateRelative");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::AxisCalibration*)returnValue;
}
