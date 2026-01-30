#include "UnityEngine_Events_PersistentCall.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Events", "PersistentCall");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Object* UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::get_target()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_target");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Object*)returnValue;
}
mscorlib::System::String* UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::get_targetAssemblyTypeName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_targetAssemblyTypeName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::get_methodName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_methodName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Events::PersistentListenerMode UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::get_mode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Events::PersistentListenerMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Events::PersistentListenerMode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Events::PersistentListenerMode>(*(UnityEngine_CoreModule::UnityEngine::Events::PersistentListenerMode*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Events::ArgumentCache* UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::get_arguments()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_arguments");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Events::ArgumentCache*)returnValue;
}
bool UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::IsValid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::GetRuntimeCall(UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase* theEvent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRuntimeCall", std::vector<std::string> { "UnityEngine.Events.UnityEventBase" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)theEvent;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::GetObjectCall(UnityEngine_CoreModule::UnityEngine::Object* target, mscorlib::System::Reflection::MethodInfo* method, UnityEngine_CoreModule::UnityEngine::Events::ArgumentCache* arguments)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectCall", std::vector<std::string> { "UnityEngine.Object", "System.Reflection.MethodInfo", "UnityEngine.Events.ArgumentCache" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)method;
	params[2] = (intptr_t)arguments;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::OnBeforeSerialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnBeforeSerialize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::OnAfterDeserialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnAfterDeserialize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::PersistentCall::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
