#include "DG_Tweening_Color2.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Color2::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening", "Color2");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Color2::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Color2::_ctor(UnityEngine_CoreModule::UnityEngine::Color ca, UnityEngine_CoreModule::UnityEngine::Color cb)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Color", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ca;
	params[1] = (intptr_t)&cb;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
DOTween::DG::Tweening::Color2 DOTween::DG::Tweening::Color2::op_Addition(DOTween::DG::Tweening::Color2 c1, DOTween::DG::Tweening::Color2 c2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "DG.Tweening.Color2", "DG.Tweening.Color2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&c1;
	params[1] = (intptr_t)&c2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		DOTween::DG::Tweening::Color2 ret;
		std::memset(&ret, 0, sizeof(DOTween::DG::Tweening::Color2));
		return ret;
	}
	return static_cast<DOTween::DG::Tweening::Color2>(*(DOTween::DG::Tweening::Color2*)il2cpp_object_unbox(returnValue));
}
DOTween::DG::Tweening::Color2 DOTween::DG::Tweening::operator+(DOTween::DG::Tweening::Color2 c1, DOTween::DG::Tweening::Color2 c2)
{
	return DOTween::DG::Tweening::Color2::op_Addition(c1, c2);
}
DOTween::DG::Tweening::Color2 DOTween::DG::Tweening::Color2::op_Subtraction(DOTween::DG::Tweening::Color2 c1, DOTween::DG::Tweening::Color2 c2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "DG.Tweening.Color2", "DG.Tweening.Color2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&c1;
	params[1] = (intptr_t)&c2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		DOTween::DG::Tweening::Color2 ret;
		std::memset(&ret, 0, sizeof(DOTween::DG::Tweening::Color2));
		return ret;
	}
	return static_cast<DOTween::DG::Tweening::Color2>(*(DOTween::DG::Tweening::Color2*)il2cpp_object_unbox(returnValue));
}
DOTween::DG::Tweening::Color2 DOTween::DG::Tweening::operator-(DOTween::DG::Tweening::Color2 c1, DOTween::DG::Tweening::Color2 c2)
{
	return DOTween::DG::Tweening::Color2::op_Subtraction(c1, c2);
}
DOTween::DG::Tweening::Color2 DOTween::DG::Tweening::Color2::op_Multiply(DOTween::DG::Tweening::Color2 c1, float f)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "DG.Tweening.Color2", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&c1;
	params[1] = (intptr_t)&f;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		DOTween::DG::Tweening::Color2 ret;
		std::memset(&ret, 0, sizeof(DOTween::DG::Tweening::Color2));
		return ret;
	}
	return static_cast<DOTween::DG::Tweening::Color2>(*(DOTween::DG::Tweening::Color2*)il2cpp_object_unbox(returnValue));
}
DOTween::DG::Tweening::Color2 DOTween::DG::Tweening::operator*(DOTween::DG::Tweening::Color2 c1, float f)
{
	return DOTween::DG::Tweening::Color2::op_Multiply(c1, f);
}
