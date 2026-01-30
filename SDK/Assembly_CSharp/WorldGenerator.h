#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct Map; };
namespace Assembly_CSharp { struct ColumnMap; };
namespace Assembly_CSharp { struct TerrainGenerator; };
namespace Assembly_CSharp { struct TreeGenerator; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct WorldGenerator : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Map* map;
		Assembly_CSharp::ColumnMap* columnMap;
		Assembly_CSharp::TerrainGenerator* terrainGenerator;
		IL2CPP::Array<Assembly_CSharp::TreeGenerator*>* treeGenerator;
		bool building;
		void Awake();
		void Update();
		mscorlib::System::Collections::IEnumerator* Building();
		void GenerateColumn(int32_t cx, int32_t cz);
		void BuildColumn(int32_t cx, int32_t cz);
		void _ctor();
	};
}

