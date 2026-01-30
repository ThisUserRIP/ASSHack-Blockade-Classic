#include "Doozy_Engine_Touchy_TouchHelper.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Touchy::TouchHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.Touchy", "TouchHelper");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Touchy::TouchHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_InputLegacyModule::UnityEngine::Touch>* Assembly_CSharp::Doozy::Engine::Touchy::TouchHelper::GetTouches()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTouches");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_InputLegacyModule::UnityEngine::Touch>*)returnValue;
}
