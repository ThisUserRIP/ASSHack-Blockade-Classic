#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_TMP_Text.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_CoreModule::UnityEngine { struct MeshFilter; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SubMesh; };
#include "TMPro_MaskingTypes.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\Unity_Profiling_ProfilerMarker.h"
namespace UnityEngine_CoreModule::Unity::Profiling { struct ProfilerMarker; };
namespace Unity_TextMeshPro::TMPro { struct TMP_TextInfo; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "TMPro_TMP_Text_UnicodeChar.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Text_UnicodeChar; };
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
namespace Unity_TextMeshPro::TMPro { struct TextContainer; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "..\UnityEngine_UI\UnityEngine_UI_CanvasUpdate.h"
namespace mscorlib::System { struct String; };
#include "TMPro_TMP_VertexDataUpdateFlags.h"

namespace Unity_TextMeshPro::TMPro
{
	struct TextMeshPro : Unity_TextMeshPro::TMPro::TMP_Text
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_hasFontAssetChanged;
		float m_previousLossyScaleY;
		UnityEngine_CoreModule::UnityEngine::Renderer* m_renderer;
		UnityEngine_CoreModule::UnityEngine::MeshFilter* m_meshFilter;
		bool m_isFirstAllocation;
		int32_t m_max_characters;
		int32_t m_max_numberOfLines;
		IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_SubMesh*>* m_subTextObjects;
		Unity_TextMeshPro::TMPro::MaskingTypes m_maskType;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_EnvMapMatrix;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_RectTransformCorners;
		bool m_isRegisteredForEvents;
		int32_t _SortingLayer;
		int32_t _SortingLayerID;
		int32_t _SortingOrder;
		mscorlib::System::Action_1<Unity_TextMeshPro::TMPro::TMP_TextInfo>* OnPreRenderText;
		bool m_currentAutoSizeMode;
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
		void UpdateEnvMapMatrix();
		void SetMask(Unity_TextMeshPro::TMPro::MaskingTypes maskType);
		void SetMaskCoordinates(UnityEngine_CoreModule::UnityEngine::Vector4 coords);
		void SetMaskCoordinates(UnityEngine_CoreModule::UnityEngine::Vector4 coords, float softX, float softY);
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
		void CreateMaterialInstance();
		void SetShaderDepth();
		void SetCulling();
		void SetPerspectiveCorrection();
		int32_t SetArraySizes(IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_Text_UnicodeChar>* unicodeChars);
		void ComputeMarginSize();
		void OnDidApplyAnimationProperties();
		void OnTransformParentChanged();
		void OnRectTransformDimensionsChange();
		void InternalUpdate();
		void OnPreRenderObject();
		void GenerateTextMesh();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* GetTextContainerLocalCorners();
		void SetMeshFilters(bool state);
		void SetActiveSubMeshes(bool state);
		void SetActiveSubTextObjectRenderers(bool state);
		void DestroySubMeshObjects();
		void UpdateSubMeshSortingLayerID(int32_t id);
		void UpdateSubMeshSortingOrder(int32_t order);
		UnityEngine_CoreModule::UnityEngine::Bounds GetCompoundBounds();
		void UpdateSDFScale(float scaleDelta);
		int32_t get_sortingLayerID();
		void set_sortingLayerID(int32_t value);
		int32_t get_sortingOrder();
		void set_sortingOrder(int32_t value);
		bool get_autoSizeTextContainer();
		void set_autoSizeTextContainer(bool value);
		Unity_TextMeshPro::TMPro::TextContainer* get_textContainer();
		UnityEngine_CoreModule::UnityEngine::Transform* get_transform();
		UnityEngine_CoreModule::UnityEngine::Renderer* get_renderer();
		UnityEngine_CoreModule::UnityEngine::Mesh* get_mesh();
		UnityEngine_CoreModule::UnityEngine::MeshFilter* get_meshFilter();
		Unity_TextMeshPro::TMPro::MaskingTypes get_maskType();
		void set_maskType(Unity_TextMeshPro::TMPro::MaskingTypes value);
		void SetMask(Unity_TextMeshPro::TMPro::MaskingTypes type, UnityEngine_CoreModule::UnityEngine::Vector4 maskCoords);
		void SetMask(Unity_TextMeshPro::TMPro::MaskingTypes type, UnityEngine_CoreModule::UnityEngine::Vector4 maskCoords, float softnessX, float softnessY);
		void SetVerticesDirty();
		void SetLayoutDirty();
		void SetMaterialDirty();
		void SetAllDirty();
		void Rebuild(UnityEngine_UI::UnityEngine::UI::CanvasUpdate update);
		void UpdateMaterial();
		void UpdateMeshPadding();
		void ForceMeshUpdate(bool ignoreActiveState, bool forceTextReparsing);
		Unity_TextMeshPro::TMPro::TMP_TextInfo* GetTextInfo(mscorlib::System::String* text);
		void ClearMesh(bool updateMesh);
		void add_OnPreRenderText(mscorlib::System::Action_1<Unity_TextMeshPro::TMPro::TMP_TextInfo>* value);
		void remove_OnPreRenderText(mscorlib::System::Action_1<Unity_TextMeshPro::TMPro::TMP_TextInfo>* value);
		void UpdateGeometry(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t index);
		void UpdateVertexData(Unity_TextMeshPro::TMPro::TMP_VertexDataUpdateFlags flags);
		void UpdateVertexData();
		void UpdateFontAsset();
		void CalculateLayoutInputHorizontal();
		void CalculateLayoutInputVertical();
		void _ctor();
		static void _cctor();
	};
}

