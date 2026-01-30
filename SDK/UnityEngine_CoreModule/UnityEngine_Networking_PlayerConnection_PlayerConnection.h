#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_ScriptableObject.h"
namespace UnityEngine_CoreModule::UnityEngine { struct IPlayerEditorConnectionNative; };
namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection { struct PlayerEditorConnectionEvents; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection { struct MessageEventArgs; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection
{
	struct PlayerConnection : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* m_PlayerEditorConnectionEvents;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* m_connectedPlayers;
		bool m_IsInitilized;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::IPlayerEditorConnectionNative* connectionNative;
			UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerConnection* s_Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerConnection* get_instance();
		bool get_isConnected();
		static UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerConnection* CreateInstance();
		void OnEnable();
		UnityEngine_CoreModule::UnityEngine::IPlayerEditorConnectionNative* GetConnectionNativeApi();
		void Register(mscorlib::System::Guid messageId, UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::MessageEventArgs>* callback);
		void Unregister(mscorlib::System::Guid messageId, UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::MessageEventArgs>* callback);
		void RegisterConnection(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Int32>* callback);
		void RegisterDisconnection(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Int32>* callback);
		void UnregisterConnection(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Int32>* callback);
		void UnregisterDisconnection(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Int32>* callback);
		void Send(mscorlib::System::Guid messageId, IL2CPP::Array<uint8_t>* data);
		bool TrySend(mscorlib::System::Guid messageId, IL2CPP::Array<uint8_t>* data);
		bool BlockUntilRecvMsg(mscorlib::System::Guid messageId, int32_t timeout);
		void DisconnectAll();
		static void MessageCallbackInternal(intptr_t data, uint64_t size, uint64_t guid, mscorlib::System::String* messageId);
		static void ConnectedCallbackInternal(int32_t playerId);
		static void DisconnectedCallback(int32_t playerId);
		void _ctor();
	};
}

