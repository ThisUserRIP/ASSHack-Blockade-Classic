#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_Graphic.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_UI::UnityEngine::UI { struct RectMask2D; };
namespace UnityEngine_UI::UnityEngine::UI { struct MaskableGraphic_CullStateChangedEvent; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct MaskableGraphic : UnityEngine_UI::UnityEngine::UI::Graphic
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_ShouldRecalculateStencil;
		UnityEngine_CoreModule::UnityEngine::Material* m_MaskMaterial;
		UnityEngine_UI::UnityEngine::UI::RectMask2D* m_ParentMask;
		bool m_Maskable;
		bool m_IsMaskingGraphic;
		bool m_IncludeForMasking;
		UnityEngine_UI::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* m_OnCullStateChanged;
		bool m_ShouldRecalculate;
		int32_t m_StencilValue;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_Corners;
		UnityEngine_UI::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* get_onCullStateChanged();
		void set_onCullStateChanged(UnityEngine_UI::UnityEngine::UI::MaskableGraphic_CullStateChangedEvent* value);
		bool get_maskable();
		void set_maskable(bool value);
		bool get_isMaskingGraphic();
		void set_isMaskingGraphic(bool value);
		UnityEngine_CoreModule::UnityEngine::Material* GetModifiedMaterial(UnityEngine_CoreModule::UnityEngine::Material* baseMaterial);
		void Cull(UnityEngine_CoreModule::UnityEngine::Rect clipRect, bool validRect);
		void UpdateCull(bool cull);
		void SetClipRect(UnityEngine_CoreModule::UnityEngine::Rect clipRect, bool validRect);
		void SetClipSoftness(UnityEngine_CoreModule::UnityEngine::Vector2 clipSoftness);
		void OnEnable();
		void OnDisable();
		void OnTransformParentChanged();
		void ParentMaskStateChanged();
		void OnCanvasHierarchyChanged();
		UnityEngine_CoreModule::UnityEngine::Rect get_rootCanvasRect();
		void UpdateClipParent();
		void RecalculateClipping();
		void RecalculateMasking();
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI_IClippable_get_gameObject();
	};
}

