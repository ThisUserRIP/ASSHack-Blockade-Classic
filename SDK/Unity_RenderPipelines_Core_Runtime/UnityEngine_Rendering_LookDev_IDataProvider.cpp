#include "UnityEngine_Rendering_LookDev_IDataProvider.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::IDataProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering.LookDev", "IDataProvider");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::IDataProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::IDataProvider::FirstInitScene(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FirstInitScene", std::vector<std::string> { "UnityEngine.Rendering.LookDev.StageRuntimeInterface" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::IDataProvider::UpdateSky(UnityEngine_CoreModule::UnityEngine::Camera* camera, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::Sky sky, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateSky", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Rendering.LookDev.Sky", "UnityEngine.Rendering.LookDev.StageRuntimeInterface" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)&sky;
	params[2] = (intptr_t)stage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::IDataProvider::get_supportedDebugModes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportedDebugModes");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::IDataProvider::UpdateDebugMode(int32_t debugIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateDebugMode", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&debugIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::IDataProvider::GetShadowMask(UnityEngine_CoreModule::UnityEngine::RenderTexture& output, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetShadowMask", std::vector<std::string> { "UnityEngine.RenderTexture&", "UnityEngine.Rendering.LookDev.StageRuntimeInterface" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&output;
	params[1] = (intptr_t)stage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::IDataProvider::OnBeginRendering(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnBeginRendering", std::vector<std::string> { "UnityEngine.Rendering.LookDev.StageRuntimeInterface" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::IDataProvider::OnEndRendering(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEndRendering", std::vector<std::string> { "UnityEngine.Rendering.LookDev.StageRuntimeInterface" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::IDataProvider::Cleanup(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* SRI)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cleanup", std::vector<std::string> { "UnityEngine.Rendering.LookDev.StageRuntimeInterface" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)SRI;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
