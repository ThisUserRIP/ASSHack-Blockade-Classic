#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection { struct PlayerEditorConnectionEvents_MessageTypeSubscribers; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection { struct PlayerEditorConnectionEvents_ConnectionChangeEvent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection { struct MessageEventArgs; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityEvent_1; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };

namespace UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection
{
	struct PlayerEditorConnectionEvents : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers>* messageTypeSubscribers;
		UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* connectionEvent;
		UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* disconnectionEvent;
		void InvokeMessageIdSubscribers(mscorlib::System::Guid messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId);
		UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::MessageEventArgs>* AddAndCreate(mscorlib::System::Guid messageId);
		void UnregisterManagedCallback(mscorlib::System::Guid messageId, UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Networking::PlayerConnection::MessageEventArgs>* callback);
		void _ctor();
	};
}

