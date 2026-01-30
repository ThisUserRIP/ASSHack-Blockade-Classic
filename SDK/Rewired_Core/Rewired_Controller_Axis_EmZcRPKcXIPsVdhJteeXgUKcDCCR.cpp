#include "Rewired_Controller_Axis_EmZcRPKcXIPsVdhJteeXgUKcDCCR.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Controller_Axis_EmZcRPKcXIPsVdhJteeXgUKcDCCR::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Controller_Axis::GetIl2CppClass(), "EmZcRPKcXIPsVdhJteeXgUKcDCCR");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Controller_Axis_EmZcRPKcXIPsVdhJteeXgUKcDCCR::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Controller_Axis_EmZcRPKcXIPsVdhJteeXgUKcDCCR::_ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateCycle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Config.UpdateLoopSetting" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateCycle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
