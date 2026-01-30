#include "BestHTTP_SignalR_Messages_IHubMessage.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SignalR::Messages::IHubMessage::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SignalR.Messages", "IHubMessage");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SignalR::Messages::IHubMessage::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
uint64_t Assembly_CSharp::BestHTTP::SignalR::Messages::IHubMessage::get_InvocationId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InvocationId");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
