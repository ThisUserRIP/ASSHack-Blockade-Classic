#include "Doozy_Engine_UI_UIPopupMessage.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::UIPopupMessage::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI", "UIPopupMessage");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::UIPopupMessage::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::UI::UIPopupMessage::_ctor(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.UIPopup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)popup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIPopupMessage::_ctor(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup, Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.UIPopup", "Doozy.Engine.UI.Animation.AnimationType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)popup;
	params[1] = (intptr_t)&animationType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
