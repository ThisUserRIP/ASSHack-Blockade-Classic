#include "Rewired_HID_SpecialDevices.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HID::SpecialDevices::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.HID", "SpecialDevices");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HID::SpecialDevices::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Rewired_Core::Rewired::HID::SpecialDevices::RequiresRelativeToAbsoluteAxisConversion(uint16_t vendorId, uint16_t productId, mscorlib::System::String* productName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RequiresRelativeToAbsoluteAxisConversion", std::vector<std::string> { "System.UInt16", "System.UInt16", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&vendorId;
	params[1] = (intptr_t)&productId;
	params[2] = (intptr_t)productName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
float Rewired_Core::Rewired::HID::SpecialDevices::GetRelativeToAbsoluteAxisEventTimeout(uint16_t vendorId, uint16_t productId, mscorlib::System::String* productName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRelativeToAbsoluteAxisEventTimeout", std::vector<std::string> { "System.UInt16", "System.UInt16", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&vendorId;
	params[1] = (intptr_t)&productId;
	params[2] = (intptr_t)productName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Rewired_Core::Rewired::HID::SpecialDevices::GetRelativeAxisRanges(uint16_t vendorId, uint16_t productId, int32_t& min, int32_t& max, int32_t& zero)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRelativeAxisRanges", std::vector<std::string> { "System.UInt16", "System.UInt16", "System.Int32&", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&vendorId;
	params[1] = (intptr_t)&productId;
	params[2] = (intptr_t)&min;
	params[3] = (intptr_t)&max;
	params[4] = (intptr_t)&zero;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Rewired_Core::Rewired::HID::SpecialDevices::GetRelativeAxisRanges(uint16_t vendorId, uint16_t productId, mscorlib::System::String* productName, int32_t& min, int32_t& max, int32_t& zero)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRelativeAxisRanges", std::vector<std::string> { "System.UInt16", "System.UInt16", "System.String", "System.Int32&", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&vendorId;
	params[1] = (intptr_t)&productId;
	params[2] = (intptr_t)productName;
	params[3] = (intptr_t)&min;
	params[4] = (intptr_t)&max;
	params[5] = (intptr_t)&zero;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Rewired_Core::Rewired::HID::SpecialDevices::IsSupportedSpecialDevice(uint16_t vendorId, uint16_t productId, mscorlib::System::String* productName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSupportedSpecialDevice", std::vector<std::string> { "System.UInt16", "System.UInt16", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&vendorId;
	params[1] = (intptr_t)&productId;
	params[2] = (intptr_t)productName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Rewired_Core::Rewired::HID::SpecialDevices::cLhhyWBUrKMAjTNaxbkFebxWclzE(uint16_t A_0, uint16_t A_1, mscorlib::System::String* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cLhhyWBUrKMAjTNaxbkFebxWclzE", std::vector<std::string> { "System.UInt16", "System.UInt16", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)&A_1;
	params[2] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
Rewired_Core::Rewired::HID::SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX* Rewired_Core::Rewired::HID::SpecialDevices::siJPyAKHyxxaRKmIhQaBJdeamNh(uint16_t A_0, uint16_t A_1, mscorlib::System::String* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "siJPyAKHyxxaRKmIhQaBJdeamNh", std::vector<std::string> { "System.UInt16", "System.UInt16", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)&A_1;
	params[2] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::HID::SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX*)returnValue;
}
void Rewired_Core::Rewired::HID::SpecialDevices::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
