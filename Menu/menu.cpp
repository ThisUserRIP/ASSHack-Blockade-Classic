#include "menu.h"
#include "..\\Utility.h"
#include "..\\Hack.h"

#include <d3d11.h>
#include <D3Dcompiler.h>
#pragma comment(lib, "D3dcompiler.lib")
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "winmm.lib")
#include <MinHook.h>
#include "..\\ImGUI/imgui.h"
#include "..\\ImGUI/imgui_impl_win32.h"
#include "..\\ImGUI/imgui_impl_dx11.h"
#include "..\\ImGUI/imgui_stdlib.h"

#include "main.h"

#include "resource_manager.hh"
#include "logo.hh"
#include "icons.hh"
#include "custom.hh"

#include <shlobj.h>

#pragma comment(lib, "shell32.lib")

using namespace Assembly_CSharp::AssemblyCSharp;

typedef HRESULT(__stdcall* D3D11PresentHook) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef HRESULT(__stdcall* D3D11ResizeBuffersHook) (IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);

D3D11PresentHook phookD3D11Present = NULL;
D3D11ResizeBuffersHook phookD3D11ResizeBuffers = NULL;

ID3D11Device* pDevice = NULL;

DWORD_PTR* pSwapChainVtable = NULL;
DWORD_PTR* pContextVTable = NULL;
DWORD_PTR* pDeviceVTable = NULL;

ID3D11RasterizerState* DEPTHBIASState_FALSE;
ID3D11RasterizerState* DEPTHBIASState_TRUE;
ID3D11RasterizerState* DEPTHBIASState_ORIG;
ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
bool ShowMenu;
int tab = 0;
int selectedConfig = -1;

std::vector<Variable> variables;

#define SaveVariable(n) SaveVariableW(L"Main", L ## #n, std::to_wstring(n).c_str());
#define LoadVariable(n) SetVaraible(&n, LoadVariableW(L"Main", L ## #n), typeid(## n).name());
#define RegisterVariable(n) variables.resize(variables.size() + 1); variables[variables.size() - 1] = {L ## #n, &n, typeid(## n).name()};
#define Distance(v1, v2) sqrt((v1.x - v2.x) * (v1.x - v2.x) + (v1.y - v2.y) * (v1.y - v2.y) + (v1.z - v2.z) * (v1.z - v2.z));

static const char* tab_names[] = {
	"aimbot",
	"visual",
	"other",
	"misc",
	"fun",
	"players",
	"configs",
	"packet editor",
};

static const char* tab_icons[] = {
	"0",
	"1",
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
};

enum page_name : int {
	page_aim,
	page_visual,
	page_other,
	page_misc,
	page_fun,
	page_players,
	page_configs,
	page_packetEditor,
};

#if TypeCheat == 3
const int tabsCount = 8;
#else 
const int tabsCount = 7;
#endif

static const char* bonesName[] =
{
	"Head",
	"Neck",
	"Body",
};

static const char* scanMethods[] = 
{
	"Index",
	"Distance",
	"Fov",
};

static const char* fieldsTypeName[] = 
{
	"Byte",
	"Short",
	"Int",
	"Float",
	"String",
};

static const char* templesName[] =
{
	"Empty",
	"My packet template",
	"send_attack",
	"send_attackblock",
	"send_attack_ent",
	"send_auth",
	"send_blockinfo",
	"send_chat",
	"send_createent",
	"send_currentweapon",
	"send_detonateent",
	"send_detonate_my_c4",
	"send_disconnect",
	"send_enter_the_ent",
	"send_exit_the_ent",
	"send_jointeam",
	"send_jointeam_auto",
	"send_last_config",
	"send_medkit",
	"send_milk",
	"send_mission_status",
	"send_myinfo",
	"send_new_config",
	"send_new_ent_pos",
	"send_position",
	"send_prereload",
	"send_private_command",
	"send_private_command 2",
	"send_private_settings",
	"send_reload",
	"send_savemap",
	"send_selectblock",
	"send_setblock",
	"send_spawn_me",
	"send_spawn_my_vehicle",
	"send_use_module",
	"send_vehicle_targeting",
	"send_vehicle_turret",
	"send_weapon_medkit",
	"send_weapon_tnt",
};

static const char* espOptionName[] =
{
	"Player",
	"Ent",
};

//static const char* boxTypeName[] =
//{
//	"Rect",
//	"Fill",
//};

//static const char* medkitsName[] =
//{
//	"L medkit",
//	"M medkit",
//	"S medkit",
//};

std::vector<std::wstring> configs;
std::wstring pathToConfigs;
std::string nameConfig;

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK hWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if ((int)curretWindow == -1)
	{
		curretWindow = hWnd;
	}

	ImGuiIO& io = ImGui::GetIO();
	POINT mPos;
	GetCursorPos(&mPos);
	ScreenToClient(window, &mPos);
	ImGui::GetIO().MousePos.x = mPos.x;
	ImGui::GetIO().MousePos.y = mPos.y;

	//if (uMsg == WM_KEYUP)
	//{
	//	if (wParam == VK_INSERT)
	//	{
	//		if (ShowMenu)
	//			io.MouseDrawCursor = true;
	//		else
	//			io.MouseDrawCursor = false;
	//	}
	//}

	if (ShowMenu)
	{
		ImGui::GetIO().MouseDrawCursor = true;
		auto res = ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
		if (
			uMsg == WM_SETFOCUS ||
			uMsg == WM_SIZE ||
			uMsg == WM_ACTIVATE ||
			uMsg == WM_NCCALCSIZE ||
			uMsg == WM_SYSCOMMAND ||
			uMsg == WM_PAINT || 
			(uMsg >= 0x0FF && uMsg <= 0x0107)
			)
		{
			if (res)
			{
				return true;
			}
		}

		else
		{
			//ASSWriteConsole(std::to_string(uMsg).c_str());
			return true;
		}
	}
	else
	{
		ImGui::GetIO().MouseDrawCursor = false;
	}

	return CallWindowProc(OriginalWndProcHandler, hWnd, uMsg, wParam, lParam);
}

void SaveVariableW(const wchar_t* section, const wchar_t* name, const wchar_t* value)
{
	std::wstring pathToConfig = pathToConfigs + L"\\" + configs[selectedConfig];
	WritePrivateProfileString(section, name, value, pathToConfig.c_str());
}

std::wstring LoadVariableW(const wchar_t* section, const wchar_t* name)
{
	std::wstring pathToConfig = pathToConfigs + L"\\" + configs[selectedConfig];
	wchar_t RetVal[255];
	GetPrivateProfileString(section, name, L"", (LPWSTR)RetVal, 255, pathToConfig.c_str());

	DWORD lastError = GetLastError();
	if (lastError == 2) {
		RetVal[0] = L'0';
		SaveVariableW(section, name, L"0");
	}

	return RetVal;
}

void SetVaraible(void* variable, std::wstring value, std::string varTypeName)
{
	if (varTypeName == "int") 
	{
		*(int*)variable = std::stoi(value);
	}
	else if (varTypeName == "bool")
	{
		*(bool*)variable = std::stoi(value);
	}
	else if (varTypeName == "float")
	{
		*(float*)variable = std::stof(value);
	}
}

void SaveConfig()
{
	if (selectedConfig < 0) return;

	for (int i = 0; i < variables.size(); i++)
	{
		if (variables[i].typeName == "int")
		{
			SaveVariableW(L"Main", variables[i].name, std::to_wstring(*(int*)variables[i].pointer).c_str());
		}
		else if (variables[i].typeName == "bool")
		{
			SaveVariableW(L"Main", variables[i].name, std::to_wstring(*(bool*)variables[i].pointer).c_str());
		}
		else if (variables[i].typeName == "float")
		{
			SaveVariableW(L"Main", variables[i].name, std::to_wstring(*(float*)variables[i].pointer).c_str());
		}
	}

	/*SaveVariable(espBox.r);
	SaveVariable(espBox.g);
	SaveVariable(espBox.b);
	SaveVariable(espBox.a);
	SaveVariable(espBox.rainbow);
	SaveVariable(espBox.eneble);
	SaveVariable(esp3DBox.r);
	SaveVariable(esp3DBox.g);
	SaveVariable(esp3DBox.b);
	SaveVariable(esp3DBox.a);
	SaveVariable(esp3DBox.rainbow);
	SaveVariable(esp3DBox.eneble);
	SaveVariable(espBarrel.r);
	SaveVariable(espBarrel.g);
	SaveVariable(espBarrel.b);
	SaveVariable(espBarrel.a);
	SaveVariable(espBarrel.rainbow);
	SaveVariable(espBarrel.eneble);
	SaveVariable(espName.r);
	SaveVariable(espName.g);
	SaveVariable(espName.b);
	SaveVariable(espName.a);
	SaveVariable(espName.rainbow);
	SaveVariable(espName.eneble);
	SaveVariable(espHealth.r);
	SaveVariable(espHealth.g);
	SaveVariable(espHealth.b);
	SaveVariable(espHealth.a);
	SaveVariable(espHealth.rainbow);
	SaveVariable(espHealth.eneble);
	SaveVariable(espProtect.r);
	SaveVariable(espProtect.g);
	SaveVariable(espProtect.b);
	SaveVariable(espProtect.a);
	SaveVariable(espProtect.rainbow);
	SaveVariable(espProtect.eneble);
	SaveVariable(espLine.r);
	SaveVariable(espLine.g);
	SaveVariable(espLine.b);
	SaveVariable(espLine.a);
	SaveVariable(espLine.rainbow);
	SaveVariable(espLine.eneble);
	SaveVariable(espEnts3DBox.r);
	SaveVariable(espEnts3DBox.g);
	SaveVariable(espEnts3DBox.b);
	SaveVariable(espEnts3DBox.a);
	SaveVariable(espEnts3DBox.rainbow);
	SaveVariable(espEnts3DBox.eneble);
	SaveVariable(espEntsName.r);
	SaveVariable(espEntsName.g);
	SaveVariable(espEntsName.b);
	SaveVariable(espEntsName.a);
	SaveVariable(espEntsName.rainbow);
	SaveVariable(espEntsName.eneble);
	SaveVariable(espEntsDistance.r);
	SaveVariable(espEntsDistance.g);
	SaveVariable(espEntsDistance.b);
	SaveVariable(espEntsDistance.a);
	SaveVariable(espEntsDistance.rainbow);
	SaveVariable(espEntsDistance.eneble);
	SaveVariable(espColorTeam);
	SaveVariable(espTeammates);
	SaveVariable(aim);
	SaveVariable(aimSilent);
	SaveVariable(aimCheckDistance);
	SaveVariable(aimAutoShooting);
	SaveVariable(triggerBot);
	SaveVariable(massKill);
	SaveVariable(masskillExplosive);
	SaveVariable(maxWeaponDistance);
	SaveVariable(magicBullet);
	SaveVariable(instantReload);
	SaveVariable(instantChangeWeapon);
	SaveVariable(fastCrossbowShooting);
	SaveVariable(onlyHeadshot);
	SaveVariable(fakeDamage);
	SaveVariable(fakeDuck);
	SaveVariable(noFog);
	SaveVariable(randomFlag);
	SaveVariable(fakeBackward);
	SaveVariable(fakeDown);
	SaveVariable(saveKD);
	SaveVariable(chatSpam);
	SaveVariable(chams);
	SaveVariable(ghost);
	SaveVariable(arrowSpeedHack);
	SaveVariable(detonateMineC4);
	SaveVariable(detonateTNT);
	SaveVariable(detonateExplosiveInEnemy);
	SaveVariable(noRecoil);
	SaveVariable(infinitelyJetpack);
	SaveVariable(thirdperson);
	SaveVariable(instnatMoveLocalPlayer);
	SaveVariable(hideHands);
	SaveVariable(noReload);
	SaveVariable(bunnyhop);
	SaveVariable(autoJump);
	SaveVariable(autoHeal);
	SaveVariable(textDropShadow);
	SaveVariable(textOutlined);
	SaveVariable(autoMove);
	SaveVariable(disconnetWhenFindAdmin);
	SaveVariable(syncPlayersPosition);
	SaveVariable(textSize);
	SaveVariable(aimScanType);
	SaveVariable(masskillScanType);
	SaveVariable(sendNormalPosEvery);
	SaveVariable(aimBone);
	SaveVariable(aimKey);
	SaveVariable(teleportKey);
	SaveVariable(spawnKey);
	SaveVariable(selfKillKey);
	SaveVariable(spawnGPKey);
	SaveVariable(priorityMasskillIndex);
	SaveVariable(medkits[0]);
	SaveVariable(medkits[1]);
	SaveVariable(medkits[2]);
	SaveVariable(aimSpeed);
	SaveVariable(aimFov);
	SaveVariable(enemySize);
	SaveVariable(teammatesSize);
	SaveVariable(cameraOffset);
	SaveVariable(fieldOfViev);
	SaveVariable(spamInterval);
	SaveVariable(posLag);
	SaveVariable(speed);
	SaveVariable(gravity);
	SaveVariable(jumpForce);
	SaveVariable(jumpDamping);
	SaveVariable(crossbowSpeed);
	SaveVariable(espLineThickness);
	SaveVariable(maxEspDrawDistance);
	SaveVariable(maxWeaponDistanceBlocks);*/
}

