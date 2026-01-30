#include "Rewired_Libraries_SharpDX_DirectInput_IDataFormatProvider.h"

IL2CPP::Il2CppClass* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::IDataFormatProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "Rewired.Libraries.SharpDX.DirectInput", "IDataFormatProvider");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::IDataFormatProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Windows::MwHnOEVofawqfRTFpPHRuBdwHZE Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::IDataFormatProvider::get_Flags()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Flags");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Windows::MwHnOEVofawqfRTFpPHRuBdwHZE ret;
		std::memset(&ret, 0, sizeof(Rewired_Windows::MwHnOEVofawqfRTFpPHRuBdwHZE));
		return ret;
	}
	return static_cast<Rewired_Windows::MwHnOEVofawqfRTFpPHRuBdwHZE>(*(Rewired_Windows::MwHnOEVofawqfRTFpPHRuBdwHZE*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<Rewired_Windows::QtwxMtQpjmqWDvhmwUtaOWEpPwn*>* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::IDataFormatProvider::get_ObjectsFormat()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ObjectsFormat");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Windows::QtwxMtQpjmqWDvhmwUtaOWEpPwn*>*)returnValue;
}
