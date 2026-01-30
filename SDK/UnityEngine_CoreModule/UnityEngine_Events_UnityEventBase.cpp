#include "UnityEngine_Events_UnityEventBase.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Events", "UnityEventBase");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Reflection::MethodInfo* UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::FindMethod_Impl(mscorlib::System::String* name, mscorlib::System::Type* targetObjType)
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
UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::GetDelegate(mscorlib::System::Object* target, mscorlib::System::Reflection::MethodInfo* theFunction)
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
mscorlib::System::Reflection::MethodInfo* UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::FindMethod(UnityEngine_CoreModule::UnityEngine::Events::PersistentCall* call)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindMethod", std::vector<std::string> { "UnityEngine.Events.PersistentCall" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)call;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodInfo*)returnValue;
}
mscorlib::System::Reflection::MethodInfo* UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::FindMethod(mscorlib::System::String* name, mscorlib::System::Type* listenerType, UnityEngine_CoreModule::UnityEngine::Events::PersistentListenerMode mode, mscorlib::System::Type* argumentType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindMethod", std::vector<std::string> { "System.String", "System.Type", "UnityEngine.Events.PersistentListenerMode", "System.Type" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)listenerType;
	params[2] = (intptr_t)&mode;
	params[3] = (intptr_t)argumentType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodInfo*)returnValue;
}
int32_t UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::GetPersistentEventCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPersistentEventCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::DirtyPersistentCalls()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DirtyPersistentCalls");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::RebuildPersistentCallsIfNeeded()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RebuildPersistentCallsIfNeeded");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::AddCall(UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* call)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCall", std::vector<std::string> { "UnityEngine.Events.BaseInvokableCall" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)call;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::RemoveListener(mscorlib::System::Object* targetObj, mscorlib::System::Reflection::MethodInfo* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveListener", std::vector<std::string> { "System.Object", "System.Reflection.MethodInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)targetObj;
	params[1] = (intptr_t)method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::RemoveAllListeners()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveAllListeners");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall>* UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::PrepareInvoke()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareInvoke");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall>*)returnValue;
}
mscorlib::System::String* UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Reflection::MethodInfo* UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase::GetValidMethodInfo(mscorlib::System::Type* objectType, mscorlib::System::String* functionName, IL2CPP::Array<mscorlib::System::Type*>* argumentTypes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValidMethodInfo", std::vector<std::string> { "System.Type", "System.String", "System.Type[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)functionName;
	params[2] = (intptr_t)argumentTypes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodInfo*)returnValue;
}
