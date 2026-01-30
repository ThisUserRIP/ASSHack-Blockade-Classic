#include "DG_Tweening_Core_TweenLink.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Core::TweenLink::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Core", "TweenLink");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Core::TweenLink::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Core::TweenLink::_ctor(UnityEngine_CoreModule::UnityEngine::GameObject* target, DOTween::DG::Tweening::LinkBehaviour behaviour)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.GameObject", "DG.Tweening.LinkBehaviour" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&behaviour;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
