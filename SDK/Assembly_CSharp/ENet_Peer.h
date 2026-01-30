#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "ENet_PeerState.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::ENet { struct Packet; };
namespace Assembly_CSharp::ENet { struct Packet; };

namespace Assembly_CSharp::ENet
{
	struct Peer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t nativePeer;
		uint32_t nativeID;
		intptr_t get_NativeData();
		void set_NativeData(intptr_t value);
		void _ctor(intptr_t peer);
		bool get_IsSet();
		uint32_t get_ID();
		mscorlib::System::String* get_IP();
		uint16_t get_Port();
		uint32_t get_MTU();
		Assembly_CSharp::ENet::PeerState get_State();
		uint32_t get_RoundTripTime();
		uint32_t get_LastRoundTripTime();
		uint32_t get_LastSendTime();
		uint32_t get_LastReceiveTime();
		uint64_t get_PacketsSent();
		uint64_t get_PacketsLost();
		float get_PacketsThrottle();
		uint64_t get_BytesSent();
		uint64_t get_BytesReceived();
		intptr_t get_Data();
		void set_Data(intptr_t value);
		void ThrowIfNotCreated();
		void ConfigureThrottle(uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold);
		int32_t Send(uint8_t channelID, Assembly_CSharp::ENet::Packet& packet);
		bool Receive(uint8_t& channelID, Assembly_CSharp::ENet::Packet& packet);
		void Ping();
		void PingInterval(uint32_t interval);
		void Timeout(uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum);
		void Disconnect(uint32_t data);
		void DisconnectNow(uint32_t data);
		void DisconnectLater(uint32_t data);
		void Reset();
	};
}

