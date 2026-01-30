#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { struct ObscuredInt; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct SEND_PACKET : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::ObscuredInt* AUTH;
			Assembly_CSharp::ObscuredInt* POSITION;
			Assembly_CSharp::ObscuredInt* MY_INFO;
			Assembly_CSharp::ObscuredInt* ATTACK_BLOCK;
			Assembly_CSharp::ObscuredInt* BLOCK_INFO;
			Assembly_CSharp::ObscuredInt* JOIN_TEAM;
			Assembly_CSharp::ObscuredInt* JOIN_TEAM_AUTO;
			Assembly_CSharp::ObscuredInt* LAST_CONFIG;
			Assembly_CSharp::ObscuredInt* NEW_CONFIG;
			Assembly_CSharp::ObscuredInt* DAMAGE;
			Assembly_CSharp::ObscuredInt* MILK;
			Assembly_CSharp::ObscuredInt* SET_BLOCK;
			Assembly_CSharp::ObscuredInt* CHAT;
			Assembly_CSharp::ObscuredInt* CURRENT_WEAPON;
			Assembly_CSharp::ObscuredInt* DISCONNECT;
			Assembly_CSharp::ObscuredInt* SELECT_BLOCK;
			Assembly_CSharp::ObscuredInt* SAVE_MAP;
			Assembly_CSharp::ObscuredInt* CREATE_ENT;
			Assembly_CSharp::ObscuredInt* DETONATE_ENT;
			Assembly_CSharp::ObscuredInt* PRIVATE_SETTINGS;
			Assembly_CSharp::ObscuredInt* SPAWN_ME;
			Assembly_CSharp::ObscuredInt* PRE_RELOAD;
			Assembly_CSharp::ObscuredInt* RELOAD;
			Assembly_CSharp::ObscuredInt* PRIVATE_COMMAND;
			Assembly_CSharp::ObscuredInt* MEDKIT;
			Assembly_CSharp::ObscuredInt* TNT;
			Assembly_CSharp::ObscuredInt* ENTER_THE_ENT;
			Assembly_CSharp::ObscuredInt* ATTACK_ENT;
			Assembly_CSharp::ObscuredInt* SPAWN_MY_VEHICLE;
			Assembly_CSharp::ObscuredInt* EXIT_THE_ENT;
			Assembly_CSharp::ObscuredInt* VEHICLE_TURRET;
			Assembly_CSharp::ObscuredInt* VEHICLE_TARGETING;
			Assembly_CSharp::ObscuredInt* USE_MODULE;
			Assembly_CSharp::ObscuredInt* DETONATE_MY_C4;
			Assembly_CSharp::ObscuredInt* MISSION_STATUS;
			Assembly_CSharp::ObscuredInt* NEW_ENT_POS;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t _offset);
		static void _cctor();
	};
}

