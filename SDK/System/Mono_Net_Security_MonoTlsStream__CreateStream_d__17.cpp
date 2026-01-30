#include "Mono_Net_Security_MonoTlsStream__CreateStream_d__17.h"

IL2CPP::Il2CppClass* System::Mono::Net::Security::MonoTlsStream__CreateStream_d__17::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::Mono::Net::Security::MonoTlsStream::GetIl2CppClass(), "<CreateStream>d__17");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::Security::MonoTlsStream__CreateStream_d__17::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Net::Security::MonoTlsStream__CreateStream_d__17::MoveNext()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveNext");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Net::Security::MonoTlsStream__CreateStream_d__17::SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetStateMachine", std::vector<std::string> { "System.Runtime.CompilerServices.IAsyncStateMachine" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stateMachine;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
