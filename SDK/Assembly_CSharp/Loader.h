#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct Map; };
namespace Assembly_CSharp { struct BlockSet; };
namespace Assembly_CSharp { struct Block; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp { struct Chunk; };

namespace Assembly_CSharp
{
	struct Loader : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Map* map;
		Assembly_CSharp::BlockSet* blockSet;
		Assembly_CSharp::Block* dirt;
		void Awake();
		void Generate();
		void Visual();
		void Stats(Assembly_CSharp::Chunk* chunk);
		void _ctor();
	};
}

