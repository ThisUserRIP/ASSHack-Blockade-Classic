#include "Rewired_HID_SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HID::SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::HID::SpecialDevices::GetIl2CppClass(), "rFQsNSlLTUfXoSUakERgGAqtZEX");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HID::SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::HID::SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX::_ctor(uint16_t vendorId, uint16_t productId, mscorlib::System::String* productName, bool hasRelativeAxes, int32_t axisMin, int32_t axisMax, int32_t axisZero, float relToAbsAxisConversionTimeout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt16", "System.UInt16", "System.String", "System.Boolean", "System.Int32", "System.Int32", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&vendorId;
	params[1] = (intptr_t)&productId;
	params[2] = (intptr_t)productName;
	params[3] = (intptr_t)&hasRelativeAxes;
	params[4] = (intptr_t)&axisMin;
	params[5] = (intptr_t)&axisMax;
	params[6] = (intptr_t)&axisZero;
	params[7] = (intptr_t)&relToAbsAxisConversionTimeout;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::HID::SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX::yfAyEFNcQTGdddRJesOsjTJJmUV(uint16_t A_1, uint16_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "yfAyEFNcQTGdddRJesOsjTJJmUV");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
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
bool Rewired_Core::Rewired::HID::SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX::yfAyEFNcQTGdddRJesOsjTJJmUV(uint16_t A_1, uint16_t A_2, mscorlib::System::String* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "yfAyEFNcQTGdddRJesOsjTJJmUV");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
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
bool Rewired_Core::Rewired::HID::SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX::yfAyEFNcQTGdddRJesOsjTJJmUV(mscorlib::System::String* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "yfAyEFNcQTGdddRJesOsjTJJmUV");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
