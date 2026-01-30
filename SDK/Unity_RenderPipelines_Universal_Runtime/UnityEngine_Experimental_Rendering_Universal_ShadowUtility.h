#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Experimental_Rendering_Universal_ShadowUtility_Edge.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct ShadowUtility_Edge; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace mscorlib::System { struct Object; };
#include "UnityEngine_Experimental_Rendering_Universal_LibTessDotNet_Vec3.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { struct Vec3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct ShadowUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge CreateEdge(int32_t triangleIndexA, int32_t triangleIndexB, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* vertices, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles);
		static void PopulateEdgeArray(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* vertices, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge>* edges);
		static bool IsOutsideEdge(int32_t edgeIndex, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge>* edgesToProcess);
		static void SortEdges(mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge>* edgesToProcess);
		static void CreateShadowTriangles(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* vertices, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color>* colors, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* tangents, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge>* edges);
		static mscorlib::System::Object* InterpCustomVertexData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 position, IL2CPP::Array<mscorlib::System::Object*>* data, IL2CPP::Array<float>* weights);
		static void InitializeTangents(int32_t tangentsToAdd, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* tangents);
		static void GenerateShadowMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* shapePath);
		void _ctor();
	};
}

