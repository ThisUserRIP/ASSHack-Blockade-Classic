#include "DG_Tweening_Plugins_Options_Vector3ArrayOptions.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Plugins.Options", "Vector3ArrayOptions");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
