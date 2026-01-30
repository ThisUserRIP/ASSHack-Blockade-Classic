#include "Rewired_ControllerStatusChangedEventArgs.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerStatusChangedEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ControllerStatusChangedEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerStatusChangedEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerStatusChangedEventArgs::get_name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerStatusChangedEventArgs::get_controllerId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerType Rewired_Core::Rewired::ControllerStatusChangedEventArgs::get_controllerType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerType>(*(Rewired_Core::Rewired::ControllerType*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Controller* Rewired_Core::Rewired::ControllerStatusChangedEventArgs::get_controller()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controller");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller*)returnValue;
}
void Rewired_Core::Rewired::ControllerStatusChangedEventArgs::_ctor(mscorlib::System::String* name, int32_t uniqueId, Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32", "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&uniqueId;
	params[2] = (intptr_t)&controllerType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
