#include "Doozy_Engine_Events_AnimatorEvent.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.Events", "AnimatorEvent");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent::_ctor(UnityEngine_AnimationModule::UnityEngine::Animator* animator, mscorlib::System::String* parameterName, bool boolValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Animator", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)parameterName;
	params[2] = (intptr_t)&boolValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent::_ctor(UnityEngine_AnimationModule::UnityEngine::Animator* animator, mscorlib::System::String* parameterName, int32_t intValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Animator", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)parameterName;
	params[2] = (intptr_t)&intValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent::_ctor(UnityEngine_AnimationModule::UnityEngine::Animator* animator, mscorlib::System::String* parameterName, float floatValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Animator", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)parameterName;
	params[2] = (intptr_t)&floatValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent::_ctor(UnityEngine_AnimationModule::UnityEngine::Animator* animator, mscorlib::System::String* parameterName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Animator", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)parameterName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent::Invoke(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Boolean>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "UnityEngine.Events.UnityAction`1<System.Boolean>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent::SetValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetValue");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent::InvokeCallback(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Boolean>* callback, bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeCallback", std::vector<std::string> { "UnityEngine.Events.UnityAction`1<System.Boolean>", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
