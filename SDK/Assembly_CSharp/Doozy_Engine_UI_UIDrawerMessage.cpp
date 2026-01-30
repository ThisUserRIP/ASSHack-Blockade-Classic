#include "Doozy_Engine_UI_UIDrawerMessage.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::UIDrawerMessage::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI", "UIDrawerMessage");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::UIDrawerMessage::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerMessage::_ctor(Assembly_CSharp::Doozy::Engine::UI::UIDrawer* drawer, Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehaviorType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.UIDrawer", "Doozy.Engine.UI.UIDrawerBehaviorType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)drawer;
	params[1] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
