#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled_1.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { struct MeshUtils_Vertex; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { struct MeshUtils_Face; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { struct MeshUtils_Edge; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	struct Mesh : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Pooled_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Mesh>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* _vHead;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* _fHead;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _eHead;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _eHeadSym;
		void _ctor();
		void Reset();
		void OnFree();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* MakeEdge();
		void Splice(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrg, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eDst);
		void Delete(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eDel);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* AddEdgeVertex(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrg);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* SplitEdge(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrg);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* Connect(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrg, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eDst);
		void ZapFace(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* fZap);
		void MergeConvexFaces(int32_t maxVertsPerFace);
		void Check();
	};
}

