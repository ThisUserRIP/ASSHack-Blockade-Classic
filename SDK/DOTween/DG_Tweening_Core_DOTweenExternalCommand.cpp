#include "DG_Tweening_Core_DOTweenExternalCommand.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Core::DOTweenExternalCommand::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Core", "DOTweenExternalCommand");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Core::DOTweenExternalCommand::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Core::DOTweenExternalCommand::add_SetOrientationOnPath(mscorlib::System::Action_4<DOTween::DG::Tweening::Plugins::Options::PathOptions, DOTween::DG::Tweening::Tween, UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Transform>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_SetOrientationOnPath", std::vector<std::string> { "System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::DOTweenExternalCommand::remove_SetOrientationOnPath(mscorlib::System::Action_4<DOTween::DG::Tweening::Plugins::Options::PathOptions, DOTween::DG::Tweening::Tween, UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Transform>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_SetOrientationOnPath", std::vector<std::string> { "System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::DOTweenExternalCommand::Dispatch_SetOrientationOnPath(DOTween::DG::Tweening::Plugins::Options::PathOptions options, DOTween::DG::Tweening::Tween* t, UnityEngine_CoreModule::UnityEngine::Quaternion newRot, UnityEngine_CoreModule::UnityEngine::Transform* trans)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispatch_SetOrientationOnPath", std::vector<std::string> { "DG.Tweening.Plugins.Options.PathOptions", "DG.Tweening.Tween", "UnityEngine.Quaternion", "UnityEngine.Transform" });
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
