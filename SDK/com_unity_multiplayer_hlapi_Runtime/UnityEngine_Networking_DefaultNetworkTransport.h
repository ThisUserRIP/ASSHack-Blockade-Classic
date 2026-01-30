#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct HostTopology; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_Types_NetworkID.h"
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_Types_SourceID.h"
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_Types_NodeID.h"
namespace System::System::Net { struct EndPoint; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ConnectionSimulatorConfig; };
#include "..\mscorlib\System_Byte.h"
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct GlobalConfig; };
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_NetworkEventType.h"

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct DefaultNetworkTransport : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		bool get_IsStarted();
		int32_t AddHost(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t port, mscorlib::System::String* ip);
		int32_t AddHostWithSimulator(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t minTimeout, int32_t maxTimeout, int32_t port);
		int32_t AddWebsocketHost(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t port, mscorlib::System::String* ip);
		int32_t Connect(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t specialConnectionId, uint8_t& error);
		void ConnectAsNetworkHost(int32_t hostId, mscorlib::System::String* address, int32_t port, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID network, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID source, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID node, uint8_t& error);
		int32_t ConnectEndPoint(int32_t hostId, System::System::Net::EndPoint* endPoint, int32_t specialConnectionId, uint8_t& error);
		int32_t ConnectToNetworkPeer(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t specialConnectionId, int32_t relaySlotId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID network, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID source, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID node, uint8_t& error);
		int32_t ConnectWithSimulator(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t specialConnectionId, uint8_t& error, UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfig* conf);
		bool Disconnect(int32_t hostId, int32_t connectionId, uint8_t& error);
		bool DoesEndPointUsePlatformProtocols(System::System::Net::EndPoint* endPoint);
		void GetBroadcastConnectionInfo(int32_t hostId, mscorlib::System::String& address, int32_t& port, uint8_t& error);
		void GetBroadcastConnectionMessage(int32_t hostId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error);
		void GetConnectionInfo(int32_t hostId, int32_t connectionId, mscorlib::System::String& address, int32_t& port, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID& network, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID& dstNode, uint8_t& error);
		int32_t GetCurrentRTT(int32_t hostId, int32_t connectionId, uint8_t& error);
		void Init();
		void Init(UnityEngine_UNETModule::UnityEngine::Networking::GlobalConfig* config);
		UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType Receive(int32_t& hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error);
		UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType ReceiveFromHost(int32_t hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error);
		UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType ReceiveRelayEventFromHost(int32_t hostId, uint8_t& error);
		bool RemoveHost(int32_t hostId);
		bool Send(int32_t hostId, int32_t connectionId, int32_t channelId, IL2CPP::Array<uint8_t>* buffer, int32_t size, uint8_t& error);
		void SetBroadcastCredentials(int32_t hostId, int32_t key, int32_t version, int32_t subversion, uint8_t& error);
		void SetPacketStat(int32_t direction, int32_t packetStatId, int32_t numMsgs, int32_t numBytes);
		void Shutdown();
		bool StartBroadcastDiscovery(int32_t hostId, int32_t broadcastPort, int32_t key, int32_t version, int32_t subversion, IL2CPP::Array<uint8_t>* buffer, int32_t size, int32_t timeout, uint8_t& error);
		void StopBroadcastDiscovery();
	};
}

