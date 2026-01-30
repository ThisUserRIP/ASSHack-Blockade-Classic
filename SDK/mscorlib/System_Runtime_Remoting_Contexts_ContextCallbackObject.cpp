#include "System_Runtime_Remoting_Contexts_ContextCallbackObject.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Contexts::ContextCallbackObject::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "ContextCallbackObject");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Contexts::ContextCallbackObject::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Contexts::ContextCallbackObject::DoCallBack(mscorlib::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoCallBack", std::vector<std::string> { "System.Runtime.Remoting.Contexts.CrossContextDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)deleg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Contexts::ContextCallbackObject::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
