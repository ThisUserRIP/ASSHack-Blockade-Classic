#include "UnityEngine_Rendering_VolumeManager.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "VolumeManager");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::get_instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::get_stack()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_stack");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::set_stack(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_stack", std::vector<std::string> { "UnityEngine.Rendering.VolumeStack" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::get_baseComponentTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_baseComponentTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::set_baseComponentTypes(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_baseComponentTypes", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<System.Type>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<mscorlib::System::Type*>* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::get_baseComponentTypeArray()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_baseComponentTypeArray");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Type*>*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::set_baseComponentTypeArray(IL2CPP::Array<mscorlib::System::Type*>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_baseComponentTypeArray", std::vector<std::string> { "System.Type[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::CreateStack()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateStack");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::DestroyStack(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* stack)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DestroyStack", std::vector<std::string> { "UnityEngine.Rendering.VolumeStack" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stack;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::ReloadBaseTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReloadBaseTypes");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::Register(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume* volume, int32_t layer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Register", std::vector<std::string> { "UnityEngine.Rendering.Volume", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)volume;
	params[1] = (intptr_t)&layer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::Unregister(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume* volume, int32_t layer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Unregister", std::vector<std::string> { "UnityEngine.Rendering.Volume", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)volume;
	params[1] = (intptr_t)&layer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::SetLayerDirty(int32_t layer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLayerDirty", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&layer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::UpdateVolumeLayer(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume* volume, int32_t prevLayer, int32_t newLayer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateVolumeLayer", std::vector<std::string> { "UnityEngine.Rendering.Volume", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)volume;
	params[1] = (intptr_t)&prevLayer;
	params[2] = (intptr_t)&newLayer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::OverrideData(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* stack, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent>* components, float interpFactor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverrideData", std::vector<std::string> { "UnityEngine.Rendering.VolumeStack", "System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)stack;
	params[1] = (intptr_t)components;
	params[2] = (intptr_t)&interpFactor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::ReplaceData(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* stack, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent>* components)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceData", std::vector<std::string> { "UnityEngine.Rendering.VolumeStack", "System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)stack;
	params[1] = (intptr_t)components;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::CheckBaseTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckBaseTypes");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::CheckStack(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* stack)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckStack", std::vector<std::string> { "UnityEngine.Rendering.VolumeStack" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stack;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::Update(UnityEngine_CoreModule::UnityEngine::Transform* trigger, UnityEngine_CoreModule::UnityEngine::LayerMask layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)trigger;
	params[1] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::Update(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* stack, UnityEngine_CoreModule::UnityEngine::Transform* trigger, UnityEngine_CoreModule::UnityEngine::LayerMask layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update", std::vector<std::string> { "UnityEngine.Rendering.VolumeStack", "UnityEngine.Transform", "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)stack;
	params[1] = (intptr_t)trigger;
	params[2] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume*>* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::GetVolumes(UnityEngine_CoreModule::UnityEngine::LayerMask layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVolumes", std::vector<std::string> { "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume*>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume>* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::GrabVolumes(UnityEngine_CoreModule::UnityEngine::LayerMask mask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GrabVolumes", std::vector<std::string> { "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume>*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::SortByPriority(mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume>* volumes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortByPriority", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)volumes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::IsVolumeRenderedByCamera(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume* volume, UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsVolumeRenderedByCamera", std::vector<std::string> { "UnityEngine.Rendering.Volume", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)volume;
	params[1] = (intptr_t)camera;
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
