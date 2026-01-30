#include "UnityEngine_Experimental_Rendering_Universal_ShadowCasterGroup2DManager.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Experimental.Rendering.Universal", "ShadowCasterGroup2DManager");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D>* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::get_shadowCasterGroups()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_shadowCasterGroups");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D>*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::AddShadowCasterGroupToList(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D* shadowCaster, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D>* list)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddShadowCasterGroupToList", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.ShadowCasterGroup2D", "System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.Universal.ShadowCasterGroup2D>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)shadowCaster;
	params[1] = (intptr_t)list;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::RemoveShadowCasterGroupFromList(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D* shadowCaster, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D>* list)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveShadowCasterGroupFromList", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.ShadowCasterGroup2D", "System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.Universal.ShadowCasterGroup2D>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)shadowCaster;
	params[1] = (intptr_t)list;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::CompositeShadowCaster2D* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::FindTopMostCompositeShadowCaster(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCaster2D* shadowCaster)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindTopMostCompositeShadowCaster", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.ShadowCaster2D" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)shadowCaster;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::CompositeShadowCaster2D*)returnValue;
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::AddToShadowCasterGroup(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCaster2D* shadowCaster, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D& shadowCasterGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddToShadowCasterGroup", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.ShadowCaster2D", "UnityEngine.Experimental.Rendering.Universal.ShadowCasterGroup2D&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)shadowCaster;
	params[1] = (intptr_t)&shadowCasterGroup;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::RemoveFromShadowCasterGroup(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCaster2D* shadowCaster, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D* shadowCasterGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveFromShadowCasterGroup", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.ShadowCaster2D", "UnityEngine.Experimental.Rendering.Universal.ShadowCasterGroup2D" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)shadowCaster;
	params[1] = (intptr_t)shadowCasterGroup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::AddGroup(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D* group)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddGroup", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.ShadowCasterGroup2D" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)group;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::RemoveGroup(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D* group)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveGroup", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.ShadowCasterGroup2D" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)group;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2DManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
