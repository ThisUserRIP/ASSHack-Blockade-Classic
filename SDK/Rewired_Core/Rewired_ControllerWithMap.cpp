#include "Rewired_ControllerWithMap.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerWithMap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ControllerWithMap");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerWithMap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerWithMap::_ctor(int32_t controllerId, Rewired_Core::Rewired::InputSource inputSource, mscorlib::System::String* name, mscorlib::System::String* hardwareName, mscorlib::System::String* hardwareIdentifier, Rewired_Core::Rewired::ControllerType type, mscorlib::System::Guid hardwareTypeGuid, int32_t buttonCount, IL2CPP::Array<bool>* isButtonPressureSensitive, Rewired_Core::Rewired::HardwareControllerMap_Game* hardwareMap, Rewired_Core::Rewired::Controller_Extension* extension, Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.InputSource", "System.String", "System.String", "System.String", "Rewired.ControllerType", "System.Guid", "System.Int32", "System.Boolean[]", "Rewired.HardwareControllerMap_Game", "Rewired.Controller/Extension", "Rewired.ControllerDataUpdater" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)&controllerId;
	params[1] = (intptr_t)&inputSource;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)hardwareName;
	params[4] = (intptr_t)hardwareIdentifier;
	params[5] = (intptr_t)&type;
	params[6] = (intptr_t)&hardwareTypeGuid;
	params[7] = (intptr_t)&buttonCount;
	params[8] = (intptr_t)isButtonPressureSensitive;
	params[9] = (intptr_t)hardwareMap;
	params[10] = (intptr_t)extension;
	params[11] = (intptr_t)dataUpdater;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
