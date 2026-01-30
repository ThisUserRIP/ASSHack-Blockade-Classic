#include "DG_Tweening_DOTweenModulePhysics.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DG.Tweening", "DOTweenModulePhysics");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::DOMove(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOMove", std::vector<std::string> { "UnityEngine.Rigidbody", "UnityEngine.Vector3", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::DOMoveX(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, float endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOMoveX", std::vector<std::string> { "UnityEngine.Rigidbody", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::DOMoveY(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, float endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOMoveY", std::vector<std::string> { "UnityEngine.Rigidbody", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::DOMoveZ(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, float endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOMoveZ", std::vector<std::string> { "UnityEngine.Rigidbody", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::DORotate(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, DOTween::DG::Tweening::RotateMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DORotate", std::vector<std::string> { "UnityEngine.Rigidbody", "UnityEngine.Vector3", "System.Single", "DG.Tweening.RotateMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::DOLookAt(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, UnityEngine_CoreModule::UnityEngine::Vector3 towards, float duration, DOTween::DG::Tweening::AxisConstraint axisConstraint, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> up)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLookAt", std::vector<std::string> { "UnityEngine.Rigidbody", "UnityEngine.Vector3", "System.Single", "DG.Tweening.AxisConstraint", "System.Nullable`1<UnityEngine.Vector3>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&towards;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&axisConstraint;
	params[4] = (intptr_t)&up;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>*)returnValue;
}
DOTween::DG::Tweening::Sequence* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::DOJump(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOJump", std::vector<std::string> { "UnityEngine.Rigidbody", "UnityEngine.Vector3", "System.Single", "System.Int32", "System.Single", "System.Boolean" });
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
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::DOPath(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* path, float duration, DOTween::DG::Tweening::PathType pathType, DOTween::DG::Tweening::PathMode pathMode, int32_t resolution, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Color> gizmoColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPath", std::vector<std::string> { "UnityEngine.Rigidbody", "UnityEngine.Vector3[]", "System.Single", "DG.Tweening.PathType", "DG.Tweening.PathMode", "System.Int32", "System.Nullable`1<UnityEngine.Color>" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)path;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&pathType;
	params[4] = (intptr_t)&pathMode;
	params[5] = (intptr_t)&resolution;
	params[6] = (intptr_t)&gizmoColor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::DOLocalPath(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* path, float duration, DOTween::DG::Tweening::PathType pathType, DOTween::DG::Tweening::PathMode pathMode, int32_t resolution, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Color> gizmoColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLocalPath", std::vector<std::string> { "UnityEngine.Rigidbody", "UnityEngine.Vector3[]", "System.Single", "DG.Tweening.PathType", "DG.Tweening.PathMode", "System.Int32", "System.Nullable`1<UnityEngine.Color>" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)path;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&pathType;
	params[4] = (intptr_t)&pathMode;
	params[5] = (intptr_t)&resolution;
	params[6] = (intptr_t)&gizmoColor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::DOPath(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, DOTween::DG::Tweening::PathMode pathMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPath", std::vector<std::string> { "UnityEngine.Rigidbody", "DG.Tweening.Plugins.Core.PathCore.Path", "System.Single", "DG.Tweening.PathMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)path;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&pathMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* Assembly_CSharp::DG::Tweening::DOTweenModulePhysics::DOLocalPath(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, DOTween::DG::Tweening::PathMode pathMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLocalPath", std::vector<std::string> { "UnityEngine.Rigidbody", "DG.Tweening.Plugins.Core.PathCore.Path", "System.Single", "DG.Tweening.PathMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)path;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&pathMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>*)returnValue;
}
