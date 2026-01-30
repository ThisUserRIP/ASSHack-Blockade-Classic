#include "Rewired_JoystickMap.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::JoystickMap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "JoystickMap");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::JoystickMap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::JoystickMap::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::JoystickMap::_ctor(Rewired_Core::Rewired::JoystickMap* joystickMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.JoystickMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)joystickMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::JoystickMap::SetIdentity(mscorlib::System::Guid hardwareGuid, int32_t categoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIdentity", std::vector<std::string> { "System.Guid", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hardwareGuid;
	params[1] = (intptr_t)&categoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::JoystickMap::Blank(mscorlib::System::Guid hardwareGuid, int32_t categoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blank", std::vector<std::string> { "System.Guid", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hardwareGuid;
	params[1] = (intptr_t)&categoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
