#include "Rewired_Platforms_PS4_PS4InputSource_JgKjLuPVbqRLmrrbaPlHSJMLqFW_AeLxNaocqSYeHszUbSpwtBunxKn.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_JgKjLuPVbqRLmrrbaPlHSJMLqFW_AeLxNaocqSYeHszUbSpwtBunxKn::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_JgKjLuPVbqRLmrrbaPlHSJMLqFW::GetIl2CppClass(), "AeLxNaocqSYeHszUbSpwtBunxKn");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_JgKjLuPVbqRLmrrbaPlHSJMLqFW_AeLxNaocqSYeHszUbSpwtBunxKn::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_JgKjLuPVbqRLmrrbaPlHSJMLqFW_AeLxNaocqSYeHszUbSpwtBunxKn::_ctor(int32_t axisCount, int32_t buttonCount, float dpadDeadzone, int32_t vibrationMotorCount, int32_t maxTouches)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&axisCount;
	params[1] = (intptr_t)&buttonCount;
	params[2] = (intptr_t)&dpadDeadzone;
	params[3] = (intptr_t)&vibrationMotorCount;
	params[4] = (intptr_t)&maxTouches;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