void LoadConfig() 
{
	if (selectedConfig < 0) return;

	auto key = Registry::GetStaticFields()->LocalMachine->OpenSubKey(CreateString("software\\ASS"), true);

	auto value = il2cpp_object_new(Int32::GetIl2CppClass());
	__asm
	{
		mov eax, value
		mov ecx, selectedConfig
		mov[eax + 0x08], ecx
	}

	key->SetValue(CreateString("SelectedConfig"), (mscorlib::System::Object*)value, RegistryValueKind::DWord);

	for (int i = 0; i < variables.size(); i++) 
	{
		SetVaraible(variables[i].pointer, LoadVariableW(L"Main", variables[i].name), variables[i].typeName);
	}

	//LoadVariable(espBox.r);
	//LoadVariable(espBox.g);
	//LoadVariable(espBox.b);
	//LoadVariable(espBox.a);
	//LoadVariable(espBox.rainbow);
	//LoadVariable(espBox.eneble);
	//LoadVariable(esp3DBox.r);
	//LoadVariable(esp3DBox.g);
	//LoadVariable(esp3DBox.b);
	//LoadVariable(esp3DBox.a);
	//LoadVariable(esp3DBox.rainbow);
	//LoadVariable(esp3DBox.eneble);
	//LoadVariable(espBarrel.r);
	//LoadVariable(espBarrel.g);
	//LoadVariable(espBarrel.b);
	//LoadVariable(espBarrel.a);
	//LoadVariable(espBarrel.rainbow);
	//LoadVariable(espBarrel.eneble);
	//LoadVariable(espName.r);
	//LoadVariable(espName.g);
	//LoadVariable(espName.b);
	//LoadVariable(espName.a);
	//LoadVariable(espName.rainbow);
	//LoadVariable(espName.eneble);
	//LoadVariable(espHealth.r);
	//LoadVariable(espHealth.g);
	//LoadVariable(espHealth.b);
	//LoadVariable(espHealth.a);
	//LoadVariable(espHealth.rainbow);
	//LoadVariable(espHealth.eneble);
	//LoadVariable(espProtect.r);
	//LoadVariable(espProtect.g);
	//LoadVariable(espProtect.b);
	//LoadVariable(espProtect.a);
	//LoadVariable(espProtect.rainbow);
	//LoadVariable(espProtect.eneble);
	//LoadVariable(espLine.r);
	//LoadVariable(espLine.g);
	//LoadVariable(espLine.b);
	//LoadVariable(espLine.a);
	//LoadVariable(espLine.rainbow);
	//LoadVariable(espLine.eneble);
	//LoadVariable(espEnts3DBox.r);
	//LoadVariable(espEnts3DBox.g);
	//LoadVariable(espEnts3DBox.b);
	//LoadVariable(espEnts3DBox.a);
	//LoadVariable(espEnts3DBox.rainbow);
	//LoadVariable(espEnts3DBox.eneble);
	//LoadVariable(espEntsName.r);
	//LoadVariable(espEntsName.g);
	//LoadVariable(espEntsName.b);
	//LoadVariable(espEntsName.a);
	//LoadVariable(espEntsName.rainbow);
	//LoadVariable(espEntsName.eneble);
	//LoadVariable(espEntsDistance.r);
	//LoadVariable(espEntsDistance.g);
	//LoadVariable(espEntsDistance.b);
	//LoadVariable(espEntsDistance.a);
	//LoadVariable(espEntsDistance.rainbow);
	//LoadVariable(espEntsDistance.eneble);
	//LoadVariable(espColorTeam);
	//LoadVariable(espTeammates);
	//LoadVariable(aim);
	//LoadVariable(aimSilent);
	//LoadVariable(aimCheckDistance);
	//LoadVariable(aimAutoShooting);
	//LoadVariable(triggerBot);
	//LoadVariable(massKill);
	//LoadVariable(masskillExplosive);
	//LoadVariable(maxWeaponDistance);
	//LoadVariable(magicBullet);
	//LoadVariable(instantReload);
	//LoadVariable(instantChangeWeapon);
	//LoadVariable(fastCrossbowShooting);
	//LoadVariable(onlyHeadshot);
	//LoadVariable(fakeDamage);
	//LoadVariable(fakeDuck);
	//LoadVariable(noFog);
	//LoadVariable(randomFlag);
	//LoadVariable(fakeBackward);
	//LoadVariable(fakeDown);
	//LoadVariable(saveKD);
	//LoadVariable(chatSpam);
	//LoadVariable(chams);
	//LoadVariable(ghost);
	//LoadVariable(arrowSpeedHack);
	//LoadVariable(detonateMineC4);
	//LoadVariable(detonateTNT);
	//LoadVariable(detonateExplosiveInEnemy);
	//LoadVariable(noRecoil);
	//LoadVariable(infinitelyJetpack);
	//LoadVariable(thirdperson);
	//LoadVariable(instnatMoveLocalPlayer);
	//LoadVariable(hideHands);
	//LoadVariable(noReload);
	//LoadVariable(bunnyhop);
	//LoadVariable(autoJump);
	//LoadVariable(autoHeal);
	//LoadVariable(textDropShadow);
	//LoadVariable(textOutlined);
	//LoadVariable(autoMove);
	//LoadVariable(disconnetWhenFindAdmin);
	//LoadVariable(syncPlayersPosition);
	//LoadVariable(textSize);
	//LoadVariable(aimScanType);
	//LoadVariable(masskillScanType);
	//LoadVariable(sendNormalPosEvery);
	//LoadVariable(aimBone);
	//LoadVariable(aimKey);
	//LoadVariable(teleportKey);
	//LoadVariable(spawnKey);
	//LoadVariable(selfKillKey);
	//LoadVariable(spawnGPKey);
	//LoadVariable(priorityMasskillIndex);
	//LoadVariable(medkits[0]);
	//LoadVariable(medkits[1]);
	//LoadVariable(medkits[2]);
	//LoadVariable(aimSpeed);
	//LoadVariable(aimFov);
	//LoadVariable(enemySize);
	//LoadVariable(teammatesSize);
	//LoadVariable(cameraOffset);
	//LoadVariable(fieldOfViev);
	//LoadVariable(spamInterval);
	//LoadVariable(posLag);
	//LoadVariable(speed);
	//LoadVariable(gravity);
	//LoadVariable(jumpForce);
	//LoadVariable(jumpDamping);
	//LoadVariable(crossbowSpeed);
	//LoadVariable(espLineThickness);
	//LoadVariable(maxEspDrawDistance);
	//LoadVariable(maxWeaponDistanceBlocks);
}

void ResetConfig() 
{
	espBox = { 1.f, 0.f, 0.f, 1.f, false, false };
	espBarrel = { 0.f, 0.f, 1.f, 1.f, false, false };
	esp3DBox = { 1.f, 0.5f, 0.f, 1.f, false, false };
	espName = { 0.f, 1.f, 1.f, 1.f, false, false };
	espDistance = { 0.f, 1.f, 0.f, 1.f, false, false };
	espHealth = { 1.f, 1.f, 0.f, 1.f, false, false };
	espProtect = { 1.f, 1.f, 1.f, 1.f, false, false };
	espLine = { 0.5f, 0.f, 1.f, 1.f, false, false };
	espRadar = { 0.5f, 0.f,  1.f, 1.f, false, false };
	espEnts3DBox = { 1.0f, 0.f, 1.f, 1.f, false, false };
	espEntsName = { 0.5f, 0.f, 1.f, 1.f, false, false };
	espEntsDistance = { 1.f, 0.f, 0.f, 1.f, false, false };
	espEntsHealth = { 1.f, 0.5f, 0.f, 1.f, false, false };
	aimFovEsp = { 1.f,  0.f, 0.f, 1.f, false, false };
	espColorTeam = false;
	espTeammates = false;
	aim = false;
	aimSilent = false;
	aimCheckDistance = false;
	aimAutoShooting = false;
	triggerBot = false;
	massKill = false;
	masskillExplosive = false;
	maxWeaponDistance = false;
	magicBullet = false;
	instantReload = false;
	instantChangeWeapon = false;
	fastCrossbowShooting = false;
	onlyHeadshot = false;
	fakeDamage = false;
	fakeDuck = false;
	noFog = false;
	randomFlag = false;
	fakeBackward = false;
	fakeDown = false;
	saveKD = false;
	chatSpam = false;
	chams = false;
	ghost = false;
	arrowSpeedHack = false;
	detonateMineC4 = false;
	detonateTNT = false;
	detonateExplosiveInEnemy = false;
	noRecoil = false;
	infinitelyJetpack = false;
	thirdperson = false;
	instnatMoveLocalPlayer = false;
	hideHands = false;
	noReload = false;
	bunnyhop = false;
	autoJump = false;
	autoHeal = false;
	textDropShadow = false;
	textOutlined = false;
	autoMove = false;
	disconnetWhenFindAdmin = false;
	syncPlayersPosition = false;
	masskillZombie = false;
	noWeaponStopMove = false;
	spinupMinigun = false;
	noSpread = false;
	//maxWeaponDistanceBlocks = false;
	textSize = 10;
	aimScanType = 1;
	masskillScanType = 1;
	sendNormalPosEvery = 1;
	aimBone = 0;
	aimKey = 0;
	teleportKey = VK_SHIFT;
	spawnKey = VK_F1;
	selfKillKey = VK_F2;
	spawnGPKey = VK_F3;
	priorityMasskillIndex = -1;
	medkits[0] = 100;
	medkits[1] = 100;
	medkits[2] = 100;
	aimSpeed = 0.f;
	aimFov = 0.f;
	enemySize = 1.0f;
	teammatesSize = 1.0f;
	cameraOffset = 10.f;
	fieldOfViev = 65.f;
	spamInterval = 3.0;
	posLag = 0.f;
	speed = 0.18f;
	gravity = 0.2f;
	jumpForce = 0.20f;
	jumpDamping = 0.10f;
	crossbowSpeed = 0.02f;
	espLineThickness = 1.5f;
	maxEspDrawDistance = 300.f;
	//minigunSpeed = 800.0f;
	drawfps = false;
}

