#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct UIVertex; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct UIVertex; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_UIVertex.h"

namespace UnityEngine_UI::UnityEngine::UI
{
	struct VertexHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* m_Positions;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* m_Colors;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* m_Uv0S;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* m_Uv1S;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* m_Uv2S;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* m_Uv3S;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* m_Normals;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* m_Tangents;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* m_Indices;
		bool m_ListsInitalized;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Vector4 s_DefaultTangent;
			UnityEngine_CoreModule::UnityEngine::Vector3 s_DefaultNormal;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Mesh* m);
		void InitializeListIfRequired();
		void Dispose();
		void Clear();
		int32_t get_currentVertCount();
		int32_t get_currentIndexCount();
		void PopulateUIVertex(UnityEngine_TextRenderingModule::UnityEngine::UIVertex& vertex, int32_t i);
		void SetUIVertex(UnityEngine_TextRenderingModule::UnityEngine::UIVertex vertex, int32_t i);
		void FillMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh);
		void AddVert(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Color32 color, UnityEngine_CoreModule::UnityEngine::Vector4 uv0, UnityEngine_CoreModule::UnityEngine::Vector4 uv1, UnityEngine_CoreModule::UnityEngine::Vector4 uv2, UnityEngine_CoreModule::UnityEngine::Vector4 uv3, UnityEngine_CoreModule::UnityEngine::Vector3 normal, UnityEngine_CoreModule::UnityEngine::Vector4 tangent);
		void AddVert(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Color32 color, UnityEngine_CoreModule::UnityEngine::Vector4 uv0, UnityEngine_CoreModule::UnityEngine::Vector4 uv1, UnityEngine_CoreModule::UnityEngine::Vector3 normal, UnityEngine_CoreModule::UnityEngine::Vector4 tangent);
		void AddVert(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Color32 color, UnityEngine_CoreModule::UnityEngine::Vector4 uv0);
		void AddVert(UnityEngine_TextRenderingModule::UnityEngine::UIVertex v);
		void AddTriangle(int32_t idx0, int32_t idx1, int32_t idx2);
		void AddUIVertexQuad(IL2CPP::Array<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts);
		void AddUIVertexStream(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* indices);
		void AddUIVertexTriangleStream(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts);
		void GetUIVertexStream(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* stream);
		static void _cctor();
	};
}

