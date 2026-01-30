#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VkApi; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKRequest; };

namespace Assembly_CSharp
{
	struct ShareScreenShot : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi* vkapi;
		mscorlib::System::String* _filePath;
		IL2CPP::Array<uint8_t>* jpegScreenShotBytes;
		void Start();
		void TakeScreenShot();
		mscorlib::System::Collections::IEnumerator* LoadScreenShot();
		void OnShareFinished(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* resp);
		void Back();
		void _ctor();
	};
}

