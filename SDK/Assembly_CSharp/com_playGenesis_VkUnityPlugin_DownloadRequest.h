#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UnityWebRequest; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct DownloadRequest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _url_k__BackingField;
		mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::DownloadRequest>* _onFinished_k__BackingField;
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* _DownloadResult_k__BackingField;
		IL2CPP::Array<mscorlib::System::Object*>* _CustomData_k__BackingField;
		mscorlib::System::String* get_url();
		void set_url(mscorlib::System::String* value);
		mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::DownloadRequest>* get_onFinished();
		void set_onFinished(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::DownloadRequest>* value);
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* get_DownloadResult();
		void set_DownloadResult(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* value);
		IL2CPP::Array<mscorlib::System::Object*>* get_CustomData();
		void set_CustomData(IL2CPP::Array<mscorlib::System::Object*>* value);
		void _ctor();
	};
}

