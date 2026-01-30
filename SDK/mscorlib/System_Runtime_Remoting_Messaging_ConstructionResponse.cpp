#include "System_Runtime_Remoting_Messaging_ConstructionResponse.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Messaging::ConstructionResponse::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "ConstructionResponse");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Messaging::ConstructionResponse::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Messaging::ConstructionResponse::_ctor(mscorlib::System::Object* resultObject, mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.Runtime.Remoting.Messaging.LogicalCallContext", "System.Runtime.Remoting.Messaging.IMethodCallMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)resultObject;
	params[1] = (intptr_t)callCtx;
	params[2] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Messaging::ConstructionResponse::_ctor(mscorlib::System::Exception* e, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Exception", "System.Runtime.Remoting.Messaging.IMethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)e;
	params[1] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Messaging::ConstructionResponse::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IDictionary* mscorlib::System::Runtime::Remoting::Messaging::ConstructionResponse::get_Properties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Properties");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IDictionary*)returnValue;
}
