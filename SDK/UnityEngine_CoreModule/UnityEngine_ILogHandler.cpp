#include "UnityEngine_ILogHandler.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::ILogHandler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "ILogHandler");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::ILogHandler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::ILogHandler::LogFormat(UnityEngine_CoreModule::UnityEngine::LogType logType, UnityEngine_CoreModule::UnityEngine::Object* context, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args)
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
void UnityEngine_CoreModule::UnityEngine::ILogHandler::LogException(mscorlib::System::Exception* exception, UnityEngine_CoreModule::UnityEngine::Object* context)
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
