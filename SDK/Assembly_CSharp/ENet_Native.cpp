#include "ENet_Native.h"

IL2CPP::Il2CppClass* Assembly_CSharp::ENet::Native::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "ENet", "Native");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::ENet::Native::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Assembly_CSharp::ENet::Native::enet_initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_initialize");
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
int32_t Assembly_CSharp::ENet::Native::enet_initialize_with_callbacks(uint32_t version, Assembly_CSharp::ENet::ENetCallbacks& inits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_initialize_with_callbacks", std::vector<std::string> { "System.UInt32", "ENet.ENetCallbacks&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&version;
	params[1] = (intptr_t)&inits;
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
void Assembly_CSharp::ENet::Native::enet_deinitialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_deinitialize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
uint32_t Assembly_CSharp::ENet::Native::enet_linked_version()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_linked_version");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Native::enet_time_get()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_time_get");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint64_t Assembly_CSharp::ENet::Native::enet_crc64(intptr_t buffers, int32_t bufferCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_crc64", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&buffers;
	params[1] = (intptr_t)&bufferCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::ENet::Native::enet_address_set_ip(Assembly_CSharp::ENet::ENetAddress& address, mscorlib::System::String* ip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_address_set_ip", std::vector<std::string> { "ENet.ENetAddress&", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)ip;
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
int32_t Assembly_CSharp::ENet::Native::enet_address_set_hostname(Assembly_CSharp::ENet::ENetAddress& address, mscorlib::System::String* hostName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_address_set_hostname", std::vector<std::string> { "ENet.ENetAddress&", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)hostName;
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
int32_t Assembly_CSharp::ENet::Native::enet_address_get_ip(Assembly_CSharp::ENet::ENetAddress& address, mscorlib::System::Text::StringBuilder* ip, intptr_t ipLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_address_get_ip", std::vector<std::string> { "ENet.ENetAddress&", "System.Text.StringBuilder", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)ip;
	params[2] = (intptr_t)&ipLength;
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
int32_t Assembly_CSharp::ENet::Native::enet_address_get_hostname(Assembly_CSharp::ENet::ENetAddress& address, mscorlib::System::Text::StringBuilder* hostName, intptr_t nameLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_address_get_hostname", std::vector<std::string> { "ENet.ENetAddress&", "System.Text.StringBuilder", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)hostName;
	params[2] = (intptr_t)&nameLength;
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
intptr_t Assembly_CSharp::ENet::Native::enet_packet_create(IL2CPP::Array<uint8_t>* data, intptr_t dataLength, Assembly_CSharp::ENet::PacketFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_packet_create", std::vector<std::string> { "System.Byte[]", "System.IntPtr", "ENet.PacketFlags" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&dataLength;
	params[2] = (intptr_t)&flags;
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
intptr_t Assembly_CSharp::ENet::Native::enet_packet_create(intptr_t data, intptr_t dataLength, Assembly_CSharp::ENet::PacketFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_packet_create", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "ENet.PacketFlags" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&data;
	params[1] = (intptr_t)&dataLength;
	params[2] = (intptr_t)&flags;
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
intptr_t Assembly_CSharp::ENet::Native::enet_packet_create_offset(IL2CPP::Array<uint8_t>* data, intptr_t dataLength, intptr_t dataOffset, Assembly_CSharp::ENet::PacketFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_packet_create_offset", std::vector<std::string> { "System.Byte[]", "System.IntPtr", "System.IntPtr", "ENet.PacketFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&dataLength;
	params[2] = (intptr_t)&dataOffset;
	params[3] = (intptr_t)&flags;
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
intptr_t Assembly_CSharp::ENet::Native::enet_packet_create_offset(intptr_t data, intptr_t dataLength, intptr_t dataOffset, Assembly_CSharp::ENet::PacketFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_packet_create_offset", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.IntPtr", "ENet.PacketFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&data;
	params[1] = (intptr_t)&dataLength;
	params[2] = (intptr_t)&dataOffset;
	params[3] = (intptr_t)&flags;
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
int32_t Assembly_CSharp::ENet::Native::enet_packet_check_references(intptr_t packet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_packet_check_references", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&packet;
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
intptr_t Assembly_CSharp::ENet::Native::enet_packet_get_data(intptr_t packet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_packet_get_data", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&packet;
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
intptr_t Assembly_CSharp::ENet::Native::enet_packet_get_user_data(intptr_t packet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_packet_get_user_data", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&packet;
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
intptr_t Assembly_CSharp::ENet::Native::enet_packet_set_user_data(intptr_t packet, intptr_t userData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_packet_set_user_data", std::vector<std::string> { "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&packet;
	params[1] = (intptr_t)&userData;
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
int32_t Assembly_CSharp::ENet::Native::enet_packet_get_length(intptr_t packet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_packet_get_length", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&packet;
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
void Assembly_CSharp::ENet::Native::enet_packet_set_free_callback(intptr_t packet, intptr_t callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_packet_set_free_callback", std::vector<std::string> { "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&packet;
	params[1] = (intptr_t)&callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_packet_dispose(intptr_t packet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_packet_dispose", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&packet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t Assembly_CSharp::ENet::Native::enet_host_create(Assembly_CSharp::ENet::ENetAddress& address, intptr_t peerLimit, intptr_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_create", std::vector<std::string> { "ENet.ENetAddress&", "System.IntPtr", "System.IntPtr", "System.UInt32", "System.UInt32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)&peerLimit;
	params[2] = (intptr_t)&channelLimit;
	params[3] = (intptr_t)&incomingBandwidth;
	params[4] = (intptr_t)&outgoingBandwidth;
	params[5] = (intptr_t)&bufferSize;
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
intptr_t Assembly_CSharp::ENet::Native::enet_host_create(intptr_t address, intptr_t peerLimit, intptr_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_create", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.IntPtr", "System.UInt32", "System.UInt32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&address;
	params[1] = (intptr_t)&peerLimit;
	params[2] = (intptr_t)&channelLimit;
	params[3] = (intptr_t)&incomingBandwidth;
	params[4] = (intptr_t)&outgoingBandwidth;
	params[5] = (intptr_t)&bufferSize;
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
intptr_t Assembly_CSharp::ENet::Native::enet_host_connect(intptr_t host, Assembly_CSharp::ENet::ENetAddress& address, intptr_t channelCount, uint32_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_connect", std::vector<std::string> { "System.IntPtr", "ENet.ENetAddress&", "System.IntPtr", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&address;
	params[2] = (intptr_t)&channelCount;
	params[3] = (intptr_t)&data;
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
void Assembly_CSharp::ENet::Native::enet_host_broadcast(intptr_t host, uint8_t channelID, intptr_t packet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_broadcast", std::vector<std::string> { "System.IntPtr", "System.Byte", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&channelID;
	params[2] = (intptr_t)&packet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_host_broadcast_exclude(intptr_t host, uint8_t channelID, intptr_t packet, intptr_t excludedPeer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_broadcast_exclude", std::vector<std::string> { "System.IntPtr", "System.Byte", "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&channelID;
	params[2] = (intptr_t)&packet;
	params[3] = (intptr_t)&excludedPeer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_host_broadcast_selective(intptr_t host, uint8_t channelID, intptr_t packet, IL2CPP::Array<intptr_t>* peers, intptr_t peersLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_broadcast_selective", std::vector<std::string> { "System.IntPtr", "System.Byte", "System.IntPtr", "System.IntPtr[]", "System.IntPtr" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&channelID;
	params[2] = (intptr_t)&packet;
	params[3] = (intptr_t)peers;
	params[4] = (intptr_t)&peersLength;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::ENet::Native::enet_host_service(intptr_t host, Assembly_CSharp::ENet::ENetEvent& event, uint32_t timeout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_service", std::vector<std::string> { "System.IntPtr", "ENet.ENetEvent&", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&event;
	params[2] = (intptr_t)&timeout;
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
int32_t Assembly_CSharp::ENet::Native::enet_host_check_events(intptr_t host, Assembly_CSharp::ENet::ENetEvent& event)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_check_events", std::vector<std::string> { "System.IntPtr", "ENet.ENetEvent&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&event;
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
void Assembly_CSharp::ENet::Native::enet_host_channel_limit(intptr_t host, intptr_t channelLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_channel_limit", std::vector<std::string> { "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&channelLimit;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_host_bandwidth_limit(intptr_t host, uint32_t incomingBandwidth, uint32_t outgoingBandwidth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_bandwidth_limit", std::vector<std::string> { "System.IntPtr", "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&incomingBandwidth;
	params[2] = (intptr_t)&outgoingBandwidth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint32_t Assembly_CSharp::ENet::Native::enet_host_get_peers_count(intptr_t host)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_get_peers_count", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&host;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Native::enet_host_get_packets_sent(intptr_t host)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_get_packets_sent", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&host;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Native::enet_host_get_packets_received(intptr_t host)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_get_packets_received", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&host;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Native::enet_host_get_bytes_sent(intptr_t host)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_get_bytes_sent", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&host;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Native::enet_host_get_bytes_received(intptr_t host)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_get_bytes_received", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&host;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::ENet::Native::enet_host_set_max_duplicate_peers(intptr_t host, uint16_t number)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_set_max_duplicate_peers", std::vector<std::string> { "System.IntPtr", "System.UInt16" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&number;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_host_set_intercept_callback(intptr_t host, intptr_t callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_set_intercept_callback", std::vector<std::string> { "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_host_set_checksum_callback(intptr_t host, intptr_t callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_set_checksum_callback", std::vector<std::string> { "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_host_flush(intptr_t host)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_flush", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&host;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_host_destroy(intptr_t host)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_destroy", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&host;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_host_prevent_connections(intptr_t host, uint8_t state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_host_prevent_connections", std::vector<std::string> { "System.IntPtr", "System.Byte" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&host;
	params[1] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_peer_throttle_configure(intptr_t peer, uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_throttle_configure", std::vector<std::string> { "System.IntPtr", "System.UInt32", "System.UInt32", "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&peer;
	params[1] = (intptr_t)&interval;
	params[2] = (intptr_t)&acceleration;
	params[3] = (intptr_t)&deceleration;
	params[4] = (intptr_t)&threshold;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint32_t Assembly_CSharp::ENet::Native::enet_peer_get_id(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_id", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::ENet::Native::enet_peer_get_ip(intptr_t peer, IL2CPP::Array<uint8_t>* ip, intptr_t ipLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_ip", std::vector<std::string> { "System.IntPtr", "System.Byte[]", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&peer;
	params[1] = (intptr_t)ip;
	params[2] = (intptr_t)&ipLength;
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
uint16_t Assembly_CSharp::ENet::Native::enet_peer_get_port(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_port", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Native::enet_peer_get_mtu(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_mtu", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::ENet::PeerState Assembly_CSharp::ENet::Native::enet_peer_get_state(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_state", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::ENet::PeerState ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::ENet::PeerState));
		return ret;
	}
	return static_cast<Assembly_CSharp::ENet::PeerState>(*(Assembly_CSharp::ENet::PeerState*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Native::enet_peer_get_rtt(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_rtt", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Native::enet_peer_get_last_rtt(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_last_rtt", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Native::enet_peer_get_lastsendtime(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_lastsendtime", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Native::enet_peer_get_lastreceivetime(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_lastreceivetime", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint64_t Assembly_CSharp::ENet::Native::enet_peer_get_packets_sent(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_packets_sent", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
uint64_t Assembly_CSharp::ENet::Native::enet_peer_get_packets_lost(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_packets_lost", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::ENet::Native::enet_peer_get_packets_throttle(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_packets_throttle", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
uint64_t Assembly_CSharp::ENet::Native::enet_peer_get_bytes_sent(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_bytes_sent", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
uint64_t Assembly_CSharp::ENet::Native::enet_peer_get_bytes_received(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_bytes_received", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Assembly_CSharp::ENet::Native::enet_peer_get_data(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_get_data", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
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
void Assembly_CSharp::ENet::Native::enet_peer_set_data(intptr_t peer, intptr_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_set_data", std::vector<std::string> { "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&peer;
	params[1] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::ENet::Native::enet_peer_send(intptr_t peer, uint8_t channelID, intptr_t packet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_send", std::vector<std::string> { "System.IntPtr", "System.Byte", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&peer;
	params[1] = (intptr_t)&channelID;
	params[2] = (intptr_t)&packet;
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
intptr_t Assembly_CSharp::ENet::Native::enet_peer_receive(intptr_t peer, uint8_t& channelID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_receive", std::vector<std::string> { "System.IntPtr", "System.Byte&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&peer;
	params[1] = (intptr_t)&channelID;
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
void Assembly_CSharp::ENet::Native::enet_peer_ping(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_ping", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_peer_ping_interval(intptr_t peer, uint32_t pingInterval)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_ping_interval", std::vector<std::string> { "System.IntPtr", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&peer;
	params[1] = (intptr_t)&pingInterval;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_peer_timeout(intptr_t peer, uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_timeout", std::vector<std::string> { "System.IntPtr", "System.UInt32", "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&peer;
	params[1] = (intptr_t)&timeoutLimit;
	params[2] = (intptr_t)&timeoutMinimum;
	params[3] = (intptr_t)&timeoutMaximum;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_peer_disconnect(intptr_t peer, uint32_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_disconnect", std::vector<std::string> { "System.IntPtr", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&peer;
	params[1] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_peer_disconnect_now(intptr_t peer, uint32_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_disconnect_now", std::vector<std::string> { "System.IntPtr", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&peer;
	params[1] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_peer_disconnect_later(intptr_t peer, uint32_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_disconnect_later", std::vector<std::string> { "System.IntPtr", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&peer;
	params[1] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Native::enet_peer_reset(intptr_t peer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "enet_peer_reset", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&peer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
