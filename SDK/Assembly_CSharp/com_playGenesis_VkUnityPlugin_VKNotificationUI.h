#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "com_playGenesis_VkUnityPlugin_QueueWorker_1.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKRequest; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKNotificationUI : Assembly_CSharp::com::playGenesis::VkUnityPlugin::QueueWorker_1<mscorlib::System::String>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* message;
		void Start();
		void Notity(mscorlib::System::String* message);
		void StartProcessing();
		void Notify(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* r);
		void onOkButton();
		void _ctor();
	};
}

