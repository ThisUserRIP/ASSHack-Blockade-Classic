#include "Rewired_ElementAssignment.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ElementAssignment::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ElementAssignment");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ElementAssignment::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ElementAssignmentType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&elementAssignmentType;
	params[1] = (intptr_t)&elementIdentifierId;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&keyboardKey;
	params[4] = (intptr_t)&modifierKeyFlags;
	params[5] = (intptr_t)&actionId;
	params[6] = (intptr_t)&axisContribution;
	params[7] = (intptr_t)&invert;
	params[8] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ControllerType", "Rewired.ControllerElementType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&elementType;
	params[2] = (intptr_t)&elementIdentifierId;
	params[3] = (intptr_t)&axisRange;
	params[4] = (intptr_t)&keyboardKey;
	params[5] = (intptr_t)&modifierKeyFlags;
	params[6] = (intptr_t)&actionId;
	params[7] = (intptr_t)&axisContribution;
	params[8] = (intptr_t)&invert;
	params[9] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ElementAssignmentType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&elementAssignmentType;
	params[1] = (intptr_t)&elementIdentifierId;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&keyboardKey;
	params[4] = (intptr_t)&modifierKeyFlags;
	params[5] = (intptr_t)&actionId;
	params[6] = (intptr_t)&axisContribution;
	params[7] = (intptr_t)&invert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ControllerType", "Rewired.ControllerElementType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&elementType;
	params[2] = (intptr_t)&elementIdentifierId;
	params[3] = (intptr_t)&axisRange;
	params[4] = (intptr_t)&keyboardKey;
	params[5] = (intptr_t)&modifierKeyFlags;
	params[6] = (intptr_t)&actionId;
	params[7] = (intptr_t)&axisContribution;
	params[8] = (intptr_t)&invert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(int32_t elementIdentifierId, int32_t actionId, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&invert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(int32_t elementIdentifierId, int32_t actionId, bool invert, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&invert;
	params[3] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.AxisRange", "System.Int32", "Rewired.Pole" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&axisRange;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&axisContribution;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.AxisRange", "System.Int32", "Rewired.Pole", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&axisRange;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&axisContribution;
	params[4] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.Pole" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisContribution;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.Pole", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisContribution;
	params[3] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&keyboardKey;
	params[1] = (intptr_t)&modifierKeyFlags;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&axisContribution;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ElementAssignment::_ctor(UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&keyboardKey;
	params[1] = (intptr_t)&modifierKeyFlags;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&axisContribution;
	params[4] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::CompleteAssignment(Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteAssignment", std::vector<std::string> { "Rewired.ElementAssignmentType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&elementAssignmentType;
	params[1] = (intptr_t)&elementIdentifierId;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&keyboardKey;
	params[4] = (intptr_t)&modifierKeyFlags;
	params[5] = (intptr_t)&actionId;
	params[6] = (intptr_t)&axisContribution;
	params[7] = (intptr_t)&invert;
	params[8] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::CompleteAssignment(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteAssignment", std::vector<std::string> { "Rewired.ControllerType", "Rewired.ControllerElementType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&elementType;
	params[2] = (intptr_t)&elementIdentifierId;
	params[3] = (intptr_t)&axisRange;
	params[4] = (intptr_t)&keyboardKey;
	params[5] = (intptr_t)&modifierKeyFlags;
	params[6] = (intptr_t)&actionId;
	params[7] = (intptr_t)&axisContribution;
	params[8] = (intptr_t)&invert;
	params[9] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::CompleteAssignment(Rewired_Core::Rewired::ElementAssignmentType elementAssignmentType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteAssignment", std::vector<std::string> { "Rewired.ElementAssignmentType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&elementAssignmentType;
	params[1] = (intptr_t)&elementIdentifierId;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&keyboardKey;
	params[4] = (intptr_t)&modifierKeyFlags;
	params[5] = (intptr_t)&actionId;
	params[6] = (intptr_t)&axisContribution;
	params[7] = (intptr_t)&invert;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::CompleteAssignment(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteAssignment", std::vector<std::string> { "Rewired.ControllerType", "Rewired.ControllerElementType", "System.Int32", "Rewired.AxisRange", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&elementType;
	params[2] = (intptr_t)&elementIdentifierId;
	params[3] = (intptr_t)&axisRange;
	params[4] = (intptr_t)&keyboardKey;
	params[5] = (intptr_t)&modifierKeyFlags;
	params[6] = (intptr_t)&actionId;
	params[7] = (intptr_t)&axisContribution;
	params[8] = (intptr_t)&invert;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::FullAxisAssignment(int32_t elementIdentifierId, int32_t actionId, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FullAxisAssignment", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&invert;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::FullAxisAssignment(int32_t elementIdentifierId, int32_t actionId, bool invert, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FullAxisAssignment", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&invert;
	params[3] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::SplitAxisAssignment(int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SplitAxisAssignment", std::vector<std::string> { "System.Int32", "Rewired.AxisRange", "System.Int32", "Rewired.Pole" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&axisRange;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&axisContribution;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::SplitAxisAssignment(int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SplitAxisAssignment", std::vector<std::string> { "System.Int32", "Rewired.AxisRange", "System.Int32", "Rewired.Pole", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&axisRange;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&axisContribution;
	params[4] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::ButtonAssignment(int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonAssignment", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.Pole" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisContribution;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::ButtonAssignment(int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonAssignment", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.Pole", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisContribution;
	params[3] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::KeyboardKeyAssignment(UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KeyboardKeyAssignment", std::vector<std::string> { "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&keyboardKey;
	params[1] = (intptr_t)&modifierKeyFlags;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&axisContribution;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::ElementAssignment::KeyboardKeyAssignment(UnityEngine_CoreModule::UnityEngine::KeyCode keyboardKey, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KeyboardKeyAssignment", std::vector<std::string> { "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "System.Int32", "Rewired.Pole", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&keyboardKey;
	params[1] = (intptr_t)&modifierKeyFlags;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&axisContribution;
	params[4] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignmentConflictCheck Rewired_Core::Rewired::ElementAssignment::ToElementAssignmentConflictCheck()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToElementAssignmentConflictCheck");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignmentConflictCheck ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignmentConflictCheck));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignmentConflictCheck>(*(Rewired_Core::Rewired::ElementAssignmentConflictCheck*)il2cpp_object_unbox(returnValue));
}
