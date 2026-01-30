#include "BestHTTP_SignalRCore_Messages_CancelInvocationMessage.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SignalRCore::Messages::CancelInvocationMessage::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SignalRCore.Messages", "CancelInvocationMessage");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SignalRCore::Messages::CancelInvocationMessage::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SignalRCore::Messages::MessageTypes Assembly_CSharp::BestHTTP::SignalRCore::Messages::CancelInvocationMessage::get_type()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_type");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::SignalRCore::Messages::MessageTypes ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::SignalRCore::Messages::MessageTypes));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::SignalRCore::Messages::MessageTypes>(*(Assembly_CSharp::BestHTTP::SignalRCore::Messages::MessageTypes*)il2cpp_object_unbox(returnValue));
}
