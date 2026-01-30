#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct GetUploadServerResp : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _upload_url_k__BackingField;
		int32_t _album_id_k__BackingField;
		int32_t _user_id_k__BackingField;
		mscorlib::System::String* get_upload_url();
		void set_upload_url(mscorlib::System::String* value);
		int32_t get_album_id();
		void set_album_id(int32_t value);
		int32_t get_user_id();
		void set_user_id(int32_t value);
		void _ctor();
	};
}

