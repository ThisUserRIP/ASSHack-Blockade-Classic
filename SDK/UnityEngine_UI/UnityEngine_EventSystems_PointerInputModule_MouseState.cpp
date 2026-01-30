#include "UnityEngine_EventSystems_PointerInputModule_MouseState.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::GetIl2CppClass(), "MouseState");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState::AnyPressesThisFrame()
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
bool UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState::AnyReleasesThisFrame()
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
UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_ButtonState* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState::GetButtonState(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton button)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonState", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData/InputButton" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&button;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_ButtonState*)returnValue;
}
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState::SetButtonState(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton button, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState stateForMouseButton, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetButtonState", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData/InputButton", "UnityEngine.EventSystems.PointerEventData/FramePressState", "UnityEngine.EventSystems.PointerEventData" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&button;
	params[1] = (intptr_t)&stateForMouseButton;
	params[2] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
