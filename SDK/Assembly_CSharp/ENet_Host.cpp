#include "ENet_Host.h"

IL2CPP::Il2CppClass* Assembly_CSharp::ENet::Host::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "ENet", "Host");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::ENet::Host::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
intptr_t Assembly_CSharp::ENet::Host::get_NativeData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NativeData");
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
void Assembly_CSharp::ENet::Host::set_NativeData(intptr_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_NativeData", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Dispose(bool disposing)
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
void Assembly_CSharp::ENet::Host::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::ENet::Host::get_IsSet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsSet");
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
uint32_t Assembly_CSharp::ENet::Host::get_PeersCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PeersCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Host::get_PacketsSent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PacketsSent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Host::get_PacketsReceived()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PacketsReceived");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Host::get_BytesSent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BytesSent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Host::get_BytesReceived()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BytesReceived");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::ENet::Host::ThrowIfNotCreated()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowIfNotCreated");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::ThrowIfChannelsExceeded(int32_t channelLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowIfChannelsExceeded", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&channelLimit;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Create()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Create(int32_t bufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&bufferSize;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Create(mscorlib::System::Nullable_1<Assembly_CSharp::ENet::Address> address, int32_t peerLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Nullable`1<ENet.Address>", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)&peerLimit;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Create(mscorlib::System::Nullable_1<Assembly_CSharp::ENet::Address> address, int32_t peerLimit, int32_t channelLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Nullable`1<ENet.Address>", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)&peerLimit;
	params[2] = (intptr_t)&channelLimit;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Create(int32_t peerLimit, int32_t channelLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&peerLimit;
	params[1] = (intptr_t)&channelLimit;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Create(int32_t peerLimit, int32_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Int32", "System.Int32", "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&peerLimit;
	params[1] = (intptr_t)&channelLimit;
	params[2] = (intptr_t)&incomingBandwidth;
	params[3] = (intptr_t)&outgoingBandwidth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Create(mscorlib::System::Nullable_1<Assembly_CSharp::ENet::Address> address, int32_t peerLimit, int32_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Nullable`1<ENet.Address>", "System.Int32", "System.Int32", "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)&peerLimit;
	params[2] = (intptr_t)&channelLimit;
	params[3] = (intptr_t)&incomingBandwidth;
	params[4] = (intptr_t)&outgoingBandwidth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Create(mscorlib::System::Nullable_1<Assembly_CSharp::ENet::Address> address, int32_t peerLimit, int32_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Nullable`1<ENet.Address>", "System.Int32", "System.Int32", "System.UInt32", "System.UInt32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)&peerLimit;
	params[2] = (intptr_t)&channelLimit;
	params[3] = (intptr_t)&incomingBandwidth;
	params[4] = (intptr_t)&outgoingBandwidth;
	params[5] = (intptr_t)&bufferSize;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::PreventConnections(bool state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreventConnections", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Broadcast(uint8_t channelID, Assembly_CSharp::ENet::Packet& packet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Broadcast", std::vector<std::string> { "System.Byte", "ENet.Packet&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&channelID;
	params[1] = (intptr_t)&packet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Broadcast(uint8_t channelID, Assembly_CSharp::ENet::Packet& packet, Assembly_CSharp::ENet::Peer excludedPeer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Broadcast", std::vector<std::string> { "System.Byte", "ENet.Packet&", "ENet.Peer" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&channelID;
	params[1] = (intptr_t)&packet;
	params[2] = (intptr_t)&excludedPeer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Broadcast(uint8_t channelID, Assembly_CSharp::ENet::Packet& packet, IL2CPP::Array<Assembly_CSharp::ENet::Peer>* peers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Broadcast", std::vector<std::string> { "System.Byte", "ENet.Packet&", "ENet.Peer[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&channelID;
	params[1] = (intptr_t)&packet;
	params[2] = (intptr_t)peers;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::ENet::Host::CheckEvents(Assembly_CSharp::ENet::Event& event)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckEvents", std::vector<std::string> { "ENet.Event&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&event;
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
Assembly_CSharp::ENet::Peer Assembly_CSharp::ENet::Host::Connect(Assembly_CSharp::ENet::Address address)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "ENet.Address" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&address;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::ENet::Peer ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::ENet::Peer));
		return ret;
	}
	return static_cast<Assembly_CSharp::ENet::Peer>(*(Assembly_CSharp::ENet::Peer*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::ENet::Peer Assembly_CSharp::ENet::Host::Connect(Assembly_CSharp::ENet::Address address, int32_t channelLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "ENet.Address", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)&channelLimit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::ENet::Peer ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::ENet::Peer));
		return ret;
	}
	return static_cast<Assembly_CSharp::ENet::Peer>(*(Assembly_CSharp::ENet::Peer*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::ENet::Peer Assembly_CSharp::ENet::Host::Connect(Assembly_CSharp::ENet::Address address, int32_t channelLimit, uint32_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "ENet.Address", "System.Int32", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)&channelLimit;
	params[2] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::ENet::Peer ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::ENet::Peer));
		return ret;
	}
	return static_cast<Assembly_CSharp::ENet::Peer>(*(Assembly_CSharp::ENet::Peer*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::ENet::Host::Service(int32_t timeout, Assembly_CSharp::ENet::Event& event)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Service", std::vector<std::string> { "System.Int32", "ENet.Event&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&timeout;
	params[1] = (intptr_t)&event;
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
void Assembly_CSharp::ENet::Host::SetBandwidthLimit(uint32_t incomingBandwidth, uint32_t outgoingBandwidth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBandwidthLimit", std::vector<std::string> { "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&incomingBandwidth;
	params[1] = (intptr_t)&outgoingBandwidth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::SetChannelLimit(int32_t channelLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetChannelLimit", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&channelLimit;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::SetMaxDuplicatePeers(uint16_t number)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMaxDuplicatePeers", std::vector<std::string> { "System.UInt16" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&number;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::SetInterceptCallback(intptr_t callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetInterceptCallback", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::SetInterceptCallback(Assembly_CSharp::ENet::InterceptCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetInterceptCallback", std::vector<std::string> { "ENet.InterceptCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::SetChecksumCallback(intptr_t callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetChecksumCallback", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::SetChecksumCallback(Assembly_CSharp::ENet::ChecksumCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetChecksumCallback", std::vector<std::string> { "ENet.ChecksumCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::Flush()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Flush");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Host::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
