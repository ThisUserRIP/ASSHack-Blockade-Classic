#include "Doozy_Engine_UI_UIToggle___c.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::UIToggle___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Doozy::Engine::UI::UIToggle::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::UIToggle___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::UI::UIToggle___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIToggle___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIToggle___c::__cctor_b__75_0(Assembly_CSharp::Doozy::Engine::UI::UIToggle* _p0_, Assembly_CSharp::Doozy::Engine::UI::UIToggleState _p1_, Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType _p2_)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<.cctor>b__75_0", std::vector<std::string> { "Doozy.Engine.UI.UIToggle", "Doozy.Engine.UI.UIToggleState", "Doozy.Engine.UI.UIToggleBehaviorType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)_p0_;
	params[1] = (intptr_t)&_p1_;
	params[2] = (intptr_t)&_p2_;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
