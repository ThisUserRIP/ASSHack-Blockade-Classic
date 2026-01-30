#include "DG_Tweening_ShortcutExtensions___c__DisplayClass15_0.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::ShortcutExtensions___c__DisplayClass15_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(DOTween::DG::Tweening::ShortcutExtensions::GetIl2CppClass(), "<>c__DisplayClass15_0");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::ShortcutExtensions___c__DisplayClass15_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::ShortcutExtensions___c__DisplayClass15_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
DOTween::DG::Tweening::Color2 DOTween::DG::Tweening::ShortcutExtensions___c__DisplayClass15_0::_DOColor_b__0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<DOColor>b__0");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		DOTween::DG::Tweening::Color2 ret;
		std::memset(&ret, 0, sizeof(DOTween::DG::Tweening::Color2));
		return ret;
	}
	return static_cast<DOTween::DG::Tweening::Color2>(*(DOTween::DG::Tweening::Color2*)il2cpp_object_unbox(returnValue));
}
void DOTween::DG::Tweening::ShortcutExtensions___c__DisplayClass15_0::_DOColor_b__1(DOTween::DG::Tweening::Color2 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<DOColor>b__1", std::vector<std::string> { "DG.Tweening.Color2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
