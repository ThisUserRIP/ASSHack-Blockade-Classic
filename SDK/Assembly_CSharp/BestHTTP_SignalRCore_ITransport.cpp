#include "BestHTTP_SignalRCore_ITransport.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SignalRCore::ITransport::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SignalRCore", "ITransport");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SignalRCore::ITransport::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SignalRCore::TransferModes Assembly_CSharp::BestHTTP::SignalRCore::ITransport::get_TransferMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TransferMode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::SignalRCore::TransferModes ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::SignalRCore::TransferModes));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::SignalRCore::TransferModes>(*(Assembly_CSharp::BestHTTP::SignalRCore::TransferModes*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes Assembly_CSharp::BestHTTP::SignalRCore::ITransport::get_TransportType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TransportType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes>(*(Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::BestHTTP::SignalRCore::TransportStates Assembly_CSharp::BestHTTP::SignalRCore::ITransport::get_State()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_State");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::SignalRCore::TransportStates ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::SignalRCore::TransportStates));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::SignalRCore::TransportStates>(*(Assembly_CSharp::BestHTTP::SignalRCore::TransportStates*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SignalRCore::ITransport::get_ErrorReason()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ErrorReason");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalRCore::ITransport::add_OnStateChanged(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::TransportStates, Assembly_CSharp::BestHTTP::SignalRCore::TransportStates>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnStateChanged", std::vector<std::string> { "System.Action`2<BestHTTP.SignalRCore.TransportStates,BestHTTP.SignalRCore.TransportStates>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::ITransport::remove_OnStateChanged(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::TransportStates, Assembly_CSharp::BestHTTP::SignalRCore::TransportStates>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnStateChanged", std::vector<std::string> { "System.Action`2<BestHTTP.SignalRCore.TransportStates,BestHTTP.SignalRCore.TransportStates>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::ITransport::StartConnect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartConnect");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::ITransport::StartClose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartClose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::ITransport::Send(IL2CPP::Array<uint8_t>* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send", std::vector<std::string> { "System.Byte[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
