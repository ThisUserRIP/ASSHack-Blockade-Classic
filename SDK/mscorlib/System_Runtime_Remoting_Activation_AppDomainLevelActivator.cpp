#include "System_Runtime_Remoting_Activation_AppDomainLevelActivator.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Activation::AppDomainLevelActivator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Activation", "AppDomainLevelActivator");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Activation::AppDomainLevelActivator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Activation::AppDomainLevelActivator::_ctor(mscorlib::System::String* activationUrl, mscorlib::System::Runtime::Remoting::Activation::IActivator* next)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Runtime.Remoting.Activation.IActivator" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)activationUrl;
	params[1] = (intptr_t)next;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::Activation::IActivator* mscorlib::System::Runtime::Remoting::Activation::AppDomainLevelActivator::get_NextActivator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NextActivator");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Activation::IActivator*)returnValue;
}
mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage* mscorlib::System::Runtime::Remoting::Activation::AppDomainLevelActivator::Activate(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Activate", std::vector<std::string> { "System.Runtime.Remoting.Activation.IConstructionCallMessage" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ctorCall;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage*)returnValue;
}
