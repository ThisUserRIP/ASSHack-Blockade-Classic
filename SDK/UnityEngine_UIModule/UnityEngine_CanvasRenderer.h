#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Component.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_UIVertex.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct UIVertex; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_UIModule::UnityEngine
{
	struct CanvasRenderer : UnityEngine_CoreModule::UnityEngine::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _isMask_k__BackingField;
		void set_hasPopInstruction(bool value);
		int32_t get_materialCount();
		void set_materialCount(int32_t value);
		void set_popMaterialCount(int32_t value);
		int32_t get_absoluteDepth();
		bool get_hasMoved();
		bool get_cullTransparentMesh();
		void set_cullTransparentMesh(bool value);
		bool get_cull();
		void set_cull(bool value);
		void SetColor(UnityEngine_CoreModule::UnityEngine::Color color);
		UnityEngine_CoreModule::UnityEngine::Color GetColor();
		void EnableRectClipping(UnityEngine_CoreModule::UnityEngine::Rect rect);
		void set_clippingSoftness(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void DisableRectClipping();
		void SetMaterial(UnityEngine_CoreModule::UnityEngine::Material* material, int32_t index);
		UnityEngine_CoreModule::UnityEngine::Material* GetMaterial(int32_t index);
		void SetPopMaterial(UnityEngine_CoreModule::UnityEngine::Material* material, int32_t index);
		void SetTexture(UnityEngine_CoreModule::UnityEngine::Texture* texture);
		void SetAlphaTexture(UnityEngine_CoreModule::UnityEngine::Texture* texture);
		void SetMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh);
		void Clear();
		void SetMaterial(UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::Texture* texture);
		UnityEngine_CoreModule::UnityEngine::Material* GetMaterial();
		static void SplitUIVertexStreams(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* colors, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv0S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv1S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv2S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv3S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* normals, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* tangents, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* indices);
		static void CreateUIVertexStream(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* colors, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv0S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv1S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv2S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv3S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* normals, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* tangents, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* indices);
		static void AddUIVertexStream(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* colors, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv0S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv1S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv2S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv3S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* normals, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* tangents);
		static void SplitIndicesStreamsInternal(mscorlib::System::Object* verts, mscorlib::System::Object* indices);
		static void SplitUIVertexStreamsInternal(mscorlib::System::Object* verts, mscorlib::System::Object* positions, mscorlib::System::Object* colors, mscorlib::System::Object* uv0S, mscorlib::System::Object* uv1S, mscorlib::System::Object* uv2S, mscorlib::System::Object* uv3S, mscorlib::System::Object* normals, mscorlib::System::Object* tangents);
		static void CreateUIVertexStreamInternal(mscorlib::System::Object* verts, mscorlib::System::Object* positions, mscorlib::System::Object* colors, mscorlib::System::Object* uv0S, mscorlib::System::Object* uv1S, mscorlib::System::Object* uv2S, mscorlib::System::Object* uv3S, mscorlib::System::Object* normals, mscorlib::System::Object* tangents, mscorlib::System::Object* indices);
		void SetColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& color);
		void GetColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret);
		void EnableRectClipping_Injected(UnityEngine_CoreModule::UnityEngine::Rect& rect);
		void set_clippingSoftness_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
	};
}

