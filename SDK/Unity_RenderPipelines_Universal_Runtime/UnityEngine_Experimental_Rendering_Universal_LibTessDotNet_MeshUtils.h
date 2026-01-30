#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { struct MeshUtils_Edge; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { struct MeshUtils_Vertex; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { struct MeshUtils_Face; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	struct MeshUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t Undef;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* MakeEdge(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eNext);
		static void Splice(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* a, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* b);
		static void MakeVertex(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrig, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* vNext);
		static void MakeFace(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrig, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* fNext);
		static void KillEdge(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eDel);
		static void KillVertex(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* vDel, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* newOrg);
		static void KillFace(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* fDel, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* newLFace);
		static float FaceArea(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* f);
	};
}