void RefreshConfigList()
{
	configs.clear();
	wchar_t my_documents[MAX_PATH];
	HRESULT result = SHGetFolderPath(NULL, CSIDL_PERSONAL, NULL, SHGFP_TYPE_CURRENT, my_documents);

	pathToConfigs = my_documents;
	pathToConfigs += L"\\ASS\\Configs";
	auto str = CreateString(pathToConfigs.c_str());
	if (!Directory::Exists(str))
	{
		Directory::CreateDirectory_(str);
	}
	else
	{
		WIN32_FIND_DATA ffd;
		HANDLE hFind = INVALID_HANDLE_VALUE;
		hFind = FindFirstFile((pathToConfigs + L"\\*.cfg").c_str(), &ffd);

		if (hFind != INVALID_HANDLE_VALUE)
		{
			do
			{
				if (!(ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
				{
					configs.resize(configs.size() + 1);
					configs[configs.size() - 1] = ffd.cFileName;
				}
			} while (FindNextFile(hFind, &ffd) != 0);
		}

		FindClose(hFind);
	}
}

void CreateConfig() 
{
	if (nameConfig.size() > 0)
	{
		std::wstring path = pathToConfigs + L"\\" + std::wstring(nameConfig.begin(), nameConfig.end()) + L".cfg";
		if (File::Exists(CreateString(path.c_str())))
		{
			return;
		}
		File::Create(CreateString(path.c_str()))->Close();
		RefreshConfigList();

		for (int i = 0; i < configs.size(); i++)
		{
			if (configs[i] == std::wstring(nameConfig.begin(), nameConfig.end()) + L".cfg")
			{
				selectedConfig = i;
				break;
			}
		}

		ResetConfig();
		SaveConfig();
	}
}

void RemoveConfig()
{
	std::wstring pathToConfig = pathToConfigs + L"\\" + configs[selectedConfig];

	if (File::Exists(CreateString(pathToConfig.c_str())))
	{
		File::Delete(CreateString(pathToConfig.c_str()));
	}

	RefreshConfigList();
	selectedConfig = -1;
}

void GetConfigs() 
{
	RegisterVariable(espBox.r);
	RegisterVariable(espBox.g);
	RegisterVariable(espBox.b);
	RegisterVariable(espBox.a);
	RegisterVariable(espBox.rainbow);
	RegisterVariable(espBox.eneble);
	RegisterVariable(esp3DBox.r);
	RegisterVariable(esp3DBox.g);
	RegisterVariable(esp3DBox.b);
	RegisterVariable(esp3DBox.a);
	RegisterVariable(esp3DBox.rainbow);
	RegisterVariable(esp3DBox.eneble);
	RegisterVariable(espBarrel.r);
	RegisterVariable(espBarrel.g);
	RegisterVariable(espBarrel.b);
	RegisterVariable(espBarrel.a);
	RegisterVariable(espBarrel.rainbow);
	RegisterVariable(espBarrel.eneble);
	RegisterVariable(espName.r);
	RegisterVariable(espName.g);
	RegisterVariable(espName.b);
	RegisterVariable(espName.a);
	RegisterVariable(espName.rainbow);
	RegisterVariable(espName.eneble);
	RegisterVariable(espHealth.r);
	RegisterVariable(espHealth.g);
	RegisterVariable(espHealth.b);
	RegisterVariable(espHealth.a);
	RegisterVariable(espHealth.rainbow);
	RegisterVariable(espHealth.eneble);
	RegisterVariable(espProtect.r);
	RegisterVariable(espProtect.g);
	RegisterVariable(espProtect.b);
	RegisterVariable(espProtect.a);
	RegisterVariable(espProtect.rainbow);
	RegisterVariable(espProtect.eneble);
	RegisterVariable(espLine.r);
	RegisterVariable(espLine.g);
	RegisterVariable(espLine.b);
	RegisterVariable(espLine.a);
	RegisterVariable(espLine.rainbow);
	RegisterVariable(espLine.eneble);
	RegisterVariable(espDistance.r);
	RegisterVariable(espDistance.g);
	RegisterVariable(espDistance.b);
	RegisterVariable(espDistance.a);
	RegisterVariable(espDistance.rainbow);
	RegisterVariable(espDistance.eneble);
	RegisterVariable(espRadar.r);
	RegisterVariable(espRadar.g);
	RegisterVariable(espRadar.b);
	RegisterVariable(espRadar.a);
	RegisterVariable(espRadar.rainbow);
	RegisterVariable(espRadar.eneble);
	RegisterVariable(espEnts3DBox.r);
	RegisterVariable(espEnts3DBox.g);
	RegisterVariable(espEnts3DBox.b);
	RegisterVariable(espEnts3DBox.a);
	RegisterVariable(espEnts3DBox.rainbow);
	RegisterVariable(espEnts3DBox.eneble);
	RegisterVariable(espEntsName.r);
	RegisterVariable(espEntsName.g);
	RegisterVariable(espEntsName.b);
	RegisterVariable(espEntsName.a);
	RegisterVariable(espEntsName.rainbow);
	RegisterVariable(espEntsName.eneble);
	RegisterVariable(espEntsHealth.r);
	RegisterVariable(espEntsHealth.g);
	RegisterVariable(espEntsHealth.b);
	RegisterVariable(espEntsHealth.a);
	RegisterVariable(espEntsHealth.rainbow);
	RegisterVariable(espEntsHealth.eneble);
	RegisterVariable(espEntsDistance.r);
	RegisterVariable(espEntsDistance.g);
	RegisterVariable(espEntsDistance.b);
	RegisterVariable(espEntsDistance.a);
	RegisterVariable(espEntsDistance.rainbow);
	RegisterVariable(espEntsDistance.eneble); 
	RegisterVariable(aimFovEsp.r);
	RegisterVariable(aimFovEsp.g);
	RegisterVariable(aimFovEsp.b);
	RegisterVariable(aimFovEsp.a);
	RegisterVariable(aimFovEsp.rainbow);
	RegisterVariable(aimFovEsp.eneble); 
	RegisterVariable(espColorTeam);
	RegisterVariable(espTeammates);
	RegisterVariable(aim);
	RegisterVariable(aimSilent);
	RegisterVariable(aimCheckDistance);
	RegisterVariable(aimAutoShooting);
	RegisterVariable(drawfps);
	RegisterVariable(triggerBot);
	RegisterVariable(massKill);
	RegisterVariable(masskillZombie);
	RegisterVariable(masskillExplosive);
	RegisterVariable(maxWeaponDistance);
	RegisterVariable(magicBullet);
	RegisterVariable(instantReload);
	RegisterVariable(instantChangeWeapon);
	RegisterVariable(fastCrossbowShooting);
	RegisterVariable(onlyHeadshot);
	RegisterVariable(fakeDamage);
	RegisterVariable(fakeDuck);
	RegisterVariable(noFog);
	RegisterVariable(randomFlag);
	RegisterVariable(fakeBackward);
	RegisterVariable(fakeDown);
	RegisterVariable(saveKD);
	RegisterVariable(chatSpam);
	RegisterVariable(chams);
	RegisterVariable(ghost);
	RegisterVariable(arrowSpeedHack);
	RegisterVariable(detonateMineC4);
	RegisterVariable(detonateTNT);
	RegisterVariable(detonateExplosiveInEnemy);
	RegisterVariable(noRecoil);
	RegisterVariable(infinitelyJetpack);
	RegisterVariable(thirdperson);
	RegisterVariable(instnatMoveLocalPlayer);
	RegisterVariable(hideHands);
	RegisterVariable(noReload);
	RegisterVariable(bunnyhop);
	RegisterVariable(autoJump);
	RegisterVariable(autoHeal);
	//RegisterVariable(textDropShadow);
	//RegisterVariable(textOutlined);
	RegisterVariable(autoMove);
	RegisterVariable(disconnetWhenFindAdmin);
	RegisterVariable(syncPlayersPosition);
	RegisterVariable(textSize);
	RegisterVariable(aimScanType);
	RegisterVariable(masskillScanType);
	RegisterVariable(sendNormalPosEvery);
	RegisterVariable(aimBone);
	RegisterVariable(aimKey);
	RegisterVariable(teleportKey);
	RegisterVariable(spawnKey);
	RegisterVariable(selfKillKey);
	RegisterVariable(spawnGPKey);
	RegisterVariable(priorityMasskillIndex);
	RegisterVariable(medkits[0]);
	RegisterVariable(medkits[1]);
	RegisterVariable(medkits[2]);
	RegisterVariable(aimSpeed);
	RegisterVariable(aimFov);
	RegisterVariable(enemySize);
	RegisterVariable(teammatesSize);
	RegisterVariable(cameraOffset);
	RegisterVariable(fieldOfViev);
	RegisterVariable(spamInterval);
	RegisterVariable(posLag);
	RegisterVariable(speed);
	RegisterVariable(gravity);
	RegisterVariable(jumpForce);
	RegisterVariable(jumpDamping);
	RegisterVariable(crossbowSpeed);
	RegisterVariable(espLineThickness);
	RegisterVariable(maxEspDrawDistance);
	RegisterVariable(noWeaponStopMove);
	RegisterVariable(spinupMinigun);
	RegisterVariable(noSpread);
	
	//RegisterVariable(maxWeaponDistanceBlocks);
	RefreshConfigList();
	auto key = Registry::GetStaticFields()->LocalMachine->OpenSubKey(CreateString("software\\ASS"), true);

	auto res = key->GetValue(CreateString("SelectedConfig"));

	if (res == nullptr)
	{
		auto value = il2cpp_object_new(Int32::GetIl2CppClass());
		__asm 
		{
			mov eax, value
			mov ecx, 0
			mov [eax + 0x08], ecx
		}

		key->SetValue(CreateString("SelectedConfig"), (mscorlib::System::Object*)value, RegistryValueKind::DWord);
		selectedConfig = -1;
	}
	else
	{
		selectedConfig = *(int*)il2cpp_object_unbox(res);

		if (selectedConfig >= configs.size()) 
		{
			selectedConfig = -1;
		}
	}

	key->Close();

	if (selectedConfig >= 0) 
	{
		LoadConfig();
	}
}

void SelectTemple(int index) 
{
	if (!onServer) return;
	switch (index)
	{
	case 0: {
		fieldsCount = 0;
		fields.resize(fieldsCount);
	}
		break;
	case 2: {
		fieldsCount = 21;
		fields.resize(fieldsCount);

		fields[0].type = PacketFieldType::Byte;
		fields[1].type = PacketFieldType::Byte;
		fields[2].type = PacketFieldType::Short;
		fields[3].type = PacketFieldType::Int;

		fields[4].type = PacketFieldType::Int;
		fields[5].type = PacketFieldType::Int;
		fields[6].type = PacketFieldType::Byte;
		fields[7].type = PacketFieldType::Byte;

		fields[8].type = PacketFieldType::Float;
		fields[9].type = PacketFieldType::Float;
		fields[10].type = PacketFieldType::Float;

		fields[11].type = PacketFieldType::Float;
		fields[12].type = PacketFieldType::Float;
		fields[13].type = PacketFieldType::Float;

		fields[14].type = PacketFieldType::Float;
		fields[15].type = PacketFieldType::Float;
		fields[16].type = PacketFieldType::Float;

		fields[17].type = PacketFieldType::Float;
		fields[18].type = PacketFieldType::Float;
		fields[19].type = PacketFieldType::Float;
		fields[20].type = PacketFieldType::Byte;

		fields[0].bValue = CONST_::GetStaticFields()->NET_PROTO_HEADER->get_value();
		fields[1].bValue = SEND_PACKET::GetStaticFields()->DAMAGE->get_value();
		fields[2].sValue = 8 + 59;
	}
		break;
	case 3: {
		fieldsCount = 15;
		fields.resize(fieldsCount);
		fields[0].type = PacketFieldType::Byte;
		fields[1].type = PacketFieldType::Byte;
		fields[2].type = PacketFieldType::Short;
		fields[3].type = PacketFieldType::Int;

		fields[4].type = PacketFieldType::Int;
		fields[5].type = PacketFieldType::Int;
		fields[6].type = PacketFieldType::Int;
		fields[7].type = PacketFieldType::Int;

		fields[8].type = PacketFieldType::Float;
		fields[9].type = PacketFieldType::Float;
		fields[10].type = PacketFieldType::Float;

		fields[11].type = PacketFieldType::Float;
		fields[12].type = PacketFieldType::Float;
		fields[13].type = PacketFieldType::Float;
		fields[14].type = PacketFieldType::Byte;

		fields[0].bValue = CONST_::GetStaticFields()->NET_PROTO_HEADER->get_value();
		fields[1].bValue = SEND_PACKET::GetStaticFields()->ATTACK_BLOCK->get_value();
		fields[2].sValue = 8 + 41;
	}
		break;
	case 4: {
		fieldsCount = 6;
		fields.resize(fieldsCount);
		fields[0].type = PacketFieldType::Byte;
		fields[1].type = PacketFieldType::Byte;
		fields[2].type = PacketFieldType::Short;
		fields[3].type = PacketFieldType::Int;

		fields[4].type = PacketFieldType::Int;
		fields[5].type = PacketFieldType::Int;

		fields[0].bValue = CONST_::GetStaticFields()->NET_PROTO_HEADER->get_value();
		fields[1].bValue = SEND_PACKET::GetStaticFields()->ATTACK_ENT->get_value();
		fields[2].sValue = 8 + 8;
	}
		break;
	case 5: {
		fieldsCount = 13;
		fields.resize(fieldsCount);

		fields[0].type = PacketFieldType::Byte;
		fields[1].type = PacketFieldType::Byte;
		fields[2].type = PacketFieldType::Short;
		fields[3].type = PacketFieldType::Int;

		fields[4].type = PacketFieldType::Byte;
		fields[5].type = PacketFieldType::Int;
		fields[6].type = PacketFieldType::Byte;
		fields[7].type = PacketFieldType::Byte;
		fields[8].type = PacketFieldType::Int;
		fields[9].type = PacketFieldType::String;
		fields[10].type = PacketFieldType::String;
		fields[11].type = PacketFieldType::String;
		fields[12].type = PacketFieldType::String;

		fields[0].bValue = CONST_::GetStaticFields()->NET_PROTO_HEADER->get_value();
		fields[1].bValue = SEND_PACKET::GetStaticFields()->AUTH->get_value();
		fields[2].sValue = 8 + 11 + 16;
		fields[4].bValue = 0xFE;
		fields[5].iValue = CONST_::GetStaticFields()->GLOBAL_VERSION->get_value();
		fields[6].bValue = PlayerProfile::GetStaticFields()->country;
		fields[7].bValue = (uint8_t)PlayerProfile::GetStaticFields()->network;
		Il2CppString* str = (Il2CppString*)PlayerProfile::GetStaticFields()->id;
		memcpy(fields[9].strValue, WidestringToString(std::wstring((wchar_t*)str->chars)).c_str(), str->length);
		fields[2].sValue += str->length;

		str = (Il2CppString*)PlayerProfile::GetStaticFields()->authkey;
		memcpy(fields[10].strValue, WidestringToString(std::wstring((wchar_t*)str->chars)).c_str(), str->length);
		fields[2].sValue += str->length;

		str = (Il2CppString*)PlayerProfile::GetStaticFields()->session;
		memcpy(fields[11].strValue, WidestringToString(std::wstring((wchar_t*)str->chars)).c_str(), str->length);
		fields[2].sValue += str->length;

		str = (Il2CppString*)PlayerProfile::GetStaticFields()->gameSession;
		memcpy(fields[12].strValue, WidestringToString(std::wstring((wchar_t*)str->chars)).c_str(), str->length);
		fields[2].sValue += str->length;
	}
		break;
	case 6: {
		fieldsCount = 4;
		fields.resize(fieldsCount);

		fields[0].type = PacketFieldType::Byte;
		fields[1].type = PacketFieldType::Byte;
		fields[2].type = PacketFieldType::Short;
		fields[3].type = PacketFieldType::Int;

		fields[0].bValue = CONST_::GetStaticFields()->NET_PROTO_HEADER->get_value();
		fields[1].bValue = SEND_PACKET::GetStaticFields()->BLOCK_INFO->get_value();
		fields[2].sValue = 8;
	}
		break;
	case 7: {
		fieldsCount = 6;
		fields.resize(fieldsCount);

		fields[0].type = PacketFieldType::Byte;
		fields[1].type = PacketFieldType::Byte;
		fields[2].type = PacketFieldType::Short;
		fields[3].type = PacketFieldType::Int;
		fields[4].type = PacketFieldType::Byte;
		fields[5].type = PacketFieldType::String;

		fields[0].bValue = CONST_::GetStaticFields()->NET_PROTO_HEADER->get_value();
		fields[1].bValue = SEND_PACKET::GetStaticFields()->CHAT->get_value();
		fields[2].sValue = 13;
	}
		break;
	case 12: {
		fieldsCount = 4;
		fields.resize(fieldsCount);

		fields[0].type = PacketFieldType::Byte;
		fields[1].type = PacketFieldType::Byte;
		fields[2].type = PacketFieldType::Short;
		fields[3].type = PacketFieldType::Int;

		fields[0].bValue = CONST_::GetStaticFields()->NET_PROTO_HEADER->get_value();
		fields[1].bValue = SEND_PACKET::GetStaticFields()->DISCONNECT->get_value();
		fields[2].sValue = 8;
	}
		break;
	case 28: {
		fieldsCount = 6;
		fields.resize(fieldsCount);

		fields[0].type = PacketFieldType::Byte;
		fields[1].type = PacketFieldType::Byte;
		fields[2].type = PacketFieldType::Short;
		fields[3].type = PacketFieldType::Int;

		fields[4].type = PacketFieldType::Byte;
		fields[5].type = PacketFieldType::Int;

		fields[0].bValue = CONST_::GetStaticFields()->NET_PROTO_HEADER->get_value();
		fields[1].bValue = SEND_PACKET::GetStaticFields()->PRIVATE_SETTINGS->get_value();
		fields[2].sValue = 13;
	}
		break;
	case 1:
	default:
		break;
	}
}

void EspEdit(const char* label, EspColor& espColor, float sameLine = 0.f, ImGuiColorEditFlags flags = 0)
{
	float* col = &espColor.r;

	ImGui::Checkbox(label, &espColor.eneble);
	ImGui::SameLine(sameLine);
	ImGui::ColorEdit4(((std::string)"##" + label).c_str(), col, &espColor.rainbow, flags);
}

void UpdateEspRainbow(EspColor& espColor)
{
	if (espColor.rainbow)
	{
		float* col = &espColor.r;
		ImGuiContext& g = *GImGui;
		ImGuiIO& io = g.IO;

		float h, s, v;
		ImGui::ColorConvertRGBtoHSV(col[0], col[1], col[2], h, s, v);
		h += 0.1f * io.DeltaTime;

		ImGui::ColorConvertHSVtoRGB(h, s, v, col[0], col[1], col[2]);
	}
}

void PacketEditor()
{
	ImGui::BeginChild("Packet Editor");
	static int selectedTemple = 0;
	if (ImGui::BeginCombo("Temple", templesName[selectedTemple]))
	{
		for (int i = 0; i < 40; i++)
		{
			if (ImGui::Selectable(templesName[i]))
			{
				selectedTemple = i;
				SelectTemple(i);
			}
		}
		ImGui::EndCombo();
	}

	for (int i = 0; i < fieldsCount; i++)
	{
		int value = 0;
		float fvalue = 0;
		if (selectedTemple > 1 && i == 3)
		{
			fields[i].iValue = (int)(Time::get_time() * 1000.f);
		}
		switch (fields[i].type)
		{

		case PacketFieldType::Byte:
			value = fields[i].bValue;
			ImGui::InputInt(("##" + to_string(i)).c_str(), &value);
			fields[i].bValue = value;
			break;

		case PacketFieldType::Short:
			value = fields[i].sValue;
			ImGui::InputInt(("##" + to_string(i)).c_str(), &value);
			fields[i].sValue = value;
			break;

		case PacketFieldType::Int:
			value = fields[i].iValue;
			ImGui::InputInt(("##" + to_string(i)).c_str(), &value);
			fields[i].iValue = value;
			break;

		case PacketFieldType::Float:
			fvalue = fields[i].fValue;
			ImGui::InputFloat(("##" + to_string(i)).c_str(), &fvalue);
			fields[i].fValue = fvalue;
			break;

		case PacketFieldType::String:
			ImGui::InputText(("##" + to_string(i)).c_str(), fields[i].strValue, 255);
			break;

		default:
			break;
		}

		ImGui::SameLine();
		if (ImGui::BeginCombo(("##1" + to_string(i)).c_str(), fieldsTypeName[(int)fields[i].type]))
		{
			for (int j = 0; j < 5; j++) 
			{
				if (ImGui::Selectable(fieldsTypeName[j]))
				{
					fields[i].type = (PacketFieldType)j;
				}
			}
			ImGui::EndCombo();
		}
	}

	if (ImGui::Button("Add"))
	{
		fieldsCount++;
		fields.resize(fieldsCount);
	}
	ImGui::SameLine();
	if (ImGui::Button("Remove"))
	{
		if (fieldsCount > 0) fieldsCount--;
		fields.resize(fieldsCount);
	}
	if (ImGui::Button("Send Packet"))
	{
		sendPacket = true;
	}
	ImGui::EndChild();
}

void DrawMenu()
{
	static auto page = 0;

	ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
	ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.f);
	ImGui::Begin("##tab_menu", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove); 
	{
		/*window size && pos*/
		ImGui::SetWindowPos(ImVec2(0, 0), ImGuiCond_Always);
		ImGui::SetWindowSize(ImVec2(150, ImGui::GetIO().DisplaySize.y));

		/*draw list*/
		auto p = ImGui::GetWindowPos();
		auto draw = ImGui::GetWindowDrawList();

		/*render logo*/
		//draw->AddImage((void*)m_pTexture->get("logo"), p, p + ImVec2(150, 150));

		/*render tabs*/
		ImGui::SetCursorPos(ImVec2(0, 180));
		ImGui::BeginGroup();
		for (auto i = 0; i < tabsCount; i++) {
			if (custom->tab(tab_icons[i], tab_names[i], page == i, ImVec2(150, 35)))
				page = i;
		}
		ImGui::EndGroup();
	}
	ImGui::End();
	ImGui::PopStyleVar(2);

	ImGui::Begin("##main_menu", nullptr, ImGuiWindowFlags_NoDecoration); {
		/*window size && pos*/
		ImGui::SetWindowPos(ImGui::GetIO().DisplaySize / 2, ImGuiCond_FirstUseEver);
		ImGui::SetWindowSize(ImVec2(570, 360));

		ImFontConfig icons_config; icons_config.MergeMode = true; icons_config.PixelSnapH = true;

		/*render items*/
		switch (page) {
		case page_aim:
		{
			ImGui::BeginChild("##child_1", ImVec2(270, 342), true);
			{
				//ImGui::PushFont(youFont);
				ImGui::Text("aimbot basic");
				ImGui::Checkbox("aimbot eneble", &aim);
				ImGui::Checkbox("aimbot silent", &aimSilent);
				ImGui::Checkbox("auto shooting", &aimAutoShooting);
				//ImGui::SliderInt("scan method", &aimScanType, 0, 1);
				if (ImGui::BeginCombo("scan method", scanMethods[aimScanType]))
				{
					for (int i = 0; i < 3; i++)
					{
						bool isSelected = i == aimScanType;
						if (ImGui::Selectable(scanMethods[i], isSelected))
						{
							aimScanType = i;
						}
					}
					ImGui::EndCombo();
				}
				ImGui::SliderFloat("speed", &aimSpeed, 0, 100);
				ImGui::SliderFloat("fov", &aimFov, 0, 180);
				if (ImGui::BeginCombo("bone", bonesName[aimBone]))
				{
					for (int i = 0; i < countBones; i++)
					{
						bool isSelected = i == aimBone;
						if (ImGui::Selectable(bonesName[i], isSelected))
						{
							aimBone = i;
						}
					}
					ImGui::EndCombo();
				}
				//ImGui::PopFont();
			}
			ImGui::EndChild();
			ImGui::SameLine();
			ImGui::BeginChild("##child_2", ImVec2(275, 342), true);
			{
				ImGui::Text("aimbot additional");
				ImGui::Hotkey("key", &aimKey, ImVec2(100, 20));
				ImGui::Checkbox("aimbot check distance", &aimCheckDistance);
				ImGui::Checkbox("trigger bot", &triggerBot);
				ImGui::Checkbox("only headshoot", &onlyHeadshot);

				// For show scroll
				for (int i = 0; i < 30; i++)
					ImGui::NewLine();
			}
			ImGui::EndChild();

			break;
		}
		case page_visual:
		{
			auto flags = ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_AlphaPreview;
			ImGui::BeginChild("##child_3", ImVec2(270, 342), true);
			{
				ImGui::Text("visual basic");

				static int selectedOptionsEsp = 0;

				if (ImGui::BeginCombo("##dddd", espOptionName[selectedOptionsEsp]))
				{
					for (int i = 0; i < 2; i++)
					{
						if (ImGui::Selectable(espOptionName[i], i == selectedOptionsEsp))
						{
							selectedOptionsEsp = i;
						}
					}
					ImGui::EndCombo();
				}
				if (selectedOptionsEsp == 0)
				{
					EspEdit("draw box 2D", espBox, 240.f, flags);
					EspEdit("draw box 3D", esp3DBox, 240.f, flags);
					EspEdit("draw health", espHealth, 240.f, flags);
					EspEdit("draw distance", espDistance, 240.f, flags);
					EspEdit("draw barrel line", espBarrel, 240.f, flags);
					EspEdit("draw name", espName, 240.f, flags);
					EspEdit("draw line", espLine, 240.f, flags);
					EspEdit("draw protect", espProtect, 240.f, flags);
					EspEdit("draw radar", espRadar, 240.f, flags);
					ImGui::Checkbox("draw chams", &chams);
					ImGui::Checkbox("draw teammates", &espTeammates);
					ImGui::SliderFloat("size team", &teammatesSize, 0, 100);
					ImGui::SliderFloat("size enemy", &enemySize, 0, 100);
				}
				else if (selectedOptionsEsp == 1)
				{
					EspEdit("draw box 3D", espEnts3DBox, 245.f, flags);
					EspEdit("draw distance", espEntsDistance, 245.f, flags);
					EspEdit("draw name", espEntsName, 245.f, flags);
					EspEdit("draw health", espEntsHealth, 245.f, flags);
				}
			}
			ImGui::EndChild();
			ImGui::SameLine();
			ImGui::BeginChild("##child_4", ImVec2(275, 342), true);
			{
				ImGui::Text("visual additional");
				EspEdit("draw aim fov", aimFovEsp, 245.f, flags);
				ImGui::Checkbox("draw fps", &drawfps);
				ImGui::Checkbox("no fog", &noFog);
				ImGui::Checkbox("third person", &thirdperson);
				ImGui::Checkbox("color team", &espColorTeam);
				ImGui::Checkbox("hide hands", &hideHands);
				ImGui::Checkbox("sync players", &syncPlayersPosition);
				ImGui::Checkbox("instnat move local player", &instnatMoveLocalPlayer);
				ImGui::SliderFloat("max draw esp distance", &maxEspDrawDistance, 0.f, 500.f);
				ImGui::SliderFloat("line thickness", &espLineThickness, 0.f, 10.f);
				ImGui::SliderFloat("draw size text", &textSize, 0, 20);
				ImGui::SliderFloat("camera offset", &cameraOffset, 0, 20.f);
				ImGui::SliderFloat("field of viev", &fieldOfViev, 0, 180.f);
				// For show scroll
				for (int i = 0; i < 30; i++)
					ImGui::NewLine();
			}
			ImGui::EndChild();

			break;
		}
		case page_other:

			ImGui::BeginChild("##child_5", ImVec2(555, 342), true);
			{
				ImGui::Text("other basic");

				ImGui::SliderFloat("speed", &speed, 0, 0.3f);
				ImGui::SliderFloat("gravity", &gravity, 0, 2.f);
				ImGui::SliderFloat("jump force", &jumpForce, 0, 20.f);
				ImGui::SliderFloat("jump dumping", &jumpDamping, 0, 20.f);
				ImGui::SliderFloat("position lag", &posLag, 0.f, 0.5f);
				ImGui::Checkbox("bunnyhop", &bunnyhop);
				ImGui::Checkbox("auto jump", &autoJump);
				ImGui::Checkbox("auto move", &autoMove);
				ImGui::Checkbox("infinitely jetpack", &infinitelyJetpack);
				ImGui::Checkbox("fake duck", &fakeDuck);
				ImGui::Checkbox("fake backward", &fakeBackward);
				ImGui::Checkbox("fake down", &fakeDown);
				ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0, 0, 1, 1));
				if (ImGui::Button("blue team", ImVec2(100.f, 20.f)))
				{
					pressedSetTeam = 0;
				}
				ImGui::SameLine();
				ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1, 0, 0, 1));
				if (ImGui::Button("red team", ImVec2(100.f, 20.f)))
				{
					pressedSetTeam = 1;
				}
				ImGui::SameLine();
				ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0, 1, 0, 1));
				if (ImGui::Button("green team", ImVec2(100.f, 20.f)))
				{
					pressedSetTeam = 2;
				}
				ImGui::SameLine();
				ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1, 1, 0, 1));
				if (ImGui::Button("yellow team", ImVec2(100.f, 20.f)))
				{
					pressedSetTeam = 3;
				}
				ImGui::PopStyleColor(4);

				ImGui::Checkbox("disconnet when find admin", &disconnetWhenFindAdmin);
				ImGui::InputText("spam text", textSpam, 64);
				ImGui::SliderFloat("spam interval", &spamInterval, 3.f, 30.f);
				ImGui::Checkbox("chat spam", &chatSpam);

				std::string weaponName = "";
				auto items = ItemsDB::GetStaticFields()->Items;
				if (items != nullptr)
				{
					if (selectedWeaponId >= 0 && items->vector[selectedWeaponId] != nullptr)
					{
						auto item = items->vector[selectedWeaponId];
						auto il2cppStr = (Il2CppString*)item->MyName;
						std::wstring ws((wchar_t*)il2cppStr->chars, il2cppStr->length);

						weaponName = WidestringToString(ws);
					}

					if (ImGui::BeginCombo("weapon", weaponName.c_str()))
					{
						for (int i = 0; i < items->max_length; i++)
						{
							auto item = items->vector[i];
							if (item != nullptr && item->MyName != nullptr)
							{
								if ((item->Category >= (int)ITEMS_CATEGORY::PISTOLS && item->Category <= (int)ITEMS_CATEGORY::MELEE)
									|| (item->Category >= (int)ITEMS_CATEGORY::MEDS && item->Category <= (int)ITEMS_CATEGORY::BARRICADES))
								{
									auto il2cppStr = (Il2CppString*)item->MyName;
									std::wstring ws((wchar_t*)il2cppStr->chars, il2cppStr->length);

									if (ImGui::Selectable(WidestringToString(ws).c_str(), (i == selectedWeaponId ? true : false)))
									{
										setWeapon = true;
										selectedWeaponId = i;
									}
								}
							}
						}
						ImGui::EndCombo();
					}
				}

				if (ImGui::Button("show all gamemodes"))
				{
					auto gamemodes = ServerList::GetStaticFields()->THIS__->gamemode;
					for (int i = 0; i < gamemodes->max_length; i++)
					{
						gamemodes->vector[i] = true;
					}
				}
				if (ImGui::Button("show all items"))
				{
					for (int i = 0; i < 999; i++) 
					{
						auto item = ItemsDB::GetStaticFields()->Items->vector[i];

						if (item != nullptr)
						{
							item->ShowStatus = 1;
							item->Theme = 1;
						}
					}
					if (onServer)
					{
						int my_index = Client::GetStaticFields()->THIS__->myindex;
						auto botData = BotsController::GetStaticFields()->THIS__->BotsList->vector[my_index];

						for (int i = 0; i < 999; i++)
						{
							botData->Item->vector[i] = 1;
						}
					}
				}
				//ImGui::InputInt("weapon id", &selectedWeapon);
				//
				//if (ImGui::Button("set weapon")) 
				//{
				//	setWeapon = true;
				//}

				//ImGui::BeginListBox();
				//ImGui::EndListBox();
				//ImGui::InputInt("blockAttackId", &blockAttackId);
