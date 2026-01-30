#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_NetworkConnection.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct LocalClient; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct MessageBase; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct ULocalConnectionToClient : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient* m_LocalClient;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient* get_localClient();
		void _ctor(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient* localClient);
		bool Send(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		bool SendUnreliable(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		bool SendByChannel(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg, int32_t channelId);
		bool SendBytes(IL2CPP::Array<uint8_t>* bytes, int32_t numBytes, int32_t channelId);
		bool SendWriter(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, int32_t channelId);
		void GetStatsOut(int32_t& numMsgs, int32_t& numBufferedMsgs, int32_t& numBytes, int32_t& lastBufferedPerSecond);
		void GetStatsIn(int32_t& numMsgs, int32_t& numBytes);
	};
}

