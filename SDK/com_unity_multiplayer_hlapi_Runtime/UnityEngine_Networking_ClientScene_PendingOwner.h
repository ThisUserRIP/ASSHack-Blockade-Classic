#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_ClientScene.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct ClientScene; };
#include "UnityEngine_Networking_NetworkInstanceId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkInstanceId; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct ClientScene_PendingOwner
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId;
		int16_t playerControllerId;
	};
}

