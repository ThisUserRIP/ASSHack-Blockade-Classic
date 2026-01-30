#include "Rewired_ButtonLoopSet.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ButtonLoopSet::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ButtonLoopSet");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ButtonLoopSet::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ButtonLoopSet::_ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoops, int32_t buttonCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Config.UpdateLoopSetting", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&updateLoops;
	params[1] = (intptr_t)&buttonCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ButtonLoopSet::SetValue(int32_t index, bool value, double timestamp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetValue", std::vector<std::string> { "System.Int32", "System.Boolean", "System.Double" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&timestamp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ButtonLoopSet::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ButtonLoopSet::Import(Rewired_Core::Rewired::ButtonLoopSet* set)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import", std::vector<std::string> { "Rewired.ButtonLoopSet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)set;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
