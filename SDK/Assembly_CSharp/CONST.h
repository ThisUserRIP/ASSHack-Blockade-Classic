#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { struct ObscuredInt; };
namespace Assembly_CSharp { struct SteamHandler; };
namespace Assembly_CSharp { struct KartridgeHandler; };
namespace Assembly_CSharp { struct NovalinkHandler; };
namespace Assembly_CSharp { struct MyGamesHandler; };
namespace Assembly_CSharp { struct APIScript; };
namespace mscorlib::System { struct String; };
#include "MODE.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct CONST_ : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::ObscuredInt* GLOBAL_VERSION;
			Assembly_CSharp::ObscuredInt* NET_PROTO_HEADER;
			Assembly_CSharp::SteamHandler* ST_HANDLER;
			Assembly_CSharp::KartridgeHandler* KR_HANDLER;
			Assembly_CSharp::NovalinkHandler* NL_HANDLER;
			Assembly_CSharp::MyGamesHandler* MY_HANDLER;
			Assembly_CSharp::APIScript* API_HANDLER;
			mscorlib::System::String* SIMPLE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Type* GetType(mscorlib::System::String* aComponent);
		static mscorlib::System::String* get_HANDLER_SERVER();
		static mscorlib::System::String* get_HANDLER_SERVER_LIST();
		static mscorlib::System::String* GetServerName(mscorlib::System::String* IP);
		static Assembly_CSharp::MODE GetGameMode();
		static int32_t GetWeaponID(mscorlib::System::String* name);
		static mscorlib::System::String* GET_CONTENT_URL();
		static mscorlib::System::String* MD5(mscorlib::System::String* strToEncrypt);
		void _ctor();
		static void _cctor();
	};
}

