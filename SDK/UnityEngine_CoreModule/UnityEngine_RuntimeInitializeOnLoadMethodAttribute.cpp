#include "UnityEngine_RuntimeInitializeOnLoadMethodAttribute.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "RuntimeInitializeOnLoadMethodAttribute");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::_ctor(UnityEngine_CoreModule::UnityEngine::RuntimeInitializeLoadType loadType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.RuntimeInitializeLoadType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&loadType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::set_loadType(UnityEngine_CoreModule::UnityEngine::RuntimeInitializeLoadType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_loadType", std::vector<std::string> { "UnityEngine.RuntimeInitializeLoadType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
