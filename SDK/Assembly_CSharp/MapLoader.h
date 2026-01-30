#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct Map; };
namespace Assembly_CSharp { struct Block; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct MapLoader : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Map* map;
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
		void Awake();
		void SaveMap();
		void LoadMap(bool external, mscorlib::System::String* mapname);
		void _ctor();
	};
}

