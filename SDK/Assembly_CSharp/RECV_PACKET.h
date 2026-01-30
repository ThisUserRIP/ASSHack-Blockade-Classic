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
	struct RECV_PACKET : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::ObscuredInt* AUTH;
			Assembly_CSharp::ObscuredInt* POSITION;
			Assembly_CSharp::ObscuredInt* PLAYER_INFO;
			Assembly_CSharp::ObscuredInt* MY_INFO;
			Assembly_CSharp::ObscuredInt* API_FORCE_UPDATE;
			Assembly_CSharp::ObscuredInt* BLOCK_ATTACK;
			Assembly_CSharp::ObscuredInt* BLOCK_INFO;
			Assembly_CSharp::ObscuredInt* BLOCK_DESTROY;
			Assembly_CSharp::ObscuredInt* DAMAGE;
			Assembly_CSharp::ObscuredInt* SCORES;
			Assembly_CSharp::ObscuredInt* JOIN_TEAM;
			Assembly_CSharp::ObscuredInt* SPAWN;
			Assembly_CSharp::ObscuredInt* MILK;
			Assembly_CSharp::ObscuredInt* SET_BLOCK;
			Assembly_CSharp::ObscuredInt* CHAT;
			Assembly_CSharp::ObscuredInt* STATS;
			Assembly_CSharp::ObscuredInt* CURRENT_WEAPON;
			Assembly_CSharp::ObscuredInt* DISCONNECT;
			Assembly_CSharp::ObscuredInt* RECONNECT;
			Assembly_CSharp::ObscuredInt* END_OF_SNAP;
			Assembly_CSharp::ObscuredInt* BUILD_BLOCK;
			Assembly_CSharp::ObscuredInt* MY_DATA;
			Assembly_CSharp::ObscuredInt* DAMAGE_HELMET;
			Assembly_CSharp::ObscuredInt* CREATE_ENT;
			Assembly_CSharp::ObscuredInt* DESTROY_STATUS;
			Assembly_CSharp::ObscuredInt* EXPLODE;
			Assembly_CSharp::ObscuredInt* PRIVATE_INFO;
			Assembly_CSharp::ObscuredInt* RECONNECT2;
			Assembly_CSharp::ObscuredInt* READY_FOR_SPAWN;
			Assembly_CSharp::ObscuredInt* SPAWN_EQUIP;
			Assembly_CSharp::ObscuredInt* ZM_COUNTDOWN;
			Assembly_CSharp::ObscuredInt* ZM_INFECT;
			Assembly_CSharp::ObscuredInt* ZM_MESSAGE;
			Assembly_CSharp::ObscuredInt* SET_HEALTH;
			Assembly_CSharp::ObscuredInt* MESSAGE;
			Assembly_CSharp::ObscuredInt* CT_MiniMap;
			Assembly_CSharp::ObscuredInt* DAMAGE_ARMOR;
			Assembly_CSharp::ObscuredInt* SOUND_FX;
			Assembly_CSharp::ObscuredInt* REPOSITION;
			Assembly_CSharp::ObscuredInt* MOVE_ENT;
			Assembly_CSharp::ObscuredInt* DESTROY_ENT;
			Assembly_CSharp::ObscuredInt* GAME_MESSAGE;
			Assembly_CSharp::ObscuredInt* EQUIP;
			Assembly_CSharp::ObscuredInt* ENT_POSITION;
			Assembly_CSharp::ObscuredInt* MOVE_BOSS;
			Assembly_CSharp::ObscuredInt* LIFT_UP;
			Assembly_CSharp::ObscuredInt* PLAYER_INFO2;
			Assembly_CSharp::ObscuredInt* ENTER_THE_ENT;
			Assembly_CSharp::ObscuredInt* EXIT_THE_ENT;
			Assembly_CSharp::ObscuredInt* VEHICLE_TURRET;
			Assembly_CSharp::ObscuredInt* VEHICLE_HEALTH;
			Assembly_CSharp::ObscuredInt* VEHICLE_EXPLODE;
			Assembly_CSharp::ObscuredInt* VEHICLE_HIT;
			Assembly_CSharp::ObscuredInt* VEHICLE_TARGETING;
			Assembly_CSharp::ObscuredInt* ENT_HEALTH;
			Assembly_CSharp::ObscuredInt* ZPLAYER_POS;
			Assembly_CSharp::ObscuredInt* ZENT_POS;
			Assembly_CSharp::ObscuredInt* CHUNCK;
			Assembly_CSharp::ObscuredInt* CHUNCK_FINISH;
			Assembly_CSharp::ObscuredInt* MAP_DATA;
			Assembly_CSharp::ObscuredInt* FLAG_SET;
			Assembly_CSharp::ObscuredInt* FLAG_UPDATE;
			Assembly_CSharp::ObscuredInt* ACCEPT_WEAPONS;
			Assembly_CSharp::ObscuredInt* SELECTED_BLOCK;
			Assembly_CSharp::ObscuredInt* AUTH_READY;
			Assembly_CSharp::ObscuredInt* APP_DISCONNECT;
			Assembly_CSharp::ObscuredInt* GUNGAME_PLAYER;
			Assembly_CSharp::ObscuredInt* SET_WEAPON;
			Assembly_CSharp::ObscuredInt* MOVE_CUBE;
			Assembly_CSharp::ObscuredInt* CHANGE_SKIN;
			Assembly_CSharp::ObscuredInt* WEAPONS_SET;
			Assembly_CSharp::ObscuredInt* NEW_GAME_VERSION;
			Assembly_CSharp::ObscuredInt* DEALED_DAMAGE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t _offset);
		static void _cctor();
	};
}

