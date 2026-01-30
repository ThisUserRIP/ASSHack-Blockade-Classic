#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::ENet { struct Host; };
#include "ENet_Address.h"
namespace Assembly_CSharp::ENet { struct Address; };
#include "ENet_Peer.h"
namespace Assembly_CSharp::ENet { struct Peer; };
#include "ENet_Event.h"
namespace Assembly_CSharp::ENet { struct Event; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct Map; };
namespace Assembly_CSharp { struct ZipLoader; };
namespace Assembly_CSharp { struct RagDollManager; };
namespace Assembly_CSharp { struct ParticleManager; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
namespace Assembly_CSharp { struct PlayerControl; };
namespace Assembly_CSharp { struct TeamScore; };
namespace Assembly_CSharp { struct Client_RecvData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { struct Client_RecvPacketDelegate; };
namespace Assembly_CSharp { struct MainGUI; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "ENTITY.h"
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace Assembly_CSharp
{
	struct Client : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t myindex;
		int32_t zs_wave;
		Assembly_CSharp::ENet::Host* client;
		Assembly_CSharp::ENet::Address E_address;
		Assembly_CSharp::ENet::Peer E_peer;
		Assembly_CSharp::ENet::Event E_netEvent;
		bool showEnetStat;
		mscorlib::System::String* lastMessage;
		UnityEngine_CoreModule::UnityEngine::GameObject* LocalPlayer;
		bool active;
		bool ready_for_auth;
		UnityEngine_CoreModule::UnityEngine::GameObject* goMap;
		Assembly_CSharp::Map* map;
		Assembly_CSharp::ZipLoader* ziploader;
		Assembly_CSharp::RagDollManager* csrm;
		Assembly_CSharp::ParticleManager* cspm;
		Assembly_CSharp::vp_FPPlayerEventHandler* Player;
		Assembly_CSharp::PlayerControl* cspc;
		UnityEngine_CoreModule::UnityEngine::GameObject* goGui;
		Assembly_CSharp::TeamScore* csTeamScore;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Client_RecvData>* Tlist;
		IL2CPP::Array<uint8_t>* sendBuffer;
		IL2CPP::Array<uint8_t>* readBuffer;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Vector3i>* pos;
		IL2CPP::Array<int32_t>* net_stats_packet;
		IL2CPP::Array<int32_t>* net_stats_size;
		bool net_stats;
		mscorlib::System::String* load_msg1;
		mscorlib::System::String* load_msg2;
		IL2CPP::Array<Assembly_CSharp::Client_RecvPacketDelegate*>* RECV_PACKETS;
		int32_t currentTime;
		int32_t clientTik;
		int32_t latencyTik;
		float missions_timeout;
		int32_t mode;
		Assembly_CSharp::MainGUI* MG;
		int32_t writepos;
		uint64_t lastLostPackets;
		float lastLostPacketsTime;
		IL2CPP::Array<uint8_t>* decodeBuffer;
		int32_t readlen;
		int32_t readpos;
		bool readerror;
		struct StaticFields
		{
			Assembly_CSharp::Client* THIS__;
			float MAX_COEF;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		mscorlib::System::Collections::IEnumerator* LateConnect();
		mscorlib::System::Collections::IEnumerator* LateAuth();
		void SendPacket(bool isReliable);
		void UpdateENet();
		void Update();
		void SendMyPosition();
		void OnApplicationQuit();
		void Disconnect();
		void ProcessData(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void InitRecvDelegates();
		void recv_auth_ready(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_auth(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_position(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_playerinfo(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_myinfo(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_blockattack(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_blockinfo(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_block_destroy(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_scores(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_jointeamclass(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_spawn(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_ready_for_spawn(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_spawnequip(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_set_weapon(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_zm_countdown(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_zm_message(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_zm_infect(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_attack_milk(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_setblock(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_damage(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_chat(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_stats(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_currentweapon(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_disconnect(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_reconnect(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_endofsnap(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_buildblock(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_my_data(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_damage_helmet(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_createent(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_destroy_status(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_explode(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_private_info(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_reconnect2(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_sethealth(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_gamemessage(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		mscorlib::System::Collections::IEnumerator* camPause();
		void recv_equip(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_app_disconnect(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_message(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_ct_MiniMap(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_game_version(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_dealed_damage(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_damage_armor(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_sound_fx(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_reposition(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_moveent(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_destroyent(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_entposition(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_moveboss(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_movecube(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_change_skin(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_weapons_set(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_liftup(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_playerinfo2(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_enter_the_ent(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void SetBotCollider(int32_t id, bool value);
		mscorlib::System::Collections::IEnumerator* SetTankSkin(UnityEngine_CoreModule::UnityEngine::Texture* tex, UnityEngine_CoreModule::UnityEngine::Material* mat);
		void recv_exit_the_ent(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_vehicle_turret(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_vehicle_health(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_vehicle_explode(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_vehicle_hit(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_vehicle_targeting(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_ent_health(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_gungame_player(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_zplayerpos(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_zentpos(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_chunk(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_chunk_finish(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_mapdata(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_flag_set(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_flag_update(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_accept_weapons(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_selected_block(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void recv_api_force_update(IL2CPP::Array<uint8_t>* buffer, int32_t len);
		void send_auth();
		void send_position(uint8_t state);
		void send_myinfo();
		void send_attackblock(int32_t x, int32_t y, int32_t z, int32_t weaponid, bool alter_damage, float x1, float y1, float z1, float x2, float y2, float z2);
		void send_blockinfo();
		void send_jointeam(uint8_t _team, uint8_t _class);
		void send_jointeam_auto();
		void send_last_config(uint8_t _team);
		void send_new_config(int32_t _mwid, int32_t _pwid, int32_t _swid, int32_t _ammo1, int32_t _ammo2, int32_t _ammo3, int32_t _gr1, int32_t _gr2);
		void send_damage(int32_t weaponid, int32_t victimid, int32_t hitbox, bool alter_damage, float ax, float ay, float az, float vx, float vy, float vz, float x1, float y1, float z1, float x2, float y2, float z2, bool _new);
		void send_milk(int32_t weaponid, bool alter_damage);
		void send_setblock(int32_t x, int32_t y, int32_t z, float fvalue);
		void send_chat(uint8_t teamsay, mscorlib::System::String* msg);
		void send_currentweapon(int32_t weaponid);
		void send_disconnect();
		void send_selectblock(uint8_t flag);
		void send_savemap();
		void send_createent(UnityEngine_CoreModule::UnityEngine::Vector3 pos, UnityEngine_CoreModule::UnityEngine::Vector3 rot, UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_CoreModule::UnityEngine::Vector3 torque, Assembly_CSharp::ENTITY enttypeid);
		void send_detonateent(int32_t uid, UnityEngine_CoreModule::UnityEngine::Vector3 pos);
		void send_private_settings(int32_t gamemode, int32_t mapid);
		void send_spawn_me();
		void send_prereload(int32_t weaponid, float fvalue);
		void send_reload(int32_t weaponid, float fvalue);
		void send_private_command(int32_t cmd, int32_t pid, int32_t param1);
		void send_private_command(int32_t cmd, int32_t pid, int32_t param1, uint8_t x1, uint8_t x2, uint8_t y1, uint8_t y2, uint8_t z1, uint8_t z2);
		void send_medkit(int32_t medkit);
		void send_tnt(int32_t x, int32_t y, int32_t z, float fvalue);
		void send_enter_the_ent(int32_t ent_id, int32_t pos_id);
		void send_attack_ent(int32_t uid, int32_t wid);
		void send_spawn_my_vehicle(int32_t wid);
		void send_exit_the_ent(int32_t ent_id);
		void send_vehicle_turret(UnityEngine_CoreModule::UnityEngine::Vector3 T_r, float T_lr, UnityEngine_CoreModule::UnityEngine::Vector3 G_lr, int32_t ent_id);
		void send_vehicle_targeting(int32_t id);
		void send_use_module(int32_t module_index);
		void send_detonate_my_c4();
		void send_new_ent_pos(int32_t uid, UnityEngine_CoreModule::UnityEngine::Vector3 pos);
		void send_attack(bool _new, int32_t weaponid, int32_t victimid, int32_t hitbox, bool alter_damage, float ax, float ay, float az, float vx, float vy, float vz, float x1, float y1, float z1, float x2, float y2, float z2);
		void send_mission_status(int32_t mID);
		void BEGIN_WRITE(uint8_t cmd, bool ignore_time);
		void WRITE_BYTE(uint8_t bvalue);
		void WRITE_SHORT(int16_t svalue);
		void WRITE_FLOAT(float fvalue);
		void WRITE_LONG(int32_t ivalue);
		void WRITE_STRING_CLASSIC(mscorlib::System::String* svalue);
		void WRITE_STRING(mscorlib::System::String* svalue);
		int32_t WRITE_LEN();
		void END_WRITE();
		IL2CPP::Array<uint8_t>* EncodeShort(int16_t inShort);
		IL2CPP::Array<uint8_t>* EncodeInteger(int32_t inInt);
		IL2CPP::Array<uint8_t>* EncodeFloat(float inFloat);
		IL2CPP::Array<uint8_t>* EncodeStringUTF8(mscorlib::System::String* inString);
		IL2CPP::Array<uint8_t>* EncodeStringASCII(mscorlib::System::String* inString);
		IL2CPP::Array<uint8_t>* EncodeVector2(UnityEngine_CoreModule::UnityEngine::Vector2 inObject);
		IL2CPP::Array<uint8_t>* EncodeVector3(UnityEngine_CoreModule::UnityEngine::Vector3 inObject);
		IL2CPP::Array<uint8_t>* EncodeVector4(UnityEngine_CoreModule::UnityEngine::Vector4 inObject);
		IL2CPP::Array<uint8_t>* EncodeQuaternion(UnityEngine_CoreModule::UnityEngine::Quaternion inObject);
		IL2CPP::Array<uint8_t>* EncodeColor(UnityEngine_CoreModule::UnityEngine::Color inObject);
		int32_t DecodeShort(IL2CPP::Array<uint8_t>* inBytes, int32_t pos);
		uint16_t DecodeShort2(IL2CPP::Array<uint8_t>* inBytes, int32_t pos);
		int32_t DecodeInteger(IL2CPP::Array<uint8_t>* inBytes, int32_t pos);
		float DecodeSingle(IL2CPP::Array<uint8_t>* inBytes, int32_t pos);
		UnityEngine_CoreModule::UnityEngine::Vector2 DecodeVector2(IL2CPP::Array<uint8_t>* inBytes);
		UnityEngine_CoreModule::UnityEngine::Vector3 DecodeVector3(IL2CPP::Array<uint8_t>* inBytes);
		UnityEngine_CoreModule::UnityEngine::Vector4 DecodeVector4(IL2CPP::Array<uint8_t>* inBytes);
		UnityEngine_CoreModule::UnityEngine::Quaternion DecodeQuaternion(IL2CPP::Array<uint8_t>* inBytes);
		UnityEngine_CoreModule::UnityEngine::Color DecodeColor(IL2CPP::Array<uint8_t>* inBytes);
		void OnGUI();
		void BEGIN_READ(IL2CPP::Array<uint8_t>* inBytes, int32_t len, int32_t startpos);
		int32_t READ_BYTE();
		int32_t READ_LONG();
		mscorlib::System::String* READ_STRING();
		float READ_COORD();
		void _ctor();
		static void _cctor();
	};
}

