#include "System_Threading_OSSpecificSynchronizationContext_InvocationContext.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::OSSpecificSynchronizationContext_InvocationContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Threading::OSSpecificSynchronizationContext::GetIl2CppClass(), "InvocationContext");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::OSSpecificSynchronizationContext_InvocationContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::OSSpecificSynchronizationContext_InvocationContext::_ctor(mscorlib::System::Threading::SendOrPostCallback* d, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.SendOrPostCallback", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)d;
	params[1] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::OSSpecificSynchronizationContext_InvocationContext::Invoke()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
