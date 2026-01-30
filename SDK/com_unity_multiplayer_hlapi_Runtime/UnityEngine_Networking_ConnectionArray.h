#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct ConnectionArray : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* m_LocalConnections;
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* m_Connections;
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* get_localConnections();
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* get_connections();
		int32_t get_Count();
		int32_t get_LocalIndex();
		void _ctor();
		int32_t Add(int32_t connId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* Get(int32_t connId);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* GetUnsafe(int32_t connId);
		void Remove(int32_t connId);
		int32_t AddLocal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		bool ContainsPlayer(UnityEngine_CoreModule::UnityEngine::GameObject* player, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection& conn);
	};
}

