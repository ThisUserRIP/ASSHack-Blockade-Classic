#pragma once

inline int apihwidOffset = 0x5db2c;
inline int apimacOffset = 0x5db30;
inline int apiuidOffset = 0x5db10;
inline int apinidOffset = 0x5db18;
inline int apiFuncSendhwidOffset = 0x6fb0;
inline int apiFuncUpdateOffset = 0x203f0;
inline int apiFuncCheckModulesOffset = 0x22630;
inline int apiFuncCheckProcessesOffset = 0x1180;
inline int apiFuncSendScreenshotOffset = 0x206e0;

void API_SetId(unsigned long long uid, int nid);
void API_Init();
bool API_OFF();