//#if TypeCheat == 3
				if (ImGui::TreeNode("Profile info"))
				{
					int network = (int)PlayerProfile::GetStaticFields()->network;
					ImGui::InputInt("Network", &network);
					PlayerProfile::GetStaticFields()->network = (NETWORK)network;

					Il2CppString* id = (Il2CppString*)PlayerProfile::GetStaticFields()->id;
					std::string str = WidestringToString(std::wstring((wchar_t*)id->chars));
					ImGui::InputText("id", &str);
					str += "\0";
					PlayerProfile::GetStaticFields()->id = CreateString(str.c_str());

					Il2CppString* authkey = (Il2CppString*)PlayerProfile::GetStaticFields()->authkey;
					str = WidestringToString(std::wstring((wchar_t*)authkey->chars));
					ImGui::InputText("authkey", &str);
					str += "\0";
					PlayerProfile::GetStaticFields()->authkey = CreateString(str.c_str());

					Il2CppString* session = (Il2CppString*)PlayerProfile::GetStaticFields()->session;
					str = WidestringToString(std::wstring((wchar_t*)session->chars));
					ImGui::InputText("session", &str);
					str += "\0";
					PlayerProfile::GetStaticFields()->session = CreateString(str.c_str());

					Il2CppString* gameSession = (Il2CppString*)PlayerProfile::GetStaticFields()->gameSession;
					str = WidestringToString(std::wstring((wchar_t*)gameSession->chars));
					ImGui::InputText("gameSession", &str);
					str += "\0";
					PlayerProfile::GetStaticFields()->gameSession = CreateString(str.c_str());
					ImGui::TreePop();
				}
				if (ImGui::Button("Reload Profile"))
				{
					reloadProfile = true;
				}
				//#endif
			}
			ImGui::EndChild();
			break;

		case page_misc:

			ImGui::BeginChild("##child_6", ImVec2(555, 342), true);
			{
				ImGui::Text("other additional");
				ImGui::Checkbox("no recoil", &noRecoil);
				ImGui::Checkbox("no reload", &noReload);
				ImGui::Checkbox("no spread", &noSpread);
				ImGui::Checkbox("no weapon stop move", &noWeaponStopMove);
				ImGui::Checkbox("instant reload weapon", &instantReload);
				ImGui::Checkbox("instant change weapon", &instantChangeWeapon);
				ImGui::Checkbox("randomize flags", &randomFlag);
				ImGui::Checkbox("spinup minigun", &spinupMinigun);
				//ImGui::SliderFloat("minigun speed", &minigunSpeed, 700.f, 12000.f);
				
				//ImGui::Checkbox("magic bullet", &magicBullet);
				//ImGui::Checkbox("max weapon distance (blocks)", &maxWeaponDistanceBlocks);
				ImGui::Checkbox("limit kill", &saveKD);
				ImGui::Checkbox("arrow speed hack", &arrowSpeedHack);
				ImGui::Checkbox("auto heal", &autoHeal);
				ImGui::SliderInt("min health medkit L", &medkits[2], 1, 100);
				ImGui::SliderInt("min health medkit M", &medkits[1], 1, 100);
				ImGui::SliderInt("min health medkit S", &medkits[0], 1, 100);
			}
			ImGui::EndChild();

			break;

		case page_fun:

			ImGui::BeginChild("##child_7", ImVec2(555, 342), true);
			{
				ImGui::Text("funhack basic");
				ImGui::Checkbox("detonate explosive in enemy", &detonateExplosiveInEnemy);
				ImGui::Checkbox("detonate mine & C4", &detonateMineC4);
				ImGui::Checkbox("detonate TNT", &detonateTNT);
				ImGui::Checkbox("fake damage", &fakeDamage);
				ImGui::Checkbox("ghost", &ghost);
				ImGui::Checkbox("mass kill explosive", &masskillExplosive);
				ImGui::Checkbox("mass kill (zombie)", &masskillZombie);
				//ImGui::SliderFloat("attack sleep", &attackSleep, 0, 2.f);
				//ImGui::Checkbox("mass kill", &massKill);

				//ImGui::Checkbox("destroy blocks", &destroyBlocks);
				//ImGui::Text(("x: " + to_string(bx) + " y: " + to_string(by) + " z: " + to_string(bz)).c_str());

				const char* priorityPlayerName = "None";

				if (priorityMasskillIndex >= 0)
				{
					if (playersInfo[priorityMasskillIndex] != nullptr && playersInfo[priorityMasskillIndex]->botData.Active)
					{
						priorityPlayerName = playersInfo[priorityMasskillIndex]->name.c_str();
					}
					else
					{
						priorityMasskillIndex = -1;
					}
				}

				//if (ImGui::BeginCombo("masskill priority player", priorityPlayerName))
				//{
				//	if (ImGui::Selectable("None", -1 == priorityMasskillIndex))
				//	{
				//		priorityMasskillIndex = -1;
				//	}
				//	for (int i = 0; i < 32; i++)
				//	{
				//		if (playersInfo[i] != nullptr && playersInfo[i]->botData.Active)
				//		{
				//			if (ImGui::Selectable(playersInfo[i]->name.c_str(), i == priorityMasskillIndex))
				//			{
				//				priorityMasskillIndex = playersInfo[i]->index;
				//			}
				//		}
				//	}
				//	ImGui::EndCombo();
				//}
				//if (ImGui::BeginCombo("masskill scan method", scanMethods[masskillScanType]))
				//{
				//	for (int i = 0; i < 3; i++)
				//	{
				//		bool isSelected = i == masskillScanType;
				//		if (ImGui::Selectable(scanMethods[i], isSelected))
				//		{
				//			masskillScanType = i;
				//		}
				//	}
				//	ImGui::EndCombo();
				//}
				ImGui::Checkbox("fast crossbow shooting ", &fastCrossbowShooting);
				ImGui::SliderFloat("crossbow speed", &crossbowSpeed, 0, 2.f);
				//ImGui::Checkbox("max weapon distance", &maxWeaponDistance);
				ImGui::SliderInt("send normal pos every", &sendNormalPosEvery, 0, 20);
				ImGui::Hotkey("teleport", &teleportKey, ImVec2(100, 20));
				ImGui::Hotkey("spawn", &spawnKey, ImVec2(100, 20));
				ImGui::Hotkey("spawn GP", &spawnGPKey, ImVec2(100, 20));
				ImGui::Hotkey("self kill", &selfKillKey, ImVec2(100, 20));
			}
			ImGui::EndChild();

			break;
		case page_players:
		{
			ImGui::Text("list of recently joined players");
			ImGui::SetWindowPos(ImGui::GetIO().DisplaySize / 2, ImGuiCond_FirstUseEver);
			ImGui::SetWindowSize(ImVec2(600, 700));

			ImGui::Columns(5, "col_1", true);

			ImGui::Text("name");
			ImGui::NextColumn();
			ImGui::Text("clan");
			ImGui::NextColumn();
			ImGui::Text("time join");
			ImGui::NextColumn();
			ImGui::Text("kills");
			ImGui::NextColumn();
			ImGui::Text("deads");
			ImGui::NextColumn();
			ImGui::Separator();

			for (int i = 0; i < 32; i++)
			{
				if (lastJoinPlayersInfo[i] != nullptr)
				{
					if (lastJoinPlayersInfo[i]->botData.Active)
					{
						ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0, 1, 0, 1));
					}
					else
					{
						ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1, 0, 0, 1));
					}

					ImGui::InputText((u8"##1" + to_string(i)).c_str(), (char*)lastJoinPlayersInfo[i]->name.c_str(), lastJoinPlayersInfo[i]->name.capacity() + 1, ImGuiInputTextFlags_ReadOnly);
					ImGui::NextColumn();

					ImGui::InputText((u8"##2" + to_string(i)).c_str(), (char*)lastJoinPlayersInfo[i]->clan.c_str(), lastJoinPlayersInfo[i]->clan.capacity() + 1, ImGuiInputTextFlags_ReadOnly);
					ImGui::NextColumn();

					ImGui::Text(to_string(lastJoinPlayersInfo[i]->timeJoin).c_str());
					ImGui::NextColumn();

					ImGui::Text(to_string(lastJoinPlayersInfo[i]->botData.Stats_Kills).c_str());
					ImGui::NextColumn();

					ImGui::Text(to_string(lastJoinPlayersInfo[i]->botData.Stats_Deads).c_str());
					ImGui::NextColumn();

					ImGui::PopStyleColor();
				}
			}
		}
		break;

		case page_configs:
		{
			ImGui::BeginChild("##child_8", ImVec2(555, 342), true);

			ImGui::BeginListBox("##Configs", ImVec2(535, 245));

			for (int i = 0; i < configs.size(); i++)
			{
				if (ImGui::Selectable(WidestringToString(configs[i]).c_str(), i == selectedConfig))
				{
					selectedConfig = i;
				}
			}

			ImGui::EndListBox();

			if (ImGui::Button("save")) SaveConfig(); ImGui::SameLine();
			if (ImGui::Button("load")) LoadConfig(); ImGui::SameLine();
			if (ImGui::Button("reset")) ResetConfig(); ImGui::SameLine();
			if (ImGui::Button("refresh")) RefreshConfigList(); ImGui::SameLine();
			if (ImGui::Button("remove")) RemoveConfig();

			ImGui::PushItemWidth(100.f);
			ImGui::InputText("config name", &nameConfig); ImGui::SameLine();

			if (ImGui::Button("create")) CreateConfig(); ImGui::SameLine();

			ImGui::EndChild();
			break;
		}

		case page_packetEditor:
			PacketEditor();
			break;
		}

		ImGui::End();
	}
}

