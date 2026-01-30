#include "DG_Tweening_TweenParams.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::TweenParams::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening", "TweenParams");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::TweenParams::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::TweenParams::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetAutoKill(bool autoKillOnCompletion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAutoKill", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&autoKillOnCompletion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetId(mscorlib::System::Object* id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetId", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetTarget(mscorlib::System::Object* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTarget", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetLoops(int32_t loops, mscorlib::System::Nullable_1<DOTween::DG::Tweening::LoopType> loopType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLoops", std::vector<std::string> { "System.Int32", "System.Nullable`1<DG.Tweening.LoopType>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&loops;
	params[1] = (intptr_t)&loopType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetEase(DOTween::DG::Tweening::Ease ease, mscorlib::System::Nullable_1<mscorlib::System::Single> overshootOrAmplitude, mscorlib::System::Nullable_1<mscorlib::System::Single> period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetEase", std::vector<std::string> { "DG.Tweening.Ease", "System.Nullable`1<System.Single>", "System.Nullable`1<System.Single>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ease;
	params[1] = (intptr_t)&overshootOrAmplitude;
	params[2] = (intptr_t)&period;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetEase(UnityEngine_CoreModule::UnityEngine::AnimationCurve* animCurve)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetEase", std::vector<std::string> { "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)animCurve;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetEase(DOTween::DG::Tweening::EaseFunction* customEase)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetEase", std::vector<std::string> { "DG.Tweening.EaseFunction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)customEase;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetRecyclable(bool recyclable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRecyclable", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&recyclable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetUpdate(bool isIndependentUpdate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUpdate", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isIndependentUpdate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetUpdate(DOTween::DG::Tweening::UpdateType updateType, bool isIndependentUpdate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUpdate", std::vector<std::string> { "DG.Tweening.UpdateType", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&updateType;
	params[1] = (intptr_t)&isIndependentUpdate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::OnStart(DOTween::DG::Tweening::TweenCallback* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStart", std::vector<std::string> { "DG.Tweening.TweenCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::OnPlay(DOTween::DG::Tweening::TweenCallback* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPlay", std::vector<std::string> { "DG.Tweening.TweenCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::OnRewind(DOTween::DG::Tweening::TweenCallback* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnRewind", std::vector<std::string> { "DG.Tweening.TweenCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::OnUpdate(DOTween::DG::Tweening::TweenCallback* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnUpdate", std::vector<std::string> { "DG.Tweening.TweenCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::OnStepComplete(DOTween::DG::Tweening::TweenCallback* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStepComplete", std::vector<std::string> { "DG.Tweening.TweenCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::OnComplete(DOTween::DG::Tweening::TweenCallback* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnComplete", std::vector<std::string> { "DG.Tweening.TweenCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::OnKill(DOTween::DG::Tweening::TweenCallback* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnKill", std::vector<std::string> { "DG.Tweening.TweenCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::OnWaypointChange(DOTween::DG::Tweening::TweenCallback_1<mscorlib::System::Int32>* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnWaypointChange", std::vector<std::string> { "DG.Tweening.TweenCallback`1<System.Int32>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetDelay(float delay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDelay", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&delay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetRelative(bool isRelative)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRelative", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isRelative;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
DOTween::DG::Tweening::TweenParams* DOTween::DG::Tweening::TweenParams::SetSpeedBased(bool isSpeedBased)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSpeedBased", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isSpeedBased;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::TweenParams*)returnValue;
}
void DOTween::DG::Tweening::TweenParams::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
