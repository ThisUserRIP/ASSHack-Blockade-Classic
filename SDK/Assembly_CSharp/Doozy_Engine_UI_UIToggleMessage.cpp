#include "Doozy_Engine_UI_UIToggleMessage.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::UIToggleMessage::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI", "UIToggleMessage");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::UIToggleMessage::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::UI::UIToggleMessage::_ctor(Assembly_CSharp::Doozy::Engine::UI::UIToggleState toggleState, Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.UIToggleState", "Doozy.Engine.UI.UIToggleBehaviorType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&toggleState;
	params[1] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIToggleMessage::_ctor(Assembly_CSharp::Doozy::Engine::UI::UIToggle* toggle, Assembly_CSharp::Doozy::Engine::UI::UIToggleState toggleState, Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.UIToggle", "Doozy.Engine.UI.UIToggleState", "Doozy.Engine.UI.UIToggleBehaviorType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)toggle;
	params[1] = (intptr_t)&toggleState;
	params[2] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
