#include "DG_Tweening_DOTweenModuleUI___c__DisplayClass38_0.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::DG::Tweening::DOTweenModuleUI::GetIl2CppClass(), "<>c__DisplayClass38_0");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Color Assembly_CSharp::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0::_DOBlendableColor_b__0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<DOBlendableColor>b__0");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DG::Tweening::DOTweenModuleUI___c__DisplayClass38_0::_DOBlendableColor_b__1(UnityEngine_CoreModule::UnityEngine::Color x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<DOBlendableColor>b__1", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
