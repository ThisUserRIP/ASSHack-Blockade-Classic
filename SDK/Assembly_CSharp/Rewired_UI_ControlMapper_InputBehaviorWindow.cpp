#include "Rewired_UI_ControlMapper_InputBehaviorWindow.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "InputBehaviorWindow");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::Initialize(int32_t id, mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* isFocusedCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize", std::vector<std::string> { "System.Int32", "System.Func`2<System.Int32,System.Boolean>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)isFocusedCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::SetData(int32_t playerId, IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputBehaviorSettings*>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetData", std::vector<std::string> { "System.Int32", "Rewired.UI.ControlMapper.ControlMapper/InputBehaviorSettings[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::SetButtonCallback(Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_ButtonIdentifier buttonIdentifier, mscorlib::System::Action_1<mscorlib::System::Int32>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetButtonCallback", std::vector<std::string> { "Rewired.UI.ControlMapper.InputBehaviorWindow/ButtonIdentifier", "System.Action`1<System.Int32>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&buttonIdentifier;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::Cancel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cancel");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::OnDone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDone");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::OnCancel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCancel");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::OnRestoreDefault()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnRestoreDefault");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::JoystickAxisSensitivityValueChanged(int32_t inputBehaviorId, int32_t controlId, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JoystickAxisSensitivityValueChanged", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&inputBehaviorId;
	params[1] = (intptr_t)&controlId;
	params[2] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::MouseXYAxisSensitivityValueChanged(int32_t inputBehaviorId, int32_t controlId, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MouseXYAxisSensitivityValueChanged", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&inputBehaviorId;
	params[1] = (intptr_t)&controlId;
	params[2] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::JoystickAxisSensitivityCanceled(int32_t inputBehaviorId, int32_t controlId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JoystickAxisSensitivityCanceled", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&inputBehaviorId;
	params[1] = (intptr_t)&controlId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::MouseXYAxisSensitivityCanceled(int32_t inputBehaviorId, int32_t controlId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MouseXYAxisSensitivityCanceled", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&inputBehaviorId;
	params[1] = (intptr_t)&controlId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::TakeInputFocus()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TakeInputFocus");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet* Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::CreateControlSet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateControlSet");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet*)returnValue;
}
Assembly_CSharp::Rewired::UI::ControlMapper::UISliderControl* Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::CreateSlider(Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet* set, int32_t inputBehaviorId, mscorlib::System::String* defaultTitle, mscorlib::System::String* overrideTitle, UnityEngine_CoreModule::UnityEngine::Sprite* icon, float minValue, float maxValue, mscorlib::System::Action_3<mscorlib::System::Int32, mscorlib::System::Int32, mscorlib::System::Single>* valueChangedCallback, mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Int32>* cancelCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSlider", std::vector<std::string> { "Rewired.UI.ControlMapper.UIControlSet", "System.Int32", "System.String", "System.String", "UnityEngine.Sprite", "System.Single", "System.Single", "System.Action`3<System.Int32,System.Int32,System.Single>", "System.Action`2<System.Int32,System.Int32>" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)set;
	params[1] = (intptr_t)&inputBehaviorId;
	params[2] = (intptr_t)defaultTitle;
	params[3] = (intptr_t)overrideTitle;
	params[4] = (intptr_t)icon;
	params[5] = (intptr_t)&minValue;
	params[6] = (intptr_t)&maxValue;
	params[7] = (intptr_t)valueChangedCallback;
	params[8] = (intptr_t)cancelCallback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::UISliderControl*)returnValue;
}
Rewired_Core::Rewired::InputBehavior* Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::GetInputBehavior(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInputBehavior", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo* Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::GetInputBehaviorInfo(int32_t inputBehaviorId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInputBehaviorInfo", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&inputBehaviorId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
