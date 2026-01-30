#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "UnityEngine_Networking_SyncList_1.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct SyncListUInt : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncList_1<mscorlib::System::UInt32>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void SerializeItem(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, uint32_t item);
		uint32_t DeserializeItem(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListUInt* ReadInstance(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		static void ReadReference(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListUInt* syncList);
		static void WriteInstance(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SyncListUInt* items);
		void _ctor();
	};
}

