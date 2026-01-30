#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Component.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct MeshFilter : UnityEngine_CoreModule::UnityEngine::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void DontStripMeshFilter();
		UnityEngine_CoreModule::UnityEngine::Mesh* get_sharedMesh();
		void set_sharedMesh(UnityEngine_CoreModule::UnityEngine::Mesh* value);
		UnityEngine_CoreModule::UnityEngine::Mesh* get_mesh();
		void set_mesh(UnityEngine_CoreModule::UnityEngine::Mesh* value);
	};
}

