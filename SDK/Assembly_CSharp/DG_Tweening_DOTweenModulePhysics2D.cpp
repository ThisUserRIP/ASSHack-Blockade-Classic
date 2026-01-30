#include "DG_Tweening_DOTweenModulePhysics2D.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics2D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DG.Tweening", "DOTweenModulePhysics2D");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics2D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics2D::DOMove(UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOMove", std::vector<std::string> { "UnityEngine.Rigidbody2D", "UnityEngine.Vector2", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics2D::DOMoveX(UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target, float endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOMoveX", std::vector<std::string> { "UnityEngine.Rigidbody2D", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics2D::DOMoveY(UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target, float endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOMoveY", std::vector<std::string> { "UnityEngine.Rigidbody2D", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics2D::DORotate(UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DORotate", std::vector<std::string> { "UnityEngine.Rigidbody2D", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Sequence* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics2D::DOJump(UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOJump", std::vector<std::string> { "UnityEngine.Rigidbody2D", "UnityEngine.Vector2", "System.Single", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&jumpPower;
	params[3] = (intptr_t)&numJumps;
	params[4] = (intptr_t)&duration;
	params[5] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
