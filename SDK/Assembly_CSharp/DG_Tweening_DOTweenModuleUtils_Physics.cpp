#include "DG_Tweening_DOTweenModuleUtils_Physics.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DG::Tweening::DOTweenModuleUtils_Physics::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::DG::Tweening::DOTweenModuleUtils::GetIl2CppClass(), "Physics");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DG::Tweening::DOTweenModuleUtils_Physics::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::DG::Tweening::DOTweenModuleUtils_Physics::SetOrientationOnPath(DOTween::DG::Tweening::Plugins::Options::PathOptions options, DOTween::DG::Tweening::Tween* t, UnityEngine_CoreModule::UnityEngine::Quaternion newRot, UnityEngine_CoreModule::UnityEngine::Transform* trans)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetOrientationOnPath", std::vector<std::string> { "DG.Tweening.Plugins.Options.PathOptions", "DG.Tweening.Tween", "UnityEngine.Quaternion", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&options;
	params[1] = (intptr_t)t;
	params[2] = (intptr_t)&newRot;
	params[3] = (intptr_t)trans;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::DG::Tweening::DOTweenModuleUtils_Physics::HasRigidbody2D(UnityEngine_CoreModule::UnityEngine::Component* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasRigidbody2D", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Assembly_CSharp::DG::Tweening::DOTweenModuleUtils_Physics::HasRigidbody(UnityEngine_CoreModule::UnityEngine::Component* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasRigidbody", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* Assembly_CSharp::DG::Tweening::DOTweenModuleUtils_Physics::CreateDOTweenPathTween(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* target, bool tweenRigidbody, bool isLocal, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, DOTween::DG::Tweening::PathMode pathMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDOTweenPathTween", std::vector<std::string> { "UnityEngine.MonoBehaviour", "System.Boolean", "System.Boolean", "DG.Tweening.Plugins.Core.PathCore.Path", "System.Single", "DG.Tweening.PathMode" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&tweenRigidbody;
	params[2] = (intptr_t)&isLocal;
	params[3] = (intptr_t)path;
	params[4] = (intptr_t)&duration;
	params[5] = (intptr_t)&pathMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>*)returnValue;
}
