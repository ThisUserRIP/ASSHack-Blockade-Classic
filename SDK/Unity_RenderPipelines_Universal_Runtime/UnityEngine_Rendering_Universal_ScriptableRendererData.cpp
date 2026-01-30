#include "UnityEngine_Rendering_Universal_ScriptableRendererData.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal", "ScriptableRendererData");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData::get_isInvalidated()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isInvalidated");
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData::set_isInvalidated(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_isInvalidated", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData::Create()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererFeature>* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData::get_rendererFeatures()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rendererFeatures");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererFeature>*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData::SetDirty()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDirty");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData::InternalCreateRenderer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalCreateRenderer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData::OnValidate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnValidate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
