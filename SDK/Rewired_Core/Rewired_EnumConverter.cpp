#include "Rewired_EnumConverter.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::EnumConverter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "EnumConverter");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::EnumConverter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Rewired_Core::Rewired::EnumConverter::ToUpdateLoopTypes(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::UpdateLoopType>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToUpdateLoopTypes", std::vector<std::string> { "Rewired.Config.UpdateLoopSetting", "System.Collections.Generic.List`1<Rewired.UpdateLoopType>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&updateLoopSetting;
	params[1] = (intptr_t)results;
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
Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType Rewired_Core::Rewired::EnumConverter::ToAlternateAxisCalibrationType(Rewired_Core::Rewired::Config::ThrottleCalibrationMode throttleCalibrationMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToAlternateAxisCalibrationType", std::vector<std::string> { "Rewired.Config.ThrottleCalibrationMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&throttleCalibrationMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType>(*(Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType*)il2cpp_object_unbox(returnValue));
}
