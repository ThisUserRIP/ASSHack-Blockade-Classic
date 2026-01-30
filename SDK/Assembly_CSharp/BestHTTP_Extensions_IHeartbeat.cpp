#include "BestHTTP_Extensions_IHeartbeat.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Extensions::IHeartbeat::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Extensions", "IHeartbeat");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Extensions::IHeartbeat::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Extensions::IHeartbeat::OnHeartbeatUpdate(mscorlib::System::TimeSpan dif)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnHeartbeatUpdate", std::vector<std::string> { "System.TimeSpan" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dif;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
