#include "Doozy_Engine_UI_UIDrawerArrow_Holder.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow::GetIl2CppClass(), "Holder");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder::get_ClosedLocalPosition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ClosedLocalPosition");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder::get_OpenedLocalPosition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OpenedLocalPosition");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder::_ctor(UnityEngine_CoreModule::UnityEngine::RectTransform* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.RectTransform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder::Reset(UnityEngine_CoreModule::UnityEngine::RectTransform* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "UnityEngine.RectTransform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
