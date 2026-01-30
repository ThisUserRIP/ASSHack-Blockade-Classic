#include "System_Runtime_Remoting_Messaging_ArgInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Messaging::ArgInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "ArgInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Messaging::ArgInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Messaging::ArgInfo::_ctor(mscorlib::System::Reflection::MethodBase* method, mscorlib::System::Runtime::Remoting::Messaging::ArgInfoType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Reflection.MethodBase", "System.Runtime.Remoting.Messaging.ArgInfoType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)method;
	params[1] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::Runtime::Remoting::Messaging::ArgInfo::GetInOutArgs(IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInOutArgs", std::vector<std::string> { "System.Object[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
