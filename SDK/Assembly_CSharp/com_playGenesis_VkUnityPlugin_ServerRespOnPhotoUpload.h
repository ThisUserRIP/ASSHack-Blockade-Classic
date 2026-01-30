#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct ServerRespOnPhotoUpload : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _server_k__BackingField;
		mscorlib::System::String* _photos_list_k__BackingField;
		int32_t _aid_k__BackingField;
		mscorlib::System::String* _hash_k__BackingField;
		int32_t _gid_k__BackingField;
		int32_t get_server();
		void set_server(int32_t value);
		mscorlib::System::String* get_photos_list();
		void set_photos_list(mscorlib::System::String* value);
		int32_t get_aid();
		void set_aid(int32_t value);
		mscorlib::System::String* get_hash();
		void set_hash(mscorlib::System::String* value);
		int32_t get_gid();
		void set_gid(int32_t value);
		void _ctor();
	};
}

