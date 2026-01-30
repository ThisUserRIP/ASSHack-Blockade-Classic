#include "UnityEngine_EventSystems_PointerInputModule_ButtonState.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_ButtonState::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::GetIl2CppClass(), "ButtonState");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_ButtonState::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_ButtonState::get_eventData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_eventData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*)returnValue;
}
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_ButtonState::set_eventData(UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_eventData", std::vector<std::string> { "UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_ButtonState::get_button()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_button");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton));
		return ret;
	}
	return static_cast<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton>(*(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_ButtonState::set_button(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_button", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData/InputButton" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_ButtonState::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
