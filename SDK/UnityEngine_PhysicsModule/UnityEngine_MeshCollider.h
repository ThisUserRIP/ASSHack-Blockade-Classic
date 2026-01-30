#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Collider.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct MeshCollider : UnityEngine_PhysicsModule::UnityEngine::Collider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Mesh* get_sharedMesh();
		void set_sharedMesh(UnityEngine_CoreModule::UnityEngine::Mesh* value);
		void set_convex(bool value);
	};
}

