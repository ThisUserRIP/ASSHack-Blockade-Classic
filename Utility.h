#pragma once
#include "MinHook.h"
#include "SDK\mscorlib\System_String.h"
#include "SDK\Assembly_CSharp\Assembly_CSharp.h"
#include "SDK\UnityEngine_CoreModule\UnityEngine_CoreModule.h"
#include "SDK\UnityEngine_IMGUIModule\UnityEngine_IMGUIModule.h"
#include "SDK\UnityEngine_PhysicsModule\UnityEngine_PhysicsModule.h"
#include "SDK/UnityEngine_TextRenderingModule/UnityEngine_TextRenderingModule.h"
#include "SDK/mscorlib/System_IO_Directory.h"
#include "SDK/mscorlib/System_IO_File.h"
#include "SDK/mscorlib/System_IO_FileStream.h"
#include "SDK/mscorlib/System_Array.h"
#include "SDK/mscorlib/System_Collections_Generic_List_1.h"
#include "SDK/mscorlib/Microsoft_Win32_Registry.h"
#include "SDK/mscorlib/Microsoft_Win32_RegistryKey.h"

using namespace Assembly_CSharp;
using namespace mscorlib::System;
using namespace mscorlib::System::IO;
using namespace UnityEngine_CoreModule::UnityEngine;
using namespace UnityEngine_IMGUIModule::UnityEngine;
using namespace UnityEngine_PhysicsModule::UnityEngine;
using namespace UnityEngine_TextRenderingModule::UnityEngine;
using namespace mscorlib::Microsoft::Win32;

#pragma region XorText

template <int X> struct EnsureCompileTime {
    enum : int {
        Value = X
    };
};

#define Seed ((__TIME__[7] - '0') * 1  + (__TIME__[6] - '0') * 10  + \
              (__TIME__[4] - '0') * 60   + (__TIME__[3] - '0') * 600 + \
              (__TIME__[1] - '0') * 3600 + (__TIME__[0] - '0') * 36000)

constexpr int LinearCongruentGenerator(int Rounds) {
    return 1013904223 + 1664525 * ((Rounds > 0) ? LinearCongruentGenerator(Rounds - 1) : Seed & 0xFFFFFFFF);
}
#define Random() EnsureCompileTime<LinearCongruentGenerator(10)>::Value //10 Rounds
#define RandomNumber(Min, Max) (Min + (Random() % (Max - Min + 1)))

template <int... Pack> struct IndexList {};

template <typename IndexList, int Right> struct Append;
template <int... Left, int Right> struct Append<IndexList<Left...>, Right> {
    typedef IndexList<Left..., Right> Result;
};

template <int N> struct ConstructIndexList {
    typedef typename Append<typename ConstructIndexList<N - 1>::Result, N - 1>::Result Result;
};
template <> struct ConstructIndexList<0> {
    typedef IndexList<> Result;
};

const char XORKEY = static_cast<char>(RandomNumber(0, 0xFF));
constexpr char EncryptCharacter(const char Character, int Index) {
    return Character ^ (XORKEY + Index);
}

template <typename IndexList> class CXorString;
template <int... Index> class CXorString<IndexList<Index...> > {
private:
    char Value[sizeof...(Index) + 1];
public:
    constexpr CXorString(const char* const String)
        : Value{ EncryptCharacter(String[Index], Index)... } {}

    char* decrypt() {
        for (int t = 0; t < sizeof...(Index); t++) {
            Value[t] = Value[t] ^ (XORKEY + t);
        }
        Value[sizeof...(Index)] = '\x0';
        return Value;
    }

    char* get() {
        return Value;
    }
};

#define XorString( String ) ( CXorString<ConstructIndexList<sizeof( String ) - 1>::Result>( String ).decrypt() )
#pragma endregion

#define PI 3.14159265359f
#define DEG2RAD(x) ((x) * PI / 180.f)

String* CreateString(const wchar_t* str);
String* CreateString(const char* str);
MH_STATUS CreateHook(void* hMethod, void* nMethod, void** original);
void DrawString(Rect pos, String* str, Color color, int textSize, bool dropShadow, bool outlined);
Il2CppObject* GetValue(const char* field, Il2CppObject* object);
Il2CppObject* GetValue(const char* field, Il2CppClass* klass);
void SetValue(const char* field, Il2CppObject* object, void* value);
void DrawLine(Vector2 pointA, Vector2 pointB, float thickness, Color color);
float SignedAngle(Vector2 from, Vector2 to);
Vector3 RotateLine(Vector3 a, Vector3 b, Quaternion rotate);
void Draw3DBox(Vector3 pos, Vector3 startPos, Vector3 endPos, Quaternion rot, Color color, float thickness);
Vector3 Quaternion_Multiply_Vector3(Quaternion rotation, Vector3 point);
void ASSWriteConsole(const char* msg);
std::string WidestringToString(std::wstring wstr);
std::string Gethwid();
std::string GetRequest(std::string s);
SHORT GetAsyncKeyStateP(int key);

inline HWND curretWindow = (HWND)-1;