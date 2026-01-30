#include "UnityEngine_Rendering_SurfaceDataAttributes.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::SurfaceDataAttributes::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "SurfaceDataAttributes");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::SurfaceDataAttributes::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::SurfaceDataAttributes::_ctor(mscorlib::System::String* displayName, bool isDirection, bool sRGBDisplay, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::FieldPrecision precision, bool checkIsNormalized)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Boolean", "System.Boolean", "UnityEngine.Rendering.FieldPrecision", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)displayName;
	params[1] = (intptr_t)&isDirection;
	params[2] = (intptr_t)&sRGBDisplay;
	params[3] = (intptr_t)&precision;
	params[4] = (intptr_t)&checkIsNormalized;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::SurfaceDataAttributes::_ctor(IL2CPP::Array<mscorlib::System::String*>* displayNames, bool isDirection, bool sRGBDisplay, bool checkIsNormalized, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::FieldPrecision precision)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String[]", "System.Boolean", "System.Boolean", "System.Boolean", "UnityEngine.Rendering.FieldPrecision" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)displayNames;
	params[1] = (intptr_t)&isDirection;
	params[2] = (intptr_t)&sRGBDisplay;
	params[3] = (intptr_t)&checkIsNormalized;
	params[4] = (intptr_t)&precision;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
