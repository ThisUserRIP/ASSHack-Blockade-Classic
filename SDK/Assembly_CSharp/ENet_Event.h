#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "ENet_ENetEvent.h"
namespace Assembly_CSharp::ENet { struct ENetEvent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "ENet_EventType.h"
#include "ENet_Peer.h"
namespace Assembly_CSharp::ENet { struct Peer; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "ENet_Packet.h"
namespace Assembly_CSharp::ENet { struct Packet; };

namespace Assembly_CSharp::ENet
{
	struct Event
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::ENet::ENetEvent nativeEvent;
		Assembly_CSharp::ENet::ENetEvent get_NativeData();
		void set_NativeData(Assembly_CSharp::ENet::ENetEvent value);
		void _ctor(Assembly_CSharp::ENet::ENetEvent event);
		Assembly_CSharp::ENet::EventType get_Type();
		Assembly_CSharp::ENet::Peer get_Peer();
		uint8_t get_ChannelID();
		uint32_t get_Data();
		Assembly_CSharp::ENet::Packet get_Packet();
	};
}

