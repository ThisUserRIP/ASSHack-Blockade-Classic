#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents.h"
namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection { struct PlayerEditorConnectionEvents; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection { struct PlayerEditorConnectionEvents_MessageEvent; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection
{
	struct PlayerEditorConnectionEvents_MessageTypeSubscribers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_messageTypeId;
		int32_t subscriberCount;
		UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent* messageCallback;
		mscorlib::System::Guid get_MessageTypeId();
		void set_MessageTypeId(mscorlib::System::Guid value);
		void _ctor();
	};
}

