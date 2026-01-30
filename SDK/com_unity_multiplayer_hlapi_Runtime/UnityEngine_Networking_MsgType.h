#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct MsgType : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int16_t ObjectDestroy;
			int16_t Rpc;
			int16_t ObjectSpawn;
			int16_t Owner;
			int16_t Command;
			int16_t LocalPlayerTransform;
			int16_t SyncEvent;
			int16_t UpdateVars;
			int16_t SyncList;
			int16_t ObjectSpawnScene;
			int16_t NetworkInfo;
			int16_t SpawnFinished;
			int16_t ObjectHide;
			int16_t CRC;
			int16_t LocalClientAuthority;
			int16_t LocalChildTransform;
			int16_t Fragment;
			int16_t PeerClientAuthority;
			int16_t UserMessage;
			int16_t HLAPIMsg;
			int16_t LLAPIMsg;
			int16_t HLAPIResend;
			int16_t HLAPIPending;
			int16_t InternalHighest;
			int16_t Connect;
			int16_t Disconnect;
			int16_t Error;
			int16_t Ready;
			int16_t NotReady;
			int16_t AddPlayer;
			int16_t RemovePlayer;
			int16_t Scene;
			int16_t Animation;
			int16_t AnimationParameters;
			int16_t AnimationTrigger;
			int16_t LobbyReadyToBegin;
			int16_t LobbySceneLoaded;
			int16_t LobbyAddPlayerFailed;
			int16_t LobbyReturnToLobby;
			int16_t ReconnectPlayer;
			int16_t Highest;
			IL2CPP::Array<mscorlib::System::String*>* msgLabels;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* MsgTypeToString(int16_t value);
		void _ctor();
		static void _cctor();
	};
}

