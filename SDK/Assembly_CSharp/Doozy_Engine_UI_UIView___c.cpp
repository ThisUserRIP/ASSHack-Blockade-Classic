#include "Doozy_Engine_UI_UIView___c.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::UIView___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Doozy::Engine::UI::UIView::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::UIView___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::UI::UIView___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIView___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Doozy::Engine::UI::UIView___c::_RemoveNullChildUIButtons_b__103_0(Assembly_CSharp::Doozy::Engine::UI::UIButton* uiButton)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<RemoveNullChildUIButtons>b__103_0", std::vector<std::string> { "Doozy.Engine.UI.UIButton" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uiButton;
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
bool Assembly_CSharp::Doozy::Engine::UI::UIView___c::_RemoveNullChildUIButtons_b__103_1(Assembly_CSharp::Doozy::Engine::UI::UIButton* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<RemoveNullChildUIButtons>b__103_1", std::vector<std::string> { "Doozy.Engine.UI.UIButton" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
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
void Assembly_CSharp::Doozy::Engine::UI::UIView___c::__cctor_b__126_0(Assembly_CSharp::Doozy::Engine::UI::UIView* _p0_, Assembly_CSharp::Doozy::Engine::UI::UIViewBehaviorType _p1_)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<.cctor>b__126_0", std::vector<std::string> { "Doozy.Engine.UI.UIView", "Doozy.Engine.UI.UIViewBehaviorType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)_p0_;
	params[1] = (intptr_t)&_p1_;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
