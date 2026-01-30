#include "DG_Tweening_Core_SequenceCallback.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Core::SequenceCallback::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Core", "SequenceCallback");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Core::SequenceCallback::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Core::SequenceCallback::_ctor(float sequencedPosition, DOTween::DG::Tweening::TweenCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Single", "DG.Tweening.TweenCallback" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sequencedPosition;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
