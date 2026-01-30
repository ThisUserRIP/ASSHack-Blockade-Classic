#include "UnityEngine_Rendering_GenerateHLSL.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GenerateHLSL::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "GenerateHLSL");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GenerateHLSL::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GenerateHLSL::_ctor(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::PackingRules rules, bool needAccessors, bool needSetters, bool needParamDebug, int32_t paramDefinesStart, bool omitStructDeclaration, bool containsPackedFields, bool generateCBuffer, int32_t constantRegister)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.PackingRules", "System.Boolean", "System.Boolean", "System.Boolean", "System.Int32", "System.Boolean", "System.Boolean", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&rules;
	params[1] = (intptr_t)&needAccessors;
	params[2] = (intptr_t)&needSetters;
	params[3] = (intptr_t)&needParamDebug;
	params[4] = (intptr_t)&paramDefinesStart;
	params[5] = (intptr_t)&omitStructDeclaration;
	params[6] = (intptr_t)&containsPackedFields;
	params[7] = (intptr_t)&generateCBuffer;
	params[8] = (intptr_t)&constantRegister;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
