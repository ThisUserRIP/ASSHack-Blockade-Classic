#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
namespace Assembly_CSharp { struct VKFriedImage; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKUser; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKRequest; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct DownloadRequest; };

namespace Assembly_CSharp
{
	struct FriendManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* t;
		UnityEngine_UI::UnityEngine::UI::Image* i;
		UnityEngine_CoreModule::UnityEngine::Sprite* noPhoto;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKUser* _friend;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::VKFriedImage>* fImages;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKUser* get_friend();
		void set_friend(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKUser* value);
		void GetImageFromCacheOrDownload(int64_t id);
		void DownloadFriendImage(mscorlib::System::String* url, int64_t id);
		void setUpImage(IL2CPP::Array<uint8_t>* photo);
		void setUpImage(UnityEngine_CoreModule::UnityEngine::Texture2D* photo);
		void Invite();
		void OnAppSendRequest(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* r);
		void _ctor();
		static void _cctor();
		void _DownloadFriendImage_b__9_0(Assembly_CSharp::com::playGenesis::VkUnityPlugin::DownloadRequest* d);
	};
}

