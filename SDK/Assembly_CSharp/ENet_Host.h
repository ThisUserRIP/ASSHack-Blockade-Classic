#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "ENet_Address.h"
namespace Assembly_CSharp::ENet { struct Address; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::ENet { struct Packet; };
namespace Assembly_CSharp::ENet { struct Packet; };
#include "ENet_Peer.h"
namespace Assembly_CSharp::ENet { struct Peer; };
namespace Assembly_CSharp::ENet { struct Event; };
namespace Assembly_CSharp::ENet { struct Event; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace Assembly_CSharp::ENet { struct InterceptCallback; };
namespace Assembly_CSharp::ENet { struct ChecksumCallback; };

namespace Assembly_CSharp::ENet
{
	struct Host : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t nativeHost;
		intptr_t get_NativeData();
		void set_NativeData(intptr_t value);
		void Dispose();
		void Dispose(bool disposing);
		void Finalize();
		bool get_IsSet();
		uint32_t get_PeersCount();
		uint32_t get_PacketsSent();
		uint32_t get_PacketsReceived();
		uint32_t get_BytesSent();
		uint32_t get_BytesReceived();
		void ThrowIfNotCreated();
		static void ThrowIfChannelsExceeded(int32_t channelLimit);
		void Create();
		void Create(int32_t bufferSize);
		void Create(mscorlib::System::Nullable_1<Assembly_CSharp::ENet::Address> address, int32_t peerLimit);
		void Create(mscorlib::System::Nullable_1<Assembly_CSharp::ENet::Address> address, int32_t peerLimit, int32_t channelLimit);
		void Create(int32_t peerLimit, int32_t channelLimit);
		void Create(int32_t peerLimit, int32_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth);
		void Create(mscorlib::System::Nullable_1<Assembly_CSharp::ENet::Address> address, int32_t peerLimit, int32_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth);
		void Create(mscorlib::System::Nullable_1<Assembly_CSharp::ENet::Address> address, int32_t peerLimit, int32_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize);
		void PreventConnections(bool state);
		void Broadcast(uint8_t channelID, Assembly_CSharp::ENet::Packet& packet);
		void Broadcast(uint8_t channelID, Assembly_CSharp::ENet::Packet& packet, Assembly_CSharp::ENet::Peer excludedPeer);
		void Broadcast(uint8_t channelID, Assembly_CSharp::ENet::Packet& packet, IL2CPP::Array<Assembly_CSharp::ENet::Peer>* peers);
		int32_t CheckEvents(Assembly_CSharp::ENet::Event& event);
		Assembly_CSharp::ENet::Peer Connect(Assembly_CSharp::ENet::Address address);
		Assembly_CSharp::ENet::Peer Connect(Assembly_CSharp::ENet::Address address, int32_t channelLimit);
		Assembly_CSharp::ENet::Peer Connect(Assembly_CSharp::ENet::Address address, int32_t channelLimit, uint32_t data);
		int32_t Service(int32_t timeout, Assembly_CSharp::ENet::Event& event);
		void SetBandwidthLimit(uint32_t incomingBandwidth, uint32_t outgoingBandwidth);
		void SetChannelLimit(int32_t channelLimit);
		void SetMaxDuplicatePeers(uint16_t number);
		void SetInterceptCallback(intptr_t callback);
		void SetInterceptCallback(Assembly_CSharp::ENet::InterceptCallback* callback);
		void SetChecksumCallback(intptr_t callback);
		void SetChecksumCallback(Assembly_CSharp::ENet::ChecksumCallback* callback);
		void Flush();
		void _ctor();
	};
}

