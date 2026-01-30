#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct ChannelPacket
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Position;
		IL2CPP::Array<uint8_t>* m_Buffer;
		bool m_IsReliable;
		void _ctor(int32_t packetSize, bool isReliable);
		void Reset();
		bool IsEmpty();
		void Write(IL2CPP::Array<uint8_t>* bytes, int32_t numBytes);
		bool HasSpace(int32_t numBytes);
		bool SendToTransport(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int32_t channelId);
	};
}

