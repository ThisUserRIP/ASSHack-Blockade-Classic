#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace Assembly_CSharp { struct Map; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct PlayerControl; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct MiniMap_CBlockColor; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp { struct BlockSet; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace Assembly_CSharp { struct Block; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct MiniMap : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool canupdate;
		UnityEngine_CoreModule::UnityEngine::Texture2D* MiniMapTexture;
		UnityEngine_CoreModule::UnityEngine::Texture2D* MiniMapTexture2;
		UnityEngine_CoreModule::UnityEngine::Texture2D* ZombiePosition;
		UnityEngine_CoreModule::UnityEngine::Texture2D* PlayerPosition;
		UnityEngine_CoreModule::UnityEngine::Texture2D* TeamPosition;
		UnityEngine_CoreModule::UnityEngine::Texture2D* BasePosition;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* FlagPosition;
		UnityEngine_CoreModule::UnityEngine::Texture2D* MiniMapSideTexture;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		Assembly_CSharp::Map* map;
		Assembly_CSharp::Client* cscl;
		Assembly_CSharp::PlayerControl* cspc;
		UnityEngine_CoreModule::UnityEngine::GameObject* LocalPlayer;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* team_pos;
		UnityEngine_CoreModule::UnityEngine::Vector3 base_pos;
		IL2CPP::Array<int32_t>* team_dot;
		int32_t team_dot_all;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::MiniMap_CBlockColor>* colorlist;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tmpTex;
		Assembly_CSharp::BlockSet* blockset;
		UnityEngine_CoreModule::UnityEngine::Texture2D* blockTex;
		UnityEngine_CoreModule::UnityEngine::Color tmpColor;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* _col;
		IL2CPP::Array<int32_t>* oldFlagScores;
		IL2CPP::Array<bool>* mig;
		void Awake();
		void OnGUI();
		void DP(float px, float pz, float ry, bool self, bool zombie);
		void UpdateMiniMapColor(IL2CPP::Array<uint8_t>* data);
		void ForceUpdateMiniMap();
		mscorlib::System::Collections::IEnumerator* UpdateMiniMap();
		UnityEngine_CoreModule::UnityEngine::Color GetColor(Assembly_CSharp::Block* block);
		void DrawBase(float px, float pz);
		void DrawTeam(float px, float pz);
		void DrawFlag(int32_t _team, float px, float pz);
		static float AngleSigned(UnityEngine_CoreModule::UnityEngine::Vector3 v1, UnityEngine_CoreModule::UnityEngine::Vector3 v2, UnityEngine_CoreModule::UnityEngine::Vector3 n);
		void GenerateSideTexture();
		void UpdPlayer(int32_t i);
		void DTPNTmp(UnityEngine_CoreModule::UnityEngine::Vector3 p, mscorlib::System::String* name);
		void _ctor();
	};
}

