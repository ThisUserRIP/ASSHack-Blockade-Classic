#include "Rewired_Platforms_PS4_Internal_LoggedInUser.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Platforms::PS4::Internal::LoggedInUser::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Platforms.PS4.Internal", "LoggedInUser");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Platforms::PS4::Internal::LoggedInUser::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Platforms::PS4::Internal::LoggedInUser::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
