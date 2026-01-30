#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct YesNoTaskData; };
#include "com_playGenesis_VkUnityPlugin_QueueWorker_1.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKYesNoMessageBox : Assembly_CSharp::com::playGenesis::VkUnityPlugin::QueueWorker_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::YesNoTaskData>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* Message;
		void Start();
		void StartProcessing();
		void OkButtonClicked();
		void CancelButtonClicked();
		void _ctor();
	};
}

