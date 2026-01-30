#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { struct MeshBuilder; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace Assembly_CSharp { struct Chunk; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct MeshFilter; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct MeshCollider; };

namespace Assembly_CSharp
{
	struct ChunkBuilder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::MeshBuilder* meshData;
			float lastupdate;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Mesh* BuildChunk(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, Assembly_CSharp::Chunk* chunk);
		static void BuildChunkLighting(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, Assembly_CSharp::Chunk* chunk);
		static void Build(Assembly_CSharp::Chunk* chunk, bool onlyLight);
		static bool BuildChunkPro(UnityEngine_CoreModule::UnityEngine::MeshFilter* filter, UnityEngine_PhysicsModule::UnityEngine::MeshCollider* collider, Assembly_CSharp::Chunk* chunk);
		static void BuildChunkCollider(UnityEngine_CoreModule::UnityEngine::MeshFilter* filter, UnityEngine_PhysicsModule::UnityEngine::MeshCollider* collider);
		static bool Build(Assembly_CSharp::Chunk* chunk, bool onlyLight, bool solidignore);
		void _ctor();
		static void _cctor();
	};
}

