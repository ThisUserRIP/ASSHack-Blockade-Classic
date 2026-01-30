#include "api.h"
#include <Windows.h>
#include <string>

int GetApiAddress() 
{
	int api = (int)GetModuleHandle(L"api.dll");

	if (api == 0) {
		wchar_t path[MAX_PATH];
		GetCurrentDirectory(sizeof(path), path);

		std::wstring wpath = path;

		wpath += L"/api.dll";

		LoadLibraryW(wpath.c_str());
		api = (int)GetModuleHandle(L"api.dll");
	}

	return api;
}

bool API_OFF() {
	int api = GetApiAddress();

	if (api == 0)
	{
		return false;
	}

	DWORD oldProtect;
	VirtualProtect((LPVOID)(api + apiFuncSendScreenshotOffset), 1, PAGE_EXECUTE_READWRITE, &oldProtect);
	VirtualProtect((LPVOID)(api + apiFuncCheckProcessesOffset), 1, PAGE_EXECUTE_READWRITE, &oldProtect);
	*(char*)(api + apiFuncSendScreenshotOffset) = (char)0xc3;
	*(char*)(api + apiFuncCheckProcessesOffset) = (char)0xc3;
	*(const char**)(api + apihwidOffset) = "03125ec10bed9b10646acc5623fe60ff";
	*(const char**)(api + apimacOffset) = "00:1A:7D:DA:71:38";
	return true;
}

void API_SetId(unsigned long long uid, int nid)
{
	int api = GetApiAddress();

	*(unsigned long long*)(api + apiuidOffset) = uid;
	*(int*)(api + apinidOffset) = nid;
}

void API_Init()
{
	int api = GetApiAddress();

	//VirtualProtect((LPVOID)(api + apiFuncUpdateOffset), 1, PAGE_EXECUTE_READWRITE, &oldProtect);
	//VirtualProtect((LPVOID)(api + apiFuncCheckModulesOffset), 1, PAGE_EXECUTE_READWRITE, &oldProtect);

	//*(char*)(api + apiFuncUpdateOffset) = (char)0xc3;
	//*(char*)(api + apiFuncCheckModulesOffset) = (char)0xc3;


	//__asm 
	//{
	//	mov eax, api
	//	add eax, apiFuncSendhwidOffset
	//	call eax
	//}

	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)(api + apiFuncUpdateOffset), 0, 0, 0);
}