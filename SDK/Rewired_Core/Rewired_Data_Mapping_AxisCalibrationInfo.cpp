#include "Rewired_Data_Mapping_AxisCalibrationInfo.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Data.Mapping", "AxisCalibrationInfo");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::get_applyRangeCalibration()
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
void Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::set_applyRangeCalibration(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_applyRangeCalibration", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::get_invert()
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
void Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::set_invert(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_invert", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::get_deadZone()
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
void Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::set_deadZone(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_deadZone", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::get_zero()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_zero");
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
void Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::set_zero(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_zero", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::get_min()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_min");
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
void Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::set_min(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_min", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::get_max()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_max");
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
void Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::set_max(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_max", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::AxisSensitivityType Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::get_sensitivityType()
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
void Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::set_sensitivityType(Rewired_Core::Rewired::AxisSensitivityType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sensitivityType", std::vector<std::string> { "Rewired.AxisSensitivityType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::get_sensitivity()
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
void Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::set_sensitivity(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sensitivity", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::AnimationCurve* Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::get_sensitivityCurve()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sensitivityCurve");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AnimationCurve*)returnValue;
}
void Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::set_sensitivityCurve(UnityEngine_CoreModule::UnityEngine::AnimationCurve* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sensitivityCurve", std::vector<std::string> { "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::_ctor(float deadZone, float zero, float min, float max, bool invert, bool applyRangeCalibration, Rewired_Core::Rewired::AxisSensitivityType sensitivityType, float sensitivity, UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single", "System.Boolean", "System.Boolean", "Rewired.AxisSensitivityType", "System.Single", "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&deadZone;
	params[1] = (intptr_t)&zero;
	params[2] = (intptr_t)&min;
	params[3] = (intptr_t)&max;
	params[4] = (intptr_t)&invert;
	params[5] = (intptr_t)&applyRangeCalibration;
	params[6] = (intptr_t)&sensitivityType;
	params[7] = (intptr_t)&sensitivity;
	params[8] = (intptr_t)sensitivityCurve;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::DeepClone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeepClone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
Rewired_Core::Rewired::AxisCalibrationData Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::obIlJKxFVZjNQjcwpPrYSokffVy(Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo* A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "obIlJKxFVZjNQjcwpPrYSokffVy");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisCalibrationData ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisCalibrationData));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisCalibrationData>(*(Rewired_Core::Rewired::AxisCalibrationData*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo* Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo::gAlCMWRcPzbRNoLhTkMlJckLcuw(Rewired_Core::Rewired::AxisCalibrationData A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "gAlCMWRcPzbRNoLhTkMlJckLcuw");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo*)returnValue;
}
