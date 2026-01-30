#include "Rewired_Player_ControllerHelper_KbUbLqFEJOClkRFqkjoQXeNaakVM_txmASKPhzOcZbBhFedMayDAbjNT.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Player_ControllerHelper_KbUbLqFEJOClkRFqkjoQXeNaakVM_txmASKPhzOcZbBhFedMayDAbjNT::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Player_ControllerHelper_KbUbLqFEJOClkRFqkjoQXeNaakVM::GetIl2CppClass(), "txmASKPhzOcZbBhFedMayDAbjNT");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Player_ControllerHelper_KbUbLqFEJOClkRFqkjoQXeNaakVM_txmASKPhzOcZbBhFedMayDAbjNT::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Player_ControllerHelper_KbUbLqFEJOClkRFqkjoQXeNaakVM_txmASKPhzOcZbBhFedMayDAbjNT::_ctor(int32_t joystickId, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired_Core::Rewired::JoystickMap>* mapSet, double lastConnectedTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired.JoystickMap>", "System.Double" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&joystickId;
	params[1] = (intptr_t)mapSet;
	params[2] = (intptr_t)&lastConnectedTime;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
