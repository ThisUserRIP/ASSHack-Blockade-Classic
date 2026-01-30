#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VkApi; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct Downloader; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKUser; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp { struct VkSettings; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKRequest; };

namespace Assembly_CSharp
{
	struct Controller : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi* vkapi;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::Downloader* d;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKUser>* friends;
		Assembly_CSharp::VkSettings* sets;
		void Start();
		void Login();
		void LogOut();
		void startWorkingWithVk();
		void Get3FriendsDataFromVk();
		void OnGet5FriendsCompleted(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* arg1);
		void Back();
		void _ctor();
	};
}

