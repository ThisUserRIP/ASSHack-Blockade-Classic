#include "System_Diagnostics_ProcessStartInfo.h"

IL2CPP::Il2CppClass* System::System::Diagnostics::ProcessStartInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Diagnostics", "ProcessStartInfo");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Diagnostics::ProcessStartInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Diagnostics::ProcessStartInfo::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
