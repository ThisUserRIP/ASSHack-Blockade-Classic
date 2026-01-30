#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_MessageBase.h"
#include "UnityEngine_Networking_NetworkInstanceId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkInstanceId; };
#include "UnityEngine_Networking_NetworkHash128.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkHash128; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem
{
	struct ObjectSpawnMessage : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId;
		UnityEngine_CoreModule::UnityEngine::Vector3 position;
		IL2CPP::Array<uint8_t>* payload;
		UnityEngine_CoreModule::UnityEngine::Quaternion rotation;
		void Deserialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		void Serialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer);
		void _ctor();
	};
}

