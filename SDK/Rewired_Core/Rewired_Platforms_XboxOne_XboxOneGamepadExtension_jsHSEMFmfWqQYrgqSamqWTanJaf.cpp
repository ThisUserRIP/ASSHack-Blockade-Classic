#include "Rewired_Platforms_XboxOne_XboxOneGamepadExtension_jsHSEMFmfWqQYrgqSamqWTanJaf.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_jsHSEMFmfWqQYrgqSamqWTanJaf::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::GetIl2CppClass(), "jsHSEMFmfWqQYrgqSamqWTanJaf");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_jsHSEMFmfWqQYrgqSamqWTanJaf::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_jsHSEMFmfWqQYrgqSamqWTanJaf::_ctor(bool supportsVibration, Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource* xboxOneInputSource, Rewired_Core::UTsiDltkMfrsEEHHJEydOZPBsEE vibrationData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "Rewired.Platforms.XboxOne.IXboxOneInputSource", "UTsiDltkMfrsEEHHJEydOZPBsEE" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&supportsVibration;
	params[1] = (intptr_t)xboxOneInputSource;
	params[2] = (intptr_t)&vibrationData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