void DrawESP()
{
	ImGuiContext& g = *GImGui;
	ImGuiIO& io = g.IO;
	auto draw = ImGui::GetBackgroundDrawList();

	if (onServer)
	{
		for (int i = 0; i < 32; i++) 
		{
			auto player = playersInfo[i];
			if (player != nullptr && player->botData.Dead == 0 && player->botData.Active)
			{
				auto team = player->botData.Team;
				bool hasProtect = player->botData.botPoser->isProtected;
				float offsetY = 0.f;

				Color healthColor = { espHealth.r, espHealth.g, espHealth.b, espHealth.a };
				Color nameColor = { espName.r, espName.g, espName.b, espName.a };
				Color barrelColor = { espBarrel.r, espBarrel.g, espBarrel.b, espBarrel.a };
				Color box3DColor = { esp3DBox.r, esp3DBox.g, esp3DBox.b, esp3DBox.a };
				Color boxColor = { espBox.r, espBox.g, espBox.b, espBox.a };
				Color distanceColor = { espDistance.r, espDistance.g, espDistance.b, espDistance.a };
				Color lineColor = { espLine.r, espLine.g, espLine.b, espLine.a };

				if (!espTeammates && team == myTeam)
				{
					continue;
				}

				if (espColorTeam)
				{
					Color color;
					if (team == 0)
					{
						color = { 0, 0, 1.f, 1.f };
					}
					else if (team == 1)
					{
						color = { 1.f, 0, 0, 1.f };
					}
					else if (team == 2)
					{
						color = { 0, 1.f, 0, 1.f };
					}
					else if (team == 3)
					{
						color = { 1.f, 1.f, 0, 1.f };
					}

					healthColor = color;
					nameColor = color;
					barrelColor = color;
					box3DColor = color;
					boxColor = color;
					distanceColor = color;
					lineColor = color;
				}

				if (hasProtect && espProtect.eneble)
				{
					healthColor = { espProtect.r, espProtect.g, espProtect.b, espProtect.a };
					nameColor = { espProtect.r, espProtect.g, espProtect.b, espProtect.a };
					barrelColor = { espProtect.r, espProtect.g, espProtect.b, espProtect.a };
					box3DColor = { espProtect.r, espProtect.g, espProtect.b, espProtect.a };
					boxColor = { espProtect.r, espProtect.g, espProtect.b, espProtect.a };
					distanceColor = { espProtect.r, espProtect.g, espProtect.b, espProtect.a };
					lineColor = { espProtect.r, espProtect.g, espProtect.b, espProtect.a };
				}

				float distance = Distance(camPos, player->currentPos);

				float a = 1.f - (1.f / 15.f * (distance - maxEspDrawDistance));
				healthColor.a *= a;
				nameColor.a *= a;
				barrelColor.a *= a;
				box3DColor.a *= a;
				boxColor.a *= a;
				distanceColor.a *= a;
				lineColor.a *= a;
				
				Vector3 screenPos = player->posOnScreen;
				Vector3 screenPos2 = player->posOnScreen2;
				if (screenPos.z > 0 && screenPos2.z > 0)
				{
					screenPos.y = io.DisplaySize.y - screenPos.y;
					screenPos2.y = io.DisplaySize.y - screenPos2.y;

					if (espHealth.eneble)
					{
						auto text = std::to_string((int)playersHealth[i]);
						auto sizeText = g.Font->CalcTextSizeA(textSize, FLT_MAX, -1.0f, text.c_str());
						ImVec2 pos(screenPos.x - sizeText.x / 2.f, screenPos.y + offsetY);
						draw->AddText(g.Font, textSize, pos - ImVec2(1.f, 1.f), ImColor(0.f, 0.f, 0.f, healthColor.a), text.c_str());
						draw->AddText(g.Font, textSize, pos, *(ImColor*)&healthColor, text.c_str());
						offsetY += textSize;
					}

					if (espDistance.eneble)
					{
						auto text = ("[" + std::to_string((int)distance) + "m]");
						auto sizeText = g.Font->CalcTextSizeA(textSize, FLT_MAX, -1.0f, text.c_str());
						ImVec2 pos(screenPos.x - sizeText.x / 2.f, screenPos.y + offsetY);
						draw->AddText(g.Font, textSize, pos - ImVec2(1.f, 1.f), ImColor(0.f, 0.f, 0.f, distanceColor.a), text.c_str());
						draw->AddText(g.Font, textSize, pos, *(ImColor*)&distanceColor, text.c_str());
						offsetY += textSize;
					}

					if (espName.eneble)
					{
						auto sizeText = g.Font->CalcTextSizeA(textSize, FLT_MAX, -1.0f, player->name.c_str());
						ImVec2 pos(screenPos.x - sizeText.x / 2.f, screenPos.y + offsetY);
						draw->AddText(g.Font, textSize, pos - ImVec2(1.f, 1.f), ImColor(0.f, 0.f, 0.f, nameColor.a), player->name.c_str());
						draw->AddText(g.Font, textSize, pos, *(ImColor*)&nameColor, player->name.c_str());
						offsetY += textSize;
					}

					if (espLine.eneble)
					{
						draw->AddLine(ImVec2(screenPos2.x, screenPos2.y), ImVec2(io.DisplaySize.x / 2.f, 0.f), *(ImColor*)&lineColor, espLineThickness);
					}

					if (espBox.eneble)
					{
						float num = abs(screenPos.y - screenPos2.y) / 4.2f;

						Vector2 vector, vector2;

						vector.x = screenPos2.x + num;
						vector.y = screenPos2.y;

						vector2.x = screenPos2.x - num;
						vector2.y = screenPos.y;

						draw->AddRect(ImVec2(vector.x, vector.y), ImVec2(vector2.x, vector2.y), *(ImColor*)&boxColor, 0, 0, espLineThickness);
					}

					if (esp3DBox.eneble)
					{
						auto vectors = player->Box3DPosOnScreen;
						Vector3 A0 = vectors[0];
						Vector3 B0 = vectors[1];
						Vector3 C0 = vectors[2];
						Vector3 D0 = vectors[3];
						Vector3 A1 = vectors[4];
						Vector3 B1 = vectors[5];
						Vector3 C1 = vectors[6];
						Vector3 D1 = vectors[7];
						if (B0.z > 0 && A1.z > 0 && C0.z > 0 && B1.z > 0 && D0.z > 0 && C1.z > 0 && A0.z > 0 && D1.z > 0)
						{
							draw->AddLine({ A0.x, A0.y }, { B0.x, B0.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ A0.x, A0.y }, { A1.x, A1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ A0.x, A0.y }, { C0.x, C0.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ B0.x, B0.y }, { B1.x, B1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ B0.x, B0.y }, { D0.x, D0.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ C0.x, C0.y }, { D0.x, D0.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ C0.x, C0.y }, { C1.x, C1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ D0.x, D0.y }, { D1.x, D1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ A1.x, A1.y }, { B1.x, B1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ A1.x, A1.y }, { C1.x, C1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ B1.x, B1.y }, { D1.x, D1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ C1.x, C1.y }, { D1.x, D1.y }, *(ImColor*)&box3DColor, espLineThickness);
						}
					}

					if (espBarrel.eneble)
					{
						Vector3 headScreenPos = player->headPosOnScreen;
						Vector3 headScreenPos2 = player->headPosOnScreen2;
						if (headScreenPos.z > 0 && headScreenPos2.z > 0)
						{
							headScreenPos.y = io.DisplaySize.y - headScreenPos.y;
							headScreenPos2.y = io.DisplaySize.y - headScreenPos2.y;

							draw->AddLine(ImVec2(headScreenPos.x, headScreenPos.y), ImVec2(headScreenPos2.x, headScreenPos2.y), *(ImColor*)&barrelColor, espLineThickness);
						}
					}
				}
			}
		}

		for (int i = 0; i < 512; i++) 
		{
			auto ent = entsInfo[i];
			if (ent != nullptr)
			{
				Color box3DColor = { espEnts3DBox.r, espEnts3DBox.g, espEnts3DBox.b, espEnts3DBox.a };
				Color distanceColor = { espEntsDistance.r, espEntsDistance.g, espEntsDistance.b, espEntsDistance.a };
				Color nameColor = { espEntsName.r, espEntsName.g, espEntsName.b, espEntsName.a };
				Color healthColor = { espEntsHealth.r, espEntsHealth.g, espEntsHealth.b, espEntsHealth.a };

				float offsetY = 0.f;

				float distance = Distance(camPos, ent->pos);
				Vector3 posOnScreen = ent->posOnScreen;

				if (posOnScreen.z > 0)
				{
					float a = 1.f - (1.f / 15.f * (distance - maxEspDrawDistance));
					nameColor.a *= a;
					box3DColor.a *= a;
					distanceColor.a *= a;
					healthColor.a *= a;

					if (espEnts3DBox.eneble)
					{
						auto vectors = ent->Box3DPosOnScreen;
						Vector3 A0 = vectors[0];
						Vector3 B0 = vectors[1];
						Vector3 C0 = vectors[2];
						Vector3 D0 = vectors[3];
						Vector3 A1 = vectors[4];
						Vector3 B1 = vectors[5];
						Vector3 C1 = vectors[6];
						Vector3 D1 = vectors[7];
						if (B0.z > 0 && A1.z > 0 && C0.z > 0 && B1.z > 0 && D0.z > 0 && C1.z > 0 && A0.z > 0 && D1.z > 0)
						{
							draw->AddLine({ A0.x, A0.y }, { B0.x, B0.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ A0.x, A0.y }, { A1.x, A1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ A0.x, A0.y }, { C0.x, C0.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ B0.x, B0.y }, { B1.x, B1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ B0.x, B0.y }, { D0.x, D0.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ C0.x, C0.y }, { D0.x, D0.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ C0.x, C0.y }, { C1.x, C1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ D0.x, D0.y }, { D1.x, D1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ A1.x, A1.y }, { B1.x, B1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ A1.x, A1.y }, { C1.x, C1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ B1.x, B1.y }, { D1.x, D1.y }, *(ImColor*)&box3DColor, espLineThickness);
							draw->AddLine({ C1.x, C1.y }, { D1.x, D1.y }, *(ImColor*)&box3DColor, espLineThickness);
						}
					}

					if (espEntsName.eneble)
					{
						auto sizeText = g.Font->CalcTextSizeA(textSize, FLT_MAX, -1.0f, ent->name.c_str());
						ImVec2 pos(posOnScreen.x - sizeText.x / 2.f, posOnScreen.y + offsetY);
						draw->AddText(g.Font, textSize, pos - ImVec2(1.f, 1.f), ImColor(0.f, 0.f, 0.f, nameColor.a), ent->name.c_str());
						draw->AddText(g.Font, textSize, ImVec2(posOnScreen.x - sizeText.x / 2.f, posOnScreen.y + offsetY), *(ImColor*)&nameColor, ent->name.c_str());
						offsetY += textSize;
					}

					if (espEntsDistance.eneble)
					{
						auto text = ("[" + std::to_string((int)distance) + "m]");
						auto sizeText = g.Font->CalcTextSizeA(textSize, FLT_MAX, -1.0f, text.c_str());
						ImVec2 pos(posOnScreen.x - sizeText.x / 2.f, posOnScreen.y + offsetY);
						draw->AddText(g.Font, textSize, pos - ImVec2(1.f, 1.f), ImColor(0.f, 0.f, 0.f, distanceColor.a), text.c_str());
						draw->AddText(g.Font, textSize, pos, *(ImColor*)&distanceColor, text.c_str());
						offsetY += textSize;
					}

					if (espEntsHealth.eneble && (ent->type == ENTITY::ZOMBIE || ent->type == ENTITY::ZOMBIE2))
					{
						auto text = std::to_string((int)ent->health);
						auto sizeText = g.Font->CalcTextSizeA(textSize, FLT_MAX, -1.0f, text.c_str());
						ImVec2 pos(posOnScreen.x - sizeText.x / 2.f, posOnScreen.y + offsetY);
						draw->AddText(g.Font, textSize, pos - ImVec2(1.f, 1.f), ImColor(0.f, 0.f, 0.f, healthColor.a), text.c_str());
						draw->AddText(g.Font, textSize, pos, *(ImColor*)&healthColor, text.c_str());
						offsetY += textSize;

						//static int nextTime = 0;

						//if (timeGetTime() > nextTime)
						//{
						//	nextTime = timeGetTime() + 100;
						//	ASSWriteConsole(("id: " + to_string(i) + " health: " + text).c_str());
						//}
					}
				}
			}
		}

		if (aimFovEsp.eneble) 
		{
			float radius = tan(DEG2RAD(aimFov) / 2.f) / tan(DEG2RAD(currentFov) / 2.f) * (io.DisplaySize.x / 2.f);
			draw->AddCircle({ io.DisplaySize.x / 2.f, io.DisplaySize.y / 2.f}, radius, *(ImColor*)&aimFovEsp.r, 0, espLineThickness);
		}
	}
}

