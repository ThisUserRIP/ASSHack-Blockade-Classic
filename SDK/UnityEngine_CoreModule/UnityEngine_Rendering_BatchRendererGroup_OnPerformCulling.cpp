#include "UnityEngine_Rendering_BatchRendererGroup_OnPerformCulling.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup::GetIl2CppClass(), "OnPerformCulling");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::_ctor(mscorlib::System::Object* object, intptr_t method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)object;
	params[1] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::Unity::Jobs::JobHandle UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::Invoke(UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, UnityEngine_CoreModule::UnityEngine::Rendering::BatchCullingContext cullingContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "UnityEngine.Rendering.BatchRendererGroup", "UnityEngine.Rendering.BatchCullingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rendererGroup;
	params[1] = (intptr_t)&cullingContext;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::Unity::Jobs::JobHandle ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Jobs::JobHandle));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::Unity::Jobs::JobHandle>(*(UnityEngine_CoreModule::Unity::Jobs::JobHandle*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::IAsyncResult* UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::BeginInvoke(UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, UnityEngine_CoreModule::UnityEngine::Rendering::BatchCullingContext cullingContext, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "UnityEngine.Rendering.BatchRendererGroup", "UnityEngine.Rendering.BatchCullingContext", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rendererGroup;
	params[1] = (intptr_t)&cullingContext;
	params[2] = (intptr_t)callback;
	params[3] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
UnityEngine_CoreModule::Unity::Jobs::JobHandle UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::EndInvoke(mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::Unity::Jobs::JobHandle ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Jobs::JobHandle));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::Unity::Jobs::JobHandle>(*(UnityEngine_CoreModule::Unity::Jobs::JobHandle*)il2cpp_object_unbox(returnValue));
}
