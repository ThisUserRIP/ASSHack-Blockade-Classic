#include "Doozy_Engine_UI_Animation_UIAnimation.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI.Animation", "UIAnimation");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation::get_Enabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Enabled");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation::get_StartDelay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_StartDelay");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation::get_TotalDuration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TotalDuration");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation::_ctor(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.Animation.AnimationType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&animationType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation::_ctor(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType, Assembly_CSharp::Doozy::Engine::UI::Animation::Move* move, Assembly_CSharp::Doozy::Engine::UI::Animation::Rotate* rotate, Assembly_CSharp::Doozy::Engine::UI::Animation::Scale* scale, Assembly_CSharp::Doozy::Engine::UI::Animation::Fade* fade)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.Animation.AnimationType", "Doozy.Engine.UI.Animation.Move", "Doozy.Engine.UI.Animation.Rotate", "Doozy.Engine.UI.Animation.Scale", "Doozy.Engine.UI.Animation.Fade" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&animationType;
	params[1] = (intptr_t)move;
	params[2] = (intptr_t)rotate;
	params[3] = (intptr_t)scale;
	params[4] = (intptr_t)fade;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation::Reset(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "Doozy.Engine.UI.Animation.AnimationType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&animationType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation::Copy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Copy");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation*)returnValue;
}
