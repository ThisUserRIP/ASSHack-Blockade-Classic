#include "System_Runtime_Remoting_InternalRemotingServices.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::InternalRemotingServices::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting", "InternalRemotingServices");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::InternalRemotingServices::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute* mscorlib::System::Runtime::Remoting::InternalRemotingServices::GetCachedSoapAttribute(mscorlib::System::Object* reflectionObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCachedSoapAttribute", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)reflectionObject;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute*)returnValue;
}
void mscorlib::System::Runtime::Remoting::InternalRemotingServices::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
