#include "UnityEngine_Networking_ConnectionConfig.h"

IL2CPP::Il2CppClass* UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UNETModule.dll", "UnityEngine.Networking", "ConnectionConfig");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::_ctor(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Networking.ConnectionConfig" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)config;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::Validate(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Validate", std::vector<std::string> { "UnityEngine.Networking.ConnectionConfig" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)config;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint16_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_PacketSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PacketSize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
uint16_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_FragmentSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FragmentSize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
uint32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_ResendTimeout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ResendTimeout");
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
uint32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_DisconnectTimeout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DisconnectTimeout");
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
uint32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_ConnectTimeout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ConnectTimeout");
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
uint32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_MinUpdateTimeout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MinUpdateTimeout");
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
void UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::set_MinUpdateTimeout(uint32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_MinUpdateTimeout", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_PingTimeout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PingTimeout");
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
uint32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_ReducedPingTimeout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ReducedPingTimeout");
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
uint32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_AllCostTimeout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AllCostTimeout");
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
uint8_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_NetworkDropThreshold()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NetworkDropThreshold");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
uint8_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_OverflowDropThreshold()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OverflowDropThreshold");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
uint8_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_MaxConnectionAttempt()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MaxConnectionAttempt");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
uint32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_AckDelay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AckDelay");
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
uint32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_SendDelay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SendDelay");
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
uint16_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_MaxCombinedReliableMessageSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MaxCombinedReliableMessageSize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
uint16_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_MaxCombinedReliableMessageCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MaxCombinedReliableMessageCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
uint16_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_MaxSentMessageQueueSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MaxSentMessageQueueSize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_UNETModule::UnityEngine::Networking::ConnectionAcksType UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_AcksType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AcksType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UNETModule::UnityEngine::Networking::ConnectionAcksType ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionAcksType));
		return ret;
	}
	return static_cast<UnityEngine_UNETModule::UnityEngine::Networking::ConnectionAcksType>(*(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionAcksType*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_UsePlatformSpecificProtocols()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UsePlatformSpecificProtocols");
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
void UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::set_UsePlatformSpecificProtocols(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_UsePlatformSpecificProtocols", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_InitialBandwidth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InitialBandwidth");
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
float UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_BandwidthPeakFactor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BandwidthPeakFactor");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
uint16_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_WebSocketReceiveBufferMaxSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_WebSocketReceiveBufferMaxSize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
uint32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_UdpSocketReceiveBufferMaxSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UdpSocketReceiveBufferMaxSize");
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
mscorlib::System::String* UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_SSLCertFilePath()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SSLCertFilePath");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_SSLPrivateKeyFilePath()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SSLPrivateKeyFilePath");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_SSLCAFilePath()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SSLCAFilePath");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_ChannelCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ChannelCount");
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_SharedOrderChannelCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SharedOrderChannelCount");
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
uint8_t UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::AddChannel(UnityEngine_UNETModule::UnityEngine::Networking::QosType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddChannel", std::vector<std::string> { "UnityEngine.Networking.QosType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_UNETModule::UnityEngine::Networking::QosType UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::GetChannel(uint8_t idx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetChannel", std::vector<std::string> { "System.Byte" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&idx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UNETModule::UnityEngine::Networking::QosType ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UNETModule::UnityEngine::Networking::QosType));
		return ret;
	}
	return static_cast<UnityEngine_UNETModule::UnityEngine::Networking::QosType>(*(UnityEngine_UNETModule::UnityEngine::Networking::QosType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Byte>* UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::GetSharedOrderChannels(uint8_t idx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSharedOrderChannels", std::vector<std::string> { "System.Byte" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&idx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Byte>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::ChannelQOS>* UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig::get_Channels()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Channels");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::ChannelQOS>*)returnValue;
}
