#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_NetworkServerSimple.h"
#include "UnityEngine_Networking_NetworkServer.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkServer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkServer_ServerSimpleWrapper : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkServerSimple
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkServer* m_Server;
		void _ctor(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkServer* server);
		void OnConnectError(int32_t connectionId, uint8_t error);
		void OnDataError(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, uint8_t error);
		void OnDisconnectError(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, uint8_t error);
		void OnConnected(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnDisconnected(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnData(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int32_t receivedSize, int32_t channelId);
	};
}

