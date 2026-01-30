#include "Rewired_Data_Mapping_HardwareAxisInfo.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Data.Mapping", "HardwareAxisInfo");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::AxisCoordinateMode Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo::get_dataFormat()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_dataFormat");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisCoordinateMode ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisCoordinateMode));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisCoordinateMode>(*(Rewired_Core::Rewired::AxisCoordinateMode*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo::get_excludeFromPolling()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_excludeFromPolling");
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
Rewired_Core::Rewired::Data::Mapping::SpecialAxisType Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo::get_specialAxisType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_specialAxisType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Data::Mapping::SpecialAxisType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Data::Mapping::SpecialAxisType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Data::Mapping::SpecialAxisType>(*(Rewired_Core::Rewired::Data::Mapping::SpecialAxisType*)il2cpp_object_unbox(returnValue));
}
float Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo::get_pollingDeadZone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_pollingDeadZone");
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
void Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo::_ctor(Rewired_Core::Rewired::AxisCoordinateMode dataFormat, bool excludeFromPolling, float pollingDeadZone, Rewired_Core::Rewired::Data::Mapping::SpecialAxisType specialAxisType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.AxisCoordinateMode", "System.Boolean", "System.Single", "Rewired.Data.Mapping.SpecialAxisType" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&dataFormat;
	params[1] = (intptr_t)&excludeFromPolling;
	params[2] = (intptr_t)&pollingDeadZone;
	params[3] = (intptr_t)&specialAxisType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo* Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo::get_Default()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Default");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*)returnValue;
}
mscorlib::System::Object* Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo::DeepClone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeepClone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
