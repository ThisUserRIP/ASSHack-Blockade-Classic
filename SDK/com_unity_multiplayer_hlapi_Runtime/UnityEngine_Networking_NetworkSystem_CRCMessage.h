#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_MessageBase.h"
#include "UnityEngine_Networking_NetworkSystem_CRCMessageEntry.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct CRCMessageEntry; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem
{
	struct CRCMessage : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::CRCMessageEntry>* scripts;
		void Deserialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		void Serialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer);
		void _ctor();
	};
}

