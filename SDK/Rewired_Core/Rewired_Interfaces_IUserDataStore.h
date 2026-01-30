#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerType.h"

namespace Rewired_Core::Rewired::Interfaces
{
	struct IUserDataStore
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Save();
		void SaveControllerData(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void SaveControllerData(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void SavePlayerData(int32_t playerId);
		void SaveInputBehavior(int32_t playerId, int32_t behaviorId);
		void Load();
		void LoadControllerData(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void LoadControllerData(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void LoadPlayerData(int32_t playerId);
		void LoadInputBehavior(int32_t playerId, int32_t behaviorId);
	};
}

