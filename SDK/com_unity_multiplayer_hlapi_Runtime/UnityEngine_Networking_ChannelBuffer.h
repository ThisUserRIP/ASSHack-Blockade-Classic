#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
#include "UnityEngine_Networking_ChannelPacket.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct ChannelPacket; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Collections::Generic { template <typename T> struct Queue_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetBuffer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Networking_ChannelOption.h"
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct MessageBase; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct ChannelBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* m_Connection;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ChannelPacket m_CurrentPacket;
		float m_LastFlushTime;
		uint8_t m_ChannelId;
		int32_t m_MaxPacketSize;
		bool m_IsReliable;
		bool m_AllowFragmentation;
		bool m_IsBroken;
		int32_t m_MaxPendingPacketCount;
		System::System::Collections::Generic::Queue_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ChannelPacket>* m_PendingPackets;
		float maxDelay;
		float m_LastBufferedMessageCountTimer;
		int32_t _numMsgsOut_k__BackingField;
		int32_t _numBufferedMsgsOut_k__BackingField;
		int32_t _numBytesOut_k__BackingField;
		int32_t _numMsgsIn_k__BackingField;
		int32_t _numBytesIn_k__BackingField;
		int32_t _numBufferedPerSecond_k__BackingField;
		int32_t _lastBufferedPerSecond_k__BackingField;
		bool m_Disposed;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetBuffer* fragmentBuffer;
		bool readingFragment;
		struct StaticFields
		{
			int32_t k_MaxFreePacketCount;
			int32_t MaxPendingPacketCount;
			int32_t MaxBufferedPackets;
			mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ChannelPacket>* s_FreePackets;
			int32_t pendingPacketCount;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* s_SendWriter;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* s_FragmentWriter;
			int32_t k_PacketHeaderReserveSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_numMsgsOut();
		void set_numMsgsOut(int32_t value);
		int32_t get_numBufferedMsgsOut();
		void set_numBufferedMsgsOut(int32_t value);
		int32_t get_numBytesOut();
		void set_numBytesOut(int32_t value);
		int32_t get_numMsgsIn();
		void set_numMsgsIn(int32_t value);
		int32_t get_numBytesIn();
		void set_numBytesIn(int32_t value);
		int32_t get_numBufferedPerSecond();
		void set_numBufferedPerSecond(int32_t value);
		int32_t get_lastBufferedPerSecond();
		void set_lastBufferedPerSecond(int32_t value);
		void _ctor(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int32_t bufferSize, uint8_t cid, bool isReliable, bool isSequenced);
		void Dispose();
		void Dispose(bool disposing);
		bool SetOption(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ChannelOption option, int32_t value);
		void CheckInternalBuffer();
		bool SendWriter(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer);
		bool Send(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		bool HandleFragment(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		bool SendFragmentBytes(IL2CPP::Array<uint8_t>* bytes, int32_t bytesToSend);
		bool SendBytes(IL2CPP::Array<uint8_t>* bytes, int32_t bytesToSend);
		void QueuePacket();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ChannelPacket AllocPacket();
		static void FreePacket(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ChannelPacket packet);
		bool SendInternalBuffer();
		static void _cctor();
	};
}

