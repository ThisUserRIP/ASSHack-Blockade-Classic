#include "System_Runtime_Remoting_ClientIdentity.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::ClientIdentity::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting", "ClientIdentity");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::ClientIdentity::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::ClientIdentity::_ctor(mscorlib::System::String* objectUri, mscorlib::System::Runtime::Remoting::ObjRef* objRef)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Runtime.Remoting.ObjRef" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)objectUri;
	params[1] = (intptr_t)objRef;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::MarshalByRefObject* mscorlib::System::Runtime::Remoting::ClientIdentity::get_ClientProxy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ClientProxy");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::MarshalByRefObject*)returnValue;
}
void mscorlib::System::Runtime::Remoting::ClientIdentity::set_ClientProxy(mscorlib::System::MarshalByRefObject* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ClientProxy", std::vector<std::string> { "System.MarshalByRefObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::ObjRef* mscorlib::System::Runtime::Remoting::ClientIdentity::CreateObjRef(mscorlib::System::Type* requestedType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateObjRef", std::vector<std::string> { "System.Type" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)requestedType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::ObjRef*)returnValue;
}
mscorlib::System::String* mscorlib::System::Runtime::Remoting::ClientIdentity::get_TargetUri()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TargetUri");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
