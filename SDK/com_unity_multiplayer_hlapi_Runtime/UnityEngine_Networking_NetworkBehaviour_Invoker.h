#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Networking_NetworkBehaviour.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkBehaviour; };
#include "UnityEngine_Networking_NetworkBehaviour_UNetInvokeType.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkBehaviour_CmdDelegate; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkBehaviour_Invoker : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_UNetInvokeType invokeType;
		mscorlib::System::Type* invokeClass;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour_CmdDelegate* invokeFunction;
		mscorlib::System::String* DebugString();
		void _ctor();
	};
}

