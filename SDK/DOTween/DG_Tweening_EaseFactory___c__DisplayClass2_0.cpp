#include "DG_Tweening_EaseFactory___c__DisplayClass2_0.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::EaseFactory___c__DisplayClass2_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(DOTween::DG::Tweening::EaseFactory::GetIl2CppClass(), "<>c__DisplayClass2_0");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::EaseFactory___c__DisplayClass2_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::EaseFactory___c__DisplayClass2_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
float DOTween::DG::Tweening::EaseFactory___c__DisplayClass2_0::_StopMotion_b__0(float time, float duration, float overshootOrAmplitude, float period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<StopMotion>b__0", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&time;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&overshootOrAmplitude;
	params[3] = (intptr_t)&period;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
