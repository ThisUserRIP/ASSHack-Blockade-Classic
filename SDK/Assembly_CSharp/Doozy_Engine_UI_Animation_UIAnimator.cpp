#include "Doozy_Engine_UI_Animation_UIAnimator.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI.Animation", "UIAnimator");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::MoveTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)&endValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::MoveLoopPositionA(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveLoopPositionA", std::vector<std::string> { "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::MoveLoopPositionB(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveLoopPositionB", std::vector<std::string> { "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::MoveLoopTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveLoopTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::MovePunchTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MovePunchTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::MoveStateTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveStateTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::RotateTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)&endValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::RotateLoopRotationA(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateLoopRotationA", std::vector<std::string> { "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::RotateLoopRotationB(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateLoopRotationB", std::vector<std::string> { "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::RotateLoopTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateLoopTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::RotatePunchTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotatePunchTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::RotateStateTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateStateTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::ScaleTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScaleTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)&endValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::ScaleLoopTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScaleLoopTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::ScalePunchTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScalePunchTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::ScaleStateTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScaleStateTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::FadeTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue, float endValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FadeTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)&endValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::FadeLoopTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FadeLoopTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
DOTween::DG::Tweening::Tween* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::FadeStateTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FadeStateTween", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::Move(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, bool instantAction, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Move", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Boolean", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)&endValue;
	params[4] = (intptr_t)&instantAction;
	params[5] = (intptr_t)onStartCallback;
	params[6] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::Rotate(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, bool instantAction, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rotate", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Boolean", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)&endValue;
	params[4] = (intptr_t)&instantAction;
	params[5] = (intptr_t)onStartCallback;
	params[6] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::Scale(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, bool instantAction, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Scale", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Boolean", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)&endValue;
	params[4] = (intptr_t)&instantAction;
	params[5] = (intptr_t)onStartCallback;
	params[6] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::Fade(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue, float endValue, bool instantAction, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Fade", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "System.Single", "System.Single", "System.Boolean", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)&endValue;
	params[4] = (intptr_t)&instantAction;
	params[5] = (intptr_t)onStartCallback;
	params[6] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::MoveLoop(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveLoop", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)onStartCallback;
	params[4] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::RotateLoop(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateLoop", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)onStartCallback;
	params[4] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::ScaleLoop(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScaleLoop", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)onStartCallback;
	params[3] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::FadeLoop(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FadeLoop", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)onStartCallback;
	params[3] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::MovePunch(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MovePunch", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)onStartCallback;
	params[4] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::RotatePunch(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotatePunch", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)onStartCallback;
	params[4] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::ScalePunch(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScalePunch", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)onStartCallback;
	params[4] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::MoveState(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveState", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)onStartCallback;
	params[4] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::RotateState(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateState", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)onStartCallback;
	params[4] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::ScaleState(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScaleState", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)onStartCallback;
	params[4] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::FadeState(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FadeState", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "System.Single", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	params[3] = (intptr_t)onStartCallback;
	params[4] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetAnimationMoveFrom(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnimationMoveFrom", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetAnimationMoveTo(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnimationMoveTo", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetAnimationRotateFrom(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnimationRotateFrom", std::vector<std::string> { "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetAnimationRotateTo(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnimationRotateTo", std::vector<std::string> { "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetAnimationScaleFrom(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnimationScaleFrom", std::vector<std::string> { "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetAnimationScaleTo(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnimationScaleTo", std::vector<std::string> { "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetAnimationFadeFrom(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnimationFadeFrom", std::vector<std::string> { "Doozy.Engine.UI.Animation.UIAnimation", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetAnimationFadeTo(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnimationFadeTo", std::vector<std::string> { "Doozy.Engine.UI.Animation.UIAnimation", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Doozy::Engine::UI::Animation::Direction Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::ReverseDirection(Assembly_CSharp::Doozy::Engine::UI::Animation::Direction direction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReverseDirection", std::vector<std::string> { "Doozy.Engine.UI.Animation.Direction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&direction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Doozy::Engine::UI::Animation::Direction ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Doozy::Engine::UI::Animation::Direction));
		return ret;
	}
	return static_cast<Assembly_CSharp::Doozy::Engine::UI::Animation::Direction>(*(Assembly_CSharp::Doozy::Engine::UI::Animation::Direction*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetToPositionByDirection(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetToPositionByDirection", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)animation;
	params[2] = (intptr_t)&startValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::GetTweenId(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType, Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationAction animationAction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTweenId", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.AnimationType", "Doozy.Engine.UI.Animation.AnimationAction" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&animationType;
	params[2] = (intptr_t)&animationAction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::ResetCanvasGroup(UnityEngine_CoreModule::UnityEngine::RectTransform* target, bool interactable, bool blocksRaycasts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetCanvasGroup", std::vector<std::string> { "UnityEngine.RectTransform", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&interactable;
	params[2] = (intptr_t)&blocksRaycasts;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::StopAnimations(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType, bool complete)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopAnimations", std::vector<std::string> { "UnityEngine.RectTransform", "Doozy.Engine.UI.Animation.AnimationType", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&animationType;
	params[2] = (intptr_t)&complete;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::SetEase(DOTween::DG::Tweening::Tween* tween, Assembly_CSharp::Doozy::Engine::UI::Animation::Move* move)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetEase", std::vector<std::string> { "DG.Tweening.Tween", "Doozy.Engine.UI.Animation.Move" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tween;
	params[1] = (intptr_t)move;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::SetEase(DOTween::DG::Tweening::Tween* tween, Assembly_CSharp::Doozy::Engine::UI::Animation::Rotate* rotate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetEase", std::vector<std::string> { "DG.Tweening.Tween", "Doozy.Engine.UI.Animation.Rotate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tween;
	params[1] = (intptr_t)rotate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::SetEase(DOTween::DG::Tweening::Tween* tween, Assembly_CSharp::Doozy::Engine::UI::Animation::Scale* scale)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetEase", std::vector<std::string> { "DG.Tweening.Tween", "Doozy.Engine.UI.Animation.Scale" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tween;
	params[1] = (intptr_t)scale;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::SetEase(DOTween::DG::Tweening::Tween* tween, Assembly_CSharp::Doozy::Engine::UI::Animation::Fade* fade)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetEase", std::vector<std::string> { "DG.Tweening.Tween", "Doozy.Engine.UI.Animation.Fade" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tween;
	params[1] = (intptr_t)fade;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::Settings::DoozySettings* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::get_Settings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Settings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Settings::DoozySettings*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimator::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
