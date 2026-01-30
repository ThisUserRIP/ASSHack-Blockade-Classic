#include "UnityEngine_UnityAPICompatibilityVersionAttribute.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::UnityAPICompatibilityVersionAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "UnityAPICompatibilityVersionAttribute");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::UnityAPICompatibilityVersionAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::UnityAPICompatibilityVersionAttribute::_ctor(mscorlib::System::String* version, IL2CPP::Array<mscorlib::System::String*>* configurationAssembliesHashes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)version;
	params[1] = (intptr_t)configurationAssembliesHashes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
