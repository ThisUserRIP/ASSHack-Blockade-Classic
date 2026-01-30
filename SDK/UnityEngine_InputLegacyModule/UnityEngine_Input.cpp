#include "UnityEngine_Input.h"

IL2CPP::Il2CppClass* UnityEngine_InputLegacyModule::UnityEngine::Input::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.InputLegacyModule.dll", "UnityEngine", "Input");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_InputLegacyModule::UnityEngine::Input::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetKeyInt(UnityEngine_CoreModule::UnityEngine::KeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyInt", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetKeyUpInt(UnityEngine_CoreModule::UnityEngine::KeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyUpInt", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetKeyDownInt(UnityEngine_CoreModule::UnityEngine::KeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyDownInt", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_InputLegacyModule::UnityEngine::Input::GetAxis(mscorlib::System::String* axisName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxis", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)axisName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_InputLegacyModule::UnityEngine::Input::GetAxisRaw(mscorlib::System::String* axisName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisRaw", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)axisName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetButton(mscorlib::System::String* buttonName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButton", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)buttonName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetButtonDown(mscorlib::System::String* buttonName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonDown", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)buttonName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetButtonUp(mscorlib::System::String* buttonName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonUp", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)buttonName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetMouseButton(int32_t button)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseButton", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&button;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetMouseButtonDown(int32_t button)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseButtonDown", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&button;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetMouseButtonUp(int32_t button)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseButtonUp", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&button;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<mscorlib::System::String*>* UnityEngine_InputLegacyModule::UnityEngine::Input::GetJoystickNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
UnityEngine_InputLegacyModule::UnityEngine::Touch UnityEngine_InputLegacyModule::UnityEngine::Input::GetTouch(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTouch", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_InputLegacyModule::UnityEngine::Touch ret;
		std::memset(&ret, 0, sizeof(UnityEngine_InputLegacyModule::UnityEngine::Touch));
		return ret;
	}
	return static_cast<UnityEngine_InputLegacyModule::UnityEngine::Touch>(*(UnityEngine_InputLegacyModule::UnityEngine::Touch*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetKey(UnityEngine_CoreModule::UnityEngine::KeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKey", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetKeyUp(UnityEngine_CoreModule::UnityEngine::KeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyUp", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::GetKeyDown(UnityEngine_CoreModule::UnityEngine::KeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyDown", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::get_simulateMouseWithTouches()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_simulateMouseWithTouches");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_InputLegacyModule::UnityEngine::Input::set_simulateMouseWithTouches(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_simulateMouseWithTouches", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::get_anyKey()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_anyKey");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_InputLegacyModule::UnityEngine::Input::get_mousePosition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mousePosition");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_InputLegacyModule::UnityEngine::Input::get_mouseScrollDelta()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mouseScrollDelta");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
UnityEngine_InputLegacyModule::UnityEngine::IMECompositionMode UnityEngine_InputLegacyModule::UnityEngine::Input::get_imeCompositionMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_imeCompositionMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_InputLegacyModule::UnityEngine::IMECompositionMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_InputLegacyModule::UnityEngine::IMECompositionMode));
		return ret;
	}
	return static_cast<UnityEngine_InputLegacyModule::UnityEngine::IMECompositionMode>(*(UnityEngine_InputLegacyModule::UnityEngine::IMECompositionMode*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_InputLegacyModule::UnityEngine::Input::set_imeCompositionMode(UnityEngine_InputLegacyModule::UnityEngine::IMECompositionMode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_imeCompositionMode", std::vector<std::string> { "UnityEngine.IMECompositionMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* UnityEngine_InputLegacyModule::UnityEngine::Input::get_compositionString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_compositionString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_InputLegacyModule::UnityEngine::Input::get_compositionCursorPos()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_compositionCursorPos");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_InputLegacyModule::UnityEngine::Input::set_compositionCursorPos(UnityEngine_CoreModule::UnityEngine::Vector2 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_compositionCursorPos", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::get_mousePresent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mousePresent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_InputLegacyModule::UnityEngine::Input::get_touchCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_touchCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::get_touchPressureSupported()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_touchPressureSupported");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::get_touchSupported()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_touchSupported");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_InputLegacyModule::UnityEngine::Input::get_multiTouchEnabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_multiTouchEnabled");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_InputLegacyModule::UnityEngine::Input::set_multiTouchEnabled(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_multiTouchEnabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_InputLegacyModule::UnityEngine::Input::get_acceleration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_acceleration");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<UnityEngine_InputLegacyModule::UnityEngine::Touch>* UnityEngine_InputLegacyModule::UnityEngine::Input::get_touches()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_touches");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_InputLegacyModule::UnityEngine::Touch>*)returnValue;
}
void UnityEngine_InputLegacyModule::UnityEngine::Input::GetTouch_Injected(int32_t index, UnityEngine_InputLegacyModule::UnityEngine::Touch& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTouch_Injected", std::vector<std::string> { "System.Int32", "UnityEngine.Touch&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputLegacyModule::UnityEngine::Input::get_mousePosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mousePosition_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputLegacyModule::UnityEngine::Input::get_mouseScrollDelta_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mouseScrollDelta_Injected", std::vector<std::string> { "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputLegacyModule::UnityEngine::Input::get_compositionCursorPos_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_compositionCursorPos_Injected", std::vector<std::string> { "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputLegacyModule::UnityEngine::Input::set_compositionCursorPos_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_compositionCursorPos_Injected", std::vector<std::string> { "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputLegacyModule::UnityEngine::Input::get_acceleration_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_acceleration_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
