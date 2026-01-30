#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct EndPoint; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct GlobalConfig; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct GlobalConfigInternal; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct HostTopology; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct HostTopologyInternal; };
#include "UnityEngine_Networking_Types_NetworkID.h"
#include "UnityEngine_Networking_Types_SourceID.h"
#include "UnityEngine_Networking_Types_NodeID.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "UnityEngine_Networking_NetworkEventType.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ConnectionSimulatorConfigInternal; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ConnectionSimulatorConfig; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };

namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	struct NetworkTransport : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t s_nextSceneId;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool DoesEndPointUsePlatformProtocols(System::System::Net::EndPoint* endPoint);
		static int32_t ConnectEndPoint(int32_t hostId, System::System::Net::EndPoint* endPoint, int32_t exceptionConnectionId, uint8_t& error);
		static void Init();
		static void Init(UnityEngine_UNETModule::UnityEngine::Networking::GlobalConfig* config);
		static void InitializeClass();
		static void InitializeClassWithConfig(UnityEngine_UNETModule::UnityEngine::Networking::GlobalConfigInternal* config);
		static void Shutdown();
		static int32_t AddHostWithSimulator(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t minTimeout, int32_t maxTimeout, int32_t port, mscorlib::System::String* ip);
		static int32_t AddHostWithSimulator(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t minTimeout, int32_t maxTimeout, int32_t port);
		static int32_t AddHost(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t port, mscorlib::System::String* ip);
		static int32_t AddHostInternal(UnityEngine_UNETModule::UnityEngine::Networking::HostTopologyInternal* topologyInt, mscorlib::System::String* ip, int32_t port, int32_t minTimeout, int32_t maxTimeout);
		static int32_t AddWebsocketHost(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t port, mscorlib::System::String* ip);
		static int32_t AddWsHostInternal(UnityEngine_UNETModule::UnityEngine::Networking::HostTopologyInternal* topologyInt, mscorlib::System::String* ip, int32_t port);
		static bool IsPortOpen(mscorlib::System::String* ip, int32_t port);
		static void ConnectAsNetworkHost(int32_t hostId, mscorlib::System::String* address, int32_t port, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID network, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID source, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID node, uint8_t& error);
		static void ConnectAsNetworkHostInternal(int32_t hostId, mscorlib::System::String* address, int32_t port, uint64_t network, uint64_t source, uint16_t node, uint8_t& error);
		static UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType ReceiveRelayEventFromHost(int32_t hostId, uint8_t& error);
		static int32_t ReceiveRelayEventFromHostInternal(int32_t hostId, uint8_t& error);
		static int32_t ConnectToNetworkPeer(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exceptionConnectionId, int32_t relaySlotId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID network, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID source, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID node, int32_t bytesPerSec, float bucketSizeFactor, uint8_t& error);
		static int32_t ConnectToNetworkPeer(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exceptionConnectionId, int32_t relaySlotId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID network, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID source, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID node, uint8_t& error);
		static int32_t ConnectToNetworkPeerInternal(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exceptionConnectionId, int32_t relaySlotId, uint64_t network, uint64_t source, uint16_t node, int32_t bytesPerSec, float bucketSizeFactor, uint8_t& error);
		static int32_t GetCurrentRTT(int32_t hostId, int32_t connectionId, uint8_t& error);
		static mscorlib::System::String* GetConnectionInfo(int32_t hostId, int32_t connectionId, int32_t& port, uint64_t& network, uint16_t& dstNode, uint8_t& error);
		static void GetConnectionInfo(int32_t hostId, int32_t connectionId, mscorlib::System::String& address, int32_t& port, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID& network, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID& dstNode, uint8_t& error);
		static int32_t GetMaxPacketSize();
		static bool RemoveHost(int32_t hostId);
		static bool get_IsStarted();
		static bool IsStartedInternal();
		static int32_t Connect(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exeptionConnectionId, uint8_t& error);
		static int32_t ConnectWithSimulatorInternal(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exeptionConnectionId, uint8_t& error, UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfigInternal* conf);
		static int32_t ConnectWithSimulator(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exeptionConnectionId, uint8_t& error, UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfig* conf);
		static bool Disconnect(int32_t hostId, int32_t connectionId, uint8_t& error);
		static int32_t Internal_ConnectEndPoint(int32_t hostId, IL2CPP::Array<uint8_t>* sockAddrStorage, int32_t sockAddrStorageLen, int32_t exceptionConnectionId, uint8_t& error);
		static bool Send(int32_t hostId, int32_t connectionId, int32_t channelId, IL2CPP::Array<uint8_t>* buffer, int32_t size, uint8_t& error);
		static bool SendWrapper(int32_t hostId, int32_t connectionId, int32_t channelId, IL2CPP::Array<uint8_t>* buffer, int32_t size, uint8_t& error);
		static UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType Receive(int32_t& hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error);
		static int32_t PopData(int32_t& hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error);
		static UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType ReceiveFromHost(int32_t hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error);
		static int32_t PopDataFromHost(int32_t hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error);
		static void SetPacketStat(int32_t direction, int32_t packetStatId, int32_t numMsgs, int32_t numBytes);
		static void SetNetworkEventAvailableCallback(mscorlib::System::Action_1<mscorlib::System::Int32>* callback);
		static void Cleanup();
		static void SetConnectionReadyForSendCallback(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Int32>* callback);
		static bool StartBroadcastDiscoveryWithData(int32_t hostId, int32_t broadcastPort, int32_t key, int32_t version, int32_t subversion, IL2CPP::Array<uint8_t>* buffer, int32_t size, int32_t timeout, uint8_t& error);
		static bool StartBroadcastDiscoveryWithoutData(int32_t hostId, int32_t broadcastPort, int32_t key, int32_t version, int32_t subversion, int32_t timeout, uint8_t& error);
		static bool StartBroadcastDiscovery(int32_t hostId, int32_t broadcastPort, int32_t key, int32_t version, int32_t subversion, IL2CPP::Array<uint8_t>* buffer, int32_t size, int32_t timeout, uint8_t& error);
		static void StopBroadcastDiscovery();
		static void SetBroadcastCredentials(int32_t hostId, int32_t key, int32_t version, int32_t subversion, uint8_t& error);
		static mscorlib::System::String* GetBroadcastConnectionInfo(int32_t hostId, int32_t& port, uint8_t& error);
		static void GetBroadcastConnectionInfo(int32_t hostId, mscorlib::System::String& address, int32_t& port, uint8_t& error);
		static void GetBroadcastConnectionMessage(int32_t hostId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error);
		static void SetMulticastLock(bool enabled);
		static void GetBroadcastConnectionMessageInternal(int32_t hostId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error);
		static void CheckTopology(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology);
		static void _cctor();
	};
}

