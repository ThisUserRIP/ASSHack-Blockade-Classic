#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_NetworkBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_LoadSceneMode.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkLobbyManager; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkLobbyPlayer : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool ShowLobbyGUI;
		uint8_t m_Slot;
		bool m_ReadyToBegin;
		uint8_t get_slot();
		void set_slot(uint8_t value);
		bool get_readyToBegin();
		void set_readyToBegin(bool value);
		void Start();
		void OnEnable();
		void OnDisable();
		void OnStartClient();
		void SendReadyToBeginMessage();
		void SendNotReadyToBeginMessage();
		void SendSceneLoadedMessage();
		void OnSceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkLobbyManager* GetLobbyManager();
		void RemovePlayer();
		void OnClientEnterLobby();
		void OnClientExitLobby();
		void OnClientReady(bool readyState);
		bool OnSerialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, bool initialState);
		void OnDeserialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool initialState);
		void OnGUI();
		void _ctor();
	};
}

