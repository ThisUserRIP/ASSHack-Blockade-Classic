#include "Rewired_Demos_GamepadTemplateUI_GamepadTemplateUI.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Rewired.Demos.GamepadTemplateUI", "GamepadTemplateUI");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Player* Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::get_player()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_player");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Player*)returnValue;
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::DrawActiveElements()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawActiveElements");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::ActivateElements(Rewired_Core::Rewired::Player* player, int32_t actionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActivateElements", std::vector<std::string> { "Rewired.Player", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)player;
	params[1] = (intptr_t)&actionId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::DrawLabels()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawLabels");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::DrawLabels(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::InputAction* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawLabels", std::vector<std::string> { "Rewired.Player", "Rewired.InputAction" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)player;
	params[1] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::DrawLabel(Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* uiElement, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::IControllerTemplate* template_, Rewired_Core::Rewired::IControllerTemplateElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawLabel", std::vector<std::string> { "Rewired.Demos.GamepadTemplateUI.ControllerUIElement", "Rewired.InputAction", "Rewired.ControllerMap", "Rewired.IControllerTemplate", "Rewired.IControllerTemplateElement" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)uiElement;
	params[1] = (intptr_t)action;
	params[2] = (intptr_t)controllerMap;
	params[3] = (intptr_t)template_;
	params[4] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick* Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::GetStick(int32_t elementId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStick", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick*)returnValue;
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::OnControllerConnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnControllerConnected", std::vector<std::string> { "Rewired.ControllerStatusChangedEventArgs" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::OnControllerDisconnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnControllerDisconnected", std::vector<std::string> { "Rewired.ControllerStatusChangedEventArgs" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
