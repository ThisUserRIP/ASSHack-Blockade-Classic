#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ConnectionConfig; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	struct ConnectionConfigInternal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config);
		void Dispose(bool disposing);
		void Finalize();
		void Dispose();
		static intptr_t InternalCreate();
		static void InternalDestroy(intptr_t ptr);
		uint8_t AddChannel(int32_t value);
		bool SetPacketSize(uint16_t value);
		void set_FragmentSize(uint16_t value);
		void set_ResendTimeout(uint32_t value);
		void set_DisconnectTimeout(uint32_t value);
		void set_ConnectTimeout(uint32_t value);
		void set_MinUpdateTimeout(uint32_t value);
		void set_PingTimeout(uint32_t value);
		void set_ReducedPingTimeout(uint32_t value);
		void set_AllCostTimeout(uint32_t value);
		void set_NetworkDropThreshold(uint8_t value);
		void set_OverflowDropThreshold(uint8_t value);
		void set_MaxConnectionAttempt(uint8_t value);
		void set_AckDelay(uint32_t value);
		void set_SendDelay(uint32_t value);
		void set_MaxCombinedReliableMessageSize(uint16_t value);
		void set_MaxCombinedReliableMessageCount(uint16_t value);
		void set_MaxSentMessageQueueSize(uint16_t value);
		void set_AcksType(uint8_t value);
		void set_UsePlatformSpecificProtocols(bool value);
		void set_InitialBandwidth(uint32_t value);
		void set_BandwidthPeakFactor(float value);
		void set_WebSocketReceiveBufferMaxSize(uint16_t value);
		void set_UdpSocketReceiveBufferMaxSize(uint32_t value);
		int32_t SetSSLCertFilePath(mscorlib::System::String* value);
		int32_t SetSSLPrivateKeyFilePath(mscorlib::System::String* value);
		int32_t SetSSLCAFilePath(mscorlib::System::String* value);
		bool MakeChannelsSharedOrder(IL2CPP::Array<uint8_t>* values);
	};
}