HRESULT __stdcall hookD3D11ResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
	//ShowMenu = false;
	if (RenderTargetView != NULL)
	{ 
		RenderTargetView->Release();
		RenderTargetView = NULL;
	}

	return phookD3D11ResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

HRESULT __stdcall hookD3D11Present(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (firstTime) 
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pSwapChain->GetDevice(__uuidof(pDevice), (void**)&pDevice);
			pDevice->GetImmediateContext(&pContext);

			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			ImGui::CreateContext();
			ImGuiIO& io = ImGui::GetIO(); (void)io;
			ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantTextInput || ImGui::GetIO().WantCaptureKeyboard; //control menu with mouse
			io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
			window = sd.OutputWindow;

			OriginalWndProcHandler = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)hWndProc);

			ImGui_ImplWin32_Init(window);
			ImGui_ImplDX11_Init(pDevice, pContext);
			ImGui::GetIO().ImeWindowHandle = window;
			ImGui::GetIO().Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Arial.TTF", 14.0F, NULL, ImGui::GetIO().Fonts->GetGlyphRangesAll());
			icons = ImGui::GetIO().Fonts->AddFontFromMemoryTTF(unnamed, sizeof(unnamed), 16.0f);

			D3D11_RASTERIZER_DESC rasterizer_desc;
			ZeroMemory(&rasterizer_desc, sizeof(rasterizer_desc));
			rasterizer_desc.FillMode = D3D11_FILL_SOLID;
			rasterizer_desc.CullMode = D3D11_CULL_NONE; 
			rasterizer_desc.FrontCounterClockwise = false;
			float bias = 1000.0f;
			float bias_float = static_cast<float>(-bias);
			bias_float /= 10000.0f;
			rasterizer_desc.DepthBias = DEPTH_BIAS_D32_FLOAT(*(DWORD*)&bias_float);
			rasterizer_desc.SlopeScaledDepthBias = 0.0f;
			rasterizer_desc.DepthBiasClamp = 0.0f;
			rasterizer_desc.DepthClipEnable = true;
			rasterizer_desc.ScissorEnable = false;
			rasterizer_desc.MultisampleEnable = false;
			rasterizer_desc.AntialiasedLineEnable = false;
			pDevice->CreateRasterizerState(&rasterizer_desc, &DEPTHBIASState_FALSE);

			D3D11_RASTERIZER_DESC nrasterizer_desc;
			ZeroMemory(&nrasterizer_desc, sizeof(nrasterizer_desc));
			nrasterizer_desc.FillMode = D3D11_FILL_SOLID;
			nrasterizer_desc.CullMode = D3D11_CULL_NONE;
			nrasterizer_desc.FrontCounterClockwise = false;
			nrasterizer_desc.DepthBias = 0.0f;
			nrasterizer_desc.SlopeScaledDepthBias = 0.0f;
			nrasterizer_desc.DepthBiasClamp = 0.0f;
			nrasterizer_desc.DepthClipEnable = true;
			nrasterizer_desc.ScissorEnable = false;
			nrasterizer_desc.MultisampleEnable = false;
			nrasterizer_desc.AntialiasedLineEnable = false;
			pDevice->CreateRasterizerState(&nrasterizer_desc, &DEPTHBIASState_TRUE);

			ImGui::StyleColorsDark();

			m_pTexture.reset(new cTextureManager(pDevice));
			m_pTexture->add("logo", logotype, 13569);
		}
	}

	if (RenderTargetView == NULL)
	{
		//viewport
		pContext->RSGetViewports(&vps, &viewport);
		ScreenCenterX = viewport.Width / 2.0f;
		ScreenCenterY = viewport.Height / 2.0f;

		//get backbuffer
		ID3D11Texture2D* backbuffer = NULL;
		hr = pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&backbuffer);

		//create rendertargetview
		hr = pDevice->CreateRenderTargetView(backbuffer, NULL, &RenderTargetView);
		backbuffer->Release();
	}
	//else pContext->OMSetRenderTargets(1, &RenderTargetView, NULL);

	if (GetAsyncKeyStateP(VK_INSERT) & 1) ShowMenu = !ShowMenu;

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	ImGuiContext& g = *GImGui;
	ImGuiIO& io = g.IO;
	auto draw = ImGui::GetForegroundDrawList();

	UpdateEspRainbow(espBox);
	UpdateEspRainbow(espBarrel);
	UpdateEspRainbow(esp3DBox);
	UpdateEspRainbow(espName);
	UpdateEspRainbow(espDistance);
	UpdateEspRainbow(espHealth);
	UpdateEspRainbow(espProtect);
	UpdateEspRainbow(espLine);
	UpdateEspRainbow(espRadar);
	UpdateEspRainbow(espEnts3DBox);
	UpdateEspRainbow(espEntsName);
	UpdateEspRainbow(espEntsDistance);
	UpdateEspRainbow(espEntsHealth);
	UpdateEspRainbow(aimFovEsp);

	if (ShowMenu) 
	{
		DrawMenu();
	}

	DrawESP();

	if (drawfps) 
	{
		static int fps = 0;
		static int nextTime = 0;

		if (timeGetTime() > nextTime)
		{
			fps = 1.f / io.DeltaTime;
			nextTime = timeGetTime() + 100;
		}

		draw->AddText(g.Font, 20.f, ImVec2(1.f, 1.f), 0xFF000000, std::to_string(fps).c_str());
		draw->AddText(g.Font, 20.f, ImVec2(0.f, 0.f), 0xFFFFFFFF, std::to_string(fps).c_str());
	}

	ImGui::EndFrame();
	ImGui::Render();

	pContext->OMSetRenderTargets(1, &RenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	if (firstTime)
	{
		firstTime = false;
		ASSWriteConsole("The menu was successfully initialized");
	}

	return phookD3D11Present(pSwapChain, SyncInterval, Flags);
}

