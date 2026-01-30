#include "BestHTTP_PlatformSupport_Threading_ThreadedRunner.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::PlatformSupport::Threading::ThreadedRunner::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.PlatformSupport.Threading", "ThreadedRunner");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::PlatformSupport::Threading::ThreadedRunner::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::PlatformSupport::Threading::ThreadedRunner::RunShortLiving(mscorlib::System::Action* job)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RunShortLiving", std::vector<std::string> { "System.Action" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)job;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::PlatformSupport::Threading::ThreadedRunner::RunLongLiving(mscorlib::System::Action* job)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RunLongLiving", std::vector<std::string> { "System.Action" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)job;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
