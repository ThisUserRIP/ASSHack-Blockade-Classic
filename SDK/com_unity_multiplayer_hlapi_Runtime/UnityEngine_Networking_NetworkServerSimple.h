#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct HostTopology; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessageHandlers; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessageDelegate; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ConnectionConfig; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_Types_NetworkID.h"
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_Types_SourceID.h"
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_Types_NodeID.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkServerSimple : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_Initialized;
		int32_t m_ListenPort;
		int32_t m_ServerHostId;
		int32_t m_RelaySlotId;
		bool m_UseWebSockets;
		IL2CPP::Array<uint8_t>* m_MsgBuffer;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* m_MsgReader;
		mscorlib::System::Type* m_NetworkConnectionClass;
		UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* m_HostTopology;
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* m_Connections;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* m_ConnectionsReadOnly;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageHandlers* m_MessageHandlers;
		int32_t get_listenPort();
		void set_listenPort(int32_t value);
		int32_t get_serverHostId();
		void set_serverHostId(int32_t value);
		UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* get_hostTopology();
		bool get_useWebSockets();
		void set_useWebSockets(bool value);
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* get_connections();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate>* get_handlers();
		IL2CPP::Array<uint8_t>* get_messageBuffer();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* get_messageReader();
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
		void Initialize();
		bool Configure(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config, int32_t maxConnections);
		bool Configure(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology);
		bool Listen(mscorlib::System::String* ipAddress, int32_t serverListenPort);
		bool Listen(int32_t serverListenPort);
		bool Listen(int32_t serverListenPort, UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology);
		void ListenRelay(mscorlib::System::String* relayIp, int32_t relayPort, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netGuid, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID sourceId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID nodeId);
		void Stop();
		void RegisterHandlerSafe(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate* handler);
		void RegisterHandler(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate* handler);
		void UnregisterHandler(int16_t msgType);
		void ClearHandlers();
		void UpdateConnections();
		void Update();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* FindConnection(int32_t connectionId);
		bool SetConnectionAtIndex(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		bool RemoveConnectionAtIndex(int32_t connectionId);
		void HandleConnect(int32_t connectionId, uint8_t error);
		void HandleDisconnect(int32_t connectionId, uint8_t error);
		void HandleData(int32_t connectionId, int32_t channelId, int32_t receivedSize, uint8_t error);
		void SendBytesTo(int32_t connectionId, IL2CPP::Array<uint8_t>* bytes, int32_t numBytes, int32_t channelId);
		void SendWriterTo(int32_t connectionId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, int32_t channelId);
		void Disconnect(int32_t connectionId);
		void DisconnectAllConnections();
		void OnConnectError(int32_t connectionId, uint8_t error);
		void OnDataError(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, uint8_t error);
		void OnDisconnectError(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, uint8_t error);
		void OnConnected(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnDisconnected(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnData(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int32_t receivedSize, int32_t channelId);
	};
}

