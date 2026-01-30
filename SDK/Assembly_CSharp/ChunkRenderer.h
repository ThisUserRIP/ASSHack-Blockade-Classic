#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { struct Chunk; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct MeshFilter; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct MeshCollider; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct ChunkRenderer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Chunk* chunk;
		bool dirty;
		bool lightDirty;
		UnityEngine_CoreModule::UnityEngine::MeshFilter* myFilter;
		UnityEngine_PhysicsModule::UnityEngine::MeshCollider* myColl;
		UnityEngine_CoreModule::UnityEngine::Transform* myTransform;
		UnityEngine_CoreModule::UnityEngine::Renderer* myRenderer;
		UnityEngine_CoreModule::UnityEngine::GameObject* myGO;
		void HandleDirtyChunk();
		void NearLightUpdate(int32_t cx, int32_t cy, int32_t cz);
		void BuildMesh();
		void BuildLighting();
		void SetDirty();
		void SetLightDirty();
		void _ctor();
	};
}

