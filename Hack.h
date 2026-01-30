#pragma once
//0 - full
//1 - test
//3 - admin
#define TypeCheat 3

struct EspColor
{
	float r, g, b, a;
	bool rainbow, eneble;
};

struct Variable 
{
	const wchar_t* name;
	void* pointer;
	std::string typeName;
};

inline bool onServer;
inline uint8_t myTeam;
inline UnityEngine_CoreModule::UnityEngine::Vector3 camPos;
inline float playersHealth[32];
inline float currentFov;
inline int bx, by, bz;

EspColor inline espBox   					{ 1.f,  0.f,  0.f, 1.f, false, false };
EspColor inline espBarrel 					{ 0.f,  0.f,  1.f, 1.f, false, false };
EspColor inline esp3DBox 					{ 1.f,  0.5f, 0.f, 1.f, false, false };
EspColor inline espName 					{ 0.f,  1.f,  1.f, 1.f, false, false };
EspColor inline espDistance 				{ 0.f,  1.f,  0.f, 1.f, false, false };
EspColor inline espHealth 					{ 1.f,  1.f,  0.f, 1.f, false, false };
EspColor inline espProtect 					{ 1.f,  1.f,  1.f, 1.f, false, false };
EspColor inline espLine 					{ 0.5f, 0.f,  1.f, 1.f, false, false };
EspColor inline espRadar					{ 0.5f, 0.f,  1.f, 1.f, false, false };
EspColor inline espEnts3DBox 				{ 1.0f, 0.f,  1.f, 1.f, false, false };
EspColor inline espEntsName 				{ 0.5f, 0.f,  1.f, 1.f, false, false };
EspColor inline espEntsDistance 			{ 1.f,  0.f,  0.f, 1.f, false, false };
EspColor inline espEntsHealth				{ 1.f,  0.5f, 0.f, 1.f, false, false };
EspColor inline aimFovEsp					{ 1.f,  0.f,  0.f, 1.f, false, false };

bool inline destroyBlocks = false;
bool inline espColorTeam = false;
bool inline espTeammates = false;
bool inline aim = false;
bool inline aimSilent = false;
bool inline aimCheckDistance = false;
bool inline aimAutoShooting = false;
bool inline triggerBot = false;
bool inline massKill = false;
bool inline masskillExplosive = false;
bool inline maxWeaponDistance = false;
bool inline drawfps = false;
//bool inline maxWeaponDistanceBlocks = false;
bool inline magicBullet = false;
bool inline instantReload = false;
bool inline instantChangeWeapon = false;
bool inline fastCrossbowShooting = false;
bool inline onlyHeadshot = false;
bool inline fakeDamage = false;
bool inline fakeDuck = false;
bool inline noFog = false;
bool inline randomFlag = false;
bool inline fakeBackward = false;
bool inline fakeDown = false;
bool inline saveKD = false;
bool inline chatSpam = false;
bool inline chams = false;
bool inline ghost = false;
bool inline arrowSpeedHack = false;
bool inline detonateMineC4 = false;
bool inline detonateTNT = false;
bool inline detonateExplosiveInEnemy = false;
bool inline noRecoil = false;
bool inline infinitelyJetpack = false;
bool inline thirdperson = false;
bool inline instnatMoveLocalPlayer = false;
bool inline hideHands = false;
bool inline noReload = false;
bool inline bunnyhop = false;
bool inline autoJump = false;
bool inline autoHeal = false;
bool inline textDropShadow = false;
bool inline textOutlined = false;
bool inline autoMove = false;
bool inline disconnetWhenFindAdmin = false;
bool inline syncPlayersPosition = false;
bool inline masskillZombie = false;
bool inline noWeaponStopMove = false;
bool inline spinupMinigun = false;
bool inline noSpread = false;

int inline aimScanType = 1;
int inline masskillScanType = 1;
int inline sendNormalPosEvery = 1;
int inline aimBone = 0;
int inline aimKey = 0;
int inline teleportKey = VK_SHIFT;
int inline spawnKey = VK_F1;
int inline selfKillKey = VK_F2;
int inline spawnGPKey = VK_F3;
int inline priorityMasskillIndex = -1;

int inline medkits[3];

const int inline countBones = 3;

float inline aimSpeed = 0.f;
float inline aimFov = 0.f;
float inline enemySize = 1.0f;
float inline teammatesSize = 1.0f;
float inline cameraOffset = 10.f;
float inline fieldOfViev = 65.f;
float inline spamInterval = 3.0;
float inline posLag = 0.f;
float inline textSize = 10.f;
float inline speed = 0.18f;
float inline gravity = 0.2f;
float inline jumpForce = 0.20f;
float inline jumpDamping = 0.10f;
//float inline jumpForce = 8.930f;
//float inline jumpDamping = 1.820f;
float inline crossbowSpeed = 0.02f;
float inline espLineThickness = 1.5f;
float inline maxEspDrawDistance = 300.f;
float inline attackSleep = 0.1f;

char inline allocForAuth[50] = "Y4kxXq42ypFJFsPhspjRQByBOw5jker59RBXtE15toQyD0cR\0";

inline char* key = &allocForAuth[0];
inline char* hwid = &allocForAuth[17];

int inline pressedSetTeam = -1;
int inline selectedWeaponId;
int inline blockAttackId = -1;

bool inline reloadProfile = false;
bool inline setWeapon;

int inline fieldsCount = 0;
bool inline sendPacket = false;
inline char textSpam[64];

class PlayerInfo
{
public:
	int index;
	float timeJoin;
	std::string name;
	std::string clan;
	UnityEngine_CoreModule::UnityEngine::Vector3 headPosOnScreen;
	UnityEngine_CoreModule::UnityEngine::Vector3 headPosOnScreen2;
	UnityEngine_CoreModule::UnityEngine::Vector3 currentRot;
	UnityEngine_CoreModule::UnityEngine::Vector3 currentPos;
	UnityEngine_CoreModule::UnityEngine::Vector3 posOnScreen;
	UnityEngine_CoreModule::UnityEngine::Vector3 posOnScreen2;
	UnityEngine_CoreModule::UnityEngine::Vector3 Box3DPosOnScreen[8];
	Assembly_CSharp::AssemblyCSharp::BotData botData;
};

class EntInfo 
{
public:
	std::string name;
	Vector3 pos;
	Vector3 posOnScreen;
	UnityEngine_CoreModule::UnityEngine::Vector3 Box3DPosOnScreen[8];
	ENTITY type;
	int uid;
	float health;
};

inline EntInfo* entsInfo[512];
inline PlayerInfo* playersInfo[32];
inline PlayerInfo* lastJoinPlayersInfo[32];

enum class PacketFieldType : int
{
	Byte,
	Short,
	Int,
	Float,
	String,
};

struct Field 
{
	PacketFieldType type;
	unsigned char bValue;
	short sValue;
	int iValue;
	float fValue;
	char strValue[255];
};

struct AdminInfo
{
	const char* name;
	const char* clan;
	bool nameConstain;
};

inline std::vector<AdminInfo> admins =
{ 
	{"[75]", "ELDERY", true},
	{"[76]", "ELDERY", true},
};

inline std::vector<Field> fields;

//inline const char* key = "N8M3kUIFAhEnTVVk";
//inline const char* hwid = "8ED5E5316F4EC843D772BCF6689D7D9E";