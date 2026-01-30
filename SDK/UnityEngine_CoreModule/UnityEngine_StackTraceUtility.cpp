#include "UnityEngine_StackTraceUtility.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::StackTraceUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "StackTraceUtility");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::StackTraceUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::StackTraceUtility::SetProjectFolder(mscorlib::System::String* folder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetProjectFolder", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)folder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* UnityEngine_CoreModule::UnityEngine::StackTraceUtility::ExtractStackTrace()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExtractStackTrace");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::StackTraceUtility::ExtractStringFromExceptionInternal(mscorlib::System::Object* exceptiono, mscorlib::System::String& message, mscorlib::System::String& stackTrace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExtractStringFromExceptionInternal", std::vector<std::string> { "System.Object", "System.String&", "System.String&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)exceptiono;
	params[1] = (intptr_t)&message;
	params[2] = (intptr_t)&stackTrace;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* UnityEngine_CoreModule::UnityEngine::StackTraceUtility::ExtractFormattedStackTrace(mscorlib::System::Diagnostics::StackTrace* stackTrace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExtractFormattedStackTrace", std::vector<std::string> { "System.Diagnostics.StackTrace" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stackTrace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::StackTraceUtility::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
