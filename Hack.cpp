#include <Windows.h>
#include "XHideDll.h"

#include "Il2Cpp/Il2Cpp-extern-functions.h"

#include "Utility.h"
#include "Hack.h"
#include "api.h"
#include "Menu/menu.h"

#include "SDK/UnityEngine_UnityWebRequestWWWModule/UnityEngine_UnityWebRequestWWWModule.h"
#include "SDK/mscorlib/System_IO_Stream.h"
#include "SDK/mscorlib/System_IO_StreamReader.h"
#include "SDK/mscorlib/System_Enum.h"
#include "SDK/System/System_Uri.h"
#include "SDK/System/System_Net_WebHeaderCollection.h"
#include "SDK/System/System_Net_HttpWebRequest.h"
#include "SDK/System/System_Net_HttpWebResponse.h"
#include "SDK/mscorlib/System_Security_Cryptography_MD5.h"
#include "SDK/mscorlib/System_Security_Cryptography_MD5CryptoServiceProvider.h"
#include <iostream>
#include <signal.h>

#pragma comment(lib, "winmm.lib")

using namespace mscorlib::System::IO;
using namespace System::System;
using namespace System::System::Net;
using namespace mscorlib::System::Security::Cryptography;
using namespace UnityEngine_UnityWebRequestWWWModule::UnityEngine;

typedef void(*RagDollManager_CreateEnt)(RagDollManager*, int id, int uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz);
typedef void(*vp_FPCamera_Func)(vp_FPCamera*);
typedef void(*Minigun_Func)(Minigun*);
typedef void(*Uri__ctor)(Uri*, String*);
typedef void(*WWW__ctor)(WWW*, String*);
typedef void(*WEB_HANDLER_Func1)(BestHTTP::OnRequestFinishedDelegate);
typedef void(*Client_Func)(Client*);
typedef void(*Client_send_position)(Client*, uint8_t);
typedef void(*Client_recv)(Client*, IL2CPP::Array<uint8_t>*, int);
typedef void(*Client_send_detonateent)(Client*, int, Vector3);
typedef void(*Client_send_attack)(Client*, bool, int, int, int, bool, float, float, float, float, float, float, float, float, float, float, float, float);
typedef void(*Client_send_attackblock)(Client*, int, int, int, int, bool, float, float, float, float, float, float);
typedef void(*vp_FPWeaponShooter_Func)(vp_FPWeaponShooter*);
typedef void(*vp_FPWeaponHandler_Func)(vp_FPWeaponHandler*);
typedef void(*vp_FPWeaponReloader_Func)(vp_FPWeaponReloader*);
typedef void(*ZipLoader_SetBlock)(ZipLoader*, int, int, int, int);
typedef bool(*WeaponSystem_OnWeapon_Func)(WeaponSystem*, vp_FPWeapon*);
typedef bool(*WeaponSystem_OnWeaponAttack)(WeaponSystem*, vp_FPWeaponShooter*);
typedef void(*WeaponSystem_weapon_raycast)(WeaponSystem*, int, float, int, WeaponSystem*);
typedef void(*vp_Shooter_DisableFiring)(vp_Shooter*, float);
typedef void(*Arrow_Func)(Arrow*);
typedef void(*BotPoseController_Func_f)(BotPoseController*, float);
typedef void(*vp_FPInput_Func)(vp_FPInput*);
typedef void(*GameController_Func)(GameController*);
typedef void(*BotsController_Func)(BotsController*);
typedef void(*Camera_set_fieldOfView)(Camera*, float);
typedef void(*function)();
typedef Vector3(*vp_FPController_get_Vector3)(vp_FPController*);
typedef float(*UnityEngine_Random_Range)(float, float);

function oHTTPCacheService_SaveLibrary;
Client_Func oClient_send_myinfo;
Client_Func oClient_send_spawn_me;
Client_Func oClient_OnGUI;
Client_recv oClient_recv_my_data;
Client_recv oClient_recv_spawn;
Client_recv oClient_recv_playerinfo;
Client_recv oClient_recv_ent_health;
Client_recv oClient_recv_app_disconnect;
Client_send_position oClient_send_position;
Client_send_attack oClient_send_attack;
Client_send_attackblock oClient_send_attackblock;
Client_send_detonateent oClient_send_detonateent;
Client_send_detonateent oClient_send_new_ent_pos;
vp_FPWeaponShooter_Func ovp_FPWeaponShooter_TryFire;
vp_FPWeaponShooter_Func ovp_FPWeaponShooter_Update;
vp_FPWeaponHandler_Func ovp_FPWeaponHandler_Update;
vp_FPWeaponReloader_Func ovp_FPWeaponReloader_OnGUI;
vp_Shooter_DisableFiring ovp_Shooter_DisableFiring;
vp_FPCamera_Func ovp_FPCamera_LateUpdate;
WeaponSystem_OnWeapon_Func oWeaponSystem_OnWeaponSelect;
WeaponSystem_weapon_raycast oWeaponSystem_weapon_raycast;
WeaponSystem_OnWeaponAttack oWeaponSystem_OnWeaponAttack; 
WeaponSystem_OnWeaponAttack oWeaponSystem_OnWeaponMeleeAttack;
Arrow_Func oArrow_Start;
BotPoseController_Func_f oBotPoseController_SetHealth;
vp_FPInput_Func ovp_FPInput_InputSetWeapon;
GameController_Func oGameController_Update;
ZipLoader_SetBlock oZipLoader_SetBlock2;
WWW__ctor oWWW__ctor;
Uri__ctor oUri__ctor;
WEB_HANDLER_Func1 oWEB_HANDLER_RELOAD_INVENTORY;
WEB_HANDLER_Func1 oWEB_HANDLER_START_GAME;
BotsController_Func oBotsController_Update;
Camera_set_fieldOfView oCamera_set_fieldOfView;
RagDollManager_CreateEnt oRagDollManager_CreateJavelinMissle;
Minigun_Func oMinigun_Update;
vp_FPController_get_Vector3 ovp_FPController_get_Velocity;
UnityEngine_Random_Range oUnityEngine_Random_Range;

void** null_pointer;
void null_func() {}
void* ret_null_func() {return nullptr;}

int firstEnemyIndex;
int nearestEnemyIndex;
int nearestFovEnemyIndex;
int firstVisibleEnemyIndex;
int nearestVisibleEnemyIndex;
int nearestFovVisibleEnemyIndex;
int indexEnemyForCrossbow;
int indexZombie;
int idZombie;
int myindex;
int weaponId;
int playerState;
int myHealth;
Client* client;
BotsController* botsController;
WeaponSystem* weaponSystem;
vp_FPInput* input;
vp_FPWeaponShooter* weaponShooter;
vp_WeaponAnimator* meleeWeapon;
vp_FPCamera* camera;
vp_FPPlayerEventHandler* playerEventHandler;
vp_FPController* controller;
GameObject* localPlayer;
MiniMap* minimap;
Map* map;
Health* health;
MODE mode;
Vector2 playerRotation;
Vector3 playerPosition;
Vector3 lookPoint;
Vector3 thirdPersonCamPos;
Vector3 myForward;
Vector3 hitFirstEnemyPos;
Vector3 hitNearestEnemyPos;
Vector3 hitNearestFovEnemyPos;
float nextTimeFire;
float gameTime;
float weaponDistance;

Material* chamsMatRed;
Material* chamsMatGreen;
Material* chamsMatBlue;
Material* chamsMatYellow;
Material* chamsMatWhite;

MethodInfo* onCheckKeyMethod;
MethodInfo* onGetGameSessionMethod;

IL2CPP::Array<Assembly_CSharp::AssemblyCSharp::CEnt*>* ents;

int processId;

std::vector bonesName = 
{ 
    "/Bip001/Bip001 Pelvis/Bip001 Spine/Bip001 Neck/Bip001 Head/Cap",
    "/Bip001/Bip001 Pelvis/Bip001 Spine/Bip001 Neck",
    "/Bip001/Bip001 Pelvis/Bip001 Spine",
};

bool crossbowShooted;
#if TypeCheat == 3
bool sendCheckKey = true;
#else 
bool sendCheckKey = false;
#endif
bool attack = false;
bool dead = false;
bool zombie = false;
bool vp_FPWeaponShooter_TryFire = false;
bool weaponSystem_weapon_raycast = false;

bool profileLoaded = false;

const int maxKD = 40;

std::vector<GameObject* [32]> inline cacheObjects(countBones);

GameObject* GetPlayerBone(int index, int indexBone)
{
    if (cacheObjects[indexBone][index] == nullptr)
    {
        String* str = String::Format(CreateString("{0}{1}"), botsController->BotsGmObj->vector[index]->get_name(), CreateString(bonesName[indexBone]));
        GameObject* boneObject = GameObject::Find(str);

        if (boneObject != nullptr)
        {
            cacheObjects[indexBone][index] = boneObject;
            return boneObject;
        }
        else 
        {
            std::wstring ws = (wchar_t*)((Il2CppString*)str)->chars;
            std::string s(ws.begin(), ws.end());
            ASSWriteConsole(("Error: Couldn't find the " + s).c_str());
            return nullptr;
        }
    }
    else
    {
        return cacheObjects[indexBone][index];
    }
}

bool checkKD() 
{
    if (!saveKD)
    {
        return false;
    }

    int kills = botsController->BotsList->vector[myindex]->Stats_Kills;
    int Deads = botsController->BotsList->vector[myindex]->Stats_Deads;

    int KD = (Deads == 0 ? kills : kills / Deads);

    if (KD >= maxKD)
    {
        return true;
    }

    return false;
}

void GetVariables()
{
    if (!sendCheckKey) return;
    onServer = GameController::GetStaticFields()->STATE == GS::GAME && GM::GetStaticFields()->currExtState == GS::GAME_LOAD_MY_PROFILE_COMPLITE;
    if (onServer) 
    {
        client = Client::GetStaticFields()->THIS__;
        botsController = BotsController::GetStaticFields()->THIS__;
        weaponSystem = WeaponSystem::GetStaticFields()->THIS__;
        mode = CONST_::GetGameMode();
        myindex = client->myindex;
        myTeam = botsController->BotsList->vector[myindex]->Team;
        myForward = Camera::get_main()->get_transform()->get_forward();
        camera = weaponSystem->m_FPCamera;
        controller = botsController->SkinManager->m_Controller;
        localPlayer = (GameObject*)GetValue("LocalPlayer", client);
        map = (Map*)GetValue("map", client);
        playerEventHandler = (vp_FPPlayerEventHandler*)GetValue("Player", client);
        input = weaponSystem->m_Input;
        meleeWeapon = GameObject::FindObjectOfType<vp_WeaponAnimator>();

        if (minimap == nullptr) 
        {
            minimap = GameObject::FindObjectOfType<MiniMap>();
        }

        if (health == nullptr)
        {
            myHealth = 100;
            health = GameObject::FindObjectOfType<Health>();
        }
        else 
        {
            myHealth = health->health;
        }

        auto item = ItemsDB::GetStaticFields()->Items->vector[weaponSystem->CURRENT_WEAPON_ID];
        camPos = camera->m_PositionSpring->State + camera->m_PositionSpring2->State + localPlayer->get_transform()->get_position();
        dead = botsController->BotsList->vector[myindex]->Dead == 1;
        zombie = botsController->BotsList->vector[myindex]->zombie;

        weaponId = weaponSystem->CURRENT_WEAPON_ID;

        if (!setWeapon) 
        {
            selectedWeaponId = weaponId;
        }

        if (weaponId > 0)
        {
            if (meleeWeapon != nullptr && meleeWeapon->m_Weapon->WeaponID == weaponId) 
            {
                weaponDistance = 2.5f;
            }
            else if (item->Upgrades != NULL && item->Upgrades->vector[5] != NULL) 
            {
                weaponDistance = item->Upgrades->vector[5]->vector[0]->Val;
            }
        }
    }
}

