#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2Int; };
namespace Assembly_CSharp { struct Flag; };
namespace Assembly_CSharp { struct BlockSet; };
namespace Assembly_CSharp { struct Chunk; };
namespace Assembly_CSharp { template <typename T> struct List3D_1; };
namespace Assembly_CSharp { struct SunLightMap; };
namespace Assembly_CSharp { struct LightMap; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp { struct ChunkRenderer; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
#include "BlockData.h"
namespace Assembly_CSharp { struct BlockData; };
namespace Assembly_CSharp { struct Block; };
namespace Assembly_CSharp { struct ZipLoader; };

namespace Assembly_CSharp
{
	struct Map : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::ZipLoader* zipLoader;
		UnityEngine_CoreModule::UnityEngine::Vector2Int mlx;
		UnityEngine_CoreModule::UnityEngine::Vector2Int mly;
		UnityEngine_CoreModule::UnityEngine::Vector2Int mlz;
		IL2CPP::Array<Assembly_CSharp::Flag*>* flags;
		Assembly_CSharp::BlockSet* blockSet;
		Assembly_CSharp::List3D_1<Assembly_CSharp::Chunk>* chunks;
		Assembly_CSharp::SunLightMap* sunLightmap;
		Assembly_CSharp::LightMap* lightmap;
		UnityEngine_CoreModule::UnityEngine::Transform* myTransform;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::ChunkRenderer>* dirtyChunks;
		UnityEngine_CoreModule::UnityEngine::Light* DayLight;
		struct StaticFields
		{
			Assembly_CSharp::Map* THIS__;
			int32_t SIZE_X;
			int32_t SIZE_Y;
			int32_t SIZE_Z;
			int32_t MIN_X;
			int32_t MIN_Y;
			int32_t MIN_Z;
			int32_t MAX_X;
			int32_t MAX_Y;
			int32_t MAX_Z;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void SetSize(UnityEngine_CoreModule::UnityEngine::Vector2Int _x, UnityEngine_CoreModule::UnityEngine::Vector2Int _y, UnityEngine_CoreModule::UnityEngine::Vector2Int _z);
		void FixedUpdate();
		static Assembly_CSharp::ChunkRenderer* CreateChunkRenderer(Assembly_CSharp::Vector3i pos, Assembly_CSharp::Chunk* chunk);
		static void RestoreChunkGO(Assembly_CSharp::Vector3i pos, Assembly_CSharp::Chunk* chunk, Assembly_CSharp::ChunkRenderer* chunkRenderer);
		void SetBlockAndRecompute(Assembly_CSharp::BlockData block, Assembly_CSharp::Vector3i pos);
		void SetDirty(Assembly_CSharp::Vector3i chunkPos);
		void SetBlock(Assembly_CSharp::Block* block, Assembly_CSharp::Vector3i pos);
		void SetBlock(Assembly_CSharp::Block* block, int32_t x, int32_t y, int32_t z);
		void SetBlock(Assembly_CSharp::BlockData block, Assembly_CSharp::Vector3i pos);
		void SetBlock(Assembly_CSharp::BlockData block, int32_t x, int32_t y, int32_t z);
		Assembly_CSharp::BlockData GetBlock(Assembly_CSharp::Vector3i pos);
		Assembly_CSharp::BlockData GetBlock(int32_t x, int32_t y, int32_t z);
		int32_t GetMaxY(int32_t x, int32_t z);
		Assembly_CSharp::Chunk* GetChunkInstance(Assembly_CSharp::Vector3i chunkPos);
		Assembly_CSharp::Chunk* GetChunk(Assembly_CSharp::Vector3i chunkPos);
		Assembly_CSharp::List3D_1<Assembly_CSharp::Chunk>* GetChunks();
		Assembly_CSharp::SunLightMap* GetSunLightmap();
		Assembly_CSharp::LightMap* GetLightmap();
		void SetBlockSet(Assembly_CSharp::BlockSet* blockSet);
		Assembly_CSharp::BlockSet* GetBlockSet();
		void _ctor();
	};
}

