#include "Rewired_Demos_SimpleCombinedKeyboardMouseRemapping.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Rewired.Demos", "SimpleCombinedKeyboardMouseRemapping");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Player* Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::get_player()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_player");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Player*)returnValue;
}
void Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::RedrawUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RedrawUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::ClearUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::InitializeUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::CreateUIRow(Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange actionRange, mscorlib::System::String* label)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateUIRow", std::vector<std::string> { "Rewired.InputAction", "Rewired.AxisRange", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)action;
	params[1] = (intptr_t)&actionRange;
	params[2] = (intptr_t)label;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::OnInputFieldClicked(int32_t index, int32_t actionElementMapToReplaceId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnInputFieldClicked", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&actionElementMapToReplaceId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::StartListeningDelayed(int32_t index, Rewired_Core::Rewired::ControllerMap* keyboardMap, Rewired_Core::Rewired::ControllerMap* mouseMap, int32_t actionElementMapToReplaceId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartListeningDelayed", std::vector<std::string> { "System.Int32", "Rewired.ControllerMap", "Rewired.ControllerMap", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)keyboardMap;
	params[2] = (intptr_t)mouseMap;
	params[3] = (intptr_t)&actionElementMapToReplaceId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::OnInputMapped(Rewired_Core::Rewired::InputMapper_InputMappedEventData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnInputMapped", std::vector<std::string> { "Rewired.InputMapper/InputMappedEventData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::OnStopped(Rewired_Core::Rewired::InputMapper_StoppedEventData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStopped", std::vector<std::string> { "Rewired.InputMapper/StoppedEventData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
