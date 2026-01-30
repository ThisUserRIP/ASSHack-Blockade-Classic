#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct HostTopology; };
#include "UnityEngine_Networking_NetworkBroadcastResult.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkBroadcastResult; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkDiscovery : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_BroadcastPort;
		int32_t m_BroadcastKey;
		int32_t m_BroadcastVersion;
		int32_t m_BroadcastSubVersion;
		int32_t m_BroadcastInterval;
		bool m_UseNetworkManager;
		mscorlib::System::String* m_BroadcastData;
		bool m_ShowGUI;
		int32_t m_OffsetX;
		int32_t m_OffsetY;
		int32_t m_HostId;
		bool m_Running;
		bool m_IsServer;
		bool m_IsClient;
		IL2CPP::Array<uint8_t>* m_MsgOutBuffer;
		IL2CPP::Array<uint8_t>* m_MsgInBuffer;
		UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* m_DefaultTopology;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBroadcastResult>* m_BroadcastsReceived;
		struct StaticFields
		{
			int32_t k_MaxBroadcastMsgSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_broadcastPort();
		void set_broadcastPort(int32_t value);
		int32_t get_broadcastKey();
		void set_broadcastKey(int32_t value);
		int32_t get_broadcastVersion();
		void set_broadcastVersion(int32_t value);
		int32_t get_broadcastSubVersion();
		void set_broadcastSubVersion(int32_t value);
		int32_t get_broadcastInterval();
		void set_broadcastInterval(int32_t value);
		bool get_useNetworkManager();
		void set_useNetworkManager(bool value);
		mscorlib::System::String* get_broadcastData();
		void set_broadcastData(mscorlib::System::String* value);
		bool get_showGUI();
		void set_showGUI(bool value);
		int32_t get_offsetX();
		void set_offsetX(int32_t value);
		int32_t get_offsetY();
		void set_offsetY(int32_t value);
		int32_t get_hostId();
		void set_hostId(int32_t value);
		bool get_running();
		void set_running(bool value);
		bool get_isServer();
		void set_isServer(bool value);
		bool get_isClient();
		void set_isClient(bool value);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBroadcastResult>* get_broadcastsReceived();
		static IL2CPP::Array<uint8_t>* StringToBytes(mscorlib::System::String* str);
		static mscorlib::System::String* BytesToString(IL2CPP::Array<uint8_t>* bytes);
		bool Initialize();
		bool StartAsClient();
		bool StartAsServer();
		void StopBroadcast();
		void Update();
		void OnDestroy();
		void OnReceivedBroadcast(mscorlib::System::String* fromAddress, mscorlib::System::String* data);
		void OnGUI();
		void _ctor();
	};
}

