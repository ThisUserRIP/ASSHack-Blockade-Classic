#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKRequest; };
#include "com_playGenesis_VkUnityPlugin_QueueWorker_1.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_UI::UnityEngine::UI { struct InputField; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct Downloader; };
#include "com_playGenesis_VkUnityPlugin_VKCaptcha.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKCaptcha; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct DownloadRequest; };

namespace Assembly_CSharp
{
	struct CaptchaDialog : Assembly_CSharp::com::playGenesis::VkUnityPlugin::QueueWorker_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Image* captchaImage;
		UnityEngine_UI::UnityEngine::UI::InputField* captchaText;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::Downloader* dnl;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKCaptcha captchaData;
		mscorlib::System::String* lastaddedCaptchaParams;
		void Start();
		void ParseCaptchaIdAndUrl(mscorlib::System::String* response);
		void StartProcessing();
		void OnGotCaptchaImage(Assembly_CSharp::com::playGenesis::VkUnityPlugin::DownloadRequest* d);
		void OnCaptchaEntered(mscorlib::System::String* s);
		void OnCaptchaEntered();
		void _ctor();
	};
}

