#include "DG_Tweening_Plugins_Core_PathCore_ABSPathDecoder.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Plugins.Core.PathCore", "ABSPathDecoder");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::FinalizePath(DOTween::DG::Tweening::Plugins::Core::PathCore::Path* p, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* wps, bool isClosedPath)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FinalizePath", std::vector<std::string> { "DG.Tweening.Plugins.Core.PathCore.Path", "UnityEngine.Vector3[]", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)wps;
	params[2] = (intptr_t)&isClosedPath;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 DOTween::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::GetPoint(float perc, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* wps, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* p, IL2CPP::Array<DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint>* controlPoints)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPoint", std::vector<std::string> { "System.Single", "UnityEngine.Vector3[]", "DG.Tweening.Plugins.Core.PathCore.Path", "DG.Tweening.Plugins.Core.PathCore.ControlPoint[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&perc;
	params[1] = (intptr_t)wps;
	params[2] = (intptr_t)p;
	params[3] = (intptr_t)controlPoints;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
void DOTween::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
