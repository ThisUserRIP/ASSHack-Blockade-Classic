#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct NoiseArray2D; };
namespace Assembly_CSharp { struct NoiseArray3D; };
namespace Assembly_CSharp { struct Map; };
namespace Assembly_CSharp { struct Block; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp
{
	struct TerrainGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::NoiseArray2D* terrainNoise;
		Assembly_CSharp::NoiseArray3D* terrainNoise3D;
		Assembly_CSharp::NoiseArray2D* islandNoise;
		Assembly_CSharp::NoiseArray3D* islandNoise3D;
		Assembly_CSharp::NoiseArray3D* caveNoise3D;
		Assembly_CSharp::Map* map;
		Assembly_CSharp::Block* water;
		Assembly_CSharp::Block* grass;
		Assembly_CSharp::Block* dirt;
		Assembly_CSharp::Block* sand;
		Assembly_CSharp::Block* stone;
		Assembly_CSharp::Block* snow;
		Assembly_CSharp::Block* ice;
		Assembly_CSharp::Block* stoneend;
		struct StaticFields
		{
			int32_t WATER_LEVEL;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::Map* map);
		void Generate(int32_t cx, int32_t cz);
		bool GenerateChunk(Assembly_CSharp::Vector3i chunkPos);
		void GeneratePlants(int32_t cx, int32_t cz);
		int32_t GetTerrainHeight(int32_t x, int32_t z);
		int32_t GetIslandHeight(int32_t x, int32_t z);
		void GenerateBlockForBaseTerrain(Assembly_CSharp::Vector3i worldPos);
		void GenerateBlockForIsland(Assembly_CSharp::Vector3i worldPos, int32_t deep, int32_t height);
		static bool IsInRange(float val, float min, float max);
	};
}

