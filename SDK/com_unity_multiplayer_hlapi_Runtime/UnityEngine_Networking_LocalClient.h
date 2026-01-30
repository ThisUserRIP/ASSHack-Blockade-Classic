#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_NetworkClient.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Networking_LocalClient_InternalMsg.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct LocalClient_InternalMsg; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace System::System::Collections::Generic { template <typename T> struct Stack_1; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkServer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct PlayerController; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct MessageBase; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct LocalClient : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient_InternalMsg>* m_InternalMsgs;
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient_InternalMsg>* m_InternalMsgs2;
		System::System::Collections::Generic::Stack_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient_InternalMsg>* m_FreeMessages;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkServer* m_LocalServer;
		bool m_Connected;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* s_InternalMessage;
		struct StaticFields
		{
			int32_t k_InitialFreeMessagePoolSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Disconnect();
		void InternalConnectLocalServer(bool generateConnectMsg);
		void Update();
		void AddLocalPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController* localPlayer);
		void PostInternalMessage(IL2CPP::Array<uint8_t>* buffer, int32_t channelId);
		void PostInternalMessage(int16_t msgType);
		void ProcessInternalMessages();
		void InvokeHandlerOnClient(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg, int32_t channelId);
		void InvokeBytesOnClient(IL2CPP::Array<uint8_t>* buffer, int32_t channelId);
		void _ctor();
	};
}

