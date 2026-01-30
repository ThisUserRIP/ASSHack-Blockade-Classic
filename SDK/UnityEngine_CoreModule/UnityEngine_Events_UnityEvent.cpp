#include "UnityEngine_Events_UnityEvent.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Events::UnityEvent::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Events", "UnityEvent");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Events::UnityEvent::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEvent::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEvent::AddListener(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* call)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddListener", std::vector<std::string> { "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)call;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEvent::RemoveListener(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* call)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveListener", std::vector<std::string> { "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)call;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Reflection::MethodInfo* UnityEngine_CoreModule::UnityEngine::Events::UnityEvent::FindMethod_Impl(mscorlib::System::String* name, mscorlib::System::Type* targetObjType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindMethod_Impl", std::vector<std::string> { "System.String", "System.Type" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)targetObjType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodInfo*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* UnityEngine_CoreModule::UnityEngine::Events::UnityEvent::GetDelegate(mscorlib::System::Object* target, mscorlib::System::Reflection::MethodInfo* theFunction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDelegate", std::vector<std::string> { "System.Object", "System.Reflection.MethodInfo" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)theFunction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* UnityEngine_CoreModule::UnityEngine::Events::UnityEvent::GetDelegate(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDelegate", std::vector<std::string> { "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEvent::Invoke()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
