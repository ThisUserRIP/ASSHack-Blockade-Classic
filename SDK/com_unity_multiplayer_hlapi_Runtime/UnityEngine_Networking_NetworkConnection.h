#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct ChannelBuffer; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct PlayerController; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkIdentity; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessageDelegate; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessageHandlers; };
#include "UnityEngine_Networking_NetworkInstanceId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkInstanceId; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_NetworkError.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection_PacketStat; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct HostTopology; };
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_QosType.h"
#include "UnityEngine_Networking_ChannelOption.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct MessageBase; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkConnection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ChannelBuffer*>* m_Channels;
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController>* m_PlayerControllers;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* m_NetMsg;
		System_Core::System::Collections::Generic::HashSet_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity>* m_VisList;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* m_Writer;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate>* m_MessageHandlersDict;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageHandlers* m_MessageHandlers;
		System_Core::System::Collections::Generic::HashSet_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId>* m_ClientOwnedObjects;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* m_MessageInfo;
		UnityEngine_UNETModule::UnityEngine::Networking::NetworkError error;
		int32_t hostId;
		int32_t connectionId;
		bool isReady;
		mscorlib::System::String* address;
		float lastMessageTime;
		bool logNetworkMessages;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection_PacketStat>* m_PacketStats;
		bool m_Disposed;
		struct StaticFields
		{
			int32_t k_MaxMessageLogSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System_Core::System::Collections::Generic::HashSet_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity>* get_visList();
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController>* get_playerControllers();
		System_Core::System::Collections::Generic::HashSet_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId>* get_clientOwnedObjects();
		bool get_isConnected();
		UnityEngine_UNETModule::UnityEngine::Networking::NetworkError get_lastError();
		void set_lastError(UnityEngine_UNETModule::UnityEngine::Networking::NetworkError value);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection_PacketStat>* get_packetStats();
		void Initialize(mscorlib::System::String* networkAddress, int32_t networkHostId, int32_t networkConnectionId, UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* hostTopology);
		void Finalize();
		void Dispose();
		void Dispose(bool disposing);
		static bool IsSequencedQoS(UnityEngine_UNETModule::UnityEngine::Networking::QosType qos);
		static bool IsReliableQoS(UnityEngine_UNETModule::UnityEngine::Networking::QosType qos);
		bool SetChannelOption(int32_t channelId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ChannelOption option, int32_t value);
		void _ctor();
		void Disconnect();
		void SetHandlers(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageHandlers* handlers);
		bool CheckHandler(int16_t msgType);
		bool InvokeHandlerNoData(int16_t msgType);
		bool InvokeHandler(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, int32_t channelId);
		bool InvokeHandler(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void HandleFragment(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, int32_t channelId);
		void RegisterHandler(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate* handler);
		void UnregisterHandler(int16_t msgType);
		void SetPlayerController(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController* player);
		void RemovePlayerController(int16_t playerControllerId);
		bool GetPlayerController(int16_t playerControllerId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController& playerController);
		void FlushChannels();
		void SetMaxDelay(float seconds);
		bool Send(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		bool SendUnreliable(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		bool SendByChannel(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg, int32_t channelId);
		bool SendBytes(IL2CPP::Array<uint8_t>* bytes, int32_t numBytes, int32_t channelId);
		bool SendWriter(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, int32_t channelId);
		void LogSend(IL2CPP::Array<uint8_t>* bytes);
		bool CheckChannel(int32_t channelId);
		void ResetStats();
		void HandleBytes(IL2CPP::Array<uint8_t>* buffer, int32_t receivedSize, int32_t channelId);
		void HandleReader(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, int32_t receivedSize, int32_t channelId);
		void GetStatsOut(int32_t& numMsgs, int32_t& numBufferedMsgs, int32_t& numBytes, int32_t& lastBufferedPerSecond);
		void GetStatsIn(int32_t& numMsgs, int32_t& numBytes);
		mscorlib::System::String* ToString();
		void AddToVisList(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv);
		void RemoveFromVisList(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv, bool isDestroyed);
		void RemoveObservers();
		void TransportReceive(IL2CPP::Array<uint8_t>* bytes, int32_t numBytes, int32_t channelId);
		void TransportRecieve(IL2CPP::Array<uint8_t>* bytes, int32_t numBytes, int32_t channelId);
		bool TransportSend(IL2CPP::Array<uint8_t>* bytes, int32_t numBytes, int32_t channelId, uint8_t& error);
		void AddOwnedObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* obj);
		void RemoveOwnedObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* obj);
		static void OnFragment(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
	};
}

