#include "Doozy_Engine_UI_UIDrawerArrow.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI", "UIDrawerArrow");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder* Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::GetHolder(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHolder", std::vector<std::string> { "Doozy.Engine.Touchy.SimpleSwipe" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&closeDirection;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::ResetArrowClosedPosition(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetArrowClosedPosition", std::vector<std::string> { "Doozy.Engine.Touchy.SimpleSwipe" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&closeDirection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::ResetArrowClosedPosition(UnityEngine_CoreModule::UnityEngine::RectTransform* closed, Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetArrowClosedPosition", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.Touchy.SimpleSwipe" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)closed;
	params[1] = (intptr_t)&closeDirection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::ResetArrowOpenedPosition(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetArrowOpenedPosition", std::vector<std::string> { "Doozy.Engine.Touchy.SimpleSwipe" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&closeDirection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::ResetArrowOpenedPosition(UnityEngine_CoreModule::UnityEngine::RectTransform* opened, Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetArrowOpenedPosition", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.Touchy.SimpleSwipe" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)opened;
	params[1] = (intptr_t)&closeDirection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::ResetArrowRootPosition(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetArrowRootPosition", std::vector<std::string> { "Doozy.Engine.Touchy.SimpleSwipe" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&closeDirection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::ResetArrowRootPosition(UnityEngine_CoreModule::UnityEngine::RectTransform* root, Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetArrowRootPosition", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.Touchy.SimpleSwipe" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)root;
	params[1] = (intptr_t)&closeDirection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
