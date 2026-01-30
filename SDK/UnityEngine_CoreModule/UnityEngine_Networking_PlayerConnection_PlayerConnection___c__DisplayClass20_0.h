#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Networking_PlayerConnection_PlayerConnection.h"
namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection { struct PlayerConnection; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection { struct MessageEventArgs; };

namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection
{
	struct PlayerConnection___c__DisplayClass20_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool msgReceived;
		void _ctor();
		void _BlockUntilRecvMsg_b__0(UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);
	};
}

