#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct Triangles : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Mesh*>* meshes;
			int32_t currentTris;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool HasMeshes();
		static void Cleanup();
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Mesh*>* GetMeshes(int32_t totalWidth, int32_t totalHeight);
		static UnityEngine_CoreModule::UnityEngine::Mesh* GetMesh(int32_t triCount, int32_t triOffset, int32_t totalWidth, int32_t totalHeight);
		void _ctor();
		static void _cctor();
	};
}

