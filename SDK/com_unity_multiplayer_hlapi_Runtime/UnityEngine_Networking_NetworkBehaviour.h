#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkIdentity; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkBehaviour_Invoker; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "UnityEngine_Networking_NetworkInstanceId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkInstanceId; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
namespace mscorlib::System { struct String; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkBehaviour_CmdDelegate; };
#include "UnityEngine_Networking_NetworkBehaviour_UNetInvokeType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkBehaviour : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_SyncVarDirtyBits;
		float m_LastSendTime;
		bool m_SyncVarGuard;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* m_MyView;
		struct StaticFields
		{
			float k_DefaultSendInterval;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_Invoker>* s_CmdHandlerDelegates;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_localPlayerAuthority();
		bool get_isServer();
		bool get_isClient();
		bool get_isLocalPlayer();
		bool get_hasAuthority();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId get_netId();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* get_connectionToServer();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* get_connectionToClient();
		int16_t get_playerControllerId();
		uint32_t get_syncVarDirtyBits();
		bool get_syncVarHookGuard();
		void set_syncVarHookGuard(bool value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* get_netIdentity();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* get_myView();
		void SendCommandInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, int32_t channelId, mscorlib::System::String* cmdName);
		bool InvokeCommand(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		void SendRPCInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, int32_t channelId, mscorlib::System::String* rpcName);
		void SendTargetRPCInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, int32_t channelId, mscorlib::System::String* rpcName);
		bool InvokeRPC(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		void SendEventInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, int32_t channelId, mscorlib::System::String* eventName);
		bool InvokeSyncEvent(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		bool InvokeSyncList(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		static void RegisterCommandDelegate(mscorlib::System::Type* invokeClass, int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_CmdDelegate* func);
		static void RegisterRpcDelegate(mscorlib::System::Type* invokeClass, int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_CmdDelegate* func);
		static void RegisterEventDelegate(mscorlib::System::Type* invokeClass, int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_CmdDelegate* func);
		static void RegisterSyncListDelegate(mscorlib::System::Type* invokeClass, int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_CmdDelegate* func);
		static mscorlib::System::String* GetInvoker(int32_t cmdHash);
		static bool GetInvokerForHashCommand(int32_t cmdHash, mscorlib::System::Type& invokeClass, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_CmdDelegate& invokeFunction);
		static bool GetInvokerForHashClientRpc(int32_t cmdHash, mscorlib::System::Type& invokeClass, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_CmdDelegate& invokeFunction);
		static bool GetInvokerForHashSyncList(int32_t cmdHash, mscorlib::System::Type& invokeClass, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_CmdDelegate& invokeFunction);
		static bool GetInvokerForHashSyncEvent(int32_t cmdHash, mscorlib::System::Type& invokeClass, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_CmdDelegate& invokeFunction);
		static bool GetInvokerForHash(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_UNetInvokeType invokeType, mscorlib::System::Type& invokeClass, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_CmdDelegate& invokeFunction);
		static void DumpInvokers();
		bool ContainsCommandDelegate(int32_t cmdHash);
		bool InvokeCommandDelegate(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		bool InvokeRpcDelegate(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		bool InvokeSyncEventDelegate(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		bool InvokeSyncListDelegate(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		static mscorlib::System::String* GetCmdHashHandlerName(int32_t cmdHash);
		static mscorlib::System::String* GetCmdHashPrefixName(int32_t cmdHash, mscorlib::System::String* prefix);
		static mscorlib::System::String* GetCmdHashCmdName(int32_t cmdHash);
		static mscorlib::System::String* GetCmdHashRpcName(int32_t cmdHash);
		static mscorlib::System::String* GetCmdHashEventName(int32_t cmdHash);
		static mscorlib::System::String* GetCmdHashListName(int32_t cmdHash);
		void SetSyncVarGameObject(UnityEngine_CoreModule::UnityEngine::GameObject* newGameObject, UnityEngine_CoreModule::UnityEngine::GameObject& gameObjectField, uint32_t dirtyBit, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId& netIdField);
		template <typename T> void SetSyncVar(T* value, T& fieldValue, uint32_t dirtyBit)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSyncVar", std::vector<std::string> { GetGenericTypeName<T>(), GetGenericTypeName<T>() + (std::string)"&", "System.UInt32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)value;
			params[1] = (intptr_t)&fieldValue;
			params[2] = (intptr_t)&dirtyBit;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void SetDirtyBit(uint32_t dirtyBit);
		void ClearAllDirtyBits();
		int32_t GetDirtyChannel();
		bool OnSerialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, bool initialState);
		void OnDeserialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool initialState);
		void PreStartClient();
		void OnNetworkDestroy();
		void OnStartServer();
		void OnStartClient();
		void OnStartLocalPlayer();
		void OnStartAuthority();
		void OnStopAuthority();
		bool OnRebuildObservers(System_Core::System::Collections::Generic::HashSet_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* observers, bool initialize);
		void OnSetLocalVisibility(bool vis);
		bool OnCheckObserver(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		int32_t GetNetworkChannel();
		float GetNetworkSendInterval();
		void _ctor();
		static void _cctor();
	};
}

