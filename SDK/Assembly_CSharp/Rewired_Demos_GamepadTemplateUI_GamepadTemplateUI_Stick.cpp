#include "Rewired_Demos_GamepadTemplateUI_GamepadTemplateUI_Stick.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI::GetIl2CppClass(), "Stick");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Vector2 Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick::get_position()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_position");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick::set_position(UnityEngine_CoreModule::UnityEngine::Vector2 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_position", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick::_ctor(UnityEngine_CoreModule::UnityEngine::RectTransform* transform, int32_t xAxisElementId, int32_t yAxisElementId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.RectTransform", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)&xAxisElementId;
	params[2] = (intptr_t)&yAxisElementId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick::ContainsElement(int32_t elementId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsElement", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick::SetAxisPosition(int32_t elementId, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAxisPosition", std::vector<std::string> { "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&elementId;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
