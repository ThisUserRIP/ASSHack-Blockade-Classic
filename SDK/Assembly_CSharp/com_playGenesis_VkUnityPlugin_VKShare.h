#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VkApi; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct ShareImage; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKRequest; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKShare : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi* vkapi;
		mscorlib::System::String* _text;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::ShareImage>* _images;
		mscorlib::System::String* _link;
		int32_t _imagesToUpload;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* _photoIds;
		int64_t _group_id;
		mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* _callbackFunction;
		struct StaticFields
		{
			int32_t RepeatRequest;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* CallbackFunction, mscorlib::System::String* text, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::ShareImage>* images, mscorlib::System::String* link, int64_t group_id);
		void Share();
		void GotWallUploadServer(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* arg1);
		void PhotoHasBeenUploaded(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* arg1);
		void OnPhotoSaved(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* arg1);
		mscorlib::System::String* GenerateAttachementsForWall();
		void PostToWall(int32_t attemptsLeft);
		void WhenPosted(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* arg1);
		static void _cctor();
	};
}

