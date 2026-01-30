#include "Rewired_UI_ControlMapper_ControlMapper_InputGrid.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper::GetIl2CppClass(), "InputGrid");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::AddMapCategory(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMapCategory", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::AddAction(int32_t mapCategoryId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAction", std::vector<std::string> { "System.Int32", "Rewired.InputAction", "Rewired.AxisRange" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)action;
	params[2] = (intptr_t)&axisRange;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::AddActionCategory(int32_t mapCategoryId, int32_t actionCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddActionCategory", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&actionCategoryId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::AddInputFieldSet(int32_t mapCategoryId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, UnityEngine_CoreModule::UnityEngine::GameObject* fieldSetContainer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddInputFieldSet", std::vector<std::string> { "System.Int32", "Rewired.InputAction", "Rewired.AxisRange", "Rewired.ControllerType", "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)action;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&controllerType;
	params[4] = (intptr_t)fieldSetContainer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::AddInputField(int32_t mapCategoryId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldIndex, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIInputField* inputField)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddInputField", std::vector<std::string> { "System.Int32", "Rewired.InputAction", "Rewired.AxisRange", "Rewired.ControllerType", "System.Int32", "Rewired.UI.ControlMapper.ControlMapper/GUIInputField" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)action;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&controllerType;
	params[4] = (intptr_t)&fieldIndex;
	params[5] = (intptr_t)inputField;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::AddGroup(UnityEngine_CoreModule::UnityEngine::GameObject* group)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddGroup", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)group;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::AddActionLabel(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUILabel* label)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddActionLabel", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.AxisRange", "Rewired.UI.ControlMapper.ControlMapper/GUILabel" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)label;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::AddActionCategoryLabel(int32_t mapCategoryId, int32_t actionCategoryId, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUILabel* label)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddActionCategoryLabel", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.UI.ControlMapper.ControlMapper/GUILabel" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&actionCategoryId;
	params[2] = (intptr_t)label;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::Contains(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Contains", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.AxisRange", "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&controllerType;
	params[4] = (intptr_t)&fieldIndex;
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
Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIInputField* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::GetGUIInputField(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGUIInputField", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.AxisRange", "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&controllerType;
	params[4] = (intptr_t)&fieldIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIInputField*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputActionSet>* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::GetActionSets(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActionSets", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputActionSet>*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::SetColumnHeight(int32_t mapCategoryId, float height)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetColumnHeight", std::vector<std::string> { "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&height;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::GetColumnHeight(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetColumnHeight", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::SetFieldsActive(int32_t mapCategoryId, bool state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFieldsActive", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::SetFieldLabel(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t index, mscorlib::System::String* label)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFieldLabel", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.AxisRange", "Rewired.ControllerType", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&controllerType;
	params[4] = (intptr_t)&index;
	params[5] = (intptr_t)label;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::PopulateField(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t index, int32_t actionElementMapId, mscorlib::System::String* label, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulateField", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.AxisRange", "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&controllerType;
	params[4] = (intptr_t)&controllerId;
	params[5] = (intptr_t)&index;
	params[6] = (intptr_t)&actionElementMapId;
	params[7] = (intptr_t)label;
	params[8] = (intptr_t)&invert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::SetFixedFieldData(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFixedFieldData", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.AxisRange", "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&controllerType;
	params[4] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::InitializeFields(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeFields", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::Show(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Show", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::HideAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HideAll");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::ClearLabels(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearLabels", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::ClearGroups()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearGroups");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGrid::ClearAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearAll");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
