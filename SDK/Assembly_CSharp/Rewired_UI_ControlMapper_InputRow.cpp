#include "Rewired_UI_ControlMapper_InputRow.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::InputRow::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "InputRow");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::InputRow::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo*>* Assembly_CSharp::Rewired::UI::ControlMapper::InputRow::get_buttons()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_buttons");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo*>*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputRow::set_buttons(IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo*>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_buttons", std::vector<std::string> { "Rewired.UI.ControlMapper.ButtonInfo[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputRow::Initialize(int32_t rowIndex, mscorlib::System::String* label, mscorlib::System::Action_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo>* inputFieldActivatedCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize", std::vector<std::string> { "System.Int32", "System.String", "System.Action`2<System.Int32,Rewired.UI.ControlMapper.ButtonInfo>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&rowIndex;
	params[1] = (intptr_t)label;
	params[2] = (intptr_t)inputFieldActivatedCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputRow::OnButtonActivated(Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo* buttonInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnButtonActivated", std::vector<std::string> { "Rewired.UI.ControlMapper.ButtonInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)buttonInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::InputRow::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
