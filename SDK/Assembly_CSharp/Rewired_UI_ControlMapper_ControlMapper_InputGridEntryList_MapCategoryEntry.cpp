#include "Rewired_UI_ControlMapper_ControlMapper_InputGridEntryList_MapCategoryEntry.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList::GetIl2CppClass(), "MapCategoryEntry");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry>* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::get_actionList()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_actionList");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry>*)returnValue;
}
Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_IndexedDictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionCategoryEntry>* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::get_actionCategoryList()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_actionCategoryList");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_IndexedDictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionCategoryEntry>*)returnValue;
}
float Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::get_columnHeight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_columnHeight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::set_columnHeight(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_columnHeight", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::GetActionEntry(int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActionEntry", std::vector<std::string> { "System.Int32", "Rewired.AxisRange" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&axisRange;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry*)returnValue;
}
int32_t Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::IndexOfActionEntry(int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOfActionEntry", std::vector<std::string> { "System.Int32", "Rewired.AxisRange" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&axisRange;
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
bool Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::ContainsActionEntry(int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsActionEntry", std::vector<std::string> { "System.Int32", "Rewired.AxisRange" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&axisRange;
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
Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::AddAction(Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAction", std::vector<std::string> { "Rewired.InputAction", "Rewired.AxisRange" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)action;
	params[1] = (intptr_t)&axisRange;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry*)returnValue;
}
Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionCategoryEntry* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::GetActionCategoryEntry(int32_t actionCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActionCategoryEntry", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionCategoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionCategoryEntry*)returnValue;
}
Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionCategoryEntry* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::AddActionCategory(int32_t actionCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddActionCategory", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionCategoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionCategoryEntry*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry::SetAllActive(bool state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAllActive", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
