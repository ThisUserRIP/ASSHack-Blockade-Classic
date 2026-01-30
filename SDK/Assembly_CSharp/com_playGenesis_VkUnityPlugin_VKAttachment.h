#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKAudio; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKVideo; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKPhoto; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKPoll; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKDocument; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKLink; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKWallPost; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKNote; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKPage; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKAttachment : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _type_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAudio* _audio_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKVideo* _video_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPhoto* _photo_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPoll* _poll_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKDocument* _doc_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKLink* _link_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWallPost* _wall_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKNote* _note_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPage* _Page_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment* Deserialize(mscorlib::System::Object* attachment);
		mscorlib::System::String* get_type();
		void set_type(mscorlib::System::String* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAudio* get_audio();
		void set_audio(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAudio* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKVideo* get_video();
		void set_video(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKVideo* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPhoto* get_photo();
		void set_photo(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPhoto* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPoll* get_poll();
		void set_poll(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPoll* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKDocument* get_doc();
		void set_doc(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKDocument* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKLink* get_link();
		void set_link(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKLink* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWallPost* get_wall();
		void set_wall(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWallPost* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKNote* get_note();
		void set_note(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKNote* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPage* get_Page();
		void set_Page(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPage* value);
		void _ctor();
	};
}

