#include "Rewired_Integration_UnityUI_RewiredPointerInputModule_MouseState.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetIl2CppClass(), "MouseState");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::AnyPressesThisFrame()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AnyPressesThisFrame");
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
bool Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::AnyReleasesThisFrame()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AnyReleasesThisFrame");
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
Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::GetButtonState(int32_t button)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonState", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&button;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*)returnValue;
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::SetButtonState(int32_t button, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState stateForMouseButton, Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetButtonState", std::vector<std::string> { "System.Int32", "UnityEngine.EventSystems.PointerEventData/FramePressState", "Rewired.Integration.UnityUI.PlayerPointerEventData" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&button;
	params[1] = (intptr_t)&stateForMouseButton;
	params[2] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
