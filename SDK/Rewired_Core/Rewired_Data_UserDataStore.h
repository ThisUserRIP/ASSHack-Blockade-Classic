#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "Rewired_ControllerIdentifier.h"
namespace Rewired_Core::Rewired { struct ControllerIdentifier; };
namespace Rewired_Core::Rewired { struct ControllerStatusChangedEventArgs; };

namespace Rewired_Core::Rewired::Data
{
	struct UserDataStore : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnDestroy();
		void Initialize();
		void Load();
		void LoadControllerData(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void LoadControllerData(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void LoadPlayerData(int32_t playerId);
		void LoadInputBehavior(int32_t playerId, int32_t behaviorId);
		void Save();
		void SaveControllerData(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void SaveControllerData(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void SavePlayerData(int32_t playerId);
		void SaveInputBehavior(int32_t playerId, int32_t behaviorId);
		void SaveControllerMap(int32_t playerId, Rewired_Core::Rewired::ControllerMap* controllerMap);
		Rewired_Core::Rewired::ControllerMap* LoadControllerMap(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t categoryId, int32_t layoutId);
		void OnInitialize();
		void OnControllerConnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void OnControllerDisconnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void OnControllerPreDiscconnect(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void OnControllerPreDisconnect(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void _ctor();
	};
}

