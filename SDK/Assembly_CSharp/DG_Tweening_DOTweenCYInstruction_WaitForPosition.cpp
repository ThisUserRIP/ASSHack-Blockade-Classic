#include "DG_Tweening_DOTweenCYInstruction_WaitForPosition.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DG::Tweening::DOTweenCYInstruction_WaitForPosition::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::DG::Tweening::DOTweenCYInstruction::GetIl2CppClass(), "WaitForPosition");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DG::Tweening::DOTweenCYInstruction_WaitForPosition::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp::DG::Tweening::DOTweenCYInstruction_WaitForPosition::get_keepWaiting()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_keepWaiting");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DG::Tweening::DOTweenCYInstruction_WaitForPosition::_ctor(DOTween::DG::Tweening::Tween* tween, float position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "DG.Tweening.Tween", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tween;
	params[1] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
