#include "System_Net_Sockets_Socket.h"

IL2CPP::Il2CppClass* System::System::Net::Sockets::Socket::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net.Sockets", "Socket");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Sockets::Socket::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::Sockets::Socket::_ctor(System::Net::Sockets::AddressFamily addressFamily, System::Net::Sockets::SocketType socketType, System::Net::Sockets::ProtocolType protocolType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Net.Sockets.AddressFamily", "System.Net.Sockets.SocketType", "System.Net.Sockets.ProtocolType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&addressFamily;
	params[1] = (intptr_t)&socketType;
	params[2] = (intptr_t)&protocolType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Net::Sockets::Socket::get_SupportsIPv4()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SupportsIPv4");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::Sockets::Socket::get_OSSupportsIPv4()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OSSupportsIPv4");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::Sockets::Socket::get_SupportsIPv6()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SupportsIPv6");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::Sockets::Socket::get_OSSupportsIPv6()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OSSupportsIPv6");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
intptr_t System::System::Net::Sockets::Socket::get_Handle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Handle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
System::System::Net::Sockets::AddressFamily System::System::Net::Sockets::Socket::get_AddressFamily()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AddressFamily");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Sockets::AddressFamily ret;
		std::memset(&ret, 0, sizeof(System::Net::Sockets::AddressFamily));
		return ret;
	}
	return static_cast<System::Net::Sockets::AddressFamily>(*(System::Net::Sockets::AddressFamily*)il2cpp_object_unbox(returnValue));
}
System::System::Net::Sockets::SocketType System::System::Net::Sockets::Socket::get_SocketType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SocketType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Sockets::SocketType ret;
		std::memset(&ret, 0, sizeof(System::Net::Sockets::SocketType));
		return ret;
	}
	return static_cast<System::Net::Sockets::SocketType>(*(System::Net::Sockets::SocketType*)il2cpp_object_unbox(returnValue));
}
System::System::Net::Sockets::ProtocolType System::System::Net::Sockets::Socket::get_ProtocolType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ProtocolType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Sockets::ProtocolType ret;
		std::memset(&ret, 0, sizeof(System::Net::Sockets::ProtocolType));
		return ret;
	}
	return static_cast<System::Net::Sockets::ProtocolType>(*(System::Net::Sockets::ProtocolType*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::Sockets::Socket::get_ExclusiveAddressUse()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ExclusiveAddressUse");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Sockets::Socket::set_ExclusiveAddressUse(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ExclusiveAddressUse", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::set_DontFragment(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DontFragment", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Net::Sockets::Socket::get_DualMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DualMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Sockets::Socket::set_DualMode(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DualMode", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Net::Sockets::Socket::get_IsDualMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsDualMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::Sockets::Socket::CanTryAddressFamily(System::Net::Sockets::AddressFamily family)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanTryAddressFamily", std::vector<std::string> { "System.Net.Sockets.AddressFamily" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&family;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Send(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::ArraySegment_1<mscorlib::System::Byte>>* buffers, System::Net::Sockets::SocketFlags socketFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send", std::vector<std::string> { "System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>", "System.Net.Sockets.SocketFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffers;
	params[1] = (intptr_t)&socketFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Send(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Net.Sockets.SocketFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&socketFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Receive(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Receive", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Net.Sockets.SocketFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&socketFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Receive(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::ArraySegment_1<mscorlib::System::Byte>>* buffers, System::Net::Sockets::SocketFlags socketFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Receive", std::vector<std::string> { "System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>", "System.Net.Sockets.SocketFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffers;
	params[1] = (intptr_t)&socketFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::IOControl(System::Net::Sockets::IOControlCode ioControlCode, IL2CPP::Array<uint8_t>* optionInValue, IL2CPP::Array<uint8_t>* optionOutValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IOControl", std::vector<std::string> { "System.Net.Sockets.IOControlCode", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ioControlCode;
	params[1] = (intptr_t)optionInValue;
	params[2] = (intptr_t)optionOutValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Sockets::Socket::SetIPProtectionLevel(System::Net::Sockets::IPProtectionLevel level)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIPProtectionLevel", std::vector<std::string> { "System.Net.Sockets.IPProtectionLevel" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&level;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IAsyncResult* System::System::Net::Sockets::Socket::BeginConnect(System::Net::IPAddress* address, int32_t port, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginConnect", std::vector<std::string> { "System.Net.IPAddress", "System.Int32", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)address;
	params[1] = (intptr_t)&port;
	params[2] = (intptr_t)requestCallback;
	params[3] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
mscorlib::System::IAsyncResult* System::System::Net::Sockets::Socket::BeginSend(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginSend", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Net.Sockets.SocketFlags", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&socketFlags;
	params[4] = (intptr_t)callback;
	params[5] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
int32_t System::System::Net::Sockets::Socket::EndSend(mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndSend", std::vector<std::string> { "System.IAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::IAsyncResult* System::System::Net::Sockets::Socket::BeginReceive(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginReceive", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Net.Sockets.SocketFlags", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&socketFlags;
	params[4] = (intptr_t)callback;
	params[5] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
int32_t System::System::Net::Sockets::Socket::EndReceive(mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndReceive", std::vector<std::string> { "System.IAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* System::System::Net::Sockets::Socket::get_InternalSyncObject()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InternalSyncObject");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool System::System::Net::Sockets::Socket::get_CleanedUp()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CleanedUp");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Sockets::Socket::InitializeSockets()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeSockets");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::InternalShutdown(System::Net::Sockets::SocketShutdown how)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalShutdown", std::vector<std::string> { "System.Net.Sockets.SocketShutdown" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&how;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::SetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName, int32_t optionValue, bool silent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSocketOption", std::vector<std::string> { "System.Net.Sockets.SocketOptionLevel", "System.Net.Sockets.SocketOptionName", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&optionLevel;
	params[1] = (intptr_t)&optionName;
	params[2] = (intptr_t)&optionValue;
	params[3] = (intptr_t)&silent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::_ctor(System::Net::Sockets::AddressFamily family, System::Net::Sockets::SocketType type, System::Net::Sockets::ProtocolType proto, System::Net::Sockets::SafeSocketHandle* safe_handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Net.Sockets.AddressFamily", "System.Net.Sockets.SocketType", "System.Net.Sockets.ProtocolType", "System.Net.Sockets.SafeSocketHandle" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&family;
	params[1] = (intptr_t)&type;
	params[2] = (intptr_t)&proto;
	params[3] = (intptr_t)safe_handle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::SocketDefaults()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SocketDefaults");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t System::System::Net::Sockets::Socket::Socket_internal(System::Net::Sockets::AddressFamily family, System::Net::Sockets::SocketType type, System::Net::Sockets::ProtocolType proto, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Socket_internal", std::vector<std::string> { "System.Net.Sockets.AddressFamily", "System.Net.Sockets.SocketType", "System.Net.Sockets.ProtocolType", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&family;
	params[1] = (intptr_t)&type;
	params[2] = (intptr_t)&proto;
	params[3] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::get_Available()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Available");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Available_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Available_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Available_internal(intptr_t socket, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Available_internal", std::vector<std::string> { "System.IntPtr", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&socket;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::Sockets::Socket::get_IsBound()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsBound");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
System::System::Net::EndPoint* System::System::Net::Sockets::Socket::get_LocalEndPoint()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LocalEndPoint");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::EndPoint*)returnValue;
}
System::System::Net::SocketAddress* System::System::Net::Sockets::Socket::LocalEndPoint_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t family, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LocalEndPoint_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&family;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::SocketAddress*)returnValue;
}
System::System::Net::SocketAddress* System::System::Net::Sockets::Socket::LocalEndPoint_internal(intptr_t socket, int32_t family, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LocalEndPoint_internal", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&socket;
	params[1] = (intptr_t)&family;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::SocketAddress*)returnValue;
}
bool System::System::Net::Sockets::Socket::get_Blocking()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Blocking");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Sockets::Socket::set_Blocking(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Blocking", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Blocking_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, bool block, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blocking_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Boolean", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&block;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Blocking_internal(intptr_t socket, bool block, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blocking_internal", std::vector<std::string> { "System.IntPtr", "System.Boolean", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&socket;
	params[1] = (intptr_t)&block;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Net::Sockets::Socket::get_Connected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Connected");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Sockets::Socket::set_NoDelay(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_NoDelay", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Net::Sockets::Socket::Poll(int32_t microSeconds, System::Net::Sockets::SelectMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Poll", std::vector<std::string> { "System.Int32", "System.Net.Sockets.SelectMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&microSeconds;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::Sockets::Socket::Poll_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::SelectMode mode, int32_t timeout, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Poll_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Net.Sockets.SelectMode", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&mode;
	params[2] = (intptr_t)&timeout;
	params[3] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::Sockets::Socket::Poll_internal(intptr_t socket, System::Net::Sockets::SelectMode mode, int32_t timeout, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Poll_internal", std::vector<std::string> { "System.IntPtr", "System.Net.Sockets.SelectMode", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&socket;
	params[1] = (intptr_t)&mode;
	params[2] = (intptr_t)&timeout;
	params[3] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
System::System::Net::Sockets::Socket* System::System::Net::Sockets::Socket::Accept()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Accept");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Sockets::Socket*)returnValue;
}
void System::System::Net::Sockets::Socket::Accept(System::Net::Sockets::Socket* acceptSocket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Accept", std::vector<std::string> { "System.Net.Sockets.Socket" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)acceptSocket;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Sockets::Socket* System::System::Net::Sockets::Socket::EndAccept(mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndAccept", std::vector<std::string> { "System.IAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Sockets::Socket*)returnValue;
}
System::System::Net::Sockets::Socket* System::System::Net::Sockets::Socket::EndAccept(IL2CPP::Array<uint8_t>& buffer, int32_t& bytesTransferred, mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndAccept", std::vector<std::string> { "System.Byte[]&", "System.Int32&", "System.IAsyncResult" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&bytesTransferred;
	params[2] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Sockets::Socket*)returnValue;
}
System::System::Net::Sockets::SafeSocketHandle* System::System::Net::Sockets::Socket::Accept_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Accept_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&error;
	params[2] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Sockets::SafeSocketHandle*)returnValue;
}
intptr_t System::System::Net::Sockets::Socket::Accept_internal(intptr_t sock, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Accept_internal", std::vector<std::string> { "System.IntPtr", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&sock;
	params[1] = (intptr_t)&error;
	params[2] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Sockets::Socket::Bind(System::Net::EndPoint* localEP)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Bind", std::vector<std::string> { "System.Net.EndPoint" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)localEP;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Bind_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::SocketAddress* sa, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Bind_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Net.SocketAddress", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)sa;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Bind_internal(intptr_t sock, System::Net::SocketAddress* sa, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Bind_internal", std::vector<std::string> { "System.IntPtr", "System.Net.SocketAddress", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&sock;
	params[1] = (intptr_t)sa;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Listen(int32_t backlog)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Listen", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&backlog;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Listen_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t backlog, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Listen_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&backlog;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Listen_internal(intptr_t sock, int32_t backlog, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Listen_internal", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&sock;
	params[1] = (intptr_t)&backlog;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Connect(System::Net::EndPoint* remoteEP)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "System.Net.EndPoint" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)remoteEP;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IAsyncResult* System::System::Net::Sockets::Socket::BeginConnect(mscorlib::System::String* host, int32_t port, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginConnect", std::vector<std::string> { "System.String", "System.Int32", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)host;
	params[1] = (intptr_t)&port;
	params[2] = (intptr_t)requestCallback;
	params[3] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
mscorlib::System::IAsyncResult* System::System::Net::Sockets::Socket::BeginConnect(System::Net::EndPoint* remoteEP, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginConnect", std::vector<std::string> { "System.Net.EndPoint", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)remoteEP;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
mscorlib::System::IAsyncResult* System::System::Net::Sockets::Socket::BeginConnect(IL2CPP::Array<System::Net::IPAddress*>* addresses, int32_t port, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginConnect", std::vector<std::string> { "System.Net.IPAddress[]", "System.Int32", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)addresses;
	params[1] = (intptr_t)&port;
	params[2] = (intptr_t)requestCallback;
	params[3] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
void System::System::Net::Sockets::Socket::BeginMConnect(System::Net::Sockets::SocketAsyncResult* sockares)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginMConnect", std::vector<std::string> { "System.Net.Sockets.SocketAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sockares;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::BeginSConnect(System::Net::Sockets::SocketAsyncResult* sockares)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginSConnect", std::vector<std::string> { "System.Net.Sockets.SocketAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sockares;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::EndConnect(mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndConnect", std::vector<std::string> { "System.IAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Connect_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::SocketAddress* sa, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Net.SocketAddress", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)sa;
	params[2] = (intptr_t)&error;
	params[3] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Connect_internal(intptr_t sock, System::Net::SocketAddress* sa, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect_internal", std::vector<std::string> { "System.IntPtr", "System.Net.SocketAddress", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&sock;
	params[1] = (intptr_t)sa;
	params[2] = (intptr_t)&error;
	params[3] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Disconnect(bool reuseSocket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Disconnect", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&reuseSocket;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::EndDisconnect(mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndDisconnect", std::vector<std::string> { "System.IAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Disconnect_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, bool reuse, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Disconnect_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Boolean", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&reuse;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Disconnect_internal(intptr_t sock, bool reuse, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Disconnect_internal", std::vector<std::string> { "System.IntPtr", "System.Boolean", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&sock;
	params[1] = (intptr_t)&reuse;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System::System::Net::Sockets::Socket::Receive(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Receive", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Net.Sockets.SocketError&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&socketFlags;
	params[4] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Receive(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::ArraySegment_1<mscorlib::System::Byte>>* buffers, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Receive", std::vector<std::string> { "System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>", "System.Net.Sockets.SocketFlags", "System.Net.Sockets.SocketError&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffers;
	params[1] = (intptr_t)&socketFlags;
	params[2] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::IAsyncResult* System::System::Net::Sockets::Socket::BeginReceive(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginReceive", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Net.Sockets.SocketError&", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&socketFlags;
	params[4] = (intptr_t)&errorCode;
	params[5] = (intptr_t)callback;
	params[6] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
int32_t System::System::Net::Sockets::Socket::EndReceive(mscorlib::System::IAsyncResult* asyncResult, System::Net::Sockets::SocketError& errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndReceive", std::vector<std::string> { "System.IAsyncResult", "System.Net.Sockets.SocketError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)asyncResult;
	params[1] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Receive_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Receive_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Net.Sockets.Socket/WSABUF*", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)bufarray;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&flags;
	params[4] = (intptr_t)&error;
	params[5] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Receive_internal(intptr_t sock, System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Receive_internal", std::vector<std::string> { "System.IntPtr", "System.Net.Sockets.Socket/WSABUF*", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&sock;
	params[1] = (intptr_t)bufarray;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&flags;
	params[4] = (intptr_t)&error;
	params[5] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Receive_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Receive_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Byte*", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&flags;
	params[4] = (intptr_t)&error;
	params[5] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Receive_internal(intptr_t sock, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Receive_internal", std::vector<std::string> { "System.IntPtr", "System.Byte*", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&sock;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&flags;
	params[4] = (intptr_t)&error;
	params[5] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::ReceiveFrom(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::Net::EndPoint& remoteEP, System::Net::Sockets::SocketError& errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReceiveFrom", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Net.EndPoint&", "System.Net.Sockets.SocketError&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&socketFlags;
	params[4] = (intptr_t)&remoteEP;
	params[5] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::EndReceiveFrom(mscorlib::System::IAsyncResult* asyncResult, System::Net::EndPoint& endPoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndReceiveFrom", std::vector<std::string> { "System.IAsyncResult", "System.Net.EndPoint&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)asyncResult;
	params[1] = (intptr_t)&endPoint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::ReceiveFrom_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, System::Net::SocketAddress& sockaddr, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReceiveFrom_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Byte*", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Net.SocketAddress&", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&flags;
	params[4] = (intptr_t)&sockaddr;
	params[5] = (intptr_t)&error;
	params[6] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::ReceiveFrom_internal(intptr_t sock, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, System::Net::SocketAddress& sockaddr, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReceiveFrom_internal", std::vector<std::string> { "System.IntPtr", "System.Byte*", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Net.SocketAddress&", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&sock;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&flags;
	params[4] = (intptr_t)&sockaddr;
	params[5] = (intptr_t)&error;
	params[6] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Send(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Net.Sockets.SocketError&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&socketFlags;
	params[4] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Send(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::ArraySegment_1<mscorlib::System::Byte>>* buffers, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send", std::vector<std::string> { "System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>", "System.Net.Sockets.SocketFlags", "System.Net.Sockets.SocketError&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffers;
	params[1] = (intptr_t)&socketFlags;
	params[2] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::IAsyncResult* System::System::Net::Sockets::Socket::BeginSend(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginSend", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Net.Sockets.SocketError&", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&socketFlags;
	params[4] = (intptr_t)&errorCode;
	params[5] = (intptr_t)callback;
	params[6] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
void System::System::Net::Sockets::Socket::BeginSendCallback(System::Net::Sockets::SocketAsyncResult* sockares, int32_t sent_so_far)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginSendCallback", std::vector<std::string> { "System.Net.Sockets.SocketAsyncResult", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sockares;
	params[1] = (intptr_t)&sent_so_far;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System::System::Net::Sockets::Socket::EndSend(mscorlib::System::IAsyncResult* asyncResult, System::Net::Sockets::SocketError& errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndSend", std::vector<std::string> { "System.IAsyncResult", "System.Net.Sockets.SocketError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)asyncResult;
	params[1] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Send_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Net.Sockets.Socket/WSABUF*", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)bufarray;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&flags;
	params[4] = (intptr_t)&error;
	params[5] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Send_internal(intptr_t sock, System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send_internal", std::vector<std::string> { "System.IntPtr", "System.Net.Sockets.Socket/WSABUF*", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&sock;
	params[1] = (intptr_t)bufarray;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&flags;
	params[4] = (intptr_t)&error;
	params[5] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Send_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Byte*", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&flags;
	params[4] = (intptr_t)&error;
	params[5] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::Send_internal(intptr_t sock, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send_internal", std::vector<std::string> { "System.IntPtr", "System.Byte*", "System.Int32", "System.Net.Sockets.SocketFlags", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&sock;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&flags;
	params[4] = (intptr_t)&error;
	params[5] = (intptr_t)&blocking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::EndSendTo(mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndSendTo", std::vector<std::string> { "System.IAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* System::System::Net::Sockets::Socket::GetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSocketOption", std::vector<std::string> { "System.Net.Sockets.SocketOptionLevel", "System.Net.Sockets.SocketOptionName" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&optionLevel;
	params[1] = (intptr_t)&optionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System::System::Net::Sockets::Socket::GetSocketOption_obj_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, mscorlib::System::Object& obj_val, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSocketOption_obj_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Net.Sockets.SocketOptionLevel", "System.Net.Sockets.SocketOptionName", "System.Object&", "System.Int32&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&level;
	params[2] = (intptr_t)&name;
	params[3] = (intptr_t)&obj_val;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::GetSocketOption_obj_internal(intptr_t socket, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, mscorlib::System::Object& obj_val, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSocketOption_obj_internal", std::vector<std::string> { "System.IntPtr", "System.Net.Sockets.SocketOptionLevel", "System.Net.Sockets.SocketOptionName", "System.Object&", "System.Int32&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&socket;
	params[1] = (intptr_t)&level;
	params[2] = (intptr_t)&name;
	params[3] = (intptr_t)&obj_val;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::SetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName, mscorlib::System::Object* optionValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSocketOption", std::vector<std::string> { "System.Net.Sockets.SocketOptionLevel", "System.Net.Sockets.SocketOptionName", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&optionLevel;
	params[1] = (intptr_t)&optionName;
	params[2] = (intptr_t)optionValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::SetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName, bool optionValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSocketOption", std::vector<std::string> { "System.Net.Sockets.SocketOptionLevel", "System.Net.Sockets.SocketOptionName", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&optionLevel;
	params[1] = (intptr_t)&optionName;
	params[2] = (intptr_t)&optionValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::SetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName, int32_t optionValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSocketOption", std::vector<std::string> { "System.Net.Sockets.SocketOptionLevel", "System.Net.Sockets.SocketOptionName", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&optionLevel;
	params[1] = (intptr_t)&optionName;
	params[2] = (intptr_t)&optionValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::SetSocketOption_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, mscorlib::System::Object* obj_val, IL2CPP::Array<uint8_t>* byte_val, int32_t int_val, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSocketOption_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Net.Sockets.SocketOptionLevel", "System.Net.Sockets.SocketOptionName", "System.Object", "System.Byte[]", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&level;
	params[2] = (intptr_t)&name;
	params[3] = (intptr_t)obj_val;
	params[4] = (intptr_t)byte_val;
	params[5] = (intptr_t)&int_val;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::SetSocketOption_internal(intptr_t socket, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, mscorlib::System::Object* obj_val, IL2CPP::Array<uint8_t>* byte_val, int32_t int_val, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSocketOption_internal", std::vector<std::string> { "System.IntPtr", "System.Net.Sockets.SocketOptionLevel", "System.Net.Sockets.SocketOptionName", "System.Object", "System.Byte[]", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&socket;
	params[1] = (intptr_t)&level;
	params[2] = (intptr_t)&name;
	params[3] = (intptr_t)obj_val;
	params[4] = (intptr_t)byte_val;
	params[5] = (intptr_t)&int_val;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System::System::Net::Sockets::Socket::IOControl(int32_t ioControlCode, IL2CPP::Array<uint8_t>* optionInValue, IL2CPP::Array<uint8_t>* optionOutValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IOControl", std::vector<std::string> { "System.Int32", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ioControlCode;
	params[1] = (intptr_t)optionInValue;
	params[2] = (intptr_t)optionOutValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::IOControl_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t ioctl_code, IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IOControl_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Int32", "System.Byte[]", "System.Byte[]", "System.Int32&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&ioctl_code;
	params[2] = (intptr_t)input;
	params[3] = (intptr_t)output;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::Sockets::Socket::IOControl_internal(intptr_t sock, int32_t ioctl_code, IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IOControl_internal", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Byte[]", "System.Byte[]", "System.Int32&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&sock;
	params[1] = (intptr_t)&ioctl_code;
	params[2] = (intptr_t)input;
	params[3] = (intptr_t)output;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Sockets::Socket::Close()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Close(int32_t timeout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&timeout;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Close_internal(intptr_t socket, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close_internal", std::vector<std::string> { "System.IntPtr", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&socket;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Shutdown_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::SocketShutdown how, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Shutdown_internal", std::vector<std::string> { "System.Net.Sockets.SafeSocketHandle", "System.Net.Sockets.SocketShutdown", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&how;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Shutdown_internal(intptr_t socket, System::Net::Sockets::SocketShutdown how, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Shutdown_internal", std::vector<std::string> { "System.IntPtr", "System.Net.Sockets.SocketShutdown", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&socket;
	params[1] = (intptr_t)&how;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Dispose(bool disposing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&disposing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::Linger(intptr_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Linger", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::ThrowIfDisposedAndClosed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowIfDisposedAndClosed");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::ThrowIfBufferNull(IL2CPP::Array<uint8_t>* buffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowIfBufferNull", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)buffer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::ThrowIfBufferOutOfRange(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowIfBufferOutOfRange", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::Socket::ThrowIfUdp()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowIfUdp");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Sockets::SocketAsyncResult* System::System::Net::Sockets::Socket::ValidateEndIAsyncResult(mscorlib::System::IAsyncResult* ares, mscorlib::System::String* methodName, mscorlib::System::String* argName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateEndIAsyncResult", std::vector<std::string> { "System.IAsyncResult", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)ares;
	params[1] = (intptr_t)methodName;
	params[2] = (intptr_t)argName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Sockets::SocketAsyncResult*)returnValue;
}
void System::System::Net::Sockets::Socket::QueueIOSelectorJob(mscorlib::System::Threading::SemaphoreSlim* sem, intptr_t handle, System::IOSelectorJob* job)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QueueIOSelectorJob", std::vector<std::string> { "System.Threading.SemaphoreSlim", "System.IntPtr", "System.IOSelectorJob" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)sem;
	params[1] = (intptr_t)&handle;
	params[2] = (intptr_t)job;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::IPEndPoint* System::System::Net::Sockets::Socket::RemapIPEndPoint(System::Net::IPEndPoint* input)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemapIPEndPoint", std::vector<std::string> { "System.Net.IPEndPoint" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)input;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::IPEndPoint*)returnValue;
}
void System::System::Net::Sockets::Socket::cancel_blocking_socket_operation(mscorlib::System::Threading::Thread* thread)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cancel_blocking_socket_operation", std::vector<std::string> { "System.Threading.Thread" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)thread;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System::System::Net::Sockets::Socket::get_FamilyHint()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FamilyHint");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::Sockets::Socket::IsProtocolSupported_internal(System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsProtocolSupported_internal", std::vector<std::string> { "System.Net.NetworkInformation.NetworkInterfaceComponent" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&networkInterface;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::Sockets::Socket::IsProtocolSupported(System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsProtocolSupported", std::vector<std::string> { "System.Net.NetworkInformation.NetworkInterfaceComponent" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&networkInterface;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Sockets::Socket::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
