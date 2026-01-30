#include "Rewired_ElementAssignmentInfo.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ElementAssignmentInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ElementAssignmentInfo");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ElementAssignmentInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Player* Rewired_Core::Rewired::ElementAssignmentInfo::get_player()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_player");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Player*)returnValue;
}
Rewired_Core::Rewired::InputAction* Rewired_Core::Rewired::ElementAssignmentInfo::get_action()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_action");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputAction*)returnValue;
}
Rewired_Core::Rewired::Controller* Rewired_Core::Rewired::ElementAssignmentInfo::get_controller()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controller");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller*)returnValue;
}
Rewired_Core::Rewired::ControllerType Rewired_Core::Rewired::ElementAssignmentInfo::get_controllerType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerType>(*(Rewired_Core::Rewired::ControllerType*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ElementAssignmentInfo::get_controllerId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ElementAssignmentInfo::get_controllerMap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerMap");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::ElementAssignmentInfo::get_elementIdentifier()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementIdentifier");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ElementAssignmentInfo::get_elementMap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementMap");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ControllerElementType Rewired_Core::Rewired::ElementAssignmentInfo::get_elementType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerElementType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerElementType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerElementType>(*(Rewired_Core::Rewired::ControllerElementType*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Pole Rewired_Core::Rewired::ElementAssignmentInfo::get_axisContribution()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_axisContribution");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Pole ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Pole));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Pole>(*(Rewired_Core::Rewired::Pole*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::AxisRange Rewired_Core::Rewired::ElementAssignmentInfo::get_axisRange()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_axisRange");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisRange ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisRange));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisRange>(*(Rewired_Core::Rewired::AxisRange*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::ElementAssignmentInfo::get_invert()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_invert");
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
UnityEngine_CoreModule::UnityEngine::KeyCode Rewired_Core::Rewired::ElementAssignmentInfo::get_keyCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_keyCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::KeyCode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::KeyCode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::KeyCode>(*(UnityEngine_CoreModule::UnityEngine::KeyCode*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ModifierKeyFlags Rewired_Core::Rewired::ElementAssignmentInfo::get_modifierKeyFlags()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_modifierKeyFlags");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ModifierKeyFlags ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ModifierKeyFlags));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ModifierKeyFlags>(*(Rewired_Core::Rewired::ModifierKeyFlags*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Rewired_Core::Rewired::ElementAssignmentInfo::get_elementDisplayName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementDisplayName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::ElementAssignmentInfo::_ctor(Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ElementAssignment assignment)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ControllerMap", "Rewired.ElementAssignment" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controllerMap;
	params[1] = (intptr_t)&assignment;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
