#include "UnityEngine_Bindings_IgnoreAttribute.h"

IL2CPP::Il2CppClass* UnityEngine_SharedInternalsModule::UnityEngine::Bindings::IgnoreAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.SharedInternalsModule.dll", "UnityEngine.Bindings", "IgnoreAttribute");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_SharedInternalsModule::UnityEngine::Bindings::IgnoreAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_SharedInternalsModule::UnityEngine::Bindings::IgnoreAttribute::set_DoesNotContributeToSize(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DoesNotContributeToSize", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SharedInternalsModule::UnityEngine::Bindings::IgnoreAttribute::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
