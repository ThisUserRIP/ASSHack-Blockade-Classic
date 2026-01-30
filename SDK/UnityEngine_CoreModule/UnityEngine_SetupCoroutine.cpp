#include "UnityEngine_SetupCoroutine.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::SetupCoroutine::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "SetupCoroutine");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::SetupCoroutine::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::SetupCoroutine::InvokeMoveNext(mscorlib::System::Collections::IEnumerator* enumerator, intptr_t returnValueAddress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeMoveNext", std::vector<std::string> { "System.Collections.IEnumerator", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)enumerator;
	params[1] = (intptr_t)&returnValueAddress;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* UnityEngine_CoreModule::UnityEngine::SetupCoroutine::InvokeMember(mscorlib::System::Object* behaviour, mscorlib::System::String* name, mscorlib::System::Object* variable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeMember", std::vector<std::string> { "System.Object", "System.String", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)behaviour;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)variable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
