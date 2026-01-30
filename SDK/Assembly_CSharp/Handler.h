#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UnityWebRequestWWWModule::UnityEngine { struct WWW; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct Handler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW* www;
			mscorlib::System::String* callBack;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Collections::IEnumerator* GetAUTH();
		static mscorlib::System::Collections::IEnumerator* GetProfile();
		static mscorlib::System::Collections::IEnumerator* set_name();
		static mscorlib::System::Collections::IEnumerator* send_auth_ticket(mscorlib::System::String* AuthTicket);
		static mscorlib::System::Collections::IEnumerator* get_steam_user_info();
		static void set_country(mscorlib::System::String* _country);
		static mscorlib::System::Collections::IEnumerator* WaitForRequest(UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW* _www);
		static mscorlib::System::Collections::IEnumerator* set_social();
		static mscorlib::System::Collections::IEnumerator* GetFriendsRating();
		static mscorlib::System::Collections::IEnumerator* GetFriendServers();
		static mscorlib::System::Collections::IEnumerator* set_attach(int32_t _id, int32_t _stat);
		static mscorlib::System::Collections::IEnumerator* get_stats_player();
		static mscorlib::System::Collections::IEnumerator* TakeScreenshot(int32_t _type);
		static mscorlib::System::Collections::IEnumerator* ShareScreenshot();
		static mscorlib::System::Collections::IEnumerator* UploadPNG();
		static mscorlib::System::Collections::IEnumerator* GetOnlineFriends();
		void _ctor();
	};
}

