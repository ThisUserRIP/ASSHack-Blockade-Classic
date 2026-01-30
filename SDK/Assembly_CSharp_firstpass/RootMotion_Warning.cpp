#include "RootMotion_Warning.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::Warning::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion", "Warning");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::Warning::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::Warning::Log(mscorlib::System::String* message, Assembly_CSharp_firstpass::RootMotion::Warning_Logger* logger, bool logInEditMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Log", std::vector<std::string> { "System.String", "RootMotion.Warning/Logger", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)logger;
	params[2] = (intptr_t)&logInEditMode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::Warning::Log(mscorlib::System::String* message, UnityEngine_CoreModule::UnityEngine::Transform* context, bool logInEditMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Log", std::vector<std::string> { "System.String", "UnityEngine.Transform", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)context;
	params[2] = (intptr_t)&logInEditMode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
