#include "Rewired_Platforms_XboxOne_XboxOneInputSource_AyDrgqazGGWabXjztZtUnJdXIFNE.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Platforms::XboxOne::XboxOneInputSource_AyDrgqazGGWabXjztZtUnJdXIFNE::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneInputSource::GetIl2CppClass(), "AyDrgqazGGWabXjztZtUnJdXIFNE");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Platforms::XboxOne::XboxOneInputSource_AyDrgqazGGWabXjztZtUnJdXIFNE::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneInputSource_AyDrgqazGGWabXjztZtUnJdXIFNE::_ctor(uint32_t unityJoystickId, uint32_t connectedFrame)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unityJoystickId;
	params[1] = (intptr_t)&connectedFrame;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
