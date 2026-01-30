#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_TMP_Text.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SubMeshUI; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasRenderer; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\UnityEngine_CoreModule\Unity_Profiling_ProfilerMarker.h"
namespace UnityEngine_CoreModule::Unity::Profiling { struct ProfilerMarker; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace Unity_TextMeshPro::TMPro { struct TMP_TextInfo; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "TMPro_TMP_Text_UnicodeChar.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Text_UnicodeChar; };
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\UnityEngine_UI\UnityEngine_UI_CanvasUpdate.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System { struct String; };
#include "TMPro_TMP_VertexDataUpdateFlags.h"

namespace Unity_TextMeshPro::TMPro
{
	struct TextMeshProUGUI : Unity_TextMeshPro::TMPro::TMP_Text
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_hasFontAssetChanged;
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_SubMeshUI*>* m_subTextObjects;
		float m_previousLossyScaleY;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_RectTransformCorners;
		UnityEngine_UIModule::UnityEngine::CanvasRenderer* m_canvasRenderer;
		UnityEngine_UIModule::UnityEngine::Canvas* m_canvas;
		float m_CanvasScaleFactor;
		bool m_isFirstAllocation;
		int32_t m_max_characters;
		UnityEngine_CoreModule::UnityEngine::Material* m_baseMaterial;
		bool m_isScrollRegionSet;
		UnityEngine_CoreModule::UnityEngine::Vector4 m_maskOffset;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_EnvMapMatrix;
		bool m_isRegisteredForEvents;
		bool m_isRebuildingLayout;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_DelayedGraphicRebuild;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_DelayedMaterialRebuild;
		UnityEngine_CoreModule::UnityEngine::Rect m_ClipRect;
		bool m_ValidRect;
		mscorlib::System::Action_1<Unity_TextMeshPro::TMPro::TMP_TextInfo>* OnPreRenderText;
		struct StaticFields
		{
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_GenerateTextMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_SetArraySizesMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_ParseMarkupTextMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_CharacterLookupMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_HandleGPOSFeaturesMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_CalculateVerticesPositionMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_ComputeTextMetricsMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_HandleVisibleCharacterMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_HandleWhiteSpacesMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_HandleHorizontalLineBreakingMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_HandleVerticalLineBreakingMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_SaveGlyphVertexDataMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_ComputeCharacterAdvanceMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_HandleCarriageReturnMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_HandleLineTerminationMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_SavePageInfoMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_SaveProcessingStatesMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIIMarker;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void OnEnable();
		void OnDisable();
		void OnDestroy();
		void LoadFontAsset();
		UnityEngine_UIModule::UnityEngine::Canvas* GetCanvas();
		void UpdateEnvMapMatrix();
		void EnableMasking();
		void DisableMasking();
		void UpdateMask();
		UnityEngine_CoreModule::UnityEngine::Material* GetMaterial(UnityEngine_CoreModule::UnityEngine::Material* mat);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* GetMaterials(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* mats);
		void SetSharedMaterial(UnityEngine_CoreModule::UnityEngine::Material* mat);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* GetSharedMaterials();
		void SetSharedMaterials(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* materials);
		void SetOutlineThickness(float thickness);
		void SetFaceColor(UnityEngine_CoreModule::UnityEngine::Color32 color);
		void SetOutlineColor(UnityEngine_CoreModule::UnityEngine::Color32 color);
		void SetShaderDepth();
		void SetCulling();
		void SetPerspectiveCorrection();
		void SetMeshArrays(int32_t size);
		int32_t SetArraySizes(IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_Text_UnicodeChar>* unicodeChars);
		void ComputeMarginSize();
		void OnDidApplyAnimationProperties();
		void OnCanvasHierarchyChanged();
		void OnTransformParentChanged();
		void OnRectTransformDimensionsChange();
		void InternalUpdate();
		void OnPreRenderCanvas();
		void GenerateTextMesh();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* GetTextContainerLocalCorners();
		void SetActiveSubMeshes(bool state);
		void DestroySubMeshObjects();
		UnityEngine_CoreModule::UnityEngine::Bounds GetCompoundBounds();
		UnityEngine_CoreModule::UnityEngine::Rect GetCanvasSpaceClippingRect();
		void UpdateSDFScale(float scaleDelta);
		UnityEngine_CoreModule::UnityEngine::Material* get_materialForRendering();
		bool get_autoSizeTextContainer();
		void set_autoSizeTextContainer(bool value);
		UnityEngine_CoreModule::UnityEngine::Mesh* get_mesh();
		UnityEngine_UIModule::UnityEngine::CanvasRenderer* get_canvasRenderer();
		void CalculateLayoutInputHorizontal();
		void CalculateLayoutInputVertical();
		void SetVerticesDirty();
		void SetLayoutDirty();
		void SetMaterialDirty();
		void SetAllDirty();
		mscorlib::System::Collections::IEnumerator* DelayedGraphicRebuild();
		mscorlib::System::Collections::IEnumerator* DelayedMaterialRebuild();
		void Rebuild(UnityEngine_UI::UnityEngine::UI::CanvasUpdate update);
		void UpdateSubObjectPivot();
		UnityEngine_CoreModule::UnityEngine::Material* GetModifiedMaterial(UnityEngine_CoreModule::UnityEngine::Material* baseMaterial);
		void UpdateMaterial();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_maskOffset();
		void set_maskOffset(UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void RecalculateClipping();
		void Cull(UnityEngine_CoreModule::UnityEngine::Rect clipRect, bool validRect);
		void UpdateCulling();
		void UpdateMeshPadding();
		void InternalCrossFadeColor(UnityEngine_CoreModule::UnityEngine::Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha);
		void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale);
		void ForceMeshUpdate(bool ignoreActiveState, bool forceTextReparsing);
		Unity_TextMeshPro::TMPro::TMP_TextInfo* GetTextInfo(mscorlib::System::String* text);
		void ClearMesh();
		void add_OnPreRenderText(mscorlib::System::Action_1<Unity_TextMeshPro::TMPro::TMP_TextInfo>* value);
		void remove_OnPreRenderText(mscorlib::System::Action_1<Unity_TextMeshPro::TMPro::TMP_TextInfo>* value);
		void UpdateGeometry(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t index);
		void UpdateVertexData(Unity_TextMeshPro::TMPro::TMP_VertexDataUpdateFlags flags);
		void UpdateVertexData();
		void UpdateFontAsset();
		void _ctor();
		static void _cctor();
	};
}