const int MultisampleCount = 1; // Set to 1 to disable multisampling
LRESULT CALLBACK DXGIMsgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) { return DefWindowProc(hwnd, uMsg, wParam, lParam); }
bool InitDirectXHooks()
{
	GetConfigs();
	ASSWriteConsole("Initializing menu");
	HMODULE hDXGIDLL = 0;
	do
	{
		hDXGIDLL = GetModuleHandle(L"dxgi.dll");
		Sleep(100);
	} while (!hDXGIDLL);
	Sleep(100);

	IDXGISwapChain* pSwapChain;

	WNDCLASSEXA wc = { sizeof(WNDCLASSEX), CS_CLASSDC, DXGIMsgProc, 0L, 0L, GetModuleHandleA(NULL), NULL, NULL, NULL, NULL, "DX", NULL };
	RegisterClassExA(&wc);
	HWND hWnd = CreateWindowA("DX", NULL, WS_OVERLAPPEDWINDOW, 100, 100, 300, 300, NULL, NULL, wc.hInstance, NULL);

	D3D_FEATURE_LEVEL requestedLevels[] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_1 };
	D3D_FEATURE_LEVEL obtainedLevel;
	ID3D11Device* d3dDevice = nullptr;
	ID3D11DeviceContext* d3dContext = nullptr;

	DXGI_SWAP_CHAIN_DESC scd;
	ZeroMemory(&scd, sizeof(scd));
	scd.BufferCount = 1;
	scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	scd.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
	scd.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
	scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	scd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
	scd.OutputWindow = hWnd;
	scd.SampleDesc.Count = MultisampleCount;
	scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
	scd.Windowed = ((GetWindowLongPtr(hWnd, GWL_STYLE) & WS_POPUP) != 0) ? false : true;

	// LibOVR 0.4.3 requires that the width and height for the backbuffer is set even if
	// you use windowed mode, despite being optional according to the D3D11 documentation.
	scd.BufferDesc.Width = 1;
	scd.BufferDesc.Height = 1;
	scd.BufferDesc.RefreshRate.Numerator = 0;
	scd.BufferDesc.RefreshRate.Denominator = 1;

	UINT createFlags = 0;
