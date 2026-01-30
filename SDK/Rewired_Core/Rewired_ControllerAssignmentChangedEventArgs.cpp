#include "Rewired_ControllerAssignmentChangedEventArgs.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerAssignmentChangedEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ControllerAssignmentChangedEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerAssignmentChangedEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Rewired_Core::Rewired::ControllerAssignmentChangedEventArgs::get_state()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_state");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Controller* Rewired_Core::Rewired::ControllerAssignmentChangedEventArgs::get_controller()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controller");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller*)returnValue;
}
Rewired_Core::Rewired::Player* Rewired_Core::Rewired::ControllerAssignmentChangedEventArgs::get_player()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_player");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Player*)returnValue;
}
void Rewired_Core::Rewired::ControllerAssignmentChangedEventArgs::_ctor(int32_t playerId, int32_t controllerId, Rewired_Core::Rewired::ControllerType controllerType, bool state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.ControllerType", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&controllerType;
	params[3] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
