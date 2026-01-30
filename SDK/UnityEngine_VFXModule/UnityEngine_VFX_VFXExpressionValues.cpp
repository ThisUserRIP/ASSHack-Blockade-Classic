#include "UnityEngine_VFX_VFXExpressionValues.h"

IL2CPP::Il2CppClass* UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.VFXModule.dll", "UnityEngine.VFX", "VFXExpressionValues");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues* UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues::CreateExpressionValuesWrapper(intptr_t ptr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateExpressionValuesWrapper", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ptr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues*)returnValue;
}
