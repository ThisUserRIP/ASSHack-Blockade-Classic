#include "DG_Tweening_IDOTweenInit.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::IDOTweenInit::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening", "IDOTweenInit");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::IDOTweenInit::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
DOTween::DG::Tweening::IDOTweenInit* DOTween::DG::Tweening::IDOTweenInit::SetCapacity(int32_t tweenersCapacity, int32_t sequencesCapacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCapacity", std::vector<std::string> { "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&tweenersCapacity;
	params[1] = (intptr_t)&sequencesCapacity;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::IDOTweenInit*)returnValue;
}
