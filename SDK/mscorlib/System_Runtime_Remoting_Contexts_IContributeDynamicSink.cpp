#include "System_Runtime_Remoting_Contexts_IContributeDynamicSink.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "IContributeDynamicSink");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Runtime::Remoting::Contexts::IDynamicMessageSink* mscorlib::System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDynamicSink");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Contexts::IDynamicMessageSink*)returnValue;
}
