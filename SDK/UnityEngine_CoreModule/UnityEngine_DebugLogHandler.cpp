#include "UnityEngine_DebugLogHandler.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::DebugLogHandler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "DebugLogHandler");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::DebugLogHandler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::DebugLogHandler::Internal_Log(UnityEngine_CoreModule::UnityEngine::LogType level, UnityEngine_CoreModule::UnityEngine::LogOption options, mscorlib::System::String* msg, UnityEngine_CoreModule::UnityEngine::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Log", std::vector<std::string> { "UnityEngine.LogType", "UnityEngine.LogOption", "System.String", "UnityEngine.Object" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&level;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)msg;
	params[3] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::DebugLogHandler::Internal_LogException(mscorlib::System::Exception* ex, UnityEngine_CoreModule::UnityEngine::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_LogException", std::vector<std::string> { "System.Exception", "UnityEngine.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)ex;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::DebugLogHandler::LogFormat(UnityEngine_CoreModule::UnityEngine::LogType logType, UnityEngine_CoreModule::UnityEngine::Object* context, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogFormat", std::vector<std::string> { "UnityEngine.LogType", "UnityEngine.Object", "System.String", "System.Object[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&logType;
	params[1] = (intptr_t)context;
	params[2] = (intptr_t)format;
	params[3] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::DebugLogHandler::LogException(mscorlib::System::Exception* exception, UnityEngine_CoreModule::UnityEngine::Object* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogException", std::vector<std::string> { "System.Exception", "UnityEngine.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)exception;
	params[1] = (intptr_t)context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::DebugLogHandler::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
