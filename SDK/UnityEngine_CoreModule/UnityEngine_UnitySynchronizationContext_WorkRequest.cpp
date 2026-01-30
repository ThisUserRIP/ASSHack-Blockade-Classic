#include "UnityEngine_UnitySynchronizationContext_WorkRequest.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::UnitySynchronizationContext_WorkRequest::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_CoreModule::UnityEngine::UnitySynchronizationContext::GetIl2CppClass(), "WorkRequest");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::UnitySynchronizationContext_WorkRequest::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::UnitySynchronizationContext_WorkRequest::_ctor(mscorlib::System::Threading::SendOrPostCallback* callback, mscorlib::System::Object* state, mscorlib::System::Threading::ManualResetEvent* waitHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.SendOrPostCallback", "System.Object", "System.Threading.ManualResetEvent" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)state;
	params[2] = (intptr_t)waitHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::UnitySynchronizationContext_WorkRequest::Invoke()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
