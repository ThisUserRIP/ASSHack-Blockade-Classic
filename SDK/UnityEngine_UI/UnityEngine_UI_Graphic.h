#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasRenderer; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_UI::UnityEngine::UI { struct VertexHelper; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_UI_CoroutineTween_ColorTween.h"
namespace UnityEngine_UI::UnityEngine::UI::CoroutineTween { struct ColorTween; };
namespace UnityEngine_UI::UnityEngine::UI::CoroutineTween { template <typename T> struct TweenRunner_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "UnityEngine_UI_CanvasUpdate.h"
#include "..\UnityEngine_TextRenderingModule\UnityEngine_UIVertex.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct UIVertex; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Graphic : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Material* m_Material;
		UnityEngine_CoreModule::UnityEngine::Color m_Color;
		bool m_SkipLayoutUpdate;
		bool m_SkipMaterialUpdate;
		bool m_RaycastTarget;
		UnityEngine_CoreModule::UnityEngine::Vector4 m_RaycastPadding;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_RectTransform;
		UnityEngine_UIModule::UnityEngine::CanvasRenderer* m_CanvasRenderer;
		UnityEngine_UIModule::UnityEngine::Canvas* m_Canvas;
		bool m_VertsDirty;
		bool m_MaterialDirty;
		UnityEngine_CoreModule::UnityEngine::Events::UnityAction* m_OnDirtyLayoutCallback;
		UnityEngine_CoreModule::UnityEngine::Events::UnityAction* m_OnDirtyVertsCallback;
		UnityEngine_CoreModule::UnityEngine::Events::UnityAction* m_OnDirtyMaterialCallback;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_CachedMesh;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* m_CachedUvs;
		UnityEngine_UI::UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween>* m_ColorTweenRunner;
		bool _useLegacyMeshGeneration_k__BackingField;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Material* s_DefaultUI;
			UnityEngine_CoreModule::UnityEngine::Texture2D* s_WhiteTexture;
			UnityEngine_CoreModule::UnityEngine::Mesh* s_Mesh;
			UnityEngine_UI::UnityEngine::UI::VertexHelper* s_VertexHelper;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Material* get_defaultGraphicMaterial();
		UnityEngine_CoreModule::UnityEngine::Color get_color();
		void set_color(UnityEngine_CoreModule::UnityEngine::Color value);
		bool get_raycastTarget();
		void set_raycastTarget(bool value);
		UnityEngine_CoreModule::UnityEngine::Vector4 get_raycastPadding();
		void set_raycastPadding(UnityEngine_CoreModule::UnityEngine::Vector4 value);
		bool get_useLegacyMeshGeneration();
		void set_useLegacyMeshGeneration(bool value);
		void _ctor();
		void SetAllDirty();
		void SetLayoutDirty();
		void SetVerticesDirty();
		void SetMaterialDirty();
		void OnRectTransformDimensionsChange();
		void OnBeforeTransformParentChanged();
		void OnTransformParentChanged();
		int32_t get_depth();
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		UnityEngine_UIModule::UnityEngine::Canvas* get_canvas();
		void CacheCanvas();
		UnityEngine_UIModule::UnityEngine::CanvasRenderer* get_canvasRenderer();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_material();
		void set_material(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_materialForRendering();
		UnityEngine_CoreModule::UnityEngine::Texture* get_mainTexture();
		void OnEnable();
		void OnDisable();
		void OnDestroy();
		void OnCanvasHierarchyChanged();
		void OnCullingChanged();
		void Rebuild(UnityEngine_UI::UnityEngine::UI::CanvasUpdate update);
		void LayoutComplete();
		void GraphicUpdateComplete();
		void UpdateMaterial();
		void UpdateGeometry();
		void DoMeshGeneration();
		void DoLegacyMeshGeneration();
		static UnityEngine_CoreModule::UnityEngine::Mesh* get_workerMesh();
		void OnFillVBO(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* vbo);
		void OnPopulateMesh(UnityEngine_CoreModule::UnityEngine::Mesh* m);
		void OnPopulateMesh(UnityEngine_UI::UnityEngine::UI::VertexHelper* vh);
		void OnDidApplyAnimationProperties();
		void SetNativeSize();
		bool Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 sp, UnityEngine_CoreModule::UnityEngine::Camera* eventCamera);
		UnityEngine_CoreModule::UnityEngine::Vector2 PixelAdjustPoint(UnityEngine_CoreModule::UnityEngine::Vector2 point);
		UnityEngine_CoreModule::UnityEngine::Rect GetPixelAdjustedRect();
		void CrossFadeColor(UnityEngine_CoreModule::UnityEngine::Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha);
		void CrossFadeColor(UnityEngine_CoreModule::UnityEngine::Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha, bool useRGB);
		static UnityEngine_CoreModule::UnityEngine::Color CreateColorFromAlpha(float alpha);
		void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale);
		void RegisterDirtyLayoutCallback(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* action);
		void UnregisterDirtyLayoutCallback(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* action);
		void RegisterDirtyVerticesCallback(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* action);
		void UnregisterDirtyVerticesCallback(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* action);
		void RegisterDirtyMaterialCallback(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* action);
		void UnregisterDirtyMaterialCallback(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* action);
		static void _cctor();
		UnityEngine_CoreModule::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
	};
}

