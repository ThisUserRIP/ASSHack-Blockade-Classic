#include "UnityEngine_UI_StencilMaterial.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::StencilMaterial::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "StencilMaterial");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::StencilMaterial::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Material* UnityEngine_UI::UnityEngine::UI::StencilMaterial::Add(UnityEngine_CoreModule::UnityEngine::Material* baseMat, int32_t stencilID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "UnityEngine.Material", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)baseMat;
	params[1] = (intptr_t)&stencilID;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* UnityEngine_UI::UnityEngine::UI::StencilMaterial::Add(UnityEngine_CoreModule::UnityEngine::Material* baseMat, int32_t stencilID, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp operation, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine_CoreModule::UnityEngine::Rendering::ColorWriteMask colorWriteMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "UnityEngine.Material", "System.Int32", "UnityEngine.Rendering.StencilOp", "UnityEngine.Rendering.CompareFunction", "UnityEngine.Rendering.ColorWriteMask" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)baseMat;
	params[1] = (intptr_t)&stencilID;
	params[2] = (intptr_t)&operation;
	params[3] = (intptr_t)&compareFunction;
	params[4] = (intptr_t)&colorWriteMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* UnityEngine_UI::UnityEngine::UI::StencilMaterial::Add(UnityEngine_CoreModule::UnityEngine::Material* baseMat, int32_t stencilID, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp operation, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine_CoreModule::UnityEngine::Rendering::ColorWriteMask colorWriteMask, int32_t readMask, int32_t writeMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "UnityEngine.Material", "System.Int32", "UnityEngine.Rendering.StencilOp", "UnityEngine.Rendering.CompareFunction", "UnityEngine.Rendering.ColorWriteMask", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)baseMat;
	params[1] = (intptr_t)&stencilID;
	params[2] = (intptr_t)&operation;
	params[3] = (intptr_t)&compareFunction;
	params[4] = (intptr_t)&colorWriteMask;
	params[5] = (intptr_t)&readMask;
	params[6] = (intptr_t)&writeMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::StencilMaterial::Remove(UnityEngine_CoreModule::UnityEngine::Material* customMat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Remove", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)customMat;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::StencilMaterial::ClearAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearAll");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::StencilMaterial::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
