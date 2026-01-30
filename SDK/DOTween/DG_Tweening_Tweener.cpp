#include "DG_Tweening_Tweener.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Tweener::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening", "Tweener");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Tweener::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Tweener::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::Tweener::ChangeStartValue(mscorlib::System::Object* newStartValue, float newDuration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeStartValue", std::vector<std::string> { "System.Object", "System.Single" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)newStartValue;
	params[1] = (intptr_t)&newDuration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::Tweener::ChangeEndValue(mscorlib::System::Object* newEndValue, float newDuration, bool snapStartValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeEndValue", std::vector<std::string> { "System.Object", "System.Single", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)newEndValue;
	params[1] = (intptr_t)&newDuration;
	params[2] = (intptr_t)&snapStartValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::Tweener::ChangeEndValue(mscorlib::System::Object* newEndValue, bool snapStartValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeEndValue", std::vector<std::string> { "System.Object", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)newEndValue;
	params[1] = (intptr_t)&snapStartValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::Tweener::ChangeValues(mscorlib::System::Object* newStartValue, mscorlib::System::Object* newEndValue, float newDuration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeValues", std::vector<std::string> { "System.Object", "System.Object", "System.Single" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)newStartValue;
	params[1] = (intptr_t)newEndValue;
	params[2] = (intptr_t)&newDuration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::Tweener::SetFrom(bool relative)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFrom", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&relative;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
