#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct HostTopology; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace System::System::Net { struct EndPoint; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct CRCMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessageHandlers; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };
#include "UnityEngine_Networking_NetworkClient_ConnectState.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct PeerInfoMessage; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessageDelegate; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ConnectionConfig; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchInfo; };
namespace mscorlib::System { struct IAsyncResult; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct MessageBase; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection_PacketStat; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkClient : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* m_NetworkConnectionClass;
		UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* m_HostTopology;
		int32_t m_HostPort;
		bool m_UseSimulator;
		int32_t m_SimulatedLatency;
		float m_PacketLoss;
		mscorlib::System::String* m_ServerIp;
		int32_t m_ServerPort;
		int32_t m_ClientId;
		int32_t m_ClientConnectionId;
		int32_t m_StatResetTime;
		System::System::Net::EndPoint* m_RemoteEndPoint;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageHandlers* m_MessageHandlers;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* m_Connection;
		IL2CPP::Array<uint8_t>* m_MsgBuffer;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* m_MsgReader;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient_ConnectState m_AsyncConnect;
		mscorlib::System::String* m_RequestedServerHost;
		struct StaticFields
		{
			int32_t k_MaxEventsPerFrame;
			mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient>* s_Clients;
			bool s_IsActive;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::CRCMessage* s_CRCMessage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient>* get_allClients();
		static bool get_active();
		void SetHandlers(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		mscorlib::System::String* get_serverIp();
		int32_t get_serverPort();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* get_connection();
		IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage*>* get_peers();
		int32_t get_hostId();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate>* get_handlers();
		int32_t get_numChannels();
		UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* get_hostTopology();
		int32_t get_hostPort();
		void set_hostPort(int32_t value);
		bool get_isConnected();
		mscorlib::System::Type* get_networkConnectionClass();
		template <typename T> void SetNetworkConnectionClass()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetNetworkConnectionClass");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor();
		void _ctor(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		bool Configure(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config, int32_t maxConnections);
		bool Configure(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology);
		void Connect(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* matchInfo);
		bool ReconnectToNewHost(mscorlib::System::String* serverIp, int32_t serverPort);
		bool ReconnectToNewHost(System::System::Net::EndPoint* secureTunnelEndPoint);
		void ConnectWithSimulator(mscorlib::System::String* serverIp, int32_t serverPort, int32_t latency, float packetLoss);
		static bool IsValidIpV6(mscorlib::System::String* address);
		void Connect(mscorlib::System::String* serverIp, int32_t serverPort);
		void Connect(System::System::Net::EndPoint* secureTunnelEndPoint);
		void PrepareForConnect();
		void PrepareForConnect(bool usePlatformSpecificProtocols);
		static void GetHostAddressesCallback(mscorlib::System::IAsyncResult* ar);
		void ContinueConnect();
		void ConnectWithRelay(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* info);
		void Disconnect();
		bool Send(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		bool SendWriter(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, int32_t channelId);
		bool SendBytes(IL2CPP::Array<uint8_t>* data, int32_t numBytes, int32_t channelId);
		bool SendUnreliable(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		bool SendByChannel(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg, int32_t channelId);
		void SetMaxDelay(float seconds);
		void Shutdown();
		void Update();
		void GenerateConnectError(int32_t error);
		void GenerateDataError(int32_t error);
		void GenerateDisconnectError(int32_t error);
		void GenerateError(int32_t error);
		void GetStatsOut(int32_t& numMsgs, int32_t& numBufferedMsgs, int32_t& numBytes, int32_t& lastBufferedPerSecond);
		void GetStatsIn(int32_t& numMsgs, int32_t& numBytes);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection_PacketStat>* GetConnectionStats();
		void ResetConnectionStats();
		int32_t GetRTT();
		void RegisterSystemHandlers(bool localClient);
		void OnCRC(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void RegisterHandler(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate* handler);
		void RegisterHandlerSafe(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate* handler);
		void UnregisterHandler(int16_t msgType);
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection_PacketStat>* GetTotalConnectionStats();
		static void AddClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* client);
		static bool RemoveClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* client);
		static void UpdateClients();
		static void ShutdownAll();
		static void SetActive(bool state);
		static void _cctor();
	};
}

