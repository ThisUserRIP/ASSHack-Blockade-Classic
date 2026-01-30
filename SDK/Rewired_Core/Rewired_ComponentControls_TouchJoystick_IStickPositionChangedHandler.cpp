#include "Rewired_ComponentControls_TouchJoystick_IStickPositionChangedHandler.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ComponentControls::TouchJoystick::GetIl2CppClass(), "IStickPositionChangedHandler");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler::OnStickPositionChanged(UnityEngine_CoreModule::UnityEngine::Vector2 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStickPositionChanged", std::vector<std::string> { "UnityEngine.Vector2" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
