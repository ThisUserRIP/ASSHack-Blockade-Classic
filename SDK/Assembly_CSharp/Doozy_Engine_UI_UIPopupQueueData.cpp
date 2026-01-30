#include "Doozy_Engine_UI_UIPopupQueueData.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::UIPopupQueueData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI", "UIPopupQueueData");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::UIPopupQueueData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::UI::UIPopupQueueData::_ctor(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup, bool instantAction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.UIPopup", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)popup;
	params[1] = (intptr_t)&instantAction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIPopupQueueData::_ctor(mscorlib::System::String* popupName, Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup, bool instantAction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "Doozy.Engine.UI.UIPopup", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)popupName;
	params[1] = (intptr_t)popup;
	params[2] = (intptr_t)&instantAction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::UI::UIPopup* Assembly_CSharp::Doozy::Engine::UI::UIPopupQueueData::Show()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Show");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::UIPopup*)returnValue;
}
