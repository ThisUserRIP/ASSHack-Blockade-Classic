#include "UnityEngine_Rendering_ReloadAttribute.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ReloadAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "ReloadAttribute");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ReloadAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ReloadAttribute::_ctor(IL2CPP::Array<mscorlib::System::String*>* paths, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ReloadAttribute_Package package)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String[]", "UnityEngine.Rendering.ReloadAttribute/Package" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)paths;
	params[1] = (intptr_t)&package;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ReloadAttribute::_ctor(mscorlib::System::String* path, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ReloadAttribute_Package package)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.Rendering.ReloadAttribute/Package" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&package;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ReloadAttribute::_ctor(mscorlib::System::String* pathFormat, int32_t rangeMin, int32_t rangeMax, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ReloadAttribute_Package package)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "UnityEngine.Rendering.ReloadAttribute/Package" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)pathFormat;
	params[1] = (intptr_t)&rangeMin;
	params[2] = (intptr_t)&rangeMax;
	params[3] = (intptr_t)&package;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
