#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "UnityEngine_Networking_ConnectionAcksType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ChannelQOS; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic::List_1_System::Collections { template <typename T> struct List_1_System_Collections_Generic_List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Networking_QosType.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	struct ConnectionConfig : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint16_t m_PacketSize;
		uint16_t m_FragmentSize;
		uint32_t m_ResendTimeout;
		uint32_t m_DisconnectTimeout;
		uint32_t m_ConnectTimeout;
		uint32_t m_MinUpdateTimeout;
		uint32_t m_PingTimeout;
		uint32_t m_ReducedPingTimeout;
		uint32_t m_AllCostTimeout;
		uint8_t m_NetworkDropThreshold;
		uint8_t m_OverflowDropThreshold;
		uint8_t m_MaxConnectionAttempt;
		uint32_t m_AckDelay;
		uint32_t m_SendDelay;
		uint16_t m_MaxCombinedReliableMessageSize;
		uint16_t m_MaxCombinedReliableMessageCount;
		uint16_t m_MaxSentMessageQueueSize;
		UnityEngine_UNETModule::UnityEngine::Networking::ConnectionAcksType m_AcksType;
		bool m_UsePlatformSpecificProtocols;
		uint32_t m_InitialBandwidth;
		float m_BandwidthPeakFactor;
		uint16_t m_WebSocketReceiveBufferMaxSize;
		uint32_t m_UdpSocketReceiveBufferMaxSize;
		mscorlib::System::String* m_SSLCertFilePath;
		mscorlib::System::String* m_SSLPrivateKeyFilePath;
		mscorlib::System::String* m_SSLCAFilePath;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::ChannelQOS>* m_Channels;
		mscorlib::System::Collections::Generic::List_1_System::Collections::List_1_System_Collections_Generic_List_1<mscorlib::System::Collections::Generic::List_1<mscorlib::System::Byte>>* m_SharedOrderChannels;
		struct StaticFields
		{
			int32_t g_MinPacketSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config);
		static void Validate(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config);
		uint16_t get_PacketSize();
		uint16_t get_FragmentSize();
		uint32_t get_ResendTimeout();
		uint32_t get_DisconnectTimeout();
		uint32_t get_ConnectTimeout();
		uint32_t get_MinUpdateTimeout();
		void set_MinUpdateTimeout(uint32_t value);
		uint32_t get_PingTimeout();
		uint32_t get_ReducedPingTimeout();
		uint32_t get_AllCostTimeout();
		uint8_t get_NetworkDropThreshold();
		uint8_t get_OverflowDropThreshold();
		uint8_t get_MaxConnectionAttempt();
		uint32_t get_AckDelay();
		uint32_t get_SendDelay();
		uint16_t get_MaxCombinedReliableMessageSize();
		uint16_t get_MaxCombinedReliableMessageCount();
		uint16_t get_MaxSentMessageQueueSize();
		UnityEngine_UNETModule::UnityEngine::Networking::ConnectionAcksType get_AcksType();
		bool get_UsePlatformSpecificProtocols();
		void set_UsePlatformSpecificProtocols(bool value);
		uint32_t get_InitialBandwidth();
		float get_BandwidthPeakFactor();
		uint16_t get_WebSocketReceiveBufferMaxSize();
		uint32_t get_UdpSocketReceiveBufferMaxSize();
		mscorlib::System::String* get_SSLCertFilePath();
		mscorlib::System::String* get_SSLPrivateKeyFilePath();
		mscorlib::System::String* get_SSLCAFilePath();
		int32_t get_ChannelCount();
		int32_t get_SharedOrderChannelCount();
		uint8_t AddChannel(UnityEngine_UNETModule::UnityEngine::Networking::QosType value);
		UnityEngine_UNETModule::UnityEngine::Networking::QosType GetChannel(uint8_t idx);
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Byte>* GetSharedOrderChannels(uint8_t idx);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::ChannelQOS>* get_Channels();
	};
}