bool CheckVisiblePlayer(GameObject* playerObject, int index, int bone, Vector3& hitPos)
{
    hitPos = { 0, 0, 0 };
    auto objectName = playerObject->get_name();
    auto boneObject = GetPlayerBone(index, bone);
    RaycastHit hit;
    Vector3 pos = boneObject->get_transform()->get_position();
    if (bone == 2)
    {
        pos.y += 0.45f;
    }
    if (Physics::Linecast(camPos, pos, hit, 0x00100501))
    {
        auto hitObject = (Component*)GameObject::FindObjectFromInstanceID(hit.m_Collider);
        HitBoxData* data = hitObject->get_transform()->get_gameObject()->GetComponent<HitBoxData>();
        if (data != nullptr)
        {
            if (data->index == index)
            {
                hitPos = hit.m_Point;
                if (!aimCheckDistance || Vector3::Distance(camPos, hitPos) <= weaponDistance)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

void DrawEspPlayer(GameObject* playerObject, Assembly_CSharp::AssemblyCSharp::BotData* player, int index)
{
    Vector3 curPos = Camera::get_main()->get_transform()->get_position();
    if (thirdperson && !dead && myTeam != 255)
    {
        Camera::get_main()->get_transform()->set_position(thirdPersonCamPos);
    }

    auto playerInfo = playersInfo[index];

    Vector3 playerPos = playerInfo->currentPos = playerObject->get_transform()->get_position();

    playerInfo->posOnScreen = Camera::get_main()->WorldToScreenPoint(playerPos);
    playerInfo->posOnScreen2 = Camera::get_main()->WorldToScreenPoint(playerPos + Vector3{ 0, 1.8f, 0 });

    Vector3 startPos = { playerPos.x - 0.5f, playerPos.y, playerPos.z - 0.5f };
    Vector3 endPos = { playerPos.x + 0.5f, playerPos.y + 1.8f, playerPos.z + 0.5f };
    Quaternion rot = playerObject->get_transform()->get_rotation();

    Vector3 A0 = RotateLine(startPos, playerPos, rot);
    Vector3 B0 = RotateLine({ endPos.x, startPos.y, startPos.z }, playerPos, rot);
    Vector3 C0 = RotateLine({ startPos.x, startPos.y, endPos.z }, playerPos, rot);
    Vector3 D0 = RotateLine({ endPos.x, startPos.y, endPos.z }, playerPos, rot);

    Vector3 A1 = RotateLine({ startPos.x, endPos.y, startPos.z }, playerPos, rot);
    Vector3 B1 = RotateLine({ endPos.x, endPos.y, startPos.z }, playerPos, rot);
    Vector3 C1 = RotateLine({ startPos.x, endPos.y, endPos.z }, playerPos, rot);
    Vector3 D1 = RotateLine(endPos, playerPos, rot);

    A0 = Camera::get_main()->WorldToScreenPoint(A0);
    B0 = Camera::get_main()->WorldToScreenPoint(B0);
    C0 = Camera::get_main()->WorldToScreenPoint(C0);
    D0 = Camera::get_main()->WorldToScreenPoint(D0);
    A1 = Camera::get_main()->WorldToScreenPoint(A1);
    B1 = Camera::get_main()->WorldToScreenPoint(B1);
    C1 = Camera::get_main()->WorldToScreenPoint(C1);
    D1 = Camera::get_main()->WorldToScreenPoint(D1);

    float height = Screen::get_height();
    A0.y = height - A0.y;
    B0.y = height - B0.y;
    C0.y = height - C0.y;
    D0.y = height - D0.y;
    A1.y = height - A1.y;
    B1.y = height - B1.y;
    C1.y = height - C1.y;
    D1.y = height - D1.y;

    playerInfo->Box3DPosOnScreen[0] = A0;
    playerInfo->Box3DPosOnScreen[1] = B0;
    playerInfo->Box3DPosOnScreen[2] = C0;
    playerInfo->Box3DPosOnScreen[3] = D0;
    playerInfo->Box3DPosOnScreen[4] = A1;
    playerInfo->Box3DPosOnScreen[5] = B1;
    playerInfo->Box3DPosOnScreen[6] = C1;
    playerInfo->Box3DPosOnScreen[7] = D1;

    auto head = GetPlayerBone(index, 0);
    Vector3 posHead = head->get_transform()->get_position();

    Vector3 headScreenPos = Camera::get_main()->WorldToScreenPoint(posHead);
    Vector3 headScreenPos2 = Camera::get_main()->WorldToScreenPoint(posHead + (head->get_transform()->get_forward() * 1.f));

    playerInfo->headPosOnScreen = headScreenPos;
    playerInfo->headPosOnScreen2 = headScreenPos2;

    if (espRadar.eneble && myTeam != player->Team)
    {
        Rect position = { 0, 0, GUIManager::YRES(16.f), GUIManager::YRES(16.f) };
        position.set_center({ GUIManager::XRES(4.f) + GUIManager::YRES(playerPos.x / 2.f), GUIManager::YRES(4.f) + GUIManager::YRES(128.f - playerPos.z / 2.f) });
        float num = playerObject->get_transform()->get_eulerAngles().y - 90.f;

        if (num > 360.f)
        {
            num -= 360.f;
        }

        if (num < 0.f)
        {
            num += 360.f;
        }

        auto color = GUI::get_color();

        GUI::set_color({ espRadar.r, espRadar.b, espRadar.g, espRadar.a });
        Matrix4x4 matrix = GUI::get_matrix();
        GUIUtility::RotateAroundPivot(num, position.get_center());

        GUI::DrawTexture(position, minimap->PlayerPosition);

        GUI::set_matrix(matrix);
        GUI::set_color(color);
    }

    Camera::get_main()->get_transform()->set_position(curPos);
}

void DrawEspEnt(Assembly_CSharp::AssemblyCSharp::CEnt* entObject, int index)
{
    auto go = entObject->go;

    if (go != nullptr)
    {
        auto ent = entsInfo[index];
        Component* comp = go->GetComponentInChildren(Rigidbody::GetIl2CppType(), false);
        Vector3 pos = { 0, 0, 0 };
        Quaternion rot = { 0, 0, 0, 0 };

        if (comp != nullptr) {
            pos = comp->get_gameObject()->get_transform()->get_position();
            rot = comp->get_gameObject()->get_transform()->get_rotation();
        }
        else
        {
            pos = go->get_gameObject()->get_transform()->get_position();
            rot = go->get_gameObject()->get_transform()->get_rotation();
        }

        ent->pos = pos;

        Vector3 startPos = { 0, 0, 0 };
        Vector3 endPos = { 0, 0, 0 };

        if (entObject->classID == ENTITY::ZOMBIE || entObject->classID == ENTITY::ZOMBIE2)
        {
            startPos = { pos.x - 0.5f, pos.y, pos.z - 0.5f };
            endPos = { pos.x + 0.5f, pos.y + 1.8f, pos.z + 0.5f };
        }
        else 
        {
            startPos = { pos.x - 0.2f, pos.y - 0.2f, pos.z - 0.2f };
            endPos = { pos.x + 0.2f, pos.y + 0.2f, pos.z + 0.2f };
        }

        Vector3 screenPos = Camera::get_main()->WorldToScreenPoint(pos);
        screenPos.y = Screen::get_height() - screenPos.y;

        ent->posOnScreen = screenPos;

        static auto klass = GetIL2CppClass("Assembly-CSharp.dll", "", "ENTITY");
        auto object = il2cpp_object_new(klass);
        int classId = (int)entObject->classID;
        _asm
        {
            mov eax, object
            mov ecx, classId
            mov[eax + 0x08], ecx
        }
        static auto type = Type::internal_from_handle((intptr_t)il2cpp_class_get_type(klass));
        ent->name = WidestringToString((std::wstring)(wchar_t*)((Il2CppString*)mscorlib::System::Enum::GetName(type, (mscorlib::System::Object*)object))->chars);

        Vector3 A0 = RotateLine(startPos, pos, rot);
        Vector3 B0 = RotateLine({ endPos.x, startPos.y, startPos.z }, pos, rot);
        Vector3 C0 = RotateLine({ startPos.x, startPos.y, endPos.z }, pos, rot);
        Vector3 D0 = RotateLine({ endPos.x, startPos.y, endPos.z }, pos, rot);

        Vector3 A1 = RotateLine({ startPos.x, endPos.y, startPos.z }, pos, rot);
        Vector3 B1 = RotateLine({ endPos.x, endPos.y, startPos.z }, pos, rot);
        Vector3 C1 = RotateLine({ startPos.x, endPos.y, endPos.z }, pos, rot);
        Vector3 D1 = RotateLine(endPos, pos, rot);

        A0 = Camera::get_main()->WorldToScreenPoint(A0);
        B0 = Camera::get_main()->WorldToScreenPoint(B0);
        C0 = Camera::get_main()->WorldToScreenPoint(C0);
        D0 = Camera::get_main()->WorldToScreenPoint(D0);
        A1 = Camera::get_main()->WorldToScreenPoint(A1);
        B1 = Camera::get_main()->WorldToScreenPoint(B1);
        C1 = Camera::get_main()->WorldToScreenPoint(C1);
        D1 = Camera::get_main()->WorldToScreenPoint(D1);

        float height = Screen::get_height();
        A0.y = height - A0.y;
        B0.y = height - B0.y;
        C0.y = height - C0.y;
        D0.y = height - D0.y;
        A1.y = height - A1.y;
        B1.y = height - B1.y;
        C1.y = height - C1.y;
        D1.y = height - D1.y;

        ent->Box3DPosOnScreen[0] = A0;
        ent->Box3DPosOnScreen[1] = B0;
        ent->Box3DPosOnScreen[2] = C0;
        ent->Box3DPosOnScreen[3] = D0;
        ent->Box3DPosOnScreen[4] = A1;
        ent->Box3DPosOnScreen[5] = B1;
        ent->Box3DPosOnScreen[6] = C1;
        ent->Box3DPosOnScreen[7] = D1;
    }
}

void PlayerChams(IL2CPP::Array<SkinnedMeshRenderer*>* renderer, uint8_t team)
{
    for (int j = 0; j < renderer->max_length; j++)
    {
        auto mats = MakeArray<Material>(11);
        Material* pickMat = chamsMatGreen;
        if (team == 0)
        {
            pickMat = chamsMatBlue;
        }
        else if (team == 1)
        {
            pickMat = chamsMatRed;
        }
        else if (team == 3)
        {
            pickMat = chamsMatYellow;
        }
        for (int k = 0; k < mats->max_length; k++) {
            mats->vector[k] = pickMat;
        }
        renderer->vector[j]->set_sharedMaterials(mats);
    }
}

void PlayersUpdate()
{
    if (!sendCheckKey) return;
    hitFirstEnemyPos = { 0, 0, 0 };
    hitNearestEnemyPos = { 0, 0, 0 };
    hitNearestFovEnemyPos = { 0, 0, 0 };
    firstVisibleEnemyIndex = -1;
    nearestVisibleEnemyIndex = -1;
    firstEnemyIndex = -1;
    nearestEnemyIndex = -1;
    nearestFovEnemyIndex = -1;
    nearestFovVisibleEnemyIndex = -1;
    indexEnemyForCrossbow = -1;
    auto bots = botsController->BotsList;
    auto gameObjs = botsController->BotsGmObj;
    float distanceToVisibleEnemy;
    float distanceToEnemy;
    float fov;
    float fovVisible;
    bool findFirstEnemy = false;
    bool findFirstVisibleEnemy = false;
    for (int i = 0; i < 32; i++)
    {
        auto player = bots->vector[i];
        auto playerObject = gameObjs->vector[i];
        if (player != nullptr) 
        {
            if (player->Active && player->Dead == 0 && myindex != i)
            {
                if (playersHealth[i] <= 0.f)
                {
                    playersHealth[i] = 100.f;
                }

                auto team = player->Team;
                bool isProtected = player->botPoser->isProtected;

                if (team == myTeam && mode != MODE::FFA)
                {
                    playerObject->get_transform()->set_localScale({ teammatesSize, teammatesSize, teammatesSize });
                }
                else
                {
                    playerObject->get_transform()->set_localScale({ enemySize, enemySize, enemySize });
                }

                DrawEspPlayer(playerObject, player, i);
                if (!isProtected)
                {
                    if (mode == MODE::FFA || team != myTeam)
                    {
                        Vector3 playerPos = playerObject->get_transform()->get_position();
                        Vector3 forwardVec = playerPos - camPos;
                        if (!findFirstEnemy)
                        {
                            findFirstEnemy = true;
                            indexEnemyForCrossbow = i;
                            firstEnemyIndex = i;
                            nearestEnemyIndex = i;
                            nearestFovEnemyIndex = i;
                            distanceToEnemy = Vector3::Distance(camPos, playerPos);
                            fov = Vector3::Angle(forwardVec, myForward);
                        }
                        else 
                        {
                            float distanceToEnemyNew = Vector3::Distance(camPos, playerPos);
                            if (distanceToEnemyNew < distanceToEnemy)
                            {
                                indexEnemyForCrossbow = i;
                                distanceToEnemy = distanceToEnemyNew;
                                nearestEnemyIndex = i;
                            }

                            float fovNew = Vector3::Angle(forwardVec, myForward);
                            if (fovNew < fov) 
                            {
                                fov = fovNew;
                                nearestFovEnemyIndex = i;
                            }
                        }
                        Vector3 hitPos;
                        if (CheckVisiblePlayer(playerObject, i, aimBone, hitPos))
                        {
                            forwardVec = playerPos - hitPos;
                            if (!findFirstVisibleEnemy)
                            {
                                hitFirstEnemyPos = hitPos;
                                hitNearestEnemyPos = hitPos;
                                hitNearestFovEnemyPos = hitPos;
                                firstVisibleEnemyIndex = i;
                                nearestVisibleEnemyIndex = i;
                                nearestFovVisibleEnemyIndex = i;
                                findFirstVisibleEnemy = true;
                                distanceToVisibleEnemy = Vector3::Distance(camPos, hitPos);
                                fovVisible = Vector3::Angle(forwardVec, myForward);
                            }
                            else
                            {
                                float distanceToEnemyNew = Vector3::Distance(camPos, hitPos);
                                if (distanceToEnemyNew < distanceToVisibleEnemy) 
                                {
                                    nearestFovVisibleEnemyIndex = i;
                                    hitNearestEnemyPos = hitPos;
                                    distanceToVisibleEnemy = distanceToEnemyNew;
                                }
                                float fovNew = Vector3::Angle(forwardVec, myForward);

                                if (fovNew < fovVisible)
                                {
                                    fovVisible = fovNew;
                                    hitNearestFovEnemyPos = hitPos;
                                    nearestFovVisibleEnemyIndex = i;
                                }
                            }
                        }
                    }
                }
            }
            auto playerInfo = playersInfo[i];

            if (playerInfo != nullptr && playersInfo[i]->botData.Active)
            {
                memcpy(&playersInfo[i]->botData, bots->vector[i], sizeof(Assembly_CSharp::AssemblyCSharp::BotData));
            }

            for (int j = 0; j < 32; j++)
            {
                auto lastJoinPlayerInfo = lastJoinPlayersInfo[j];
                if (lastJoinPlayerInfo != nullptr && lastJoinPlayerInfo->index == i && lastJoinPlayerInfo->botData.Active)
                {
                    memcpy(&lastJoinPlayerInfo->botData, bots->vector[lastJoinPlayerInfo->index], sizeof(Assembly_CSharp::AssemblyCSharp::BotData));
                }
            }
        }
    }
}

void DestroyBlocks()
{
    Client* client = Client::GetStaticFields()->THIS__;
    Map* map = (Map*)GetValue("map", client);
    static int x = 0;
    static int z = 0;
    static int y = 0;
    static int lastx = 0;
    static int lastz = 0;
    static int lasty = 0;
    static int countLast = 0;
    bool onlyPlayersBlock = CONST_::GetGameMode() == MODE::CONTRA || CONST_::GetGameMode() == MODE::MELEE || CONST_::GetGameMode() == MODE::GUNGAME || CONST_::GetGameMode() == MODE::FFA;
    
    while (true)
    {
        BlockData block = map->GetBlock(x, y, z);
        bx = x;
        by = y;
        bz = z;

        if (block.block != nullptr)
        {
            auto name = block.block->name;
            if (!name->Equals((String*)CreateString(L"Stoneend")) && !name->Equals((String*)CreateString(L"!Water")) && (!onlyPlayersBlock ||
                (name->Equals((String*)CreateString(L"Brick_blue")) || name->Equals((String*)CreateString(L"Brick_blue")) ||
                    name->Equals((String*)CreateString(L"Brick_red")) || name->Equals((String*)CreateString(L"ArmoredBrickRed")))))
            {
                static int sends = 0;
                sends++;

                if (sends % 150 == 0)
                {
                    client->send_new_config(weaponSystem->mwid, weaponSystem->pwid, weaponSystem->swid, weaponSystem->ammowid->vector[0], weaponSystem->ammowid->vector[1], weaponSystem->ammowid->vector[2], weaponSystem->g1wid, weaponSystem->g2wid);
                }

                if (sends % 2 == 0) 
                {
                    client->send_attackblock(x, y, z, weaponSystem->pwid, false, x, y, z, x, y, z);
                    //client->send_reload(weaponSystem->pwid, NAN);
                    if (lastx == x && lasty == y && lastz == z)
                    {
                        countLast++;

                        if (countLast % 5 == 0)
                        {
                            y++;
                        }
                    }
                    lastx = x;
                    lasty = y;
                    lastz = z;
                }

                return;
            }
        }
        countLast = 0;
        y++;

        if (y > 63)
        {
            y = 0;
            z++;
        }
        if (z > 255)
        {
            z = 0;
            x++;
        }
        if (x > 255) {
            x = 0;
            destroyBlocks = false;
            return;
        }
    }
}

void EntsUpdate() 
{
    ents = (IL2CPP::Array<Assembly_CSharp::AssemblyCSharp::CEnt*>*)GetValue("Ent", EntManager::GetIl2CppClass());
    indexZombie = -1;

    if (ents != nullptr) 
    {
        for (int i = 0; i < ents->max_length; i++) 
        {
            auto ent = ents->vector[i];

            if (ent != nullptr) 
            {
                if (entsInfo[i] == nullptr)
                {
                    entsInfo[i] = new EntInfo();
                    entsInfo[i]->type = ent->classID;
                    entsInfo[i]->uid = ent->uid;

                    if (ent->classID == ENTITY::ZOMBIE || ent->classID == ENTITY::ZOMBIE2)
                    {
                        entsInfo[i]->health = client->zs_wave * 100.f;
                    }
                }

                DrawEspEnt(ent, i);
                static float nextAttack = 0.f;

                if (ent->classID == ENTITY::ARROW || ent->classID == ENTITY::GAZ_GRENADE || ent->classID == ENTITY::MOLOTOV)
                {
                    continue;
                }

                if (ent->classID == ENTITY::ZOMBIE || ent->classID == ENTITY::ZOMBIE2)
                {
                    ent->go->get_transform()->set_localScale({enemySize, enemySize, enemySize });
                    if (masskillZombie /*&& gameTime >= nextAttack*/)
                    {
                        if (indexZombie == -1)
                        {
                            idZombie = i;
                            indexZombie = ent->uid;
                        }
                        //nextAttack = gameTime + crossbowSpeed;
                        //if (weaponSystem->pwid == 161 && !attack) 
                        //{
                        //    Vector3 entPos = ent->go->get_transform()->get_position();
                        //    Vector3 rot = { 90.f, Camera::get_main()->get_transform()->get_eulerAngles().y, 0.f };
                        //    Vector3 force = myForward * 3000.f + Camera::get_main()->get_transform()->get_up() * 100.f;
                        //    client->send_createent(playerPosition, rot, force, {}, ENTITY::ARROW);
                        //if (!attack)
                        //{
                        //    client->send_attack(false, weaponSystem->pwid, ent->uid, 1, false,
                        //        playerPosition.x, playerPosition.y, playerPosition.z,
                        //        playerPosition.x, playerPosition.y, playerPosition.z,
                        //        playerPosition.x, playerPosition.y, playerPosition.z,
                        //        playerPosition.x, playerPosition.y, playerPosition.z);
                        //    client->send_reload(weaponSystem->pwid, NAN);
                        //    attack = true;
                        //}
                        //}
                        //if (!attack && dead) 
                        //{
                        //    static int countAttack = 0;
                        //    countAttack++;

                        //    client->send_position(0);
                        //    //client->send_attack_ent(ent->uid, 111);
                        //    //client->send_reload(weaponSystem->pwid, NAN);
                        //    if (countAttack % 2 == 0)
                        //    {
                        //        client->send_attack(false, weaponSystem->mwid, ent->uid, 1, false,
                        //            playerPosition.x, playerPosition.y, playerPosition.z,
                        //            playerPosition.x, playerPosition.y, playerPosition.z,
                        //            playerPosition.x, playerPosition.y, playerPosition.z,
                        //            playerPosition.x, playerPosition.y, playerPosition.z);
                        //    }
                        //    attack = true;
                        //    
                        //}
                    }
                }

                if (detonateMineC4)
                {
                    if (ent->classID == ENTITY::MINE || ent->classID == ENTITY::C4)
                    {
                        client->send_attack_ent(ent->uid, -1);
                        continue;
                    }
                }

                if (ent->ownerID == myindex && detonateExplosiveInEnemy)
                {
                    if (nearestEnemyIndex != -1)
                    {
                        Vector3 enemyPos = botsController->BotsGmObj->vector[nearestFovEnemyIndex]->get_transform()->get_position();
                        client->send_detonateent(ent->uid, enemyPos);
                        continue;
                    }
                }
            }
            else 
            {
                if (entsInfo[i] != nullptr) 
                {
                    delete entsInfo[i];
                    entsInfo[i] = nullptr;
                }
            }
        }
    }
}

void TriggerBot()
{
    if (checkKD())
    {
        return;
    }

    if (!sendCheckKey) return;
    RaycastHit hit;

    Ray ray = Camera::get_main()->ScreenPointToRay({ Screen::get_width() / 2.f, Screen::get_height() / 2.f, 0.f });
    if (Physics::Linecast(ray.m_Origin, ray.m_Origin + ray.m_Direction * weaponDistance, hit, 0x00100501))
    {
        auto hitObject = (Component*)GameObject::FindObjectFromInstanceID(hit.m_Collider);
        if (hitObject != nullptr)
        {
            HitBoxData* data = hitObject->get_transform()->get_gameObject()->GetComponent<HitBoxData>();
            if (data != nullptr)
            {
                if (mode == MODE::SURVIVAL && data->index >= 32)
                {
                    if (meleeWeapon != nullptr && meleeWeapon->m_Weapon->WeaponID == weaponId)
                    {
                        input->Player->Attack->TryStart(true);
                        meleeWeapon->UpdateAttack();
                        return;
                    }
                    attack = true;

                    if (weaponShooter != nullptr)
                    {
                        weaponShooter->TryFire();
                    }
                }
                else 
                {
                    auto player = botsController->BotsList->vector[data->index];
                    auto botPoser = player->botPoser;
                    if (!botPoser->isProtected && (mode == MODE::FFA || player->Team != myTeam))
                    {
                        if (meleeWeapon != nullptr && meleeWeapon->m_Weapon->WeaponID == weaponId)
                        {
                            input->Player->Attack->TryStart(true);
                            meleeWeapon->UpdateAttack();
                            return;
                        }
                        attack = true;
                        client->send_position(0);

                        if (weaponShooter != nullptr)
                        {
                            weaponShooter->TryFire();

                            Vector3 enemyPos = player->position;

                            if (weaponShooter->m_FPSWeapon->WeaponID == 161 && crossbowShooted)
                            {
                                client->send_attack(false, 161, data->index, data->hitzone, false,
                                    camPos.x, camPos.y, camPos.z,
                                    enemyPos.x, enemyPos.y, enemyPos.z,
                                    camPos.x, camPos.y, camPos.z, 
                                    hit.m_Point.x, hit.m_Point.y, hit.m_Point.z);

                                if (botPoser != nullptr && mode != MODE::ZOMBIE && !fakeDamage)
                                {
                                    botPoser->isProtected = true;
                                    botPoser->protectTimer = gameTime + 1.0f;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Aim()
{
    if (checkKD())
    {
        return;
    }

    if (!sendCheckKey) return;
    if (aim && (aimKey == 0 || GetAsyncKeyStateP(aimKey)))
    {
        int index = -1;
        Vector3 hitPos = { 0, 0, 0 };

        if (aimScanType == 0)
        {
            index = firstVisibleEnemyIndex;
            hitPos = hitFirstEnemyPos;
        }
        else if (aimScanType == 1)
        {
            index = nearestVisibleEnemyIndex;
            hitPos = hitNearestEnemyPos;
        }
        else if (aimScanType == 2)
        {
            index = nearestFovVisibleEnemyIndex;
            hitPos = hitNearestFovEnemyPos;
        }
        if (index != -1)
        {
            if (weaponId > 0)
            {
                Vector3 oldAngle = camera->get_transform()->get_eulerAngles();
                Vector3 forwardVec = hitPos - camPos;

                if (Vector3::Angle(forwardVec, myForward) <= aimFov)
                {
                    Quaternion rotation = Quaternion::LookRotation(forwardVec);

                    if (!aimSilent)
                    {
                        rotation = Quaternion::Slerp(camera->get_transform()->get_rotation(), rotation, aimSpeed * Time::get_deltaTime());
                    }
                    camera->get_transform()->set_rotation(rotation);
                    Vector3 angle = camera->get_transform()->get_eulerAngles();
                    camera->SetRotation({ angle.x, angle.y }, true, true);

                    if (aimAutoShooting)
                    {
                        TriggerBot();
                    }

                    if (aimSilent)
                    {
                        camera->SetRotation({ oldAngle.x, oldAngle.y }, true, true);
                    }
                }
            }
        }
    }
}

void MassKill() 
{
    if (mode == MODE::SURVIVAL)
    {
        if (masskillZombie && indexZombie != -1 && weaponId > 0)
        {
            if (meleeWeapon != nullptr)
            {
                if (meleeWeapon->m_Weapon->WeaponID == weaponId)
                {
                    input->Player->Attack->TryStart(true);
                    meleeWeapon->UpdateAttack();
                    return;
                }
            }
            crossbowShooted = false;
            if (weaponShooter != nullptr)
            {
                weaponShooter->TryFire();
            }
        }
    }

    return;

    if (massKill)
    {
        if (checkKD())
        {
            return;
        }

        if (weaponId > 0 && firstEnemyIndex != -1)
        {
            if (meleeWeapon != nullptr)
            {
                if (meleeWeapon->m_Weapon->WeaponID == weaponId)
                {
                    input->Player->Attack->TryStart(true);
                    meleeWeapon->UpdateAttack();
                    return;
                }
            }
            crossbowShooted = false;
            if (weaponShooter != nullptr)
            {
                weaponShooter->TryFire();
            }

            //if (weaponId == 161 && crossbowShooted && indexEnemyForCrossbow != -1)
            //{
            //    auto player = botsController->BotsList->vector[indexEnemyForCrossbow];
            //    if (player != nullptr)
            //    {
            //        auto botPoser = botsController->BotsList->vector[indexEnemyForCrossbow]->botPoser;
            //        if (botPoser != nullptr && mode != MODE::ZOMBIE && !fakeDamage) {
            //            botPoser->isProtected = true;
            //            botPoser->protectTimer = gameTime + 1.0f;
            //        }
            //        client->send_damage(weaponId, indexEnemyForCrossbow, 1, false, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, false);
            //        indexEnemyForCrossbow = -1;
            //    }
            //}
        }
    }
}

void CheckHWID()
{
    std::string result = Gethwid();
    if (result != hwid) {
        HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, GetCurrentProcessId());
        TerminateProcess(hProcess, 0);
        return;
    }
}

void CheckKey() 
{
    std::wstring ws((wchar_t*)((Il2CppString*)PlayerProfile::GetStaticFields()->PlayerName)->chars, PlayerProfile::GetStaticFields()->PlayerName->m_stringLength);

    std::string strName = WidestringToString(ws);

    std::string str1 = GetRequest(
        XorString("http://autoskillschool.ddns.net/cheat?cmd=1&key=") +
        (std::string)key +
        XorString("&hwid=") +
        Gethwid() + 
        XorString("&n=[") + 
        std::to_string(PlayerProfile::GetStaticFields()->level) +
        XorString("]") +
        strName);
    ASSWriteConsole(XorString("Check key"));
    
    //std::string str1 = GetRequest(
    //    XorString("http://localhost:5000/cheat?cmd=1&key=") + 
    //(std::string)key +
    //    XorString("&hwid=") +
    //    Gethwid() +
    //    XorString("&n=[") +
    //    std::to_string(PlayerProfile::GetStaticFields()->level) +
    //    XorString("]") +
    //    WidestringToString(ws).c_str());

    auto callback = (BestHTTP::OnRequestFinishedDelegate*)il2cpp_object_new(BestHTTP::OnRequestFinishedDelegate::GetIl2CppClass());
    auto request = (BestHTTP::HTTPRequest*)il2cpp_object_new(BestHTTP::HTTPRequest::GetIl2CppClass());
    auto uri = (Uri*)il2cpp_object_new(Uri::GetIl2CppClass());
    uri->_ctor(CreateString(str1.c_str()));
    request->_ctor(uri, callback);
    request->set_DisableCache(true);
    callback->_ctor(request, (intptr_t)onCheckKeyMethod);
    
    request->Send();
    sendCheckKey = true;
}

void CreateMaterial()
{
    if (chamsMatRed == nullptr)
    {
        Shader* shader = Shader::Find(CreateString("Hidden/Internal-Colored"));
        chamsMatGreen = (Material*)il2cpp_object_new(Material::GetIl2CppClass());
        chamsMatRed = (Material*)il2cpp_object_new(Material::GetIl2CppClass());
        chamsMatYellow = (Material*)il2cpp_object_new(Material::GetIl2CppClass());
        chamsMatBlue = (Material*)il2cpp_object_new(Material::GetIl2CppClass());
        chamsMatWhite = (Material*)il2cpp_object_new(Material::GetIl2CppClass());
        chamsMatWhite->_ctor(shader);
        chamsMatGreen->_ctor(shader);
        chamsMatYellow->_ctor(shader);
        chamsMatRed->_ctor(shader);
        chamsMatBlue->_ctor(shader);
        chamsMatWhite->set_hideFlags(HideFlags::HideAndDontSave);
        chamsMatYellow->set_hideFlags(HideFlags::HideAndDontSave);
        chamsMatRed->set_hideFlags(HideFlags::HideAndDontSave);
        chamsMatBlue->set_hideFlags(HideFlags::HideAndDontSave);
        chamsMatGreen->set_hideFlags(HideFlags::HideAndDontSave);
        chamsMatWhite->SetColor(CreateString("_Color"), Color::get_white());
        chamsMatYellow->SetColor(CreateString("_Color"), Color::get_yellow());
        chamsMatRed->SetColor(CreateString("_Color"), Color::get_red());
        chamsMatBlue->SetColor(CreateString("_Color"), Color::get_blue());
        chamsMatGreen->SetColor(CreateString("_Color"), Color::get_green());
        chamsMatWhite->SetInt(CreateString("_Cull"), 0);
        chamsMatYellow->SetInt(CreateString("_Cull"), 0);
        chamsMatRed->SetInt(CreateString("_Cull"), 0);
        chamsMatBlue->SetInt(CreateString("_Cull"), 0);
        chamsMatGreen->SetInt(CreateString("_Cull"), 0);
        chamsMatWhite->SetInt(CreateString("_ZWrite"), 0);
        chamsMatYellow->SetInt(CreateString("_ZWrite"), 0);
        chamsMatRed->SetInt(CreateString("_ZWrite"), 0);
        chamsMatBlue->SetInt(CreateString("_ZWrite"), 0);
        chamsMatGreen->SetInt(CreateString("_ZWrite"), 0);
        chamsMatWhite->SetInt(CreateString("_ZTest"), 8);
        chamsMatYellow->SetInt(CreateString("_ZTest"), 8);
        chamsMatRed->SetInt(CreateString("_ZTest"), 8);
        chamsMatBlue->SetInt(CreateString("_ZTest"), 8);
        chamsMatGreen->SetInt(CreateString("_ZTest"), 8);
    }
}

void Chams()
{
    static float nextUpdate = 0.0f;

    if (Time::get_time() > nextUpdate)
    {
        CreateMaterial();
        nextUpdate = Time::get_time() + 1.f;
        IL2CPP::Array<SkinnedMeshRenderer*>* objects = (IL2CPP::Array<SkinnedMeshRenderer*>*)GameObject::FindObjectsOfType<SkinnedMeshRenderer>();
        for (int i = 0; i < objects->max_length; i++)
        {
            auto mats = MakeArray<Material>(11);
            for (int j = 0; j < mats->max_length; j++) {
                mats->vector[j] = chamsMatWhite;
            }
            objects->vector[i]->set_sharedMaterials(mats);
        }
        IL2CPP::Array<GameObject*>* players = BotsController::GetStaticFields()->THIS__->BotsGmObj;
        for (int i = 0; i < players->max_length; i++) 
        {
            GameObject* playerObject = players->vector[i];
            uint8_t team = BotsController::GetStaticFields()->THIS__->BotsList->vector[i]->Team;
            PlayerChams((IL2CPP::Array<SkinnedMeshRenderer*>*)playerObject->get_transform()->GetComponentsInChildren<SkinnedMeshRenderer>(), team);
        }
    }
}

void InitAPI()
{
    profileLoaded = true;

    processId = GetCurrentProcessId();
    ASSWriteConsole("initializing the API");
    std::wstring uid = (wchar_t*)(((Il2CppString*)(PlayerProfile::GetStaticFields()->id))->chars);
    ULONG64 id = _atoi64(std::string(uid.begin(), uid.end()).c_str());
    API_SetId(id, (int)PlayerProfile::GetStaticFields()->network);
    API_Init();
    Sleep(100);
    ASSWriteConsole("The API was successfully initialized");
}

void OnCheckKey(BestHTTP::HTTPRequest* req, BestHTTP::HTTPResponse* resp)
{
    static bool secondSend = false;
    if (resp == nullptr) 
    {
        if (req != nullptr)
        {
            auto exception = req->get_Exception();
            if (exception != nullptr) 
            {
                Il2CppExceptionMessage((IL2CPP::Il2CppException*)exception);
            }
        }
        if (!secondSend) 
        {
            secondSend = true;
            sendCheckKey = false;
        }
        return;
    }
    uint8_t recv = resp->get_Data()->vector[0];
    if (recv != 1)
    {
        HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, GetCurrentProcessId());
        TerminateProcess(hProcess, 0);
        return;
    }
}

void OnGetGameSession(BestHTTP::HTTPRequest* req, BestHTTP::HTTPResponse* resp)
{
    auto splitArray = (IL2CPP::Array<wchar_t>*)MakeArray<Char>(1);
    splitArray->vector[0] = L"*"[0];
    auto strs = resp->get_DataAsText()->Split(splitArray);
    if (strs->vector[0]->Contains(CreateString("OK")))
    {
        PlayerProfile::GetStaticFields()->gameSession = strs->vector[1];
    }
}

void hWeaponSystem_OnWeaponSelect(WeaponSystem* _this, vp_FPWeapon* weapon)
{
    if (weaponShooter != nullptr && weaponShooter->m_FPSWeapon != weapon)
    {
        if (weaponShooter->m_FPSWeapon != nullptr)
        {
            weaponShooter->m_FPSWeapon->Deactivate();
        }
    }
    oWeaponSystem_OnWeaponSelect(_this, weapon);
}

bool hWeaponSystem_OnWeaponAttack(WeaponSystem* _this, vp_FPWeaponShooter* weaponshooter)
{
    Vector3 curPos = Camera::get_main()->get_transform()->get_position();
    Camera::get_main()->get_transform()->set_position(camPos);

    Vector3 objectPos = botsController->BotsGmObj->vector[myindex]->get_transform()->get_position();
    botsController->SetPlayerActive(myindex, false);
    botsController->BotsGmObj->vector[myindex]->get_transform()->set_position(objectPos);

    if (weaponshooter->m_FPSWeapon->WeaponID == 161) 
    {
        if (checkKD())
        {
            return false;
        }
    }
    crossbowShooted = oWeaponSystem_OnWeaponAttack(_this, weaponshooter);

    /*if (weaponId == 161 && indexEnemyForCrossbow != -1 && (massKill || magicBullet))
    {
        int index = indexEnemyForCrossbow;
        if (priorityMasskillIndex != -1) 
        {
            auto player = botsController->BotsList->vector[priorityMasskillIndex];
            if (player != nullptr)
            {
                if (player->Active && player->Team != myTeam && player->botPoser != nullptr && !player->botPoser->isProtected) 
                {
                    index = priorityMasskillIndex;
                }
            }
        }

        if (crossbowShooted)
        {
            auto botPoser = botsController->BotsList->vector[index]->botPoser;
            if (botPoser != nullptr && mode != MODE::ZOMBIE && !fakeDamage) {
                botPoser->isProtected = true;
                botPoser->protectTimer = gameTime + 1.0f;
            }
            client->send_damage(weaponId, index, 1, false, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, false);
            indexEnemyForCrossbow = -1;
        }
    }*/

    botsController->SetPlayerActive(myindex, true);
    Camera::get_main()->get_transform()->set_position(curPos);
    return crossbowShooted;
}

bool hWeaponSystem_OnWeaponMeleeAttack(WeaponSystem* _this, vp_FPWeaponShooter* weaponshooter)
{
    Vector3 curPos = Camera::get_main()->get_transform()->get_position();
    Camera::get_main()->get_transform()->set_position(camPos);

    Vector3 objectPos = botsController->BotsGmObj->vector[myindex]->get_transform()->get_position();
    botsController->SetPlayerActive(myindex, false);
    botsController->BotsGmObj->vector[myindex]->get_transform()->set_position(objectPos);

    bool attack = oWeaponSystem_OnWeaponMeleeAttack(_this, weaponshooter);

    botsController->SetPlayerActive(myindex, true);
    Camera::get_main()->get_transform()->set_position(curPos);
    return attack;
}

void hWeaponSystem_weapon_raycast(WeaponSystem* _this, int wid, float dist, int blockdist, WeaponSystem* WS)
{
    //if (maxWeaponDistance) 
    //{
    //    dist = 10000.f;
    //}

    //if (maxWeaponDistanceBlocks) 
    //{
    //    blockdist = 100;
    //}

    /*if (massKill || magicBullet)
    {
        if (checkKD())
        {
            oWeaponSystem_weapon_raycast(_this, wid, dist, blockdist, WS);
            return;
        }

        int index = -1;
        if (priorityMasskillIndex != -1 && !botsController->BotsList->vector[priorityMasskillIndex]->Dead && !botsController->BotsList->vector[priorityMasskillIndex]->botPoser->isProtected)
        {
            index = priorityMasskillIndex;
        }
        else if (masskillScanType == 0)
        {
            index = firstEnemyIndex;
        }
        else if (masskillScanType == 1)
        {
            index = nearestEnemyIndex;
        }
        else if (masskillScanType == 2)
        {
            index = nearestFovEnemyIndex;
        }
        if (index != -1)
        {
            Vector3 enemyPos = botsController->BotsList->vector[index]->position;
            client->send_damage(weaponId, index, 1, false, 
                playerPosition.x, playerPosition.y, playerPosition.z,
                enemyPos.x, enemyPos.y, enemyPos.z, 
                playerPosition.x, playerPosition.y, playerPosition.z,
                enemyPos.x, enemyPos.y, enemyPos.z, false);
            return;
        }
    }*/

    if (mode == MODE::SURVIVAL)
    {
        if (masskillZombie && indexZombie != -1)
        {
            //Vector3 pos = ents->vector[idZombie]->go->get_transform()->get_position();
            client->send_attack(false, weaponId, indexZombie, 1, false,
                camPos.x, camPos.y, camPos.z,
                camPos.x, camPos.y, camPos.z,
                camPos.x, camPos.y, camPos.z,
                camPos.x, camPos.y, camPos.z);
            return;
        }
    }

    weaponSystem_weapon_raycast = true;

    oWeaponSystem_weapon_raycast(_this, wid, dist, blockdist, WS);

    weaponSystem_weapon_raycast = false;
}

float hUnityEngine_Random_Range(float min, float max)
{
    if (noSpread && weaponSystem_weapon_raycast) 
    {
        return 0.0f;
    }

    return oUnityEngine_Random_Range(min, max);
}

void hvp_FPWeaponHandler_Update(vp_FPWeaponHandler* _this)
{
    if (hideHands && _this->m_CurrentWeapon != nullptr && !dead && myTeam != 255)
    {
        _this->m_CurrentWeapon->get_transform()->get_parent()->set_position({ -1000.f, -1000.f, -1000.f });
    }

    _this->AttackStateDisableDelay = 0.f;
    if (instantReload)
    {
        _this->ReloadAttackSleepDuration = 0.f;
    }

    if (instantChangeWeapon) {
        _this->SetWeaponAttackSleepDuration = 0.f;
        _this->SetWeaponRefreshStatesDelay = 0.f;
        _this->SetWeaponDuration = 0.f;
        _this->SetWeaponReloadSleepDuration = 0.f;
        _this->SetWeaponZoomSleepDuration = 0.f;
    }
    ovp_FPWeaponHandler_Update(_this);
}

void hvp_FPWeaponReloader_OnGUI(vp_FPWeaponReloader* _this)
{
    if (instantReload || noReload)
    {
        _this->ReloadDuration = 0.f;
        _this->ReloadDuration2 = 0.f;
        _this->ReloadStart = 0.f;
        _this->ReloadStart2 = 0.f;

        if (_this->m_Weapon->WeaponID == 161 || massKill || noReload)
        {
            input->Player->Reload->NextAllowedStopTime = 0.f;
            input->Player->Reload->NextAllowedStartTime = 0.f;
            input->Player->Reload->TryStop(true);
            input->Player->Attack->TryStop(true);
            input->Player->Reload->TryStart(true);
        }
    }
    ovp_FPWeaponReloader_OnGUI(_this);
}

void hvp_FPWeaponShooter_Update(vp_FPWeaponShooter* _this)
{
    weaponShooter = _this;

    if (fastCrossbowShooting && _this->currentFiringWeaponID == 161)
    {
        _this->ProjectileFiringRate = crossbowSpeed;
        _this->ProjectileROF = crossbowSpeed;
    }

    if (noRecoil) 
    {
        _this->MotionDryFireRecoil = 0.f;
        _this->MotionRecoilDelay = 0.f;
        _this->MotionPositionRecoil = { 0.f, 0.f, 0.f };
        _this->MotionPositionPause = 0.f;
        _this->MotionPositionReset = 0.f;
        _this->MotionRotationRecoil = { 0.f, 0.f, 0.f };
        _this->MotionRotationPause = 0.f;
        _this->MotionRotationRecoilDeadZone = 0.f;
        _this->MotionRotationReset = 0.f;
    }

    ovp_FPWeaponShooter_Update(_this);

    if (noRecoil)
    {
        _this->m_FPSCamera->m_Shake = { 0, 0, 0 };
        _this->m_FPSCamera->ShakeSpeed = 0;
        _this->m_FPSCamera->PositionEarthQuakeFactor = 0;
        _this->m_FPSCamera->RotationEarthQuakeFactor = 0;
        _this->m_FPSCamera->ShakeAmplitude = { 0, 0, 0 };
        _this->m_FPSCamera->RotationStrafeRoll = 0;
    }
}

void hvp_FPWeaponShooter_TryFire(vp_FPWeaponShooter* _this)
{
    vp_FPWeaponShooter_TryFire = true;

    ovp_FPWeaponShooter_TryFire(_this);

    if (noWeaponStopMove)
    {
        input->stopmove = 0.f;
    }

    vp_FPWeaponShooter_TryFire = false;
}

Vector3 hvp_FPController_get_Velocity(vp_FPController* _this)
{
    if (vp_FPWeaponShooter_TryFire && noWeaponStopMove)
    {
        return { 0, 0, 0 };
    }

    return ovp_FPController_get_Velocity(_this);
}

void hAPIScript_API_Init()
{
    InitAPI();
}

void hClient_recv_spawn(Client* _this, IL2CPP::Array<uint8_t>* buffer, int len)
{
    uint8_t id = buffer->vector[4];
    oClient_recv_spawn(_this, buffer, len);
    if (botsController != nullptr && botsController->BotsList != nullptr)
    {
        auto botPoser = botsController->BotsList->vector[id]->botPoser;
        if (botPoser != nullptr) {
            botPoser->isProtected = true;
            botPoser->protectTimer = gameTime + 3.85f;
        }
    }
}

void hClient_recv_my_data(Client* _this, IL2CPP::Array<uint8_t>* buffer, int len)
{
    oClient_recv_my_data(_this, buffer, len);
}

void hClient_recv_playerinfo(Client* _this, IL2CPP::Array<uint8_t>* buffer, int32_t len) {
    oClient_recv_playerinfo(_this, buffer, len);
    int indexPlayer = buffer->vector[5];

    auto botInfo = BotsController::GetStaticFields()->THIS__->BotsList->vector[indexPlayer];

    Il2CppString* strName = (Il2CppString*)botInfo->Name;
    Il2CppString* strClan = (Il2CppString*)botInfo->ClanName;

    std::wstring wsName ((wchar_t*)strName->chars, strName->length);
    std::wstring wsClan ((wchar_t*)strClan->chars, strClan->length);

    PlayerInfo* playerInfo = new PlayerInfo();
    playerInfo->timeJoin = Time::get_time();
    playerInfo->index = indexPlayer;
    std::string name = playerInfo->name = WidestringToString(wsName);
    std::string clan = playerInfo->clan = WidestringToString(wsClan);

    playersInfo[indexPlayer] = playerInfo;

    for (int i = 0; i < admins.size(); i++) 
    {
        if (((admins[i].nameConstain && name.find(admins[i].name) != std::string::npos)
            || (!admins[i].nameConstain && std::strcmp(name.c_str(), admins[i].name))) 
            && std::strcmp(clan.c_str(), admins[i].clan) == 0)
        {
            ASSWriteConsole(("Find admin! name: " + name + " clan: " + clan).c_str());

            if (disconnetWhenFindAdmin) 
            {
                client->send_disconnect();
            }

            break;
        }
    }

    memcpy(&playerInfo->botData, botInfo, sizeof(Assembly_CSharp::AssemblyCSharp::BotData));

    for (int i = 31; i > -1; i--)
    {
        if (lastJoinPlayersInfo[i] == nullptr) {
            lastJoinPlayersInfo[i] = playerInfo;
            return;
        }
    }

    PlayerInfo* lastJoinsPlayers2[32];
    for (int i = 0; i < 32; i++)
    {
        lastJoinsPlayers2[i] = lastJoinPlayersInfo[i];
    }

    for (int i = 1; i < 32; i++)
    {
        lastJoinPlayersInfo[i] = lastJoinsPlayers2[i - 1];
    }

    lastJoinPlayersInfo[0] = playerInfo;
}

void hClient_recv_ent_health(Client* _this, IL2CPP::Array<uint8_t>* buffer, int32_t len)
{
    int id = ((IL2CPP::Array<int>*)buffer)->vector[1];
    int health = ((IL2CPP::Array<int>*)buffer)->vector[2];

    entsInfo[EntManager::GetEnt(id)->index]->health = health;

    oClient_recv_ent_health(_this, buffer, len);
}

void hClient_recv_app_disconnect(Client* _this, IL2CPP::Array<uint8_t>* buffer, int32_t len)
{
    //return;
    oClient_recv_app_disconnect(_this, buffer, len);
}

void hClient_send_myinfo(Client* _this) 
{
    oClient_send_myinfo(_this);
}

void hClient_send_spawn_me(Client* _this)
{
    oClient_send_spawn_me(_this);
}

void hClient_send_detonateent(Client* _this, int uid, Vector3 pos)
{
    if (masskillExplosive) 
    {
        pos.x = NAN;
        pos.y = NAN;
        pos.z = NAN;
    }
    oClient_send_detonateent(_this, uid, pos);
}

void hClient_send_new_ent_pos(Client* _this, int uid, Vector3 pos)
{
    if (masskillExplosive)
    {
        pos.x = NAN;
        pos.y = NAN;
        pos.z = NAN;
    }
    oClient_send_new_ent_pos(_this, uid, pos);
}

void hClient_OnGUI(Client* _this)
{
    if (!sendCheckKey) return;
    if (Event::get_current()->get_type() == EventType::Repaint) 
    {
        GetVariables();
        if (onServer)
        {
            Vector3 curPos = Camera::get_main()->get_transform()->get_position();

            if (!dead && myTeam != 255)
            {
                Camera::get_main()->get_transform()->set_position(camPos);
            }

            Vector3 objectPos = botsController->BotsGmObj->vector[myindex]->get_transform()->get_position();
            //botsController->SetPlayerActive(myindex, false);
            botsController->BotsGmObj->vector[myindex]->get_transform()->set_position(objectPos);

            PlayersUpdate();
            EntsUpdate();

            if (!dead && myTeam != 255)
            {
                Camera::get_main()->get_transform()->set_position(camPos);
            }

            Aim();
            MassKill();

            if (triggerBot) TriggerBot();

            if (destroyBlocks) DestroyBlocks();

            if (instantChangeWeapon)
            {
                playerEventHandler->SetWeapon->set_MinDuration(0);
                playerEventHandler->SetWeapon->set_MinPause(0);
                playerEventHandler->SetWeapon->set_AutoDuration(0);
            }

            if (instantReload)
            {
                playerEventHandler->Reload->set_MinDuration(0);
                playerEventHandler->Reload->set_MinPause(0);
                playerEventHandler->Reload->set_AutoDuration(0);
            }
            
            if (controller != nullptr) 
            {
                controller->MotorAcceleration = speed;
                controller->PhysicsGravityModifier = gravity;
                controller->MotorJumpForce = jumpForce;
                controller->MotorJumpForceDamping = jumpDamping;
                if (infinitelyJetpack) 
                {
                    PlayerProfile::GetStaticFields()->jetpackFuel = 10;
                }
            }

            if (GetAsyncKeyStateP(spawnKey) & 1)
            {
                _this->send_spawn_me();
                _this->send_new_config(weaponSystem->mwid, weaponSystem->pwid, weaponSystem->swid, weaponSystem->ammowid->vector[0], weaponSystem->ammowid->vector[1], weaponSystem->ammowid->vector[2], weaponSystem->g1wid, weaponSystem->g2wid);
            }

            if (GetAsyncKeyStateP(spawnGPKey) & 1)
            {
                Vector3 rot = { 90.f, Camera::get_main()->get_transform()->get_eulerAngles().y, 0.f };
                Vector3 force = myForward * 3000.f + Camera::get_main()->get_transform()->get_up() * 100.f;
                _this->send_createent(camPos, rot, force, {0, 0, 0}, ENTITY::GP);
            }

            float minDist = 70.f;
            float maxDist = 120.f;

            if ((mode == MODE::ZOMBIE && !botsController->BotsList->vector[_this->myindex]->zombie) || mode == MODE::SURVIVAL)
            {
                minDist = 0.f;
                maxDist = 12.f;
            }

            if (noFog)
            {
                RenderSettings::set_fogStartDistance(0);
                RenderSettings::set_fogEndDistance(1000.f);
            }
            else
            {
                RenderSettings::set_fogStartDistance(minDist);
                RenderSettings::set_fogEndDistance(maxDist);
            }

            static float nextChatSpam = 0.f;

            if (chatSpam && myTeam != 255)
            {
                if (Time::get_time() > nextChatSpam)
                {
                    nextChatSpam = Time::get_time() + spamInterval;
                    std::string chatMsg = u8"Cheat: goo.su/73nG | " + (std::string)textSpam;
                    _this->send_chat(0, CreateString(chatMsg.c_str()));
                }
            }

            if (chams)
            {
                Chams();
            }

            if (pressedSetTeam != -1) 
            {
                _this->send_jointeam(pressedSetTeam, 0);
                pressedSetTeam = -1;
            }

            if (sendPacket) 
            {
                sendPacket = false;			
                int value = 0;
                SetValue("writepos", client, &value);
                for (int i = 0; i < fieldsCount; i++) 
                {
                    switch (fields[i].type)
                    {
                    case PacketFieldType::Byte:
                        client->WRITE_BYTE(fields[i].bValue);
                        break;
                    case PacketFieldType::Short:
                        client->WRITE_SHORT(fields[i].sValue);
                        break;
                    case PacketFieldType::Int:
                        client->WRITE_LONG(fields[i].iValue);
                        break;
                    case PacketFieldType::Float:
                        client->WRITE_FLOAT(fields[i].fValue);
                        break;
                    case PacketFieldType::String:
                        client->WRITE_STRING(CreateString(fields[i].strValue));
                        break;
                    default:
                        break;
                    }
                }
                client->SendPacket(false);
            }

            if ((GetAsyncKeyStateP(VK_SPACE) && bunnyhop) || autoJump)
            {
                input->Player->Jump->Stop(0);
                input->Player->Jump->TryStart(true);
            }

            if (autoMove)
            {
                Vector2 moveForward = { 0, 1.f };
                input->Player->InputMoveVector->Set->Invoke(&moveForward);
            }

            if (camera->RenderingFieldOfView > 64.f)
            {
                Camera::get_main()->set_fieldOfView(fieldOfViev);
            }

#if TypeCheat == 3
            if (GetAsyncKeyStateP(VK_F5) & 1)
            {
                Vector3 rot = { 90.f, Camera::get_main()->get_transform()->get_eulerAngles().y, 0.f };
                Vector3 force = myForward * 3000.f + Camera::get_main()->get_transform()->get_up() * 100.f;
                _this->send_createent(camPos, rot, force, { 0, 0, 0 }, ENTITY::JAVELIN);
            }

            if (GetAsyncKeyStateP(VK_F6) & 1)
            {
                Vector3 rot = { 90.f, Camera::get_main()->get_transform()->get_eulerAngles().y, 0.f };
                Vector3 force = myForward * 3000.f + Camera::get_main()->get_transform()->get_up() * 100.f;
                _this->send_createent(camPos, rot, force, { 0, 0, 0 }, ENTITY::MINE);
            }

            if (GetAsyncKeyStateP(VK_F7) & 1)
            {
                Vector3 rot = { 90.f, Camera::get_main()->get_transform()->get_eulerAngles().y, 0.f };
                Vector3 force = myForward * 3000.f + Camera::get_main()->get_transform()->get_up() * 100.f;
                _this->send_createent(camPos, rot, force, { 0, 0, 0 }, ENTITY::AT_MINE);
            }

            //if (GetAsyncKeyStateP(VK_F8) & 1)
            //{
            //    VehicleManager::Initialize();
            //    VehicleManager::SetVehiclesActive(true);
            //    for (int i = 0; i < VehicleManager::GetStaticFields()->availableVehicles->_size; i++)
            //    {
            //        std::wstring ws =(wchar_t*)((Il2CppString*)((IL2CPP::Array<String*>*)VehicleManager::GetStaticFields()->availableVehicles->_items)->vector[i])->chars;
            //        ASSWriteConsole(WidestringToString(ws).c_str());
            //    }
            //    VehicleManager::SetVehiclesActive(true);
            //    //auto vehicle = VehicleManager::AddVehicle(CreateString("HELICOPTER_H1"), VEHICLE_CONTROLLER::Empty);
            //    //if (vehicle != nullptr)
            //    //{
            //    //    ASSWriteConsole("The HELICOPTER_H1 was created");
            //    //    vehicle->get_transform()->set_position(lookPoint);
            //    //}
            //    //else 
            //    //{
            //    //    ASSWriteConsole("The HELICOPTER_H1 could not be created");
            //    //}
            //    //VehicleManager::Cr
            //}
#endif
            //GameObject::FindObjectOfType<Console>()->toggleKey = KeyCode::Delete;

            if (autoHeal && myHealth < 100 && !dead)
            {
                if (myHealth <= medkits[2] && weaponSystem->ammo_medkit_o > 0) 
                {
                    health->health += 100;
                    weaponSystem->ammo_medkit_o--;
                    _this->send_medkit(2);
                }
                else if (myHealth <= medkits[1] && weaponSystem->ammo_medkit_g > 0)
                {
                    health->health += 50;
                    weaponSystem->ammo_medkit_g--;
                    _this->send_medkit(1);
                }
                else if (myHealth <= medkits[0] && weaponSystem->ammo_medkit_w > 0)
                {
                    health->health += 25;
                    weaponSystem->ammo_medkit_w--;
                    _this->send_medkit(0);
                }

                if (myHealth > 100 && !zombie)
                {
                    health->health = 100;
                }

                myHealth = health->health;
            }

            if (setWeapon)
            {
                setWeapon = false;
                auto items = ItemsDB::GetStaticFields()->Items;
                if (items != nullptr)
                {
                    if (selectedWeaponId >= 0 && items->vector[selectedWeaponId] != nullptr)
                    {
                        auto item = items->vector[selectedWeaponId];

                        auto klass = GetIL2CppClass("Assembly-CSharp.dll", "", "ITEM");
                        auto object = il2cpp_object_new(klass);
                        int id = item->ItemID;
                        _asm 
                        {
                            mov eax, object
                            mov ecx, id
                            mov [eax+0x08], ecx
                        }
                        auto type = Type::internal_from_handle((intptr_t)il2cpp_class_get_type(klass));
                        mscorlib::System::String* str = mscorlib::System::Enum::GetName(type, (mscorlib::System::Object*)object);
                        
                        input->Player->SetWeaponByName->Try->Invoke(str);
                    }
                }           
            }

            botsController->SetPlayerActive(myindex, true);
            Camera::get_main()->get_transform()->set_position(curPos);
        }
        else 
        {
            minimap = nullptr;
            health = nullptr;
            playerEventHandler = nullptr;
            camera = nullptr;
            map = nullptr;
            controller = nullptr;
            localPlayer = nullptr;
            meleeWeapon = nullptr;
            botsController = nullptr;
            weaponShooter = nullptr;
            weaponSystem = nullptr;

            for (int j = 0; j < countBones; j++) 
            {
                for (int i = 0; i < 32; i++)
                {
                    cacheObjects[j][i] = nullptr;
                }
            }
        }
    }

    oClient_OnGUI(_this);
}

void hClient_send_auth(Client* _this)
{
#ifdef TypeCheat == 3
    WEB_HANDLER::BUY_ITEM(211, nullptr);
    _this->StartCoroutine(Handler::set_attach(211, 1));

    if (!profileLoaded)
    {
        InitAPI();
    }
#endif

    il2cpp_runtime_class_init(SEND_PACKET::GetIl2CppClass());
    auto random = (mscorlib::System::Random_*)il2cpp_object_new(mscorlib::System::Random_::GetIl2CppClass());
    random->_ctor();
    //_this->BEGIN_WRITE(SEND_PACKET::GetStaticFields()->AUTH->get_value(), false);
    _this->WRITE_BYTE(CONST_::GetStaticFields()->NET_PROTO_HEADER->get_value());
    _this->WRITE_BYTE(SEND_PACKET::GetStaticFields()->AUTH->get_value());
    _this->WRITE_BYTE(0);
    _this->WRITE_BYTE(0);
    _this->WRITE_LONG(0);
    _this->WRITE_BYTE(0xFE);
    _this->WRITE_LONG(CONST_::GetStaticFields()->GLOBAL_VERSION->get_value());

    if (randomFlag)
    {
        _this->WRITE_BYTE(random->Next(0, 245));
    }
    else
    {
        _this->WRITE_BYTE(PlayerProfile::GetStaticFields()->country);
    }

    _this->WRITE_BYTE((uint8_t)PlayerProfile::GetStaticFields()->network);
    _this->WRITE_LONG(ConnectionInfo::GetStaticFields()->PASSWORD);
    _this->WRITE_STRING_CLASSIC(PlayerProfile::GetStaticFields()->id);
    _this->WRITE_STRING_CLASSIC(PlayerProfile::GetStaticFields()->authkey);
    _this->WRITE_STRING_CLASSIC(PlayerProfile::GetStaticFields()->session);
    _this->WRITE_STRING_CLASSIC(PlayerProfile::GetStaticFields()->gameSession);
    //_this->WRITE_STRING_CLASSIC(CreateString("^1A^2S^3S^4"));
    //_this->WRITE_BYTE(0);
    //_this->WRITE_STRING_CLASSIC(CreateString("^1A^2S^3S^4"));
    //_this->WRITE_STRING_CLASSIC(CreateString("^1A^2S^3S^4"));
    _this->END_WRITE();
    _this->SendPacket(false);
}

void hClient_send_position(Client* _this, uint8_t state)
{
    static float sendNextPos = 0.f;

    if (Time::get_time() >= sendNextPos)
    {
        sendNextPos = Time::get_time() + posLag;
    }
    else
    {
        return;
    }

    static bool savePos = false;
    static Vector3 savedPos = { 0.f, 0.f, 0.f };
    static bool selfKill = false;
    if (client == nullptr || botsController == nullptr)
    {
        return;
    }
    localPlayer = (GameObject*)GetValue("LocalPlayer", client);

    Vector3 myLook = camPos + (fakeBackward == true ? -myForward : myForward) * 2.f;
    Vector3 myRotation = camera->get_transform()->get_eulerAngles();
    float num = myRotation.x;
    float y = myRotation.y;

    if (fakeBackward && !attack)
    {
        y += 180.f;
    }

    attack = false;

    if (num > 0.f && num <= 90.f)
    {
        num *= -1.f;
    }
    else if (num >= 270.f && num <= 360.f)
    {
        num = 360.f - num;
    }
    num += 90.f;

    Vector3 pos = localPlayer->get_transform()->get_position();

    if (fakeDown)
    {
        num = -90.f;
        myLook.x = pos.x;
        myLook.y = 0;
        myLook.z = pos.z;
    }

    static int countInvoke = 0;
    countInvoke++;

    if (selfKill)
    {
        pos.x = NAN;
        pos.y = 0.f;
        pos.z = NAN;
        selfKill = false;
    }
    else if (sendNormalPosEvery == 0 || (countInvoke % sendNormalPosEvery != 0))
    {
        pos.x = NAN;
        pos.y = NAN;
        pos.z = NAN;
    }

    if (fakeDuck)
    {
        state = 2;
    }

    Vector3 objectPos = botsController->BotsGmObj->vector[myindex]->get_transform()->get_position();
    botsController->SetPlayerActive(myindex, false);
    botsController->BotsGmObj->vector[myindex]->get_transform()->set_position(objectPos);

    bool canTeleport = false;
    if (GetAsyncKeyStateP(teleportKey) & 1)
    {
        bool maxY = false;
        int x = Mathf::RoundToInt(botsController->myLookPoint.x);
        int y = Mathf::RoundToInt(botsController->myLookPoint.y);
        int z = Mathf::RoundToInt(botsController->myLookPoint.z);

        //ASSWriteConsole((std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(z)).c_str());

        if (x < map->mlx.m_X)
        {
            x = map->mlx.m_X;
        }
        else if (x > map->mlx.m_Y)
        {
            x = map->mlx.m_Y;
        }

        if (y < map->mly.m_X)
        {
            y = map->mly.m_X;
        }
        else if (y > map->mly.m_Y)
        {
            y = map->mly.m_Y;
            maxY = true;
        }

        if (z < map->mlz.m_X)
        {
            z = map->mlz.m_X;
        }
        else if (z > map->mlz.m_Y)
        {
            z = map->mlz.m_Y;
        }

        auto block = map->GetBlock(x, y, z);
        auto blockDown = map->GetBlock(x, y - 1, z);
        auto blockUp = map->GetBlock(x, y + 1, z);
        auto blockUpTwo = map->GetBlock(x, y + 2, z);

        if (block.block == nullptr && blockUp.block == nullptr) 
        {
            canTeleport = true;
        }
        else if (blockUp.block == nullptr && blockUpTwo.block == nullptr && !maxY)
        {
            y += 1;
            canTeleport = true;
        }
        else if (block.block == nullptr && blockDown.block == nullptr)
        {
            y -= 1;
            canTeleport = true;
        }

        if (canTeleport)
        {
            localPlayer->get_transform()->set_position({(float)x, (float)y, (float)z});
            pos.x = NAN;
            pos.y = NAN;
            pos.z = NAN;
        }
    }
    botsController->SetPlayerActive(myindex, true);

    if (ghost) 
    {
        if (!savePos) 
        {
            savedPos = localPlayer->get_transform()->get_position();
            savePos = true;
        }

        pos = savedPos;
    }

    else 
    {
        savePos = false;
        if (GetAsyncKeyStateP(selfKillKey) & 1) 
        {
            pos.y = NAN;
            selfKill = true;
        }
    }

    _this->BEGIN_WRITE(SEND_PACKET::GetStaticFields()->POSITION->get_value(), false);
   
    playerState = state;
    playerRotation.x = num;
    playerRotation.y = y;

    lookPoint = myLook;

    if (canTeleport) 
    {
        playerPosition.x = 0;
        playerPosition.y = 0;
        playerPosition.z = 0;
    }
    else 
    {
        playerPosition = pos;
    }

    _this->WRITE_FLOAT(pos.x);
    _this->WRITE_FLOAT(pos.y);
    _this->WRITE_FLOAT(pos.z);
    _this->WRITE_FLOAT(num);
    _this->WRITE_FLOAT(y);
    _this->WRITE_BYTE(state);
    _this->WRITE_FLOAT(myLook.x);
    _this->WRITE_FLOAT(myLook.y);
    _this->WRITE_FLOAT(myLook.z);
    _this->WRITE_BYTE(PlayerProfile::GetStaticFields()->loh);
    _this->END_WRITE();
    _this->SendPacket(true);
}

void hClient_send_attack(Client* _this, bool _new, int32_t weaponid, int32_t victimid, int32_t hitbox, bool alter_damage, float ax, float ay, float az, float vx, float vy, float vz, float x1, float y1, float z1, float x2, float y2, float z2)
{
    //weaponid = blockAttackId;
    if (checkKD())
    {
        return;
    }

    if (onlyHeadshot) 
    {
        hitbox = 1;
    }
    
    if (fakeDamage) 
    {
        hitbox = 77;
    }

    _this->BEGIN_WRITE(SEND_PACKET::GetStaticFields()->DAMAGE->get_value(), false);
    _this->WRITE_LONG(weaponid);
    _this->WRITE_LONG(victimid);
    _this->WRITE_BYTE(hitbox);
    _this->WRITE_BYTE(alter_damage);
    if (massKill || maxWeaponDistance || magicBullet)
    {
        _this->WRITE_FLOAT(ax);
        _this->WRITE_FLOAT(ay);
        _this->WRITE_FLOAT(az);
        _this->WRITE_FLOAT(vx);
        _this->WRITE_FLOAT(vy);
        _this->WRITE_FLOAT(vz);
        _this->WRITE_FLOAT(x1);
        _this->WRITE_FLOAT(y1);
        _this->WRITE_FLOAT(z1);
        _this->WRITE_FLOAT(x2);
        _this->WRITE_FLOAT(y2);
        _this->WRITE_FLOAT(z2);
        // //0x7fcfffff
        //_this->WRITE_LONG(0xffcfffff);
        //_this->WRITE_LONG(0xffcfffff);
        //_this->WRITE_LONG(0xffcfffff);
        //_this->WRITE_LONG(0xffcfffff);
        //_this->WRITE_LONG(0xffcfffff);
        //_this->WRITE_LONG(0xffcfffff);
        //_this->WRITE_LONG(0xffcfffff);
        //_this->WRITE_LONG(0xffcfffff);
        //_this->WRITE_LONG(0xffcfffff);
        //_this->WRITE_LONG(0xffcfffff);
        //_this->WRITE_LONG(0xffcfffff);
        //_this->WRITE_LONG(0xffcfffff);
    }
    else 
    {
        _this->WRITE_FLOAT(ax);
        _this->WRITE_FLOAT(ay);
        _this->WRITE_FLOAT(az);
        _this->WRITE_FLOAT(vx);
        _this->WRITE_FLOAT(vy);
        _this->WRITE_FLOAT(vz);
        _this->WRITE_FLOAT(x1);
        _this->WRITE_FLOAT(y1);
        _this->WRITE_FLOAT(z1);
        _this->WRITE_FLOAT(x2);
        _this->WRITE_FLOAT(y2);
        _this->WRITE_FLOAT(z2);
    }
    _this->WRITE_BYTE(PlayerProfile::GetStaticFields()->loh);
    _this->END_WRITE();
    _this->SendPacket(false);
}

void hClient_send_attackblock(Client* _this, int32_t x, int32_t y, int32_t z, int32_t weaponid, bool alter_damage, float x1, float y1, float z1, float x2, float y2, float z2)
{
    //weaponid = blockAttackId;
    //oClient_send_attackblock(_this, x, y, z, weaponid, alter_damage, x1, y1, z1, x2, y2, z2);
    oClient_send_attackblock(_this, x, y, z, weaponid, alter_damage, x, y, z, x, y, z);
}

void hvp_FPInput_InputSetWeapon(vp_FPInput* _this)
{
    ovp_FPInput_InputSetWeapon(_this);
}

void hvp_Shooter_DisableFiring(vp_Shooter* _this, float seconds)
{
    if (seconds > 5.f || (_this->m_FPSWeapon->WeaponID == 161 && fastCrossbowShooting))
    {
        seconds = crossbowSpeed;
    }
    _this->m_NextAllowedFireTime = gameTime + seconds;
    _this->m_SecondNextAllowedFireTime = gameTime + seconds;
}

void hArrow_Start(Arrow* _this)
{
    if (aimAutoShooting || triggerBot) 
    {
        _this->exploded = true;
    }

    if (/*(massKill || magicBullet) && indexEnemyForCrossbow != -1 || */(masskillZombie && indexZombie != -1 && !dead && _this->id == myindex))
    {
        _this->exploded = true;
        //Vector3 pos = ents->vector[idZombie]->go->get_transform()->get_position();
        client->send_attack(false, 161, indexZombie, 1, false,
            camPos.x, camPos.y, camPos.z,
            camPos.x, camPos.y, camPos.z,
            camPos.x, camPos.y, camPos.z,
            camPos.x, camPos.y, camPos.z);
    }

    if (arrowSpeedHack)
    {
        _this->speed = 500000.f;
    }

    oArrow_Start(_this);
}

void hBotPoseController_SetHealth(BotPoseController* _this, float health)
{
    if (botsController != nullptr) 
    {
        auto bots = botsController->BotsList;
        if (bots != nullptr)
        {
            for (int i = 0; i < bots->max_length; i++)
            {
                if (bots->vector[i]->botPoser == _this)
                {
                    playersHealth[i] = health;
                }
            }
        }
    }
    oBotPoseController_SetHealth(_this, health);
}

void hZipLoader_SetBlock2(ZipLoader* _this, int x, int y, int z, int flag)
{
    if (detonateTNT && _this->GetBlock(flag) == _this->tnt && weaponSystem != nullptr)
    {
        client->send_attackblock(x, y, z, weaponSystem->mwid, false, x, y, z, x, y, z);
        client->send_attackblock(x, y, z, weaponSystem->pwid, false, x, y, z, x, y, z);
    }
    oZipLoader_SetBlock2(_this, x, y, z, flag);
}

void hWWW__ctor(WWW* _this, String* url) 
{
    //std::wstring ws = (wchar_t*)((Il2CppString*)url)->chars;
    //ASSWriteConsole(std::string(ws.begin(), ws.end()).c_str());

    oWWW__ctor(_this, url);
}

void hUri__ctor(Uri* _this, String* url)
{
    //std::wstring ws = (wchar_t*)((Il2CppString*)url)->chars;
    //ASSWriteConsole(std::string(ws.begin(), ws.end()).c_str());
    oUri__ctor(_this, url);
}

void hvp_FPCamera_LateUpdate(vp_FPCamera* _this)
{
    ovp_FPCamera_LateUpdate(_this);
    if (onServer && thirdperson) 
    {
        Vector3 objectPos = botsController->BotsGmObj->vector[myindex]->get_transform()->get_position();
        botsController->SetPlayerActive(myindex, false);
        botsController->BotsGmObj->vector[myindex]->get_transform()->set_position(objectPos);

        Vector3 targetPos = _this->m_PositionSpring->State + _this->m_PositionSpring2->State + localPlayer->get_transform()->get_position();
        Vector3 targetCameraPos = targetPos + ((-Camera::get_main()->get_transform()->get_forward()) * cameraOffset);
        RaycastHit hit;
        if (Physics::Linecast(targetPos, targetCameraPos, hit, 0x00100501))
        {
            targetCameraPos = hit.m_Point;
        }
        thirdPersonCamPos = targetCameraPos;
        _this->get_transform()->set_position(targetCameraPos);
        botsController->SetPlayerActive(myindex, true);
    }
}

void hBotsController_Update(BotsController *_this)
{
    if (client != nullptr) 
    {
        if (myTeam != 255) {
            client->myindex = 33;
            if (onServer)
            {
                static bool ativated = false;
                auto myBot = botsController->BotsList->vector[myindex];

                if (!thirdperson)
                {
                    ativated = false;
                }

                if (!ativated && thirdperson)
                {
                    ativated = true;
                    botsController->SetPlayerActive(myindex, true);
                    botsController->BotsGmObj->vector[myindex]->get_transform()->set_position(playerPosition);
                    myBot->oldpos = playerPosition;
                    myBot->position = playerPosition;
                }

                if (instnatMoveLocalPlayer)
                {
                    botsController->BotsGmObj->vector[myindex]->get_transform()->set_position(playerPosition);
                }

                myBot->Skin = PlayerProfile::GetStaticFields()->skin;
                myBot->WeaponID = weaponId;
                myBot->State = playerState;
                myBot->oldpos = myBot->position;
                myBot->position = playerPosition;
                myBot->rotation = { playerRotation.x, playerRotation.y, 0.f };
                myBot->targetPosition = lookPoint;

                if (!thirdperson)
                {
                    myBot->position = { -1000.f, -1000.f , -1000.f };
                }
            }
        }
    }
    oBotsController_Update(_this);
    if (onServer && syncPlayersPosition)
    {
        for (int i = 0; i < 32; i++)
        {
            auto bot = botsController->BotsList->vector[i];
            if (bot->Active && bot->Dead == 0) 
            {
                auto playerObject = botsController->BotsGmObj->vector[i];
                playerObject->get_transform()->set_position(Vector3::MoveTowards(playerObject->get_transform()->get_position(), bot->position, 5.f * Time::get_deltaTime()));
            }
        }
    }

    if (client != nullptr)
    {
        client->myindex = myindex;
    }
}

void hCamera_set_fieldOfView(Camera* _this, float value) {
    if (onServer) 
    {
        if (camera->RenderingFieldOfView > 64.f && _this == Camera::get_main())
        {
            value = fieldOfViev;
        }
    }
    currentFov = value;
    oCamera_set_fieldOfView(_this, value);
}

void hRagDollManager_CreateJavelinMissle(RagDollManager* _this, int id, int uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
    if (id == myindex)
    {
        client->send_detonateent(uid, { px, py, pz });
    }
    return;
}

void hMinigun_Update(Minigun* _this)
{
    if (spinupMinigun) 
    {
        _this->speed = 1000.f;
    }

    oMinigun_Update(_this);
}

void hGameController_Update(GameController* _this) {

    gameTime = Time::get_time();
    if (profileLoaded && PlayerProfile::GetStaticFields()->level > 0)
    {
#if TypeCheat != 3
    if (!sendCheckKey)
    {
        static bool xored = false;
        if (!xored)
        {
            xored = true;
            for (int i = 0; i < 32; i++)
            {
                hwid[i] = hwid[i] ^ XorString("\xA8_6\x13/l=\x64-1\0/n'-a\x70,?\xDA\x22\xBB!9\xA4_#\xF7\xAAZ\xF0\x00")[i];
            }
            for (int i = 0; i < 16; i++) {
                char keyChar = key[i];
                char hwidChar = hwid[i];
                char hwidChar2 = hwid[i + 1];

                key[i] = keyChar ^ (hwidChar + hwidChar2);
            }
        }
        CheckHWID();
        CheckKey();
    }
#endif
    }

    //static bool withoutSteam = false;

    PlayerProfile::GetStaticFields()->premium = 1;
    if (reloadProfile)
    {
        reloadProfile = false;
        PlayerProfile::GetStaticFields()->get_player_stats = false;
        _this->StartCoroutine(Handler::get_stats_player());
        Sleep(100);

        auto fstrs = MakeArray<mscorlib::System::Object>(7);
        fstrs->vector[0] = CONST_::get_HANDLER_SERVER();
        fstrs->vector[1] = CreateString("3&id=");
        fstrs->vector[2] = PlayerProfile::GetStaticFields()->id;
        fstrs->vector[3] = CreateString("&key=");
        fstrs->vector[4] = PlayerProfile::GetStaticFields()->authkey;
        fstrs->vector[5] = CreateString("&session=");
        fstrs->vector[6] = PlayerProfile::GetStaticFields()->session;
        auto url = String::Format(CreateString("{0}{1}{2}{3}{4}{5}{6}"), fstrs);

        auto callback = (BestHTTP::OnRequestFinishedDelegate*)il2cpp_object_new(BestHTTP::OnRequestFinishedDelegate::GetIl2CppClass());
        auto request = (BestHTTP::HTTPRequest*)il2cpp_object_new(BestHTTP::HTTPRequest::GetIl2CppClass());
        auto uri = (Uri*)il2cpp_object_new(Uri::GetIl2CppClass());
        uri->_ctor(url);
        request->_ctor(uri, callback);
        callback->_ctor(request, (intptr_t)onGetGameSessionMethod);
        request->Send();

        std::wstring uid = (wchar_t*)(((Il2CppString*)(PlayerProfile::GetStaticFields()->id))->chars);
        ULONG64 id = _atoi64(std::string(uid.begin(), uid.end()).c_str());
        API_SetId(id, (int)PlayerProfile::GetStaticFields()->network);

        if (GameController::GetStaticFields()->STATE == GS::CLIENTINITERROR)
        {
            GameController::GetStaticFields()->STATE = GS::LOADING_BUNDLES;
        }
    }

    static int countsCheckKey = 1;
    if (gameTime > 60.f * 15.f * countsCheckKey)
    {
        countsCheckKey++;
#if TypeCheat != 3
        sendCheckKey = false;
#endif
    }

    static bool connectedToServer = false;

    if (GameController::GetStaticFields()->STATE == GS::BANNED)
    {
        ASSWriteConsole("Your account is banned");
        GameController::GetStaticFields()->STATE = GS::LOADING_BUNDLES;
    }
    if (GM::GetStaticFields()->currExtState == GS::GAME_LOADING_MY_PROFILE)
    {
        connectedToServer = true;
        ASSWriteConsole(("You have joined the server. time: " + std::to_string(gameTime)).c_str());
        GM::GetStaticFields()->currExtState = GS::GAME_LOAD_MY_PROFILE_COMPLITE;
    }

    static bool writeTimeDisconnect = false;

    if (GameController::GetStaticFields()->STATE != GS::GAME)
    {
        if (writeTimeDisconnect)
        {
            ASSWriteConsole(("You have disconnected from the server. time: " + std::to_string(gameTime)).c_str());
            writeTimeDisconnect = false;
        }
    }
    else
    {
        if (connectedToServer)
        {
            connectedToServer = false;
            writeTimeDisconnect = true;
        }
    }

    //if (withoutSteam && GameController::GetStaticFields()->STATE == GS::INIT)
    //{
    //    GUIManager::Init(false);
    //    GUI3::Init();
    //    ItemsDB::LoadMissingIcons();
    //    SoundManager::Init();
    //    SkinManager::Init();
    //    _this->BroadcastAll(CreateString("myGlobalInit"), CreateString(""));
    //    GameController::GetStaticFields()->STATE = GS::MAINMENU;
    //    GM::GetStaticFields()->currGUIState = GUIGS::SERVERLIST;
    //}

    //ASSWriteConsole(std::to_string((int)GameController::GetStaticFields()->STATE).c_str());
    oGameController_Update(_this);
}

void InitHooks()
{
    void* address;

    address = GetIl2CppMethod(APIScript::GetIl2CppClass(), "API_Init")->methodPointer;
    CreateHook(address, hAPIScript_API_Init, null_pointer);
    address = GetIl2CppMethod(APIScript::GetIl2CppClass(), "Start")->methodPointer;
    CreateHook(address, null_func, null_pointer);
    address = GetIl2CppMethod(APIScript::GetIl2CppClass(), "API_UpdateMyStats", { "System.Int32","System.Int32" ,"System.Int32" ,"System.Int32" })->methodPointer;
    CreateHook(address, null_func, null_pointer);
    address = GetIl2CppMethod(Handler::GetIl2CppClass(), "ShareScreenshot")->methodPointer;
    CreateHook(address, ret_null_func, null_pointer);

    address = GetIl2CppMethod(Client::GetIl2CppClass(), "OnGUI")->methodPointer;
    CreateHook(address, hClient_OnGUI, reinterpret_cast<void**>(&oClient_OnGUI));
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "send_auth")->methodPointer;
    CreateHook(address, hClient_send_auth, null_pointer);
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "send_position", { "System.Byte" })->methodPointer;
    CreateHook(address, hClient_send_position, reinterpret_cast<void**>(&oClient_send_position));
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "send_attack", { "System.Boolean", "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" })->methodPointer;
    CreateHook(address, hClient_send_attack, reinterpret_cast<void**>(&oClient_send_attack));
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "send_attackblock", { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" })->methodPointer;
    CreateHook(address, hClient_send_attackblock, reinterpret_cast<void**>(&oClient_send_attackblock));
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "send_detonateent", { "System.Int32", "UnityEngine.Vector3" })->methodPointer;
    CreateHook(address, hClient_send_detonateent, reinterpret_cast<void**>(&oClient_send_detonateent));
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "send_new_ent_pos", { "System.Int32", "UnityEngine.Vector3" })->methodPointer;
    CreateHook(address, hClient_send_new_ent_pos, reinterpret_cast<void**>(&oClient_send_new_ent_pos));
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "recv_spawn", { "System.Byte[]", "System.Int32" })->methodPointer;
    CreateHook(address, hClient_recv_spawn, reinterpret_cast<void**>(&oClient_recv_spawn));
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "recv_playerinfo", { "System.Byte[]", "System.Int32" })->methodPointer;
    CreateHook(address, hClient_recv_playerinfo, reinterpret_cast<void**>(&oClient_recv_playerinfo));
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "recv_my_data", { "System.Byte[]", "System.Int32" })->methodPointer;
    CreateHook(address, hClient_recv_my_data, reinterpret_cast<void**>(&oClient_recv_my_data));
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "recv_ent_health", { "System.Byte[]", "System.Int32" })->methodPointer;
    CreateHook(address, hClient_recv_ent_health, reinterpret_cast<void**>(&oClient_recv_ent_health));
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "recv_app_disconnect", { "System.Byte[]", "System.Int32" })->methodPointer;
    CreateHook(address, hClient_recv_app_disconnect, reinterpret_cast<void**>(&oClient_recv_app_disconnect));
    address = GetIl2CppMethod(Client::GetIl2CppClass(), "send_spawn_me")->methodPointer;
    CreateHook(address, hClient_send_spawn_me, reinterpret_cast<void**>(&oClient_send_spawn_me));
    //address = GetIl2CppMethod(Client::GetIl2CppClass(), "send_myinfo")->methodPointer;
    //CreateHook(address, hClient_send_myinfo, reinterpret_cast<void**>(&oClient_send_myinfo));

    address = GetIl2CppMethod(vp_FPWeaponShooter::GetIl2CppClass(), "TryFire")->methodPointer;
    CreateHook(address, hvp_FPWeaponShooter_TryFire, reinterpret_cast<void**>(&ovp_FPWeaponShooter_TryFire));
    address = GetIl2CppMethod(vp_FPWeaponShooter::GetIl2CppClass(), "Update")->methodPointer;
    CreateHook(address, hvp_FPWeaponShooter_Update, reinterpret_cast<void**>(&ovp_FPWeaponShooter_Update));

    address = GetIl2CppMethod(vp_FPWeaponHandler::GetIl2CppClass(), "Update")->methodPointer;
    CreateHook(address, hvp_FPWeaponHandler_Update, reinterpret_cast<void**>(&ovp_FPWeaponHandler_Update));

    address = GetIl2CppMethod(vp_FPWeaponReloader::GetIl2CppClass(), "OnGUI")->methodPointer;
    CreateHook(address, hvp_FPWeaponReloader_OnGUI, reinterpret_cast<void**>(&ovp_FPWeaponReloader_OnGUI));

    address = GetIl2CppMethod(vp_Shooter::GetIl2CppClass(), "DisableFiring", { "System.Single" })->methodPointer;
    CreateHook(address, hvp_Shooter_DisableFiring, reinterpret_cast<void**>(&ovp_Shooter_DisableFiring));

    address = GetIl2CppMethod(WeaponSystem::GetIl2CppClass(), "weapon_raycast", { "System.Int32", "System.Single", "System.Int32", "WeaponSystem" })->methodPointer;
    CreateHook(address, hWeaponSystem_weapon_raycast, reinterpret_cast<void**>(&oWeaponSystem_weapon_raycast));
    address = GetIl2CppMethod(WeaponSystem::GetIl2CppClass(), "OnWeaponAttack", { "vp_FPWeaponShooter" })->methodPointer;
    CreateHook(address, hWeaponSystem_OnWeaponAttack, reinterpret_cast<void**>(&oWeaponSystem_OnWeaponAttack));
    address = GetIl2CppMethod(WeaponSystem::GetIl2CppClass(), "OnWeaponMeleeAttack", { "vp_FPWeapon" })->methodPointer;
    CreateHook(address, hWeaponSystem_OnWeaponMeleeAttack, reinterpret_cast<void**>(&oWeaponSystem_OnWeaponMeleeAttack));
    address = GetIl2CppMethod(WeaponSystem::GetIl2CppClass(), "OnWeaponSelect", { "vp_FPWeapon" })->methodPointer;
    CreateHook(address, hWeaponSystem_OnWeaponSelect, reinterpret_cast<void**>(&oWeaponSystem_OnWeaponSelect));

    address = GetIl2CppMethod(Arrow::GetIl2CppClass(), "Start")->methodPointer;
    CreateHook(address, hArrow_Start, reinterpret_cast<void**>(&oArrow_Start));

    address = GetIl2CppMethod(BotPoseController::GetIl2CppClass(), "SetHealth", { "System.Single" })->methodPointer;
    CreateHook(address, hBotPoseController_SetHealth, reinterpret_cast<void**>(&oBotPoseController_SetHealth));

    address = GetIl2CppMethod(vp_FPInput::GetIl2CppClass(), "InputSetWeapon")->methodPointer;
    CreateHook(address, hvp_FPInput_InputSetWeapon, reinterpret_cast<void**>(&ovp_FPInput_InputSetWeapon));

    address = GetIl2CppMethod(GameController::GetIl2CppClass(), "Update")->methodPointer;
    CreateHook(address, hGameController_Update, reinterpret_cast<void**>(&oGameController_Update));

    address = GetIl2CppMethod(BotsController::GetIl2CppClass(), "Update")->methodPointer;
    CreateHook(address, hBotsController_Update, reinterpret_cast<void**>(&oBotsController_Update));

    address = GetIl2CppMethod(ZipLoader::GetIl2CppClass(), "SetBlock2", { "System.Int32", "System.Int32" ,"System.Int32" ,"System.Int32" })->methodPointer;
    CreateHook(address, hZipLoader_SetBlock2, reinterpret_cast<void**>(&oZipLoader_SetBlock2));

    address = GetIl2CppMethod(vp_FPCamera::GetIl2CppClass(), "LateUpdate")->methodPointer;
    il2cpp_runtime_class_init(vp_FPCamera::GetIl2CppClass());
    vp_FPCamera* obj = (vp_FPCamera*)il2cpp_object_new(vp_FPCamera::GetIl2CppClass());
    const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(obj, GetIl2CppMethod(vp_FPCamera::GetIl2CppClass(), "LateUpdate"));
    CreateHook(virtualAddress->methodPointer, hvp_FPCamera_LateUpdate, reinterpret_cast<void**>(&ovp_FPCamera_LateUpdate));

    address = GetIl2CppMethod(Camera::GetIl2CppClass(), "set_fieldOfView", { "System.Single" })->methodPointer;
    CreateHook(address, hCamera_set_fieldOfView, reinterpret_cast<void**>(&oCamera_set_fieldOfView));

    address = GetIl2CppMethod(RagDollManager::GetIl2CppClass(), "CreateJavelinMissle", { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" })->methodPointer;
    CreateHook(address, hRagDollManager_CreateJavelinMissle, reinterpret_cast<void**>(&oRagDollManager_CreateJavelinMissle));

    address = GetIl2CppMethod(Minigun::GetIl2CppClass(), "Update")->methodPointer;
    CreateHook(address, hMinigun_Update, reinterpret_cast<void**>(&oMinigun_Update));

    address = GetIl2CppMethod(vp_FPController::GetIl2CppClass(), "get_Velocity")->methodPointer;
    CreateHook(address, hvp_FPController_get_Velocity, reinterpret_cast<void**>(&ovp_FPController_get_Velocity));

    address = GetIl2CppMethod(UnityEngine_CoreModule::UnityEngine::Random_::GetIl2CppClass(), "Range", { "System.Single", "System.Single" })->methodPointer;
    CreateHook(address, hUnityEngine_Random_Range, reinterpret_cast<void**>(&oUnityEngine_Random_Range));

    ///

    //address = GetIl2CppMethod(BestHTTP::Caching::HTTPCacheService::GetIl2CppClass(), "SaveLibrary")->methodPointer;
    //CreateHook(address, hHTTPCacheService_SaveLibrary, reinterpret_cast<void**>(&oHTTPCacheService_SaveLibrary));

    //address = GetIl2CppMethod(WWW::GetIl2CppClass(), ".ctor", { "System.String" })->methodPointer;
    //CreateHook(address, hWWW__ctor, reinterpret_cast<void**>(&oWWW__ctor));

    //address = GetIl2CppMethod(Uri::GetIl2CppClass(), ".ctor", { "System.String" })->methodPointer;
    //CreateHook(address, hUri__ctor, reinterpret_cast<void**>(&oUri__ctor));

    //address = GetIl2CppMethod(WEB_HANDLER::GetIl2CppClass(), "RELOAD_INVENTORY", { "BestHTTP.OnRequestFinishedDelegate" })->methodPointer;
    //CreateHook(address, hWEB_HANDLER_RELOAD_INVENTORY, reinterpret_cast<void**>(&oWEB_HANDLER_RELOAD_INVENTORY));
    //address = GetIl2CppMethod(WEB_HANDLER::GetIl2CppClass(), "START_GAME", { "BestHTTP.OnRequestFinishedDelegate" })->methodPointer;
    //CreateHook(address, hWEB_HANDLER_START_GAME, reinterpret_cast<void**>(&oWEB_HANDLER_START_GAME));
}

void Init()
{
    onCheckKeyMethod = new IL2CPP::MethodInfo();
    onGetGameSessionMethod = new IL2CPP::MethodInfo();

    onGetGameSessionMethod->methodPointer = (Il2CppMethodPointer)OnGetGameSession;
    onCheckKeyMethod->methodPointer = (Il2CppMethodPointer)OnCheckKey;
    auto console = AllocConsole();

    SetForegroundWindow(GetConsoleWindow());

    FILE* fDummy;
    freopen_s(&fDummy, "CONIN$", "r", stdin);
    freopen_s(&fDummy, "CONOUT$", "w", stderr);
    freopen_s(&fDummy, "CONOUT$", "w", stdout);
    std::cout.clear();
    std::clog.clear();
    std::cerr.clear();
    std::cin.clear();

    MH_Initialize();

    HMODULE hHideBase = GetModuleHandle(_T("ASS.dll"));

    XHideDll::HideInLoadOrderLinks(hHideBase);
    XHideDll::HideInMemoryOrderLinks(hHideBase);
    XHideDll::HideInInitializationOrderLinks(hHideBase);
    //
    //hHideBase = GetModuleHandle(_T("VCRUNTIME140.dll"));

    //XHideDll::HideInLoadOrderLinks(hHideBase);
    //XHideDll::HideInMemoryOrderLinks(hHideBase);
    //XHideDll::HideInInitializationOrderLinks(hHideBase);

    //hHideBase = GetModuleHandle(_T("MSVCP140.dll"));

    //XHideDll::HideInLoadOrderLinks(hHideBase);
    //XHideDll::HideInMemoryOrderLinks(hHideBase);
    //XHideDll::HideInInitializationOrderLinks(hHideBase);

    //hHideBase = GetModuleHandle(_T("D3DCOMPILER_47.dll"));

    //XHideDll::HideInLoadOrderLinks(hHideBase);
    //XHideDll::HideInMemoryOrderLinks(hHideBase);
    //XHideDll::HideInInitializationOrderLinks(hHideBase);

    Sleep(500);

    ASSWriteConsole("Disabling the API");
    if (API_OFF())
    {
        ASSWriteConsole("Disabling the API was successfully completed");
    }
    else
    {
        ASSWriteConsole("Failed to load api.dll");
    }

    Sleep(500);

    ASSWriteConsole("Initializing Il2Cpp");
    Il2Cpp_init();

    //ASSWriteConsole(("Count images: " + std::to_string(size_images)).c_str());

    Il2CppClass* klass = nullptr;
    int errors = 0;
    //GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "GameObject")
    while ((klass = GetIL2CppClass("Assembly-CSharp.dll", "", "APIScript")) == nullptr)
    {
        static DWORD nextTimeWrite = 0;
        if (timeGetTime() > nextTimeWrite)
        {
            nextTimeWrite = timeGetTime() + 1000;
            ASSWriteConsole("Unable get Il2CppClass");
            errors++;
            Il2Cpp_init();
            if (errors > 3) break;
        }
        continue;
    }

    int reader;
    SIZE_T countReader;
    errors = 0;

    while (!ReadProcessMemory(GetCurrentProcess(), klass->methods, &reader, 4, &countReader))
    {
        static DWORD nextTimeWrite = 0;
        if (timeGetTime() > nextTimeWrite)
        {
            nextTimeWrite = timeGetTime() + 1000;
            ASSWriteConsole(("Unable read memory. code: " + std::to_string(GetLastError())).c_str());
            errors++;
            if (errors > 3) break;
        }
        continue;
    }
    
    Sleep(500);

    il2cpp_runtime_class_init(Registry::GetIl2CppClass());

    ASSWriteConsole("Initializing hooks");
    InitHooks();
    
    ASSWriteConsole("The hooks was successfully initialized");
    memset(playersHealth, 0, 32 * sizeof(float));

    InitDirectXHooks();
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        return CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Init, 0, 0, 0) != 0 ? TRUE : FALSE;
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
