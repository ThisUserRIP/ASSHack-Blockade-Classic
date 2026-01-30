#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VkApi; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct MessageHandler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi* vkapi;
		void Awake();
		void ReceiveNewTokenMessage(mscorlib::System::String* message);
		void AccessDeniedMessage(mscorlib::System::String* errormessage);
		void NoVkApp(mscorlib::System::String* msg);
		void _ctor();
	};
}

