#include "Rewired_UI_ControlMapper_InputBehaviorWindow_InputBehaviorInfo.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::GetIl2CppClass(), "InputBehaviorInfo");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::InputBehavior* Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo::get_inputBehavior()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_inputBehavior");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet* Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo::get_controlSet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controlSet");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo::_ctor(Rewired_Core::Rewired::InputBehavior* inputBehavior, Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet* controlSet, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_PropertyType>* idToProperty)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.InputBehavior", "Rewired.UI.ControlMapper.UIControlSet", "System.Collections.Generic.Dictionary`2<System.Int32,Rewired.UI.ControlMapper.InputBehaviorWindow/PropertyType>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)inputBehavior;
	params[1] = (intptr_t)controlSet;
	params[2] = (intptr_t)idToProperty;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo::RestorePreviousData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RestorePreviousData");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo::RestoreDefaultData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RestoreDefaultData");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo::RestoreData(Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_PropertyType propertyType, int32_t controlId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RestoreData", std::vector<std::string> { "Rewired.UI.ControlMapper.InputBehaviorWindow/PropertyType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&propertyType;
	params[1] = (intptr_t)&controlId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo::RefreshControls()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RefreshControls");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
