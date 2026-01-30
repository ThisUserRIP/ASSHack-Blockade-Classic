#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct Block; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct WeaponSystem; };
namespace Assembly_CSharp { struct SpawnManager; };
namespace Assembly_CSharp { struct RagDollManager; };
namespace Assembly_CSharp { struct MainGUI; };
namespace Assembly_CSharp { struct Minigun; };
namespace Assembly_CSharp::AssemblyCSharp { struct BotData; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "BlockDirection.h"
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "ITEM.h"

namespace Assembly_CSharp
{
	struct BotsController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 myLookPoint;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* BotsGmObj;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoPlayerCreated;
		UnityEngine_CoreModule::UnityEngine::GameObject* Gui;
		IL2CPP::Array<Assembly_CSharp::Block*>* teamblock;
		bool PlayersLoaded;
		Assembly_CSharp::WeaponSystem* csws;
		Assembly_CSharp::SpawnManager* SkinManager;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoPlayer;
		Assembly_CSharp::RagDollManager* csrm;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoLocalPlayer;
		Assembly_CSharp::MainGUI* csig;
		UnityEngine_CoreModule::UnityEngine::GameObject* CurrentPlayer;
		Assembly_CSharp::Minigun* MG;
		IL2CPP::Array<Assembly_CSharp::AssemblyCSharp::BotData*>* BotsList;
		float zmupdate;
		float lastupdate;
		struct StaticFields
		{
			Assembly_CSharp::BotsController* THIS__;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void SetPlayerActive(int32_t index, bool val);
		void CreatePlayer(int32_t index);
		void CreateLocalPlayer();
		void Update();
		void RestorePlayer(int32_t id);
		void SetPosition(int32_t index, float pX, float pY, float pZ);
		void UpdateBlock(int32_t x, int32_t y, int32_t z, int32_t health, bool fx);
		mscorlib::System::Collections::IEnumerator* UpdateBlock_coroutine(int32_t x, int32_t y, int32_t z, int32_t health, bool fx, bool del);
		void JoinTeamClass(int32_t index, int32_t _team);
		void UpdatePosition(int32_t index, float pX, float pY, float pZ, float rX, float rY, float rZ, int32_t state, float tX, float tY, float tZ);
		void SetBlock(int32_t x, int32_t y, int32_t z, int32_t team);
		void CreateDeadEvent(int32_t attackerid, int32_t victimid, int32_t weaponid);
		void CreateDeadEventSelf(int32_t attackerid, int32_t victimid, int32_t weaponid);
		void SetCurrentWeapon(int32_t id, int32_t weaponid);
		void SetAttack(int32_t index, int32_t weaponid, int32_t alter_attack);
		void SetCurrentWeaponBlock(int32_t id, int32_t flag);
		static Assembly_CSharp::BlockDirection GetDirection(UnityEngine_CoreModule::UnityEngine::Vector3 dir);
		void PhysicsBlock(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Vector3i>* pos);
		void CreateFX(float pX, float pY, float pZ, bool isExplosive);
		void SetController(int32_t id, int32_t cid);
		void SetZombie();
		void SetAnimal(Assembly_CSharp::ITEM _wID);
		void _ctor();
	};
}

