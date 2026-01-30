#include "Rewired_CalibrationMap.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::CalibrationMap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "CalibrationMap");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::CalibrationMap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::AxisCalibration>* Rewired_Core::Rewired::CalibrationMap::get_Axes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Axes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::AxisCalibration>*)returnValue;
}
int32_t Rewired_Core::Rewired::CalibrationMap::get_axisCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_axisCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::CalibrationMap::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::CalibrationMap::_ctor(IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* hardwareAxisCalibrationData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.AxisCalibrationData[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hardwareAxisCalibrationData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::CalibrationMap::_ctor(IL2CPP::Array<Rewired_Core::Rewired::AxisCalibration*>* axisCalibrations)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.AxisCalibration[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)axisCalibrations;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::CalibrationMap::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::AxisCalibration* Rewired_Core::Rewired::CalibrationMap::GetAxis(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxis", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::AxisCalibration*)returnValue;
}
float Rewired_Core::Rewired::CalibrationMap::GetCalibratedValue(int32_t axisIndex, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCalibratedValue", std::vector<std::string> { "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&axisIndex;
	params[1] = (intptr_t)&value;
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
bool Rewired_Core::Rewired::CalibrationMap::SetAxisData(int32_t index, Rewired_Core::Rewired::AxisCalibrationData data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAxisData", std::vector<std::string> { "System.Int32", "Rewired.AxisCalibrationData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
Rewired_Core::Rewired::AxisCalibrationData Rewired_Core::Rewired::CalibrationMap::GetAxisData(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisData", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Rewired_Core::Rewired::CalibrationMap::CopyFrom(Rewired_Core::Rewired::CalibrationMap* map, bool copyHardwareDeadzone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyFrom", std::vector<std::string> { "Rewired.CalibrationMap", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)&copyHardwareDeadzone;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::CalibrationMap::ToXmlString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToXmlString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::CalibrationMap::ToJsonString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToJsonString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Rewired_Core::Rewired::CalibrationMap::ImportXmlString(mscorlib::System::String* xmlString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportXmlString", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xmlString;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool Rewired_Core::Rewired::CalibrationMap::ImportJsonString(mscorlib::System::String* jsonString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportJsonString", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)jsonString;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* Rewired_Core::Rewired::CalibrationMap::BTjEytEDmfXDlKCGhgjizVfcbDhc()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BTjEytEDmfXDlKCGhgjizVfcbDhc");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject*)returnValue;
}
void Rewired_Core::Rewired::CalibrationMap::oEKaCGHExUmCjCFSEnlxSTdOydKx(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "oEKaCGHExUmCjCFSEnlxSTdOydKx");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_Core::Rewired::CalibrationMap::GetCalibrated2DValue(int32_t xAxisIndex, int32_t yAxisIndex, float valueRawX, float valueRawY, Rewired_Core::Rewired::DeadZone2DType deadZoneType, Rewired_Core::Rewired::AxisSensitivity2DType sensitivityType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCalibrated2DValue", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "Rewired.DeadZone2DType", "Rewired.AxisSensitivity2DType" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&xAxisIndex;
	params[1] = (intptr_t)&yAxisIndex;
	params[2] = (intptr_t)&valueRawX;
	params[3] = (intptr_t)&valueRawY;
	params[4] = (intptr_t)&deadZoneType;
	params[5] = (intptr_t)&sensitivityType;
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
