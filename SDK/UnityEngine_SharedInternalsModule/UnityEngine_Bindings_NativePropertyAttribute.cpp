#include "UnityEngine_Bindings_NativePropertyAttribute.h"

IL2CPP::Il2CppClass* UnityEngine_SharedInternalsModule::UnityEngine::Bindings::NativePropertyAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.SharedInternalsModule.dll", "UnityEngine.Bindings", "NativePropertyAttribute");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_SharedInternalsModule::UnityEngine::Bindings::NativePropertyAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_SharedInternalsModule::UnityEngine::Bindings::NativePropertyAttribute::set_TargetType(UnityEngine_SharedInternalsModule::UnityEngine::Bindings::TargetType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_TargetType", std::vector<std::string> { "UnityEngine.Bindings.TargetType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SharedInternalsModule::UnityEngine::Bindings::NativePropertyAttribute::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SharedInternalsModule::UnityEngine::Bindings::NativePropertyAttribute::_ctor(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SharedInternalsModule::UnityEngine::Bindings::NativePropertyAttribute::_ctor(mscorlib::System::String* name, UnityEngine_SharedInternalsModule::UnityEngine::Bindings::TargetType targetType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.Bindings.TargetType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&targetType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SharedInternalsModule::UnityEngine::Bindings::NativePropertyAttribute::_ctor(mscorlib::System::String* name, bool isFree, UnityEngine_SharedInternalsModule::UnityEngine::Bindings::TargetType targetType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Boolean", "UnityEngine.Bindings.TargetType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&isFree;
	params[2] = (intptr_t)&targetType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
