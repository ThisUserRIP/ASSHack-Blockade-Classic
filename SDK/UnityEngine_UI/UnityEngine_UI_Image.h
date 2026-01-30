#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_MaskableGraphic.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "UnityEngine_UI_Image_Type.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_UI_Image_FillMethod.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace UnityEngine_UI::UnityEngine::UI { struct VertexHelper; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_CoreModule::UnityEngine::U2D { struct SpriteAtlas; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Image : UnityEngine_UI::UnityEngine::UI::MaskableGraphic
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Sprite* m_Sprite;
		UnityEngine_CoreModule::UnityEngine::Sprite* m_OverrideSprite;
		UnityEngine_UI::UnityEngine::UI::Image_Type m_Type;
		bool m_PreserveAspect;
		bool m_FillCenter;
		UnityEngine_UI::UnityEngine::UI::Image_FillMethod m_FillMethod;
		float m_FillAmount;
		bool m_FillClockwise;
		int32_t m_FillOrigin;
		float m_AlphaHitTestMinimumThreshold;
		bool m_Tracked;
		bool m_UseSpriteMesh;
		float m_PixelsPerUnitMultiplier;
		float m_CachedReferencePixelsPerUnit;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Material* s_ETC1DefaultUI;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* s_VertScratch;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* s_UVScratch;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* s_Xy;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* s_Uv;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* m_TrackedTexturelessImages;
			bool s_Initialized;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::Sprite* get_sprite();
		void set_sprite(UnityEngine_CoreModule::UnityEngine::Sprite* value);
		void DisableSpriteOptimizations();
		UnityEngine_CoreModule::UnityEngine::Sprite* get_overrideSprite();
		void set_overrideSprite(UnityEngine_CoreModule::UnityEngine::Sprite* value);
		UnityEngine_CoreModule::UnityEngine::Sprite* get_activeSprite();
		UnityEngine_UI::UnityEngine::UI::Image_Type get_type();
		void set_type(UnityEngine_UI::UnityEngine::UI::Image_Type value);
		bool get_preserveAspect();
		void set_preserveAspect(bool value);
		bool get_fillCenter();
		void set_fillCenter(bool value);
		UnityEngine_UI::UnityEngine::UI::Image_FillMethod get_fillMethod();
		void set_fillMethod(UnityEngine_UI::UnityEngine::UI::Image_FillMethod value);
		float get_fillAmount();
		void set_fillAmount(float value);
		bool get_fillClockwise();
		void set_fillClockwise(bool value);
		int32_t get_fillOrigin();
		void set_fillOrigin(int32_t value);
		float get_eventAlphaThreshold();
		void set_eventAlphaThreshold(float value);
		float get_alphaHitTestMinimumThreshold();
		void set_alphaHitTestMinimumThreshold(float value);
		bool get_useSpriteMesh();
		void set_useSpriteMesh(bool value);
		void _ctor();
		static UnityEngine_CoreModule::UnityEngine::Material* get_defaultETC1GraphicMaterial();
		UnityEngine_CoreModule::UnityEngine::Texture* get_mainTexture();
		bool get_hasBorder();
		float get_pixelsPerUnitMultiplier();
		void set_pixelsPerUnitMultiplier(float value);
		float get_pixelsPerUnit();
		float get_multipliedPixelsPerUnit();
		UnityEngine_CoreModule::UnityEngine::Material* get_material();
		void set_material(UnityEngine_CoreModule::UnityEngine::Material* value);
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void PreserveSpriteAspectRatio(UnityEngine_CoreModule::UnityEngine::Rect& rect, UnityEngine_CoreModule::UnityEngine::Vector2 spriteSize);
		UnityEngine_CoreModule::UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);
		void SetNativeSize();
		void OnPopulateMesh(UnityEngine_UI::UnityEngine::UI::VertexHelper* toFill);
		void TrackSprite();
		void OnEnable();
		void OnDisable();
		void UpdateMaterial();
		void OnCanvasHierarchyChanged();
		void GenerateSimpleSprite(UnityEngine_UI::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);
		void GenerateSprite(UnityEngine_UI::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);
		void GenerateSlicedSprite(UnityEngine_UI::UnityEngine::UI::VertexHelper* toFill);
		void GenerateTiledSprite(UnityEngine_UI::UnityEngine::UI::VertexHelper* toFill);
		static void AddQuad(UnityEngine_UI::UnityEngine::UI::VertexHelper* vertexHelper, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* quadPositions, UnityEngine_CoreModule::UnityEngine::Color32 color, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* quadUVs);
		static void AddQuad(UnityEngine_UI::UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine_CoreModule::UnityEngine::Vector2 posMin, UnityEngine_CoreModule::UnityEngine::Vector2 posMax, UnityEngine_CoreModule::UnityEngine::Color32 color, UnityEngine_CoreModule::UnityEngine::Vector2 uvMin, UnityEngine_CoreModule::UnityEngine::Vector2 uvMax);
		UnityEngine_CoreModule::UnityEngine::Vector4 GetAdjustedBorders(UnityEngine_CoreModule::UnityEngine::Vector4 border, UnityEngine_CoreModule::UnityEngine::Rect adjustedRect);
		void GenerateFilledSprite(UnityEngine_UI::UnityEngine::UI::VertexHelper* toFill, bool preserveAspect);
		static bool RadialCut(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* xy, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* uv, float fill, bool invert, int32_t corner);
		static void RadialCut(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* xy, float cos, float sin, bool invert, int32_t corner);
		void CalculateLayoutInputHorizontal();
		void CalculateLayoutInputVertical();
		float get_minWidth();
		float get_preferredWidth();
		float get_flexibleWidth();
		float get_minHeight();
		float get_preferredHeight();
		float get_flexibleHeight();
		int32_t get_layoutPriority();
		bool IsRaycastLocationValid(UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::Camera* eventCamera);
		UnityEngine_CoreModule::UnityEngine::Vector2 MapCoordinate(UnityEngine_CoreModule::UnityEngine::Vector2 local, UnityEngine_CoreModule::UnityEngine::Rect rect);
		static void RebuildImage(UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas* spriteAtlas);
		static void TrackImage(UnityEngine_UI::UnityEngine::UI::Image* g);
		static void UnTrackImage(UnityEngine_UI::UnityEngine::UI::Image* g);
		void OnDidApplyAnimationProperties();
		static void _cctor();
	};
}

