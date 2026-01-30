#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "TMPro_VertexSortingOrder.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_MeshInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Mesh* mesh;
		int32_t vertexCount;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* vertices;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* normals;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* tangents;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* uvs0;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* uvs2;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color32>* colors32;
		IL2CPP::Array<int32_t>* triangles;
		UnityEngine_CoreModule::UnityEngine::Material* material;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t size);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t size, bool isVolumetric);
		void ResizeMeshInfo(int32_t size);
		void ResizeMeshInfo(int32_t size, bool isVolumetric);
		void Clear();
		void Clear(bool uploadChanges);
		void ClearUnusedVertices();
		void ClearUnusedVertices(int32_t startIndex);
		void ClearUnusedVertices(int32_t startIndex, bool updateMesh);
		void SortGeometry(Unity_TextMeshPro::TMPro::VertexSortingOrder order);
		void SortGeometry(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Int32>* sortingOrder);
		void SwapVertexData(int32_t src, int32_t dst);
		static void _cctor();
	};
}

