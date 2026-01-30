#include "System_Runtime_Remoting_Proxies_ProxyAttribute.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Proxies::ProxyAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Proxies", "ProxyAttribute");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Proxies::ProxyAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::MarshalByRefObject* mscorlib::System::Runtime::Remoting::Proxies::ProxyAttribute::CreateInstance(mscorlib::System::Type* serverType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInstance", std::vector<std::string> { "System.Type" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serverType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::MarshalByRefObject*)returnValue;
}
mscorlib::System::Runtime::Remoting::Proxies::RealProxy* mscorlib::System::Runtime::Remoting::Proxies::ProxyAttribute::CreateProxy(mscorlib::System::Runtime::Remoting::ObjRef* objRef, mscorlib::System::Type* serverType, mscorlib::System::Object* serverObject, mscorlib::System::Runtime::Remoting::Contexts::Context* serverContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateProxy", std::vector<std::string> { "System.Runtime.Remoting.ObjRef", "System.Type", "System.Object", "System.Runtime.Remoting.Contexts.Context" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)objRef;
	params[1] = (intptr_t)serverType;
	params[2] = (intptr_t)serverObject;
	params[3] = (intptr_t)serverContext;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Proxies::RealProxy*)returnValue;
}
