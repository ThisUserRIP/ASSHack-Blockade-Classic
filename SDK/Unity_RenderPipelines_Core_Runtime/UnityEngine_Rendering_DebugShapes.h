#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugShapes : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Mesh* m_sphereMesh;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_boxMesh;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_coneMesh;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_pyramidMesh;
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugShapes* s_Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugShapes* get_instance();
		void BuildSphere(UnityEngine_CoreModule::UnityEngine::Mesh& outputMesh, float radius, uint32_t longSubdiv, uint32_t latSubdiv);
		void BuildBox(UnityEngine_CoreModule::UnityEngine::Mesh& outputMesh, float length, float width, float height);
		void BuildCone(UnityEngine_CoreModule::UnityEngine::Mesh& outputMesh, float height, float topRadius, float bottomRadius, int32_t nbSides);
		void BuildPyramid(UnityEngine_CoreModule::UnityEngine::Mesh& outputMesh, float width, float height, float depth);
		void BuildShapes();
		void RebuildResources();
		UnityEngine_CoreModule::UnityEngine::Mesh* RequestSphereMesh();
		UnityEngine_CoreModule::UnityEngine::Mesh* RequestBoxMesh();
		UnityEngine_CoreModule::UnityEngine::Mesh* RequestConeMesh();
		UnityEngine_CoreModule::UnityEngine::Mesh* RequestPyramidMesh();
		void _ctor();
		static void _cctor();
	};
}

