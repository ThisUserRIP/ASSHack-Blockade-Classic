#include "UnityEngine_VFX_VFXOutputEventArgs.h"

IL2CPP::Il2CppClass* UnityEngine_VFXModule::UnityEngine::VFX::VFXOutputEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.VFXModule.dll", "UnityEngine.VFX", "VFXOutputEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_VFXModule::UnityEngine::VFX::VFXOutputEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXOutputEventArgs::_ctor(int32_t nameId, UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute* eventAttribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "UnityEngine.VFX.VFXEventAttribute" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameId;
	params[1] = (intptr_t)eventAttribute;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
