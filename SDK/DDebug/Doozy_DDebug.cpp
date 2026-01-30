#include "Doozy_DDebug.h"

IL2CPP::Il2CppClass* DDebug::Doozy::DDebug::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DDebug.dll", "Doozy", "DDebug");
	return il2cppclass;
}
mscorlib::System::Type* DDebug::Doozy::DDebug::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* DDebug::Doozy::DDebug::get_CurrentClass()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CurrentClass");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void DDebug::Doozy::DDebug::Log(mscorlib::System::Object* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Log", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DDebug::Doozy::DDebug::Log(mscorlib::System::Object* message, UnityEngine_CoreModule::UnityEngine::Object* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Log", std::vector<std::string> { "System.Object", "UnityEngine.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DDebug::Doozy::DDebug::LogError(mscorlib::System::Object* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogError", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DDebug::Doozy::DDebug::LogError(mscorlib::System::Object* message, UnityEngine_CoreModule::UnityEngine::Object* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogError", std::vector<std::string> { "System.Object", "UnityEngine.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