#ifdef _DEBUG
	// This flag gives you some quite wonderful debug text. Not wonderful for performance, though!
	//createFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

	IDXGISwapChain* d3dSwapChain = 0;

	if (FAILED(D3D11CreateDeviceAndSwapChain(
		nullptr,
		D3D_DRIVER_TYPE_HARDWARE,
		nullptr,
		createFlags,
		requestedLevels,
		sizeof(requestedLevels) / sizeof(D3D_FEATURE_LEVEL),
		D3D11_SDK_VERSION,
		&scd,
		&pSwapChain,
		&pDevice,
		&obtainedLevel,
		&pContext)))
	{
		ASSWriteConsole("Failed to create directX device and swapchain!");
		//MessageBox(hWnd, L"Failed to create directX device and swapchain!", L"Error", MB_ICONERROR);
		return NULL;
	}


	pSwapChainVtable = (DWORD_PTR*)pSwapChain;
	pSwapChainVtable = (DWORD_PTR*)pSwapChainVtable[0];

	pContextVTable = (DWORD_PTR*)pContext;
	pContextVTable = (DWORD_PTR*)pContextVTable[0];

	pDeviceVTable = (DWORD_PTR*)pDevice;
	pDeviceVTable = (DWORD_PTR*)pDeviceVTable[0];

	//if (MH_Initialize() != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)pSwapChainVtable[8], hookD3D11Present, reinterpret_cast<void**>(&phookD3D11Present)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)pSwapChainVtable[8]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)pSwapChainVtable[13], hookD3D11ResizeBuffers, reinterpret_cast<void**>(&phookD3D11ResizeBuffers)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)pSwapChainVtable[13]) != MH_OK) { return 1; }
	//if (MH_CreateHook((DWORD_PTR*)pSwapChainVtable[13], hookD3D11ResizeBuffers, reinterpret_cast<void**>(&phookD3D11ResizeBuffers)) != MH_OK) { return 1; }
	//if (MH_EnableHook((DWORD_PTR*)pSwapChainVtable[13]) != MH_OK) { return 1; }
	//if (MH_CreateHook((DWORD_PTR*)pContextVTable[8], hookD3D11PSSetShaderResources, reinterpret_cast<void**>(&phookD3D11PSSetShaderResources)) != MH_OK) { return 1; }
	//if (MH_EnableHook((DWORD_PTR*)pContextVTable[8]) != MH_OK) { return 1; }
	//if (MH_CreateHook((DWORD_PTR*)pContextVTable[13], hookD3D11Draw, reinterpret_cast<void**>(&phookD3D11Draw)) != MH_OK) { return 1; }
	//if (MH_EnableHook((DWORD_PTR*)pContextVTable[13]) != MH_OK) { return 1; }
	//if (MH_CreateHook((DWORD_PTR*)pContextVTable[12], hookD3D11DrawIndexed, reinterpret_cast<void**>(&phookD3D11DrawIndexed)) != MH_OK) { return 1; }
	//if (MH_EnableHook((DWORD_PTR*)pContextVTable[12]) != MH_OK) { return 1; }
	//if (MH_CreateHook((DWORD_PTR*)pContextVTable[20], hookD3D11DrawIndexedInstanced, reinterpret_cast<void**>(&phookD3D11DrawIndexedInstanced)) != MH_OK) { return 1; }
	//if (MH_EnableHook((DWORD_PTR*)pContextVTable[20]) != MH_OK) { return 1; }
	//if (MH_CreateHook((DWORD_PTR*)pDeviceVTable[24], hookD3D11CreateQuery, reinterpret_cast<void**>(&phookD3D11CreateQuery)) != MH_OK) { return 1; }
	//if (MH_EnableHook((DWORD_PTR*)pDeviceVTable[24]) != MH_OK) { return 1; }

	DWORD dwOld;
	VirtualProtect(phookD3D11Present, 2, PAGE_EXECUTE_READWRITE, &dwOld);

	while (true) {
		Sleep(10);
	}

	pDevice->Release();
	pContext->Release();
	pSwapChain->Release();

	return NULL;
}
