#include "DG_Tweening_Plugins_Core_PathCore_ControlPoint.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Plugins.Core.PathCore", "ControlPoint");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint::_ctor(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint::op_Addition(DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint cp, UnityEngine_CoreModule::UnityEngine::Vector3 v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "DG.Tweening.Plugins.Core.PathCore.ControlPoint", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&cp;
	params[1] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint ret;
		std::memset(&ret, 0, sizeof(DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint));
		return ret;
	}
	return static_cast<DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint>(*(DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint*)il2cpp_object_unbox(returnValue));
}
DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint DOTween::DG::Tweening::Plugins::Core::PathCore::operator+(DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint cp, UnityEngine_CoreModule::UnityEngine::Vector3 v)
{
	return DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint::op_Addition(cp, v);
}
mscorlib::System::String* DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
