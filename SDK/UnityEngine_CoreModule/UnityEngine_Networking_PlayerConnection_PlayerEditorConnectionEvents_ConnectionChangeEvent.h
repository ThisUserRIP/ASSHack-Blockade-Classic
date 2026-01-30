#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Events_UnityEvent_1.h"
#include "UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents.h"
namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection { struct PlayerEditorConnectionEvents; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection
{
	struct PlayerEditorConnectionEvents_ConnectionChangeEvent : UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<mscorlib::System::Int32>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

