#include "UnityEngine_AssetFileNameExtensionAttribute.h"

IL2CPP::Il2CppClass* UnityEngine_SharedInternalsModule::UnityEngine::AssetFileNameExtensionAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.SharedInternalsModule.dll", "UnityEngine", "AssetFileNameExtensionAttribute");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_SharedInternalsModule::UnityEngine::AssetFileNameExtensionAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_SharedInternalsModule::UnityEngine::AssetFileNameExtensionAttribute::_ctor(mscorlib::System::String* preferredExtension, IL2CPP::Array<mscorlib::System::String*>* otherExtensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)preferredExtension;
	params[1] = (intptr_t)otherExtensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
