#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct HelmetsRagdolls; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp { struct Block; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp
{
	struct RagDollManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoPlayerRagDoll;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoHelmetRagdoll;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::HelmetsRagdolls>* pgoHelmetsRagdolls;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoTykvaRagDoll;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* pgoWeapons;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoArrow;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoAntiMissle;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoSmoke;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoATMine;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoMOLOTOV;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoM202;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoGG;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoMine;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoC4;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoM18;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoM18Pink;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoMK3;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoRKG3;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoGrenade;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoGrenadeNY;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoGrenadeHalloween;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoRocket;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoZombie;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoGP;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoMinen;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoSnaryad;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoRPG7;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoAT;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoFUGAS;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoMinefly;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoJavelinMissle;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoSTIELHANDGRANATE;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoMUTAGEN;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoGhost;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoGhostBoss;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoDeathCube;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoDeathCubeFire;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoJeep;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoDJeep;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoSnowball;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoLightTank;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoMediumTank;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoHeavyTank;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* pgoPashalka;
		int32_t g_deadbody_index;
		int32_t g_deadhelmet_index;
		UnityEngine_CoreModule::UnityEngine::GameObject* CreatePlayerRagDoll(UnityEngine_CoreModule::UnityEngine::GameObject* original, UnityEngine_CoreModule::UnityEngine::GameObject* attacker, int32_t victimID, bool hide, int32_t team, int32_t skin, int32_t weaponid, bool helmet, bool self, int32_t ha1, int32_t ha2, int32_t ha3);
		void CreateHelmetRagDoll(UnityEngine_CoreModule::UnityEngine::GameObject* original, int32_t team, int32_t skin, int32_t _headAttach);
		void CreateGrenade(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateSTIELHANDGRANATE(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateM18(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateGG(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateMolotov(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateMK3(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateRKG3(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateRocket(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateM202Rocket(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateZombie(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateGP(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateWeapon(UnityEngine_CoreModule::UnityEngine::GameObject* _pos, UnityEngine_CoreModule::UnityEngine::Vector3 _rot, UnityEngine_CoreModule::UnityEngine::Transform* attacker, int32_t wid, int32_t killerwid, Assembly_CSharp::Block* _block);
		void CreateMINEN(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateTank(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateTankLight(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateTankMedium(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateTankHeavy(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateJeep(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz, int32_t _team);
		void CreateEmptyTankRagDoll(UnityEngine_CoreModule::UnityEngine::GameObject* original, uint8_t epic);
		void CreateEmptyJeepRagDoll(UnityEngine_CoreModule::UnityEngine::GameObject* original, uint8_t epic);
		void CreateRPG7(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateSnaryad(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateZBK18M(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateZOF26(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateMinefly(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateMine(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateATMine(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateC4(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateSMOKE(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateFLASH(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateCrossbowArrow(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateJavelinMissle(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreatePashalka(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateBigPashalka(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateSnowball(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateMutagen(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateDeathCube(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateDeathCubeFire(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateGhostBoss(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void CreateGhost(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
		void _ctor();
	};
}

