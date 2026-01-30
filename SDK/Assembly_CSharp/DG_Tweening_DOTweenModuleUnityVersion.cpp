#include "DG_Tweening_DOTweenModuleUnityVersion.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DG.Tweening", "DOTweenModuleUnityVersion");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
DOTween::DG::Tweening::Sequence* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::DOGradientColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Gradient* gradient, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOGradientColor", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Gradient", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)gradient;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
DOTween::DG::Tweening::Sequence* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::DOGradientColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Gradient* gradient, mscorlib::System::String* property, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOGradientColor", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Gradient", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)gradient;
	params[2] = (intptr_t)property;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::WaitForCompletion(DOTween::DG::Tweening::Tween* t, bool returnCustomYieldInstruction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitForCompletion", std::vector<std::string> { "DG.Tweening.Tween", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&returnCustomYieldInstruction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::WaitForRewind(DOTween::DG::Tweening::Tween* t, bool returnCustomYieldInstruction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitForRewind", std::vector<std::string> { "DG.Tweening.Tween", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&returnCustomYieldInstruction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::WaitForKill(DOTween::DG::Tweening::Tween* t, bool returnCustomYieldInstruction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitForKill", std::vector<std::string> { "DG.Tweening.Tween", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&returnCustomYieldInstruction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::WaitForElapsedLoops(DOTween::DG::Tweening::Tween* t, int32_t elapsedLoops, bool returnCustomYieldInstruction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitForElapsedLoops", std::vector<std::string> { "DG.Tweening.Tween", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&elapsedLoops;
	params[2] = (intptr_t)&returnCustomYieldInstruction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::WaitForPosition(DOTween::DG::Tweening::Tween* t, float position, bool returnCustomYieldInstruction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitForPosition", std::vector<std::string> { "DG.Tweening.Tween", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&position;
	params[2] = (intptr_t)&returnCustomYieldInstruction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::WaitForStart(DOTween::DG::Tweening::Tween* t, bool returnCustomYieldInstruction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitForStart", std::vector<std::string> { "DG.Tweening.Tween", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&returnCustomYieldInstruction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::DOOffset(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, int32_t propertyID, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOOffset", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Vector2", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&propertyID;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* Assembly_CSharp::DG::Tweening::DOTweenModuleUnityVersion::DOTiling(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, int32_t propertyID, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOTiling", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Vector2", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&propertyID;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
