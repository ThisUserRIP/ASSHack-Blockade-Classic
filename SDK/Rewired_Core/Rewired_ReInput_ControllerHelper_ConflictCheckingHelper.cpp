#include "Rewired_ReInput_ControllerHelper_ConflictCheckingHelper.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ReInput_ControllerHelper::GetIl2CppClass(), "ConflictCheckingHelper");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::get_Instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper*)returnValue;
}
void Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesAnyElementAssignmentConflict()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesAnyElementAssignmentConflict");
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesAnyElementAssignmentConflict(bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesAnyElementAssignmentConflict", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&skipDisabledMaps;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesAnyElementAssignmentConflict(bool skipDisabledMaps, bool forceCheckAllCategories)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesAnyElementAssignmentConflict", std::vector<std::string> { "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&skipDisabledMaps;
	params[1] = (intptr_t)&forceCheckAllCategories;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesAnyElementAssignmentConflict(bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesAnyElementAssignmentConflict", std::vector<std::string> { "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&skipDisabledMaps;
	params[1] = (intptr_t)&forceCheckAllCategories;
	params[2] = (intptr_t)&includeSystemPlayer;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesElementAssignmentConflict(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesElementAssignmentConflict(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesElementAssignmentConflict(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
	params[6] = (intptr_t)&forceCheckAllCategories;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesElementAssignmentConflict(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
	params[6] = (intptr_t)&forceCheckAllCategories;
	params[7] = (intptr_t)&includeSystemPlayer;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&conflictCheck;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)&forceCheckAllCategories;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)&forceCheckAllCategories;
	params[3] = (intptr_t)&includeSystemPlayer;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::qEyHSXqzxwdCRyakyiNJCstIWSe(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::JoystickMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "qEyHSXqzxwdCRyakyiNJCstIWSe", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.JoystickMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	params[6] = (intptr_t)&A_7;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::qEyHSXqzxwdCRyakyiNJCstIWSe(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "qEyHSXqzxwdCRyakyiNJCstIWSe", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::ZqAhaTmksXLWgedDXbBMFnZgkKwj(int32_t A_1, Rewired_Core::Rewired::KeyboardMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ZqAhaTmksXLWgedDXbBMFnZgkKwj", std::vector<std::string> { "System.Int32", "Rewired.KeyboardMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::ZqAhaTmksXLWgedDXbBMFnZgkKwj(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ZqAhaTmksXLWgedDXbBMFnZgkKwj", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::BLbMNHdPjlwyEskTHeLhwOeCbER(int32_t A_1, Rewired_Core::Rewired::MouseMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BLbMNHdPjlwyEskTHeLhwOeCbER", std::vector<std::string> { "System.Int32", "Rewired.MouseMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::BLbMNHdPjlwyEskTHeLhwOeCbER(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BLbMNHdPjlwyEskTHeLhwOeCbER", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::iIVvzHiACDGwogQigOXlDswBCERg(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::CustomControllerMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "iIVvzHiACDGwogQigOXlDswBCERg", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.CustomControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	params[6] = (intptr_t)&A_7;
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
bool Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::iIVvzHiACDGwogQigOXlDswBCERg(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "iIVvzHiACDGwogQigOXlDswBCERg", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::ElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::ElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::ElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
	params[6] = (intptr_t)&forceCheckAllCategories;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::ElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
	params[6] = (intptr_t)&forceCheckAllCategories;
	params[7] = (intptr_t)&includeSystemPlayer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&conflictCheck;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)&forceCheckAllCategories;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)&forceCheckAllCategories;
	params[3] = (intptr_t)&includeSystemPlayer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::nSGrxkxZZSIiBINsYzoAbPtsQSB(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::JoystickMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "nSGrxkxZZSIiBINsYzoAbPtsQSB", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.JoystickMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	params[6] = (intptr_t)&A_7;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::nSGrxkxZZSIiBINsYzoAbPtsQSB(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "nSGrxkxZZSIiBINsYzoAbPtsQSB", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::WOfOeMiJqmUpuJTtLERSZSwsWvI(int32_t A_1, Rewired_Core::Rewired::KeyboardMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WOfOeMiJqmUpuJTtLERSZSwsWvI", std::vector<std::string> { "System.Int32", "Rewired.KeyboardMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::WOfOeMiJqmUpuJTtLERSZSwsWvI(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WOfOeMiJqmUpuJTtLERSZSwsWvI", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::pAJiWZFJbvGQQMIfJIlhbIwxwjSo(int32_t A_1, Rewired_Core::Rewired::MouseMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pAJiWZFJbvGQQMIfJIlhbIwxwjSo", std::vector<std::string> { "System.Int32", "Rewired.MouseMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::pAJiWZFJbvGQQMIfJIlhbIwxwjSo(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pAJiWZFJbvGQQMIfJIlhbIwxwjSo", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::MDVLhVrsCjxtreNWPfWmEpMNIeau(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::CustomControllerMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MDVLhVrsCjxtreNWPfWmEpMNIeau", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.CustomControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	params[6] = (intptr_t)&A_7;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::MDVLhVrsCjxtreNWPfWmEpMNIeau(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MDVLhVrsCjxtreNWPfWmEpMNIeau", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::RemoveElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::RemoveElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::RemoveElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
	params[6] = (intptr_t)&forceCheckAllCategories;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::RemoveElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
	params[6] = (intptr_t)&forceCheckAllCategories;
	params[7] = (intptr_t)&includeSystemPlayer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&conflictCheck;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)&forceCheckAllCategories;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)&forceCheckAllCategories;
	params[3] = (intptr_t)&includeSystemPlayer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::APIkwHmAnRCGlKhQkaNRDYfIbvu(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::JoystickMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "APIkwHmAnRCGlKhQkaNRDYfIbvu", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.JoystickMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	params[6] = (intptr_t)&A_7;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::APIkwHmAnRCGlKhQkaNRDYfIbvu(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "APIkwHmAnRCGlKhQkaNRDYfIbvu", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::zJNbwqjMqfzrVlrMwFODPInPgDO(int32_t A_1, Rewired_Core::Rewired::KeyboardMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zJNbwqjMqfzrVlrMwFODPInPgDO", std::vector<std::string> { "System.Int32", "Rewired.KeyboardMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::zJNbwqjMqfzrVlrMwFODPInPgDO(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zJNbwqjMqfzrVlrMwFODPInPgDO", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::PLdBQHKbPXXAXnFhmDGurovkAaa(int32_t A_1, Rewired_Core::Rewired::MouseMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PLdBQHKbPXXAXnFhmDGurovkAaa", std::vector<std::string> { "System.Int32", "Rewired.MouseMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::PLdBQHKbPXXAXnFhmDGurovkAaa(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PLdBQHKbPXXAXnFhmDGurovkAaa", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::FDSiLOdcvCdLdXuCtMKcMJlkrEE(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::CustomControllerMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FDSiLOdcvCdLdXuCtMKcMJlkrEE", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.CustomControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	params[6] = (intptr_t)&A_7;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::FDSiLOdcvCdLdXuCtMKcMJlkrEE(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FDSiLOdcvCdLdXuCtMKcMJlkrEE", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DisableElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DisableElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DisableElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
	params[6] = (intptr_t)&forceCheckAllCategories;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DisableElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
	params[3] = (intptr_t)controllerMap;
	params[4] = (intptr_t)elementMap;
	params[5] = (intptr_t)&skipDisabledMaps;
	params[6] = (intptr_t)&forceCheckAllCategories;
	params[7] = (intptr_t)&includeSystemPlayer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&conflictCheck;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)&forceCheckAllCategories;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)&forceCheckAllCategories;
	params[3] = (intptr_t)&includeSystemPlayer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::cXJzyQrXoKDyVCAqQVlecrSuVNy(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::JoystickMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cXJzyQrXoKDyVCAqQVlecrSuVNy", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.JoystickMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	params[6] = (intptr_t)&A_7;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::cXJzyQrXoKDyVCAqQVlecrSuVNy(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cXJzyQrXoKDyVCAqQVlecrSuVNy", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::vMFhTnIyNfGOmmDkahhGxZweSET(int32_t A_1, Rewired_Core::Rewired::KeyboardMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vMFhTnIyNfGOmmDkahhGxZweSET", std::vector<std::string> { "System.Int32", "Rewired.KeyboardMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::vMFhTnIyNfGOmmDkahhGxZweSET(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vMFhTnIyNfGOmmDkahhGxZweSET", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::MKXDJFenlghsnWYfhfZmIdCFqogB(int32_t A_1, Rewired_Core::Rewired::MouseMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MKXDJFenlghsnWYfhfZmIdCFqogB", std::vector<std::string> { "System.Int32", "Rewired.MouseMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::MKXDJFenlghsnWYfhfZmIdCFqogB(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MKXDJFenlghsnWYfhfZmIdCFqogB", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::RrfkUYEPxXvkMOxTKaRdDcbAQTm(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::CustomControllerMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RrfkUYEPxXvkMOxTKaRdDcbAQTm", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.CustomControllerMap", "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	params[6] = (intptr_t)&A_7;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper::RrfkUYEPxXvkMOxTKaRdDcbAQTm(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RrfkUYEPxXvkMOxTKaRdDcbAQTm", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
