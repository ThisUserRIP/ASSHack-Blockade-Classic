#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKAudio : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _owner_id_k__BackingField;
		mscorlib::System::String* _artist_k__BackingField;
		mscorlib::System::String* _title_k__BackingField;
		int32_t _duration_k__BackingField;
		mscorlib::System::String* _url_k__BackingField;
		int64_t _lyrics_id_k__BackingField;
		int64_t _album_id_k__BackingField;
		int64_t _genre_id_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAudio* Deserialize(mscorlib::System::Object* Audio);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_owner_id();
		void set_owner_id(int64_t value);
		mscorlib::System::String* get_artist();
		void set_artist(mscorlib::System::String* value);
		mscorlib::System::String* get_title();
		void set_title(mscorlib::System::String* value);
		int32_t get_duration();
		void set_duration(int32_t value);
		mscorlib::System::String* get_url();
		void set_url(mscorlib::System::String* value);
		int64_t get_lyrics_id();
		void set_lyrics_id(int64_t value);
		int64_t get_album_id();
		void set_album_id(int64_t value);
		int64_t get_genre_id();
		void set_genre_id(int64_t value);
		void _ctor();
	};
}

