#include "UnityEngine_Rendering_PackingAttribute.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::PackingAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "PackingAttribute");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::PackingAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::PackingAttribute::_ctor(IL2CPP::Array<mscorlib::System::String*>* displayNames, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize, int32_t offsetInSource, float minValue, float maxValue, bool isDirection, bool sRGBDisplay, bool checkIsNormalized)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String[]", "UnityEngine.Rendering.FieldPacking", "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)displayNames;
	params[1] = (intptr_t)&packingScheme;
	params[2] = (intptr_t)&bitSize;
	params[3] = (intptr_t)&offsetInSource;
	params[4] = (intptr_t)&minValue;
	params[5] = (intptr_t)&maxValue;
	params[6] = (intptr_t)&isDirection;
	params[7] = (intptr_t)&sRGBDisplay;
	params[8] = (intptr_t)&checkIsNormalized;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::PackingAttribute::_ctor(mscorlib::System::String* displayName, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize, int32_t offsetInSource, float minValue, float maxValue, bool isDirection, bool sRGBDisplay, bool checkIsNormalized)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.Rendering.FieldPacking", "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)displayName;
	params[1] = (intptr_t)&packingScheme;
	params[2] = (intptr_t)&bitSize;
	params[3] = (intptr_t)&offsetInSource;
	params[4] = (intptr_t)&minValue;
	params[5] = (intptr_t)&maxValue;
	params[6] = (intptr_t)&isDirection;
	params[7] = (intptr_t)&sRGBDisplay;
	params[8] = (intptr_t)&checkIsNormalized;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
