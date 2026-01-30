#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Assembly_CSharp::ENet { struct ENetCallbacks; };
namespace Assembly_CSharp::ENet { struct ENetCallbacks; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace Assembly_CSharp::ENet { struct ENetAddress; };
namespace Assembly_CSharp::ENet { struct ENetAddress; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "ENet_PacketFlags.h"
namespace Assembly_CSharp::ENet { struct ENetEvent; };
namespace Assembly_CSharp::ENet { struct ENetEvent; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "ENet_PeerState.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp::ENet
{
	struct Native : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* nativeLibrary;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t enet_initialize();
		static int32_t enet_initialize_with_callbacks(uint32_t version, Assembly_CSharp::ENet::ENetCallbacks& inits);
		static void enet_deinitialize();
		static uint32_t enet_linked_version();
		static uint32_t enet_time_get();
		static uint64_t enet_crc64(intptr_t buffers, int32_t bufferCount);
		static int32_t enet_address_set_ip(Assembly_CSharp::ENet::ENetAddress& address, mscorlib::System::String* ip);
		static int32_t enet_address_set_hostname(Assembly_CSharp::ENet::ENetAddress& address, mscorlib::System::String* hostName);
		static int32_t enet_address_get_ip(Assembly_CSharp::ENet::ENetAddress& address, mscorlib::System::Text::StringBuilder* ip, intptr_t ipLength);
		static int32_t enet_address_get_hostname(Assembly_CSharp::ENet::ENetAddress& address, mscorlib::System::Text::StringBuilder* hostName, intptr_t nameLength);
		static intptr_t enet_packet_create(IL2CPP::Array<uint8_t>* data, intptr_t dataLength, Assembly_CSharp::ENet::PacketFlags flags);
		static intptr_t enet_packet_create(intptr_t data, intptr_t dataLength, Assembly_CSharp::ENet::PacketFlags flags);
		static intptr_t enet_packet_create_offset(IL2CPP::Array<uint8_t>* data, intptr_t dataLength, intptr_t dataOffset, Assembly_CSharp::ENet::PacketFlags flags);
		static intptr_t enet_packet_create_offset(intptr_t data, intptr_t dataLength, intptr_t dataOffset, Assembly_CSharp::ENet::PacketFlags flags);
		static int32_t enet_packet_check_references(intptr_t packet);
		static intptr_t enet_packet_get_data(intptr_t packet);
		static intptr_t enet_packet_get_user_data(intptr_t packet);
		static intptr_t enet_packet_set_user_data(intptr_t packet, intptr_t userData);
		static int32_t enet_packet_get_length(intptr_t packet);
		static void enet_packet_set_free_callback(intptr_t packet, intptr_t callback);
		static void enet_packet_dispose(intptr_t packet);
		static intptr_t enet_host_create(Assembly_CSharp::ENet::ENetAddress& address, intptr_t peerLimit, intptr_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize);
		static intptr_t enet_host_create(intptr_t address, intptr_t peerLimit, intptr_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize);
		static intptr_t enet_host_connect(intptr_t host, Assembly_CSharp::ENet::ENetAddress& address, intptr_t channelCount, uint32_t data);
		static void enet_host_broadcast(intptr_t host, uint8_t channelID, intptr_t packet);
		static void enet_host_broadcast_exclude(intptr_t host, uint8_t channelID, intptr_t packet, intptr_t excludedPeer);
		static void enet_host_broadcast_selective(intptr_t host, uint8_t channelID, intptr_t packet, IL2CPP::Array<intptr_t>* peers, intptr_t peersLength);
		static int32_t enet_host_service(intptr_t host, Assembly_CSharp::ENet::ENetEvent& event, uint32_t timeout);
		static int32_t enet_host_check_events(intptr_t host, Assembly_CSharp::ENet::ENetEvent& event);
		static void enet_host_channel_limit(intptr_t host, intptr_t channelLimit);
		static void enet_host_bandwidth_limit(intptr_t host, uint32_t incomingBandwidth, uint32_t outgoingBandwidth);
		static uint32_t enet_host_get_peers_count(intptr_t host);
		static uint32_t enet_host_get_packets_sent(intptr_t host);
		static uint32_t enet_host_get_packets_received(intptr_t host);
		static uint32_t enet_host_get_bytes_sent(intptr_t host);
		static uint32_t enet_host_get_bytes_received(intptr_t host);
		static void enet_host_set_max_duplicate_peers(intptr_t host, uint16_t number);
		static void enet_host_set_intercept_callback(intptr_t host, intptr_t callback);
		static void enet_host_set_checksum_callback(intptr_t host, intptr_t callback);
		static void enet_host_flush(intptr_t host);
		static void enet_host_destroy(intptr_t host);
		static void enet_host_prevent_connections(intptr_t host, uint8_t state);
		static void enet_peer_throttle_configure(intptr_t peer, uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold);
		static uint32_t enet_peer_get_id(intptr_t peer);
		static int32_t enet_peer_get_ip(intptr_t peer, IL2CPP::Array<uint8_t>* ip, intptr_t ipLength);
		static uint16_t enet_peer_get_port(intptr_t peer);
		static uint32_t enet_peer_get_mtu(intptr_t peer);
		static Assembly_CSharp::ENet::PeerState enet_peer_get_state(intptr_t peer);
		static uint32_t enet_peer_get_rtt(intptr_t peer);
		static uint32_t enet_peer_get_last_rtt(intptr_t peer);
		static uint32_t enet_peer_get_lastsendtime(intptr_t peer);
		static uint32_t enet_peer_get_lastreceivetime(intptr_t peer);
		static uint64_t enet_peer_get_packets_sent(intptr_t peer);
		static uint64_t enet_peer_get_packets_lost(intptr_t peer);
		static float enet_peer_get_packets_throttle(intptr_t peer);
		static uint64_t enet_peer_get_bytes_sent(intptr_t peer);
		static uint64_t enet_peer_get_bytes_received(intptr_t peer);
		static intptr_t enet_peer_get_data(intptr_t peer);
		static void enet_peer_set_data(intptr_t peer, intptr_t data);
		static int32_t enet_peer_send(intptr_t peer, uint8_t channelID, intptr_t packet);
		static intptr_t enet_peer_receive(intptr_t peer, uint8_t& channelID);
		static void enet_peer_ping(intptr_t peer);
		static void enet_peer_ping_interval(intptr_t peer, uint32_t pingInterval);
		static void enet_peer_timeout(intptr_t peer, uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum);
		static void enet_peer_disconnect(intptr_t peer, uint32_t data);
		static void enet_peer_disconnect_now(intptr_t peer, uint32_t data);
		static void enet_peer_disconnect_later(intptr_t peer, uint32_t data);
		static void enet_peer_reset(intptr_t peer);
	};
}

