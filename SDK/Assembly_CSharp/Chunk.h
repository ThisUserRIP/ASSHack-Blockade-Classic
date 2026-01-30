#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "BlockData.h"
namespace Assembly_CSharp { struct BlockData; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
namespace Assembly_CSharp { struct ChunkRenderer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct Chunk : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp::BlockData>* blocks;
		Assembly_CSharp::Vector3i position;
		Assembly_CSharp::ChunkRenderer* chunkRenderer;
		struct StaticFields
		{
			int32_t SIZE_X_BITS;
			int32_t SIZE_Y_BITS;
			int32_t SIZE_Z_BITS;
			int32_t SIZE_X;
			int32_t SIZE_Y;
			int32_t SIZE_Z;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::Vector3i position);
		Assembly_CSharp::ChunkRenderer* GetChunkRendererInstance();
		Assembly_CSharp::ChunkRenderer* GetChunkRenderer();
		void SetBlock(Assembly_CSharp::BlockData block, Assembly_CSharp::Vector3i pos);
		void SetBlock(Assembly_CSharp::BlockData block, int32_t x, int32_t y, int32_t z);
		Assembly_CSharp::BlockData GetBlock(Assembly_CSharp::Vector3i pos);
		Assembly_CSharp::BlockData GetBlock(int32_t x, int32_t y, int32_t z);
		Assembly_CSharp::Vector3i GetPosition();
		static bool FixCoords(Assembly_CSharp::Vector3i& chunk, Assembly_CSharp::Vector3i& local);
		static bool IsCorrectLocalPosition(Assembly_CSharp::Vector3i local);
		static bool IsCorrectLocalPosition(int32_t x, int32_t y, int32_t z);
		static Assembly_CSharp::Vector3i ToChunkPosition(Assembly_CSharp::Vector3i point);
		static Assembly_CSharp::Vector3i ToChunkPosition(int32_t pointX, int32_t pointY, int32_t pointZ);
		static Assembly_CSharp::Vector3i ToLocalPosition(Assembly_CSharp::Vector3i point);
		static Assembly_CSharp::Vector3i ToLocalPosition(int32_t pointX, int32_t pointY, int32_t pointZ);
		static Assembly_CSharp::Vector3i ToWorldPosition(Assembly_CSharp::Vector3i chunkPosition, Assembly_CSharp::Vector3i localPosition);
	};
}

