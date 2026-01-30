#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct Block; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "MODE.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct PlayerControl; };
namespace Assembly_CSharp { struct LoadScreen; };
namespace Assembly_CSharp::AssemblyCSharp { struct CRespawnBlock; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct ZipLoader : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Block* stoneend;
		Assembly_CSharp::Block* dirt;
		Assembly_CSharp::Block* grass;
		Assembly_CSharp::Block* snow;
		Assembly_CSharp::Block* sand;
		Assembly_CSharp::Block* stone;
		Assembly_CSharp::Block* water;
		Assembly_CSharp::Block* wood;
		Assembly_CSharp::Block* wood2;
		Assembly_CSharp::Block* leaf;
		Assembly_CSharp::Block* brick;
		Assembly_CSharp::Block* brick_blue;
		Assembly_CSharp::Block* brick_red;
		Assembly_CSharp::Block* brick_green;
		Assembly_CSharp::Block* brick_yellow;
		Assembly_CSharp::Block* window;
		Assembly_CSharp::Block* box;
		Assembly_CSharp::Block* brick2;
		Assembly_CSharp::Block* stone2;
		Assembly_CSharp::Block* stone3;
		Assembly_CSharp::Block* stone4;
		Assembly_CSharp::Block* tile;
		Assembly_CSharp::Block* stone5;
		Assembly_CSharp::Block* sand2;
		Assembly_CSharp::Block* stone6;
		Assembly_CSharp::Block* metall1;
		Assembly_CSharp::Block* metall2;
		Assembly_CSharp::Block* stone7;
		Assembly_CSharp::Block* stone8;
		Assembly_CSharp::Block* r_b_blue;
		Assembly_CSharp::Block* r_b_red;
		Assembly_CSharp::Block* r_b_green;
		Assembly_CSharp::Block* r_b_yellow;
		Assembly_CSharp::Block* r_z;
		Assembly_CSharp::Block* r_c_blue;
		Assembly_CSharp::Block* r_c_red;
		Assembly_CSharp::Block* r_center;
		Assembly_CSharp::Block* color1;
		Assembly_CSharp::Block* color2;
		Assembly_CSharp::Block* color3;
		Assembly_CSharp::Block* color4;
		Assembly_CSharp::Block* color5;
		Assembly_CSharp::Block* color6;
		Assembly_CSharp::Block* color7;
		Assembly_CSharp::Block* color8;
		Assembly_CSharp::Block* color9;
		Assembly_CSharp::Block* color10;
		Assembly_CSharp::Block* color11;
		Assembly_CSharp::Block* color12;
		Assembly_CSharp::Block* waterdev;
		Assembly_CSharp::Block* tnt;
		Assembly_CSharp::Block* danger;
		Assembly_CSharp::Block* barrel1;
		Assembly_CSharp::Block* barrel2;
		Assembly_CSharp::Block* barrel3;
		Assembly_CSharp::Block* barrel4;
		Assembly_CSharp::Block* barrel5;
		Assembly_CSharp::Block* block1;
		Assembly_CSharp::Block* box2;
		Assembly_CSharp::Block* block2;
		Assembly_CSharp::Block* block3;
		Assembly_CSharp::Block* block4;
		Assembly_CSharp::Block* block5;
		Assembly_CSharp::Block* block6;
		Assembly_CSharp::Block* block7;
		Assembly_CSharp::Block* block8;
		Assembly_CSharp::Block* block9;
		Assembly_CSharp::Block* block10;
		Assembly_CSharp::Block* block11;
		Assembly_CSharp::Block* block12;
		Assembly_CSharp::Block* block13;
		Assembly_CSharp::Block* block14;
		Assembly_CSharp::Block* block15;
		Assembly_CSharp::Block* block16;
		Assembly_CSharp::Block* armored_brick_blue;
		Assembly_CSharp::Block* armored_brick_red;
		Assembly_CSharp::Block* armored_brick_green;
		Assembly_CSharp::Block* armored_brick_yellow;
		mscorlib::System::String* mapname;
		bool mapload;
		Assembly_CSharp::MODE gamemode;
		int32_t mapversion;
		Assembly_CSharp::Client* cscl;
		Assembly_CSharp::PlayerControl* cspc;
		Assembly_CSharp::LoadScreen* loadscreen;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::AssemblyCSharp::CRespawnBlock>* rblock;
		mscorlib::System::String* f;
		mscorlib::System::String* f2;
		struct StaticFields
		{
			Assembly_CSharp::ZipLoader* THIS__;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void InitBlocks();
		void WebLoadMap(mscorlib::System::String* _mapname);
		void WebLoadMapFinish();
		mscorlib::System::Collections::IEnumerator* WaitForDownload();
		mscorlib::System::Collections::IEnumerator* visualize();
		void SetBlock(int32_t x, int32_t y, int32_t z, int32_t flag);
		void SetBlock2(int32_t x, int32_t y, int32_t z, int32_t flag);
		Assembly_CSharp::Block* GetBlock(int32_t flag);
		static int32_t GetBlock(mscorlib::System::String* name);
		static int32_t GetBlockType(Assembly_CSharp::Block* _b);
		void _ctor();
	};
}

