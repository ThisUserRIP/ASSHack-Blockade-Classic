#include "System_Runtime_Remoting_Activation_ConstructionLevelActivator.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Activation::ConstructionLevelActivator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Activation", "ConstructionLevelActivator");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Activation::ConstructionLevelActivator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Runtime::Remoting::Activation::IActivator* mscorlib::System::Runtime::Remoting::Activation::ConstructionLevelActivator::get_NextActivator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NextActivator");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Activation::IActivator*)returnValue;
}
mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage* mscorlib::System::Runtime::Remoting::Activation::ConstructionLevelActivator::Activate(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Activate", std::vector<std::string> { "System.Runtime.Remoting.Activation.IConstructionCallMessage" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Activation::ConstructionLevelActivator::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
