#include "Rewired_ElementAssignmentConflictCheck.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ElementAssignmentConflictCheck::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ElementAssignmentConflictCheck");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ElementAssignmentConflictCheck::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::ElementAssignmentType Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_elementAssignmentType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementAssignmentType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignmentType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignmentType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignmentType>(*(Rewired_Core::Rewired::ElementAssignmentType*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_elementAssignmentType(Rewired_Core::Rewired::ElementAssignmentType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_elementAssignmentType", std::vector<std::string> { "Rewired.ElementAssignmentType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_playerId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_playerId");
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_playerId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_playerId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerType Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_controllerType()
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_controllerType(Rewired_Core::Rewired::ControllerType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_controllerType", std::vector<std::string> { "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_controllerId()
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_controllerId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_controllerId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_controllerMapId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerMapId");
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_controllerMapId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_controllerMapId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_controllerMapCategoryId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerMapCategoryId");
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_controllerMapCategoryId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_controllerMapCategoryId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_elementMapId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementMapId");
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_elementMapId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_elementMapId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_elementIdentifierId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementIdentifierId");
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_elementIdentifierId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_elementIdentifierId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::AxisRange Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_axisRange()
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_axisRange(Rewired_Core::Rewired::AxisRange value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_axisRange", std::vector<std::string> { "Rewired.AxisRange" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::KeyCode Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_keyboardKey()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_keyboardKey");
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_keyboardKey(UnityEngine_CoreModule::UnityEngine::KeyCode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_keyboardKey", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ModifierKeyFlags Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_modifierKeyFlags()
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_modifierKeyFlags(Rewired_Core::Rewired::ModifierKeyFlags value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_modifierKeyFlags", std::vector<std::string> { "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_actionId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_actionId");
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_actionId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_actionId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Pole Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_axisContribution()
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_axisContribution(Rewired_Core::Rewired::Pole value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_axisContribution", std::vector<std::string> { "Rewired.Pole" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ElementAssignmentConflictCheck::get_invert()
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
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::set_invert(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_invert", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "Rewired.ElementAssignmentType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&elementAssignmentType;
	params[5] = (intptr_t)&elementIdentifierId;
	params[6] = (intptr_t)&axisRange;
	params[7] = (intptr_t)&keyboardKey;
	params[8] = (intptr_t)&modifierKeyFlags;
	params[9] = (intptr_t)&actionId;
	params[10] = (intptr_t)&axisContribution;
	params[11] = (intptr_t)&invert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "Rewired.ElementAssignmentType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[13];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&elementAssignmentType;
	params[5] = (intptr_t)&elementIdentifierId;
	params[6] = (intptr_t)&axisRange;
	params[7] = (intptr_t)&keyboardKey;
	params[8] = (intptr_t)&modifierKeyFlags;
	params[9] = (intptr_t)&actionId;
	params[10] = (intptr_t)&axisContribution;
	params[11] = (intptr_t)&invert;
	params[12] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "Rewired.ControllerElementType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&elementType;
	params[5] = (intptr_t)&elementIdentifierId;
	params[6] = (intptr_t)&axisRange;
	params[7] = (intptr_t)&keyboardKey;
	params[8] = (intptr_t)&modifierKeyFlags;
	params[9] = (intptr_t)&actionId;
	params[10] = (intptr_t)&axisContribution;
	params[11] = (intptr_t)&invert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "Rewired.ControllerElementType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[13];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&elementType;
	params[5] = (intptr_t)&elementIdentifierId;
	params[6] = (intptr_t)&axisRange;
	params[7] = (intptr_t)&keyboardKey;
	params[8] = (intptr_t)&modifierKeyFlags;
	params[9] = (intptr_t)&actionId;
	params[10] = (intptr_t)&axisContribution;
	params[11] = (intptr_t)&invert;
	params[12] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, int32_t actionId, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&elementIdentifierId;
	params[5] = (intptr_t)&actionId;
	params[6] = (intptr_t)&invert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, int32_t actionId, bool invert, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&elementIdentifierId;
	params[5] = (intptr_t)&actionId;
	params[6] = (intptr_t)&invert;
	params[7] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32", "Rewired.AxisRange", "System.Int32", "Rewired.Pole" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&elementIdentifierId;
	params[5] = (intptr_t)&axisRange;
	params[6] = (intptr_t)&actionId;
	params[7] = (intptr_t)&axisContribution;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32", "Rewired.AxisRange", "System.Int32", "Rewired.Pole", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&elementIdentifierId;
	params[5] = (intptr_t)&axisRange;
	params[6] = (intptr_t)&actionId;
	params[7] = (intptr_t)&axisContribution;
	params[8] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "Rewired.Pole" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&elementIdentifierId;
	params[5] = (intptr_t)&actionId;
	params[6] = (intptr_t)&axisContribution;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "Rewired.Pole", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&elementIdentifierId;
	params[5] = (intptr_t)&actionId;
	params[6] = (intptr_t)&axisContribution;
	params[7] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&keyboardKey;
	params[5] = (intptr_t)&modifierKeyFlags;
	params[6] = (intptr_t)&actionId;
	params[7] = (intptr_t)&axisContribution;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t controllerMapId, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "System.Int32", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)&controllerMapId;
	params[4] = (intptr_t)&keyboardKey;
	params[5] = (intptr_t)&modifierKeyFlags;
	params[6] = (intptr_t)&actionId;
	params[7] = (intptr_t)&axisContribution;
	params[8] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::_ctor(Rewired_Core::Rewired::ElementAssignmentConflictCheck source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignmentConflictCheck::ToElementAssignment()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToElementAssignment");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignmentConflictCheck::ToFullAxisAssignment()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToFullAxisAssignment");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignmentConflictCheck::ToSplitAxisAssignment()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToSplitAxisAssignment");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignmentConflictCheck::ToButtonAssignment()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToButtonAssignment");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignmentConflictCheck::ToKeyboardKeyAssignment()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToKeyboardKeyAssignment");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ElementAssignmentConflictCheck::MWrDjpdiPfRQYRMWwVXpiSgkYfIE()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MWrDjpdiPfRQYRMWwVXpiSgkYfIE");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
