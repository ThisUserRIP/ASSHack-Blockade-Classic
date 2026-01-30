#include "DG_Tweening_Core_Extensions.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Core::Extensions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Core", "Extensions");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Core::Extensions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
