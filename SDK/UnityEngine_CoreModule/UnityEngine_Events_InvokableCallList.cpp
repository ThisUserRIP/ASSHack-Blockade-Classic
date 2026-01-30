#include "UnityEngine_Events_InvokableCallList.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Events::InvokableCallList::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Events", "InvokableCallList");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Events::InvokableCallList::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Events::InvokableCallList::AddPersistentInvokableCall(UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* call)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddPersistentInvokableCall", std::vector<std::string> { "UnityEngine.Events.BaseInvokableCall" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)call;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::InvokableCallList::AddListener(UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* call)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddListener", std::vector<std::string> { "UnityEngine.Events.BaseInvokableCall" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)call;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::InvokableCallList::RemoveListener(mscorlib::System::Object* targetObj, mscorlib::System::Reflection::MethodInfo* method)
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
void UnityEngine_CoreModule::UnityEngine::Events::InvokableCallList::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Events::InvokableCallList::ClearPersistent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearPersistent");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall>* UnityEngine_CoreModule::UnityEngine::Events::InvokableCallList::PrepareInvoke()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareInvoke");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Events::InvokableCallList::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